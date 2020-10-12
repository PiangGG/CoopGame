// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "SWeapon.h"
#include "GameFramework/Character.h"
#include "SCharacter.generated.h"

class ASWeapon;
class UCameraShake;
class USHealthComponent;
UCLASS()
class GOOPGAME_API ASCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ASCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	/*Components*/
	UPROPERTY(VisibleAnywhere,BlueprintReadOnly,Category="Component")
	class USpringArmComponent* SpringArmComp;
	UPROPERTY(VisibleAnywhere,BlueprintReadOnly,Category="Component")
	class UCameraComponent* CameraComp;
	
 	void MoveForword(float Value);
	void MoveRight(float Value);

	void JumpStart();
	void JumpEnd();

	void CrouchStart();
	void CrouchEnd();

	virtual FVector GetPawnViewLocation() const override;

	bool bWantToZoom;

	void ZoomStart();
	void ZoomEnd();

	float DefaultZoom;
	float EndZoom;
	float InterpSpeed;
	
	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly)
	TSubclassOf<ASWeapon>StarttWeapon;
	UPROPERTY(Replicated)
	ASWeapon* CurrentWeapon;

	void FireStart();
	void FireStop();
	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly)
	USHealthComponent*HealthComponent;

	UPROPERTY(Replicated,BlueprintReadOnly,EditDefaultsOnly)
	bool  bDeath;

	
	UFUNCTION()
	void OnHealthChanged(USHealthComponent*OwnerHealthComponent,float Health,float HealthDelta,const UDamageType* DamageType, AController*  InstigatedBy, AActor* DamageCauser);
};
