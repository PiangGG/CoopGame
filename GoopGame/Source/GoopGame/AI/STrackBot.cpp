// Fill out your copyright notice in the Description page of Project Settings.


#include "STrackBot.h"
#include "DrawDebugHelpers.h"
#include "NavigationPath.h"
#include "NavigationSystem.h"
#include "GameFramework/Character.h"
#include "Kismet/GameplayStatics.h"
#include "DrawDebugHelpers.h"
#include "SCharacter.h"
#include "GoopGame/Component/SHealthComponent.h"
#include "Net/UnrealNetwork.h"
#include "Sound/SoundCue.h"
// Sets default values
ASTrackBot::ASTrackBot()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MeshComponent=CreateDefaultSubobject<UStaticMeshComponent>(FName("MeshComponent"));
	MeshComponent->SetCanEverAffectNavigation(false);
	MeshComponent->SetSimulatePhysics(true);
	RootComponent=MeshComponent;

	HealthComponent=CreateDefaultSubobject<USHealthComponent>(FName("HealthComponent"));
	HealthComponent->OnHealthChanged.AddDynamic(this,&ASTrackBot::HandleTakeDamage);
	bUseVelocityChange=false;
	MovementForce=1000;

	SphereComponent=CreateDefaultSubobject<USphereComponent>(FName("SphereComponent"));
	SphereComponent->SetSphereRadius(200.f);
	SphereComponent->SetupAttachment(RootComponent);
	// SphereComponent->OnComponentBeginOverlap.AddDynamic(this,&ASTrackBot::DamageSelf);
	SphereComponent->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	//SphereComponent->SetCollisionResponseToChannels(ECR_Ignore);
	SphereComponent->SetCollisionResponseToAllChannels(ECR_Ignore);
	SphereComponent->SetCollisionResponseToChannel(ECC_Pawn,ECR_Overlap);
	
	RequiredDestanceTogarget=100;
	ExplodedRadis=200.f;
	ExplodedDamage=100.f;
	bSelfStartDestruction=false;
	bExploded=false;
	
	selfDamageIntervar=0.25;
	SetReplicates(true);
}
void ASTrackBot::GetLifetimeReplicatedProps(TArray<FLifetimeProperty > &OutLifetimeProps ) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	
	DOREPLIFETIME(ASTrackBot,bExploded);
}
// Called when the game starts or when spawned
void ASTrackBot::BeginPlay()
{
	Super::BeginPlay();
	if (GetLocalRole()==ROLE_Authority)
	{
		NextPathPoint=GetNextPathPoint();
	}
	 
}

// Called every frame
void ASTrackBot::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (GetLocalRole()==ROLE_Authority&&!bExploded)
	{
		float DistanceTotarget=(NextPathPoint-GetActorLocation()).Size();

		if (DistanceTotarget<=RequiredDestanceTogarget)
		{
			NextPathPoint=GetNextPathPoint();
		
		}else
		{
			FVector ForceDirection=NextPathPoint-GetActorLocation();
			ForceDirection.Normalize();

			ForceDirection*=MovementForce;
			DrawDebugDirectionalArrow(GetWorld(),GetActorLocation(),GetActorLocation()+ForceDirection,64,FColor::Yellow,false,0.0);
			MeshComponent->GetComponentVelocity().Size();
			if (MeshComponent->IsSimulatingPhysics()==true)
			{
				MeshComponent->AddForce(ForceDirection,NAME_None,bUseVelocityChange);
			}	
		}
		DrawDebugSphere(GetWorld(),GetNextPathPoint(),20.f,12.f,FColor::Yellow,0.0f,1.0f);
	}
	
}

FVector ASTrackBot::GetNextPathPoint()
{
	ACharacter* PlayerPawn=UGameplayStatics::GetPlayerCharacter(this,0);
	UNavigationPath* NavPath=UNavigationSystemV1::FindPathToActorSynchronously(this,GetActorLocation(),PlayerPawn);

		if (PlayerPawn&&NavPath&&NavPath->PathPoints.Num()>1)
		{
			return NavPath->PathPoints[1];
		
		}
	
	return GetActorLocation();
}

void ASTrackBot::HandleTakeDamage(USHealthComponent* OwnerHealthComponent, float Health, float HealthDelta,
	const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser)
{
	UE_LOG(LogTemp,Log,TEXT("Health:%s,DamageActor:%s"),*FString::SanitizeFloat(Health),*GetName());
	if (Mainst==nullptr)
	{
		Mainst=MeshComponent->CreateAndSetMaterialInstanceDynamicFromMaterial(0,MeshComponent->GetMaterial(0));
		
	}
	if (Mainst)
	{
		Mainst->SetScalarParameterValue("LastTimeTakan",GetWorld()->TimeSeconds);
	}

	if (Health<=0)
	{
		SelfDestuct();
	}
	
}

void ASTrackBot::SelfDestuct()
{
	if (bExploded==true)
	{
		return;
	}
	bExploded=true;

	TArray<AActor*> IgnoreActors;
	IgnoreActors.Add(this);
	MeshComponent->SetVisibility(false,true);
	MeshComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	MeshComponent->SetSimulatePhysics(false);
	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(),PartickeSystemE,GetActorLocation());
	UGameplayStatics::SpawnSoundAtLocation(GetWorld(),ExplodedSound,GetActorLocation());
	if (GetLocalRole()==ROLE_Authority)
    {
		
		UGameplayStatics::ApplyRadialDamage(this,ExplodedDamage,GetActorLocation(),ExplodedRadis,nullptr,IgnoreActors,this,GetInstigatorController(),true);
		SetLifeSpan(2.0f);
	}
	DrawDebugSphere(GetWorld(),GetActorLocation(),ExplodedRadis,12,FColor::Red,false,2.0f,1.0f);
}

void ASTrackBot::OnRep_Exploded()
{
	MeshComponent->SetVisibility(false,true);
	MeshComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	MeshComponent->SetSimulatePhysics(false);
	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(),PartickeSystemE,GetActorLocation());
	UGameplayStatics::SpawnSoundAtLocation(GetWorld(),ExplodedSound,GetActorLocation());
}

void ASTrackBot::NotifyActorBeginOverlap(AActor* OtherActor)
{
	if (!bSelfStartDestruction&&!bExploded )
	{
		ASCharacter*Player=Cast<ASCharacter>(OtherActor);
		if (Player)
		{
			if (GetLocalRole()==ROLE_Authority)
			{
				GetWorldTimerManager().SetTimer(OverlapTimerHandle,this,&ASTrackBot::DamageSelf, selfDamageIntervar ,true,0.0f);
				bSelfStartDestruction=true;
			}
			UGameplayStatics::SpawnSoundAttached(SelfDestuctSound,RootComponent);
		}
	}
	
}

void ASTrackBot::DamageSelf()
{
	UGameplayStatics::ApplyDamage(this,20.f,GetInstigatorController(),this,nullptr);
}
