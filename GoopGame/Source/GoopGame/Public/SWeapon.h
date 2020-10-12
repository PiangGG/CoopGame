// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SWeapon.generated.h"

class USkeletalMeshComponent;
class UParticleSystem;
class UParticleSystemComponent;

USTRUCT()
struct FHitScanTrance
{
	GENERATED_BODY()
public:
	UPROPERTY()
	TEnumAsByte<EPhysicalSurface> EPhysicalSurfaceType;

	UPROPERTY()
	FVector_NetQuantize TranceTo;
};
UCLASS()
class GOOPGAME_API ASWeapon : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASWeapon();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly,Category="Component")
	USkeletalMeshComponent* WeaponMesh;

	UFUNCTION(BlueprintCallable)
	virtual void Fire();
	UFUNCTION(Server,WithValidation,Reliable)
	void FireServer();
	void FireStart();
	void FireStop();
	
	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly)
	TSubclassOf<UDamageType> DamagetType;

	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly)
	float Damageflota;
	
	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly)
	FName MuzzleSocket;
	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly)
	FName ImpactTarget;
	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly)
	UParticleSystem *MuzzleSocketComponent;
	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly)
	UParticleSystem *MuzzlParticleComponent;
	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly)
	UParticleSystem *ImpactComponent;
	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly)
	UParticleSystem *FlashImpactComponent;

	void  PlayFireEffct(FHitScanTrance MyHitScanTrance);
	FTimerHandle Fire_TimeHndle;
	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly)
	TSubclassOf<UCameraShake> CameraShake;

	float LastFireTime;
	float RoteofFire;
	float TimeFireBetweenshots;

	UPROPERTY(ReplicatedUsing=On_RepHitScanTrance)
	FHitScanTrance HitScanTrance;

	UFUNCTION()
	void On_RepHitScanTrance();
};
