// Fill out your copyright notice in the Description page of Project Settings.


#include "SHealthComponent.h"


#include "SGameMode.h"
#include "Net/UnrealNetwork.h"

// Sets default values for this component's properties
USHealthComponent::USHealthComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...

	MaxHealth=100.f;
	CurrentHealth=MaxHealth;
	bIsDead=false;
	//SetIsReplicatedByDefault(true);
}

void USHealthComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty > &OutLifetimeProps ) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	
	DOREPLIFETIME(USHealthComponent,CurrentHealth);
}
// Called when the game starts
void USHealthComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	if (GetOwnerRole()==ROLE_Authority)
	{
		AActor *MyOwner=GetOwner();
		if (MyOwner)
		{
			MyOwner->OnTakeAnyDamage.AddDynamic(this,&USHealthComponent::OnHealthTakeAnyDamage);
		}
	}
	
}


// Called every frame
void USHealthComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

float USHealthComponent::GetCurrentHealth()
{
	return  CurrentHealth;
}

void USHealthComponent::OnRep_Health(float OldHealth)
{
	OnHealthChanged.Broadcast(this,CurrentHealth,OldHealth-CurrentHealth,nullptr,nullptr,nullptr);
}

void USHealthComponent::OnHealthTakeAnyDamage(AActor* DamagedActor, float Damage,
                                              const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser)
{
	if (Damage<=0)
	{
		return;
	}

	CurrentHealth=FMath::Clamp(CurrentHealth-Damage,0.f,MaxHealth);
	//UE_LOG(LogTemp,Warning,TEXT("CurrentHealth:%f,%s"),CurrentHealth,*FString::SanitizeFloat(CurrentHealth))

	bIsDead=CurrentHealth<=10;
	OnHealthChanged.Broadcast(this,CurrentHealth,Damage,DamageType,InstigatedBy,DamageCauser);

	if (bIsDead)
	{
		ASGameMode *GameMode=GetWorld()->GetAuthGameMode<ASGameMode>();
		if (GameMode)
		{
			GameMode->OnActorKilled.Broadcast(GetOwner(),DamageCauser,InstigatedBy);
		}
	}
}

void USHealthComponent::Heal(float AddHealth)
{
	if (AddHealth<=0||CurrentHealth<=0)
	{
		return;
	}

	CurrentHealth=FMath::Clamp(CurrentHealth+AddHealth,0.0f,MaxHealth);
	OnHealthChanged.Broadcast(this,CurrentHealth,-AddHealth,nullptr,nullptr,nullptr);
}

