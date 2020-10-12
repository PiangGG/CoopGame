// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "SGameState.h"
#include "GameFramework/GameModeBase.h"
#include "SGameMode.generated.h"

/**
 * 
 */
enum  class WaveState:uint8;
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnActorKilled,AActor*,VitActor,AActor*,KillerActor,AController*,KillerController);

UCLASS()
class GOOPGAME_API ASGameMode : public AGameModeBase
{
	GENERATED_BODY()

	public:
	ASGameMode();

	int32 NumberOfBotsSpawns;
	
	FTimerHandle TimerHandle_BotsSpawn;

	FTimerHandle TimerHandle_NextWaveStart;
	
	float WaveCount;

	//
	UPROPERTY(EditDefaultsOnly)
	float TimeBotsweenWaves;
	
	void SpawnBotTimerElapsed();
	//
	UFUNCTION(BlueprintImplementableEvent)
	void SpawnNewBot();

	//开始生成Bots
	void StartWave();
	//停止生成
	void StopWave();

	void PrepareForNextWave();

	void CheckWaveState();

	void CheckAnyPlayerAlive();
	
	virtual void StartPlay() override;

	virtual void Tick(float DeltaSeconds) override;

	void GameOver();

	void SetWaveState(EWaveState NewWaveState);

	void ReStartDeathPlayer();
	UPROPERTY(BlueprintAssignable)
	FOnActorKilled OnActorKilled;
};
