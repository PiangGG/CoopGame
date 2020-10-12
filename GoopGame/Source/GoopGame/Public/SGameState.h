// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "SGameState.generated.h"

/**
 * 
 */
UENUM(BlueprintType)
enum class EWaveState :uint8
{
	WatingToStart,
	WaveInProgress,
	WatingToComplete,
	WaveComplate,
	GameOver,
};
UCLASS()
class GOOPGAME_API ASGameState : public AGameStateBase
{
	GENERATED_BODY()
	public:
	
	ASGameState();
	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly,ReplicatedUsing=OnRep_WaveState,Category="GameState")
	EWaveState WaveState;

	void SetWaveState(EWaveState Newstate);
	
	UFUNCTION()
	void OnRep_WaveState(EWaveState OldState);
	UFUNCTION(BlueprintImplementableEvent)
	void WaveStateChanged(EWaveState NewState,EWaveState OldState);
};
