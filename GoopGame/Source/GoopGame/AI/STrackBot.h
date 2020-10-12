// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "Components/SphereComponent.h"
#include "GameFramework/Pawn.h"
#include "GoopGame/Component/SHealthComponent.h"
#include "Sound/SoundCue.h"


#include "STrackBot.generated.h"

class UStaticMeshComponent;
class USphereComponent;
class USoundCue;
UCLASS()
class GOOPGAME_API ASTrackBot : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ASTrackBot();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly)
	UStaticMeshComponent *MeshComponent;
	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly)
	USHealthComponent*HealthComponent;
	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly)
	USphereComponent *SphereComponent;
	
	FVector GetNextPathPoint();

	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly)
	FVector NextPathPoint;

	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly)
	float MovementForce;

	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly)
	bool bUseVelocityChange;

	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly)
	float RequiredDestanceTogarget;

	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly)
	UParticleSystem* PartickeSystemE;
	UPROPERTY()
	UMaterialInstanceDynamic *Mainst;
	UFUNCTION()
	void HandleTakeDamage(USHealthComponent*OwnerHealthComponent,float Health,float HealthDelta,const UDamageType* DamageType, AController*  InstigatedBy, AActor* DamageCauser);

	UFUNCTION()
	void SelfDestuct();
	UPROPERTY(ReplicatedUsing=OnRep_Exploded)
	bool bExploded;
	UFUNCTION()
	void OnRep_Exploded();
	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly)
	float ExplodedRadis;
	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly)
	float ExplodedDamage;
	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly)
	float selfDamageIntervar;
	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;
	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly)
	bool bSelfStartDestruction;
	UFUNCTION()
	void DamageSelf();
	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly)
	FTimerHandle OverlapTimerHandle;

	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly)
	USoundCue *SelfDestuctSound;
	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly)
	USoundCue *ExplodedSound;
};
