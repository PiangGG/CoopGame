// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GOOPGAME_SWeapon_generated_h
#error "SWeapon.generated.h already included, missing '#pragma once' in SWeapon.h"
#endif
#define GOOPGAME_SWeapon_generated_h

#define GoopGame_Source_GoopGame_Public_SWeapon_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHitScanTrance_Statics; \
	GOOPGAME_API static class UScriptStruct* StaticStruct();


template<> GOOPGAME_API UScriptStruct* StaticStruct<struct FHitScanTrance>();

#define GoopGame_Source_GoopGame_Public_SWeapon_h_27_SPARSE_DATA
#define GoopGame_Source_GoopGame_Public_SWeapon_h_27_RPC_WRAPPERS \
	virtual bool FireServer_Validate(); \
	virtual void FireServer_Implementation(); \
 \
	DECLARE_FUNCTION(execOn_RepHitScanTrance); \
	DECLARE_FUNCTION(execFireServer); \
	DECLARE_FUNCTION(execFire);


#define GoopGame_Source_GoopGame_Public_SWeapon_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool FireServer_Validate(); \
	virtual void FireServer_Implementation(); \
 \
	DECLARE_FUNCTION(execOn_RepHitScanTrance); \
	DECLARE_FUNCTION(execFireServer); \
	DECLARE_FUNCTION(execFire);


#define GoopGame_Source_GoopGame_Public_SWeapon_h_27_EVENT_PARMS
#define GoopGame_Source_GoopGame_Public_SWeapon_h_27_CALLBACK_WRAPPERS
#define GoopGame_Source_GoopGame_Public_SWeapon_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASWeapon(); \
	friend struct Z_Construct_UClass_ASWeapon_Statics; \
public: \
	DECLARE_CLASS(ASWeapon, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GoopGame"), NO_API) \
	DECLARE_SERIALIZER(ASWeapon) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		HitScanTrance=NETFIELD_REP_START, \
		NETFIELD_REP_END=HitScanTrance	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define GoopGame_Source_GoopGame_Public_SWeapon_h_27_INCLASS \
private: \
	static void StaticRegisterNativesASWeapon(); \
	friend struct Z_Construct_UClass_ASWeapon_Statics; \
public: \
	DECLARE_CLASS(ASWeapon, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GoopGame"), NO_API) \
	DECLARE_SERIALIZER(ASWeapon) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		HitScanTrance=NETFIELD_REP_START, \
		NETFIELD_REP_END=HitScanTrance	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define GoopGame_Source_GoopGame_Public_SWeapon_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASWeapon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASWeapon(ASWeapon&&); \
	NO_API ASWeapon(const ASWeapon&); \
public:


#define GoopGame_Source_GoopGame_Public_SWeapon_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASWeapon(ASWeapon&&); \
	NO_API ASWeapon(const ASWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASWeapon)


#define GoopGame_Source_GoopGame_Public_SWeapon_h_27_PRIVATE_PROPERTY_OFFSET
#define GoopGame_Source_GoopGame_Public_SWeapon_h_24_PROLOG \
	GoopGame_Source_GoopGame_Public_SWeapon_h_27_EVENT_PARMS


#define GoopGame_Source_GoopGame_Public_SWeapon_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GoopGame_Source_GoopGame_Public_SWeapon_h_27_PRIVATE_PROPERTY_OFFSET \
	GoopGame_Source_GoopGame_Public_SWeapon_h_27_SPARSE_DATA \
	GoopGame_Source_GoopGame_Public_SWeapon_h_27_RPC_WRAPPERS \
	GoopGame_Source_GoopGame_Public_SWeapon_h_27_CALLBACK_WRAPPERS \
	GoopGame_Source_GoopGame_Public_SWeapon_h_27_INCLASS \
	GoopGame_Source_GoopGame_Public_SWeapon_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GoopGame_Source_GoopGame_Public_SWeapon_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GoopGame_Source_GoopGame_Public_SWeapon_h_27_PRIVATE_PROPERTY_OFFSET \
	GoopGame_Source_GoopGame_Public_SWeapon_h_27_SPARSE_DATA \
	GoopGame_Source_GoopGame_Public_SWeapon_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	GoopGame_Source_GoopGame_Public_SWeapon_h_27_CALLBACK_WRAPPERS \
	GoopGame_Source_GoopGame_Public_SWeapon_h_27_INCLASS_NO_PURE_DECLS \
	GoopGame_Source_GoopGame_Public_SWeapon_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GOOPGAME_API UClass* StaticClass<class ASWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GoopGame_Source_GoopGame_Public_SWeapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
