// Fill out your copyright notice in the Description page of Project Settings.


#include "SGameMode.h"
#include "SGameState.h"
#include "SPlayerState.h"
#include "GoopGame/Component/SHealthComponent.h"

ASGameMode::ASGameMode()
{
    TimeBotsweenWaves=2.0f;

    PrimaryActorTick.TickInterval=1.0f;
    PrimaryActorTick.bCanEverTick=true;

    GameStateClass=ASGameState::StaticClass();
    PlayerStateClass=ASPlayerState::StaticClass();
}

void ASGameMode::SpawnBotTimerElapsed()
{
    SpawnNewBot();
    NumberOfBotsSpawns--;
    if (NumberOfBotsSpawns<=0)
    {
       StopWave();
    }
}

void ASGameMode::StartWave()
{
    WaveCount++;
    
    NumberOfBotsSpawns=2*WaveCount;
    
    GetWorldTimerManager().SetTimer(TimerHandle_BotsSpawn,this,&ASGameMode::SpawnBotTimerElapsed,1.0F,true
        ,0.0F);
    SetWaveState(EWaveState::WaveInProgress);
}

void ASGameMode::StopWave()
{
    GetWorldTimerManager().ClearTimer(TimerHandle_BotsSpawn);

    SetWaveState(EWaveState::WatingToComplete);
    //PrepareForNextWave();
}

void ASGameMode::PrepareForNextWave()
{

    GetWorldTimerManager().SetTimer(TimerHandle_NextWaveStart,this,&ASGameMode::StartWave,TimeBotsweenWaves,false, 0.0f);
    SetWaveState(EWaveState::WatingToStart);
    ReStartDeathPlayer();
}

void ASGameMode::CheckWaveState()
{

    bool bIsPreparingForwave=GetWorldTimerManager().IsTimerActive(TimerHandle_NextWaveStart);
    
    if (NumberOfBotsSpawns>0||bIsPreparingForwave)
    {
        return;
    }
    bool bIsAnyBotsAlive=false;
    for (FConstPawnIterator It=GetWorld()->GetPawnIterator();It;++It)
    {
   
        APawn * TextPawn=It->Get();
        if (TextPawn==nullptr||TextPawn->IsPlayerControlled())
        {
            continue;
        }
        USHealthComponent *HealthComp=Cast<USHealthComponent>(TextPawn->GetComponentByClass(USHealthComponent::StaticClass()));

        if (HealthComp&&HealthComp->CurrentHealth>0.0f)
        {
            bIsAnyBotsAlive=true;
            break;
        }
    }
    if (!bIsAnyBotsAlive)
    {
        SetWaveState(EWaveState::WaveComplate);
        PrepareForNextWave();
    }
}

void ASGameMode::CheckAnyPlayerAlive()
{
    for (FConstPlayerControllerIterator It=GetWorld()->GetPlayerControllerIterator();It;++It)
    {
        APlayerController*PC=It->Get();
        if (PC&&PC->GetPawn())
        {
            APawn *myPlayer=Cast<APawn>(PC->GetPawn());

            if (!myPlayer)return;
            USHealthComponent *HealthComponent=Cast<USHealthComponent>(myPlayer->GetComponentByClass(USHealthComponent::StaticClass()));

            if (HealthComponent && HealthComponent->CurrentHealth>0)
            {
                return;
            }
        }
        
    }     
    GameOver();
}

void ASGameMode::StartPlay()
{
    Super::StartPlay();

    PrepareForNextWave();
}

void ASGameMode::Tick(float DeltaSeconds)
{
    Super::Tick(DeltaSeconds);

    CheckWaveState();

    CheckAnyPlayerAlive();
}

void ASGameMode::GameOver()
{
    StopWave();

    UE_LOG(LogTemp,Warning,TEXT("GameOver"));
    SetWaveState(EWaveState::GameOver);
}

void ASGameMode::SetWaveState(EWaveState NewWaveState)
{
    ASGameState*GS=GetGameState<ASGameState>();
    if (ensureAlways(GS))
    {
        GS->SetWaveState(NewWaveState);
    }
}

void ASGameMode::ReStartDeathPlayer()
{
    for (FConstPlayerControllerIterator It=GetWorld()->GetPlayerControllerIterator();It;++It)
    {
        APlayerController*PC=It->Get();
        if (PC&&PC->GetPawn()==nullptr)
        {
           RestartPlayer(PC);
        }
    }
}
