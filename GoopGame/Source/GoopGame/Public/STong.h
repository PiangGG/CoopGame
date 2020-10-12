// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PhysicsEngine/RadialForceComponent.h"
#include "UObject/ObjectMacros.h"


#include "STong.generated.h"

class USHealthComponent;
UCLASS()
class GOOPGAME_API ASTong : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASTong();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly)
	USHealthComponent *HealthComponent;

	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly)
	UStaticMeshComponent *MeshComponent;

	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly)
	URadialForceComponent *RadialForceComponent;
	
	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly)
	UParticleSystem *ParticleSystem;

	UPROPERTY(BlueprintReadOnly,EditDefaultsOnly)
	UMaterialInterface* Material;
	UPROPERTY(ReplicatedUsing=On_RepBoom)
	bool bBoom;

	UFUNCTION()
	void On_RepBoom();
	float ExplosinImpulse;
	UFUNCTION()
	void OnHealthChanged(USHealthComponent*OwnerHealthComponent,float Health,float HealthDelta,const UDamageType* DamageType, AController*  InstigatedBy, AActor* DamageCauser);

};
