// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AController;
#ifdef GOOPGAME_SGameMode_generated_h
#error "SGameMode.generated.h already included, missing '#pragma once' in SGameMode.h"
#endif
#define GOOPGAME_SGameMode_generated_h

#define GoopGame_Source_GoopGame_Public_SGameMode_h_15_DELEGATE \
struct _Script_GoopGame_eventOnActorKilled_Parms \
{ \
	AActor* VitActor; \
	AActor* KillerActor; \
	AController* KillerController; \
}; \
static inline void FOnActorKilled_DelegateWrapper(const FMulticastScriptDelegate& OnActorKilled, AActor* VitActor, AActor* KillerActor, AController* KillerController) \
{ \
	_Script_GoopGame_eventOnActorKilled_Parms Parms; \
	Parms.VitActor=VitActor; \
	Parms.KillerActor=KillerActor; \
	Parms.KillerController=KillerController; \
	OnActorKilled.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define GoopGame_Source_GoopGame_Public_SGameMode_h_20_SPARSE_DATA
#define GoopGame_Source_GoopGame_Public_SGameMode_h_20_RPC_WRAPPERS
#define GoopGame_Source_GoopGame_Public_SGameMode_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define GoopGame_Source_GoopGame_Public_SGameMode_h_20_EVENT_PARMS
#define GoopGame_Source_GoopGame_Public_SGameMode_h_20_CALLBACK_WRAPPERS
#define GoopGame_Source_GoopGame_Public_SGameMode_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASGameMode(); \
	friend struct Z_Construct_UClass_ASGameMode_Statics; \
public: \
	DECLARE_CLASS(ASGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/GoopGame"), NO_API) \
	DECLARE_SERIALIZER(ASGameMode)


#define GoopGame_Source_GoopGame_Public_SGameMode_h_20_INCLASS \
private: \
	static void StaticRegisterNativesASGameMode(); \
	friend struct Z_Construct_UClass_ASGameMode_Statics; \
public: \
	DECLARE_CLASS(ASGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/GoopGame"), NO_API) \
	DECLARE_SERIALIZER(ASGameMode)


#define GoopGame_Source_GoopGame_Public_SGameMode_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASGameMode(ASGameMode&&); \
	NO_API ASGameMode(const ASGameMode&); \
public:


#define GoopGame_Source_GoopGame_Public_SGameMode_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASGameMode(ASGameMode&&); \
	NO_API ASGameMode(const ASGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASGameMode)


#define GoopGame_Source_GoopGame_Public_SGameMode_h_20_PRIVATE_PROPERTY_OFFSET
#define GoopGame_Source_GoopGame_Public_SGameMode_h_17_PROLOG \
	GoopGame_Source_GoopGame_Public_SGameMode_h_20_EVENT_PARMS


#define GoopGame_Source_GoopGame_Public_SGameMode_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GoopGame_Source_GoopGame_Public_SGameMode_h_20_PRIVATE_PROPERTY_OFFSET \
	GoopGame_Source_GoopGame_Public_SGameMode_h_20_SPARSE_DATA \
	GoopGame_Source_GoopGame_Public_SGameMode_h_20_RPC_WRAPPERS \
	GoopGame_Source_GoopGame_Public_SGameMode_h_20_CALLBACK_WRAPPERS \
	GoopGame_Source_GoopGame_Public_SGameMode_h_20_INCLASS \
	GoopGame_Source_GoopGame_Public_SGameMode_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GoopGame_Source_GoopGame_Public_SGameMode_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GoopGame_Source_GoopGame_Public_SGameMode_h_20_PRIVATE_PROPERTY_OFFSET \
	GoopGame_Source_GoopGame_Public_SGameMode_h_20_SPARSE_DATA \
	GoopGame_Source_GoopGame_Public_SGameMode_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	GoopGame_Source_GoopGame_Public_SGameMode_h_20_CALLBACK_WRAPPERS \
	GoopGame_Source_GoopGame_Public_SGameMode_h_20_INCLASS_NO_PURE_DECLS \
	GoopGame_Source_GoopGame_Public_SGameMode_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GOOPGAME_API UClass* StaticClass<class ASGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GoopGame_Source_GoopGame_Public_SGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
