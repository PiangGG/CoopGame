// Fill out your copyright notice in the Description page of Project Settings.


#include "SGameState.h"

#include "Net/UnrealNetwork.h"

ASGameState::ASGameState()
{
}

void ASGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty > &OutLifetimeProps ) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	
    DOREPLIFETIME(ASGameState,WaveState);
}

void ASGameState::SetWaveState(EWaveState Newstate)
{
    if (GetLocalRole()==ROLE_Authority)
    {
        EWaveState OldState=WaveState;
        WaveState=Newstate;
        OnRep_WaveState(OldState);
    }
}

void ASGameState::OnRep_WaveState(EWaveState OldState)
{
    WaveStateChanged(OldState,WaveState);
}
