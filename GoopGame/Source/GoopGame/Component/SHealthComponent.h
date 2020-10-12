// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SHealthComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_SixParams(FOnHealthChanged,class USHealthComponent*,HealthComponent,float,Health,float,HealthDelta,const UDamageType*,DamageType, AController* ,InstigatedBy, AActor* ,DamageCauser);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class GOOPGAME_API USHealthComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	USHealthComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly,Category="HealthComponent")
	float MaxHealth;
	UPROPERTY(ReplicatedUsing=OnRep_Health,EditDefaultsOnly,BlueprintReadOnly,Category="HealthComponent")
	float CurrentHealth;

	bool bIsDead;
	
	UFUNCTION()
	float GetCurrentHealth();
	UFUNCTION()
	void OnRep_Health(float OldHealth);
	
	UFUNCTION()
	void OnHealthTakeAnyDamage(AActor* DamagedActor, float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser);

	UPROPERTY(BlueprintAssignable)
	FOnHealthChanged OnHealthChanged;

	UFUNCTION(BlueprintCallable)
	void Heal(float AddHealth);
};
