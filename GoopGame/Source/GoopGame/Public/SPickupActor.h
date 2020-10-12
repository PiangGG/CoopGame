// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "Components/SphereComponent.h"
#include "GameFramework/Actor.h"
#include "SPickupActor.generated.h"

class USphereComponent;
class UDecalComponent;
class ASPowerupActor;
UCLASS()
class GOOPGAME_API ASPickupActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASPickupActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	

	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly)
	USphereComponent *SphereComponent;
	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly)
	UDecalComponent *DecalComponent;
	
	UPROPERTY(EditInstanceOnly,BlueprintReadOnly)
	TSubclassOf<ASPowerupActor> SPowerupActor;
	
	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly)
	ASPowerupActor *mySPowerupActor;
 
	FTimerHandle TimerHandle_ReSpawnPowerup;
	
	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly)
	float TimeRespawn;
	
	void ReSpawnPowerup();
	
	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;
};
