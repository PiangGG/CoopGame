// Fill out your copyright notice in the Description page of Project Settings.


#include "SPlayerState.h"

ASPlayerState::ASPlayerState()
{
}

void ASPlayerState::AddScore(float ScoreDelta)
{
    Score+=ScoreDelta;
}
