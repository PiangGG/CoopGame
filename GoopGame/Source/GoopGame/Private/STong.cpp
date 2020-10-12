// Fill out your copyright notice in the Description page of Project Settings.


#include "STong.h"
#include "GoopGame/Component/SHealthComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Components/StaticMeshComponent.h"
#include "Net/UnrealNetwork.h"
// Sets default values
ASTong::ASTong()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	bBoom=false;
	HealthComponent=CreateDefaultSubobject<USHealthComponent>(FName("HealthComponent"));
	HealthComponent->OnHealthChanged.AddDynamic(this,&ASTong::OnHealthChanged);
	
	MeshComponent=CreateDefaultSubobject<UStaticMeshComponent>(FName("MeshComponent"));
	MeshComponent->SetSimulatePhysics(true);
	MeshComponent->SetCollisionObjectType(ECC_PhysicsBody);
	RootComponent=MeshComponent;

	RadialForceComponent=CreateDefaultSubobject<URadialForceComponent>(FName("RadialForceComponent"));
	RadialForceComponent->SetupAttachment(MeshComponent);
	RadialForceComponent->Radius=250.f;
	RadialForceComponent->bIgnoreOwningActor=true;
	RadialForceComponent->bImpulseVelChange=true;
	RadialForceComponent->bAutoActivate=false;

	ExplosinImpulse=400.f;
    AActor::SetReplicateMovement(true);
	SetReplicates(true);
}
void ASTong::GetLifetimeReplicatedProps(TArray<FLifetimeProperty > &OutLifetimeProps ) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	
	DOREPLIFETIME(ASTong,bBoom);
}
// Called when the game starts or when spawned
void ASTong::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASTong::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASTong::On_RepBoom()
{
	MeshComponent->SetMaterial(0,Material);

	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(),ParticleSystem,GetActorLocation());
	
}

void ASTong::OnHealthChanged(USHealthComponent* OwnerHealthComponent, float Health, float HealthDelta,
                             const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser)
{
	UE_LOG(LogTemp,Warning,TEXT("CurrentHealth:%f,%s"),Health,*FString::SanitizeFloat(Health))

	if (bBoom)
	{
		return;
	}
	if (Health<=0.f)
	{
		bBoom=true;
		On_RepBoom();
		FVector BoostIntensity=FVector::UpVector*ExplosinImpulse;
		MeshComponent->AddImpulse(BoostIntensity,NAME_None,true);  
		RadialForceComponent->FireImpulse();
	}
}
