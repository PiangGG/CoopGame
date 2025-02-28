// Fill out your copyright notice in the Description page of Project Settings.


#include "SPowerupActor.h"

#include "Net/UnrealNetwork.h"

// Sets default values
ASPowerupActor::ASPowerupActor()
{
	PowerupInterval=0.0f;
	TotalNrofTicks=0;
	bIsPowerupActive=false;
	
	SetReplicates(true);
}

void ASPowerupActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty > &OutLifetimeProps ) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	
	DOREPLIFETIME(ASPowerupActor,bIsPowerupActive);
}
// Called when the game starts or when spawned
void ASPowerupActor::BeginPlay()
{
	Super::BeginPlay();
	
}

void ASPowerupActor::OnTickPowerup()
{
	TicksProcessd++;

	OnPowerupTicked();
	
	if (TicksProcessd>=TotalNrofTicks)
	{
		OnExpired();
		
		bIsPowerupActive=false;
		OnRep_PowerupActive();
		
		GetWorldTimerManager().ClearTimer(TimerHandle_PowerupTick);
	}
}

void ASPowerupActor::OnRep_PowerupActive()
{
	OnPowerupStateChanged(bIsPowerupActive);
}

void ASPowerupActor::ActivePowerup(AActor* OtherActor)
{
	OnActivated(OtherActor);
	
	bIsPowerupActive=true;
	
	OnRep_PowerupActive();
	
	if (PowerupInterval>0)
	{
		GetWorldTimerManager().SetTimer(TimerHandle_PowerupTick,this,&ASPowerupActor::OnTickPowerup,PowerupInterval,true);
	}else
	{
		OnTickPowerup();
	}
}


