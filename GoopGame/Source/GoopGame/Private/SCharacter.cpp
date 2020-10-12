// Fill out your copyright notice in the Description page of Project Settings.

#include "GoopGame/Public/SCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/PawnMovementComponent.h"
#include "Components/CapsuleComponent.h"
#include "GoopGame/Component/SHealthComponent.h"
#include "Net/UnrealNetwork.h"
// Sets default values
ASCharacter::ASCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SpringArmComp=CreateDefaultSubobject<USpringArmComponent>(FName("SpringArmComp"));
	SpringArmComp->bUsePawnControlRotation=true;
	SpringArmComp->SetupAttachment(RootComponent);
	SpringArmComp->TargetArmLength=200.f;
	
	CameraComp=CreateDefaultSubobject<UCameraComponent>(FName("CameraComp"));
	CameraComp->SetupAttachment(SpringArmComp);
	
	GetCharacterMovement()->GetNavAgentPropertiesRef().bCanCrouch=true;
	bWantToZoom=false;
	EndZoom=65.0f;
	InterpSpeed=20.f;
	GetCapsuleComponent()->SetCollisionResponseToChannel(ECC_GameTraceChannel1,ECR_Ignore);

	HealthComponent=CreateDefaultSubobject<USHealthComponent>(FName("HealthComponent"));
	HealthComponent->OnHealthChanged.AddDynamic(this,&ASCharacter::OnHealthChanged);

	bDeath=false;
	SetReplicates(true);
	SetReplicateMovement(true);
}

void ASCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty > &OutLifetimeProps ) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	
	DOREPLIFETIME(ASCharacter,CurrentWeapon);
	DOREPLIFETIME(ASCharacter,bDeath);
}
// Called when the game starts or when spawned
void ASCharacter::BeginPlay()
{
	Super::BeginPlay();
	DefaultZoom=CameraComp->FieldOfView;
	if (GetLocalRole()==ROLE_Authority)
	{
		FActorSpawnParameters SpawnParameters;
		SpawnParameters.SpawnCollisionHandlingOverride=ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	
		CurrentWeapon=GetWorld()->SpawnActor<ASWeapon>(StarttWeapon,GetActorLocation(),GetActorRotation());
		if (CurrentWeapon)
		{
			CurrentWeapon->SetOwner(this);
			CurrentWeapon->AttachToComponent(GetMesh(),FAttachmentTransformRules::SnapToTargetNotIncludingScale,("WeaponSocket"));
		}
	}
}

// Called every frame
void ASCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	
	float TargetZoom=bWantToZoom?EndZoom:DefaultZoom;

	float newFov=FMath::FInterpTo(CameraComp->FieldOfView,TargetZoom,DeltaTime,InterpSpeed);
	CameraComp->SetFieldOfView(newFov);
}

// Called to bind functionality to input
void ASCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveForword",this,&ASCharacter::MoveForword);
	PlayerInputComponent->BindAxis("MoveRight",this,&ASCharacter::MoveRight);
	PlayerInputComponent->BindAxis("Lookup",this,&ASCharacter::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("Lookturn",this,&ASCharacter::AddControllerYawInput);

	PlayerInputComponent->BindAction("Jump",IE_Pressed,this,&ASCharacter::JumpStart);
	PlayerInputComponent->BindAction("Jump",IE_Released,this,&ASCharacter::JumpEnd);
	PlayerInputComponent->BindAction("Crouch",IE_Released,this,&ASCharacter::CrouchEnd);
	PlayerInputComponent->BindAction("Crouch",IE_Pressed,this,&ASCharacter::CrouchStart);
	PlayerInputComponent->BindAction("Zoom",IE_Pressed,this,&ASCharacter::ZoomStart);
	PlayerInputComponent->BindAction("Zoom",IE_Released,this,&ASCharacter::ZoomEnd);
	PlayerInputComponent->BindAction("Fire",IE_Pressed,this,&ASCharacter::FireStart);
	PlayerInputComponent->BindAction("Fire",IE_Released,this,&ASCharacter::FireStop);
}

void ASCharacter::MoveForword(float Value)
{
	AddMovementInput(GetActorForwardVector(),Value);
}

void ASCharacter::MoveRight(float Value)
{
	AddMovementInput(GetActorRightVector(),Value);
}

void ASCharacter::JumpStart()
{
	this->Jump();
}

void ASCharacter::JumpEnd()
{
	this->StopJumping();
}

void ASCharacter::CrouchStart()
{
	this->Crouch();
}

void ASCharacter::CrouchEnd()
{
	this->UnCrouch();
}

FVector ASCharacter::GetPawnViewLocation() const
{
	if (CameraComp)
	{
		return CameraComp->GetComponentLocation();
	}
	return Super::GetPawnViewLocation();
}

void ASCharacter::ZoomStart()
{
	bWantToZoom=true;
}

void ASCharacter::ZoomEnd()
{
	bWantToZoom=false;
}

void ASCharacter::FireStart()
{
	if (CurrentWeapon)
	{
		CurrentWeapon->FireStart();
	}
}

void ASCharacter::FireStop()
{
	if (CurrentWeapon)
	{
		CurrentWeapon->FireStop();
	}
}

void ASCharacter::OnHealthChanged(USHealthComponent* OwnerHealthComponent, float Health, float HealthDelta,
	const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser)
{
	if (Health<=0.f&&!bDeath)
	{
		bDeath=true;
		GetCharacterMovement()->StopMovementImmediately();
		GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		GetController()->UnPossess();
		DetachFromControllerPendingDestroy();
		SetLifeSpan(10.f);
	}	
}
