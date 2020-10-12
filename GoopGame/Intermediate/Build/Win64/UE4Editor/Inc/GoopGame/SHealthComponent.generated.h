// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USHealthComponent;
class UDamageType;
class AController;
class AActor;
#ifdef GOOPGAME_SHealthComponent_generated_h
#error "SHealthComponent.generated.h already included, missing '#pragma once' in SHealthComponent.h"
#endif
#define GOOPGAME_SHealthComponent_generated_h

#define GoopGame_Source_GoopGame_Component_SHealthComponent_h_9_DELEGATE \
struct _Script_GoopGame_eventOnHealthChanged_Parms \
{ \
	USHealthComponent* HealthComponent; \
	float Health; \
	float HealthDelta; \
	const UDamageType* DamageType; \
	AController* InstigatedBy; \
	AActor* DamageCauser; \
}; \
static inline void FOnHealthChanged_DelegateWrapper(const FMulticastScriptDelegate& OnHealthChanged, USHealthComponent* HealthComponent, float Health, float HealthDelta, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser) \
{ \
	_Script_GoopGame_eventOnHealthChanged_Parms Parms; \
	Parms.HealthComponent=HealthComponent; \
	Parms.Health=Health; \
	Parms.HealthDelta=HealthDelta; \
	Parms.DamageType=DamageType; \
	Parms.InstigatedBy=InstigatedBy; \
	Parms.DamageCauser=DamageCauser; \
	OnHealthChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define GoopGame_Source_GoopGame_Component_SHealthComponent_h_14_SPARSE_DATA
#define GoopGame_Source_GoopGame_Component_SHealthComponent_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHeal); \
	DECLARE_FUNCTION(execOnHealthTakeAnyDamage); \
	DECLARE_FUNCTION(execOnRep_Health); \
	DECLARE_FUNCTION(execGetCurrentHealth);


#define GoopGame_Source_GoopGame_Component_SHealthComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHeal); \
	DECLARE_FUNCTION(execOnHealthTakeAnyDamage); \
	DECLARE_FUNCTION(execOnRep_Health); \
	DECLARE_FUNCTION(execGetCurrentHealth);


#define GoopGame_Source_GoopGame_Component_SHealthComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSHealthComponent(); \
	friend struct Z_Construct_UClass_USHealthComponent_Statics; \
public: \
	DECLARE_CLASS(USHealthComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GoopGame"), NO_API) \
	DECLARE_SERIALIZER(USHealthComponent) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentHealth=NETFIELD_REP_START, \
		NETFIELD_REP_END=CurrentHealth	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define GoopGame_Source_GoopGame_Component_SHealthComponent_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUSHealthComponent(); \
	friend struct Z_Construct_UClass_USHealthComponent_Statics; \
public: \
	DECLARE_CLASS(USHealthComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GoopGame"), NO_API) \
	DECLARE_SERIALIZER(USHealthComponent) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentHealth=NETFIELD_REP_START, \
		NETFIELD_REP_END=CurrentHealth	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define GoopGame_Source_GoopGame_Component_SHealthComponent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USHealthComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USHealthComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USHealthComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USHealthComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USHealthComponent(USHealthComponent&&); \
	NO_API USHealthComponent(const USHealthComponent&); \
public:


#define GoopGame_Source_GoopGame_Component_SHealthComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USHealthComponent(USHealthComponent&&); \
	NO_API USHealthComponent(const USHealthComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USHealthComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USHealthComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USHealthComponent)


#define GoopGame_Source_GoopGame_Component_SHealthComponent_h_14_PRIVATE_PROPERTY_OFFSET
#define GoopGame_Source_GoopGame_Component_SHealthComponent_h_11_PROLOG
#define GoopGame_Source_GoopGame_Component_SHealthComponent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GoopGame_Source_GoopGame_Component_SHealthComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	GoopGame_Source_GoopGame_Component_SHealthComponent_h_14_SPARSE_DATA \
	GoopGame_Source_GoopGame_Component_SHealthComponent_h_14_RPC_WRAPPERS \
	GoopGame_Source_GoopGame_Component_SHealthComponent_h_14_INCLASS \
	GoopGame_Source_GoopGame_Component_SHealthComponent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GoopGame_Source_GoopGame_Component_SHealthComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GoopGame_Source_GoopGame_Component_SHealthComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	GoopGame_Source_GoopGame_Component_SHealthComponent_h_14_SPARSE_DATA \
	GoopGame_Source_GoopGame_Component_SHealthComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	GoopGame_Source_GoopGame_Component_SHealthComponent_h_14_INCLASS_NO_PURE_DECLS \
	GoopGame_Source_GoopGame_Component_SHealthComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GOOPGAME_API UClass* StaticClass<class USHealthComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GoopGame_Source_GoopGame_Component_SHealthComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
