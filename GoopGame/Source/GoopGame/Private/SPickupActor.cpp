// Fill out your copyright notice in the Description page of Project Settings.


#include "SPickupActor.h"
#include "Components/SphereComponent.h"
#include "Components/DecalComponent.h"
#include "SPowerupActor.h"
// Sets default values
ASPickupActor::ASPickupActor()
{
 	

	SphereComponent=CreateDefaultSubobject<USphereComponent>(FName("SphereComponent"));
	SphereComponent->SetSphereRadius(75.f);
	RootComponent=SphereComponent;
	
	DecalComponent=CreateDefaultSubobject<UDecalComponent>(FName("DecalComponent"));
	DecalComponent->SetRelativeRotation(FRotator(90.0f,0,0));
	DecalComponent->DecalSize=FVector(64,75,75);
	DecalComponent->SetupAttachment(SphereComponent);

	SetReplicates(true);
}

// Called when the game starts or when spawned
void ASPickupActor::BeginPlay()
{
	Super::BeginPlay();

	if (GetLocalRole()==ROLE_Authority)
	{
		ReSpawnPowerup();
	}
	
}

void ASPickupActor::ReSpawnPowerup()
{
	if (SPowerupActor==nullptr)return;
	
	FActorSpawnParameters SpawnParameters;
	SpawnParameters.SpawnCollisionHandlingOverride=ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	mySPowerupActor=GetWorld()->SpawnActor<ASPowerupActor>(SPowerupActor,GetActorTransform(),SpawnParameters);
}

void ASPickupActor::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);

	if (mySPowerupActor&&GetLocalRole()==ROLE_Authority)
	{
		mySPowerupActor->ActivePowerup(OtherActor);
		mySPowerupActor=nullptr;
		GetWorldTimerManager().SetTimer( TimerHandle_ReSpawnPowerup,this,&ASPickupActor::ReSpawnPowerup,TimeRespawn);

	}
}
