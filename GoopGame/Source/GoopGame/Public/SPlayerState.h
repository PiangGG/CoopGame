// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "SPlayerState.generated.h"

/**
 * 
 */
UCLASS()
class GOOPGAME_API ASPlayerState : public APlayerState
{
	GENERATED_BODY()

	public:

	ASPlayerState();
	
	UFUNCTION(BlueprintCallable)
	void AddScore(float ScoreDelta);
};
