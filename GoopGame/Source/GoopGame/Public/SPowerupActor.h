// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SPowerupActor.generated.h"

UCLASS()
class GOOPGAME_API ASPowerupActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASPowerupActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly)
	float PowerupInterval;
	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly)
	int32 TotalNrofTicks;

	FTimerHandle TimerHandle_PowerupTick;

	UFUNCTION()
	void OnTickPowerup();
	
	UPROPERTY(ReplicatedUsing=OnRep_PowerupActive)
	bool bIsPowerupActive;

	UFUNCTION()
	void OnRep_PowerupActive();
	
	
	
	int32 TicksProcessd;
public:
	UFUNCTION(BlueprintImplementableEvent,Category="Event")
    void OnPowerupStateChanged(bool bNewIsActive);
	
	void ActivePowerup(AActor* OtherActor);
	
	UFUNCTION(BlueprintImplementableEvent,Category="Event")
	void OnActivated(AActor* OtherActor);
	
	UFUNCTION(BlueprintImplementableEvent,Category="Event")
	void OnPowerupTicked();
	
	UFUNCTION(BlueprintImplementableEvent,Category="Event")
	void OnExpired();

};
