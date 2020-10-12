// Fill out your copyright notice in the Description page of Project Settings.


#include "SWeapon.h"
#include "SCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "DrawDebugHelpers.h"
#include "Particles/ParticleSystemComponent.h"
#include "PhysicalMaterials/PhysicalMaterial.h"
#include "TimerManager.h"
#include "Net/UnrealNetwork.h"
// Sets default values

static int32 DeBugWeaponDrawing=0;
FAutoConsoleVariableRef CVARDeBugWeaponDrawing(
	TEXT("COOP.DebugWeapons"),
	DeBugWeaponDrawing,
	TEXT("Draw Debug Weapon Lines for Game"),
	ECVF_Cheat);
ASWeapon::ASWeapon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	WeaponMesh=CreateDefaultSubobject<USkeletalMeshComponent>(FName("WeaponMesh"));

	MuzzleSocket="MuzzleSocketLocation";
	ImpactTarget="ImpactTarget";
	Damageflota=20.f;

	RoteofFire=600;

	SetReplicates(true);
}

void ASWeapon::GetLifetimeReplicatedProps(TArray<FLifetimeProperty > &OutLifetimeProps ) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	
	//DOREPLIFETIME(ASWeapon,HitScanTrance);
	DOREPLIFETIME_CONDITION(ASWeapon,HitScanTrance,COND_SkipOwner);
}
// Called when the game starts or when spawned
void ASWeapon::BeginPlay()
{
	Super::BeginPlay();
	TimeFireBetweenshots=60/RoteofFire;
}

// Called every frame
void ASWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


void ASWeapon::Fire()
{
	if (GetLocalRole()<ROLE_Authority)
	{
		FireServer();
	}
	FVector eyelocation;
	FRotator eyeRotator;

	AActor *thisOwner=GetOwner();
	if (thisOwner)
	{
		thisOwner->GetActorEyesViewPoint(eyelocation,eyeRotator);
	}
	FVector ShortDirction=eyeRotator.Vector();
	FVector TraceEnd=eyelocation+(ShortDirction*1000);
	FVector TraceEndPoint=TraceEnd;
	//碰撞查询参数
	FCollisionQueryParams QueryParams;
	QueryParams.AddIgnoredActor(this);
	QueryParams.AddIgnoredActor(thisOwner);
	QueryParams.bTraceComplex=true;//查询更细致 到三角面
	QueryParams.bReturnPhysicalMaterial=true;
	
	
	FHitResult Hit;	
	
	if(GetWorld()->LineTraceSingleByChannel(Hit,eyelocation,TraceEnd,ECC_GameTraceChannel1,QueryParams))
	{
		
		AActor *HitActor=Hit.GetActor();
		HitScanTrance.EPhysicalSurfaceType=UPhysicalMaterial::DetermineSurfaceType(Hit.PhysMaterial.Get());

		float ActualDamage=Damageflota;
		if (HitScanTrance.EPhysicalSurfaceType==SurfaceType2)
		{
			ActualDamage*=4.0f;
		}
	
		
		UGameplayStatics::ApplyDamage(HitActor,ActualDamage,GetOwner()->GetInstigatorController(),this,DamagetType);
		HitScanTrance.TranceTo=Hit.ImpactPoint;
		
	}
	
	
	APawn *myOwner=Cast<APawn>(GetOwner());
	if (myOwner)
	{
		APlayerController *PC=Cast<APlayerController>(myOwner->GetController());
		if (PC)
		{
			PC->ClientPlayCameraShake(CameraShake);
		}
	}
	if (DeBugWeaponDrawing>0)
	{
		DrawDebugLine(GetWorld(),eyelocation,TraceEnd,FColor::Red,false ,2.f);
	}
	PlayFireEffct(HitScanTrance);
	if (GetLocalRole()==ROLE_Authority)
	{
		HitScanTrance.TranceTo=TraceEndPoint;
	}
	
}

void ASWeapon::FireServer_Implementation()
{
	Fire();
}

bool ASWeapon::FireServer_Validate()
{
	return true;
}

void ASWeapon::FireStart()
{
	float FirstDelay=FMath::Max(LastFireTime+TimeFireBetweenshots-GetWorld()->TimeSeconds,0.0f);
	GetWorldTimerManager().SetTimer(Fire_TimeHndle,this,&ASWeapon::Fire,TimeFireBetweenshots,true,FirstDelay);
}

void ASWeapon::FireStop()
{
	GetWorldTimerManager().ClearTimer(Fire_TimeHndle);
}

void ASWeapon::PlayFireEffct(FHitScanTrance MyHitScanTrance)
{

	
	UParticleSystem *SelectedEffect=nullptr;
	switch (MyHitScanTrance.EPhysicalSurfaceType)
	{
	case SurfaceType1:	
    case SurfaceType2:
		SelectedEffect=FlashImpactComponent;
		break;
	default:
		SelectedEffect=ImpactComponent;
		break;
	}
	if (MyHitScanTrance.EPhysicalSurfaceType)
	{
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(),SelectedEffect,MyHitScanTrance.TranceTo,MyHitScanTrance.TranceTo.Rotation());
	}
	if (MuzzleSocketComponent)
	{
		UGameplayStatics::SpawnEmitterAttached(MuzzleSocketComponent,WeaponMesh,MuzzleSocket);
	}
	
	if (MuzzlParticleComponent)
	{
		FVector MuzzleLocation=WeaponMesh->GetSocketLocation(MuzzleSocket);
		UParticleSystemComponent* TreceComponent=UGameplayStatics::SpawnEmitterAtLocation(GetWorld(),MuzzlParticleComponent,MuzzleLocation);
		if (TreceComponent)
		{
			TreceComponent->SetVectorParameter(ImpactTarget,MyHitScanTrance.TranceTo);
		}
	}
}

void ASWeapon::On_RepHitScanTrance()
{
	PlayFireEffct(HitScanTrance);
}

