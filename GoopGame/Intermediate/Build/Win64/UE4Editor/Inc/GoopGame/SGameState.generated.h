// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EWaveState : uint8;
#ifdef GOOPGAME_SGameState_generated_h
#error "SGameState.generated.h already included, missing '#pragma once' in SGameState.h"
#endif
#define GOOPGAME_SGameState_generated_h

#define GoopGame_Source_GoopGame_Public_SGameState_h_24_SPARSE_DATA
#define GoopGame_Source_GoopGame_Public_SGameState_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_WaveState);


#define GoopGame_Source_GoopGame_Public_SGameState_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_WaveState);


#define GoopGame_Source_GoopGame_Public_SGameState_h_24_EVENT_PARMS \
	struct SGameState_eventWaveStateChanged_Parms \
	{ \
		EWaveState NewState; \
		EWaveState OldState; \
	};


#define GoopGame_Source_GoopGame_Public_SGameState_h_24_CALLBACK_WRAPPERS
#define GoopGame_Source_GoopGame_Public_SGameState_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASGameState(); \
	friend struct Z_Construct_UClass_ASGameState_Statics; \
public: \
	DECLARE_CLASS(ASGameState, AGameStateBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GoopGame"), NO_API) \
	DECLARE_SERIALIZER(ASGameState) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		WaveState=NETFIELD_REP_START, \
		NETFIELD_REP_END=WaveState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define GoopGame_Source_GoopGame_Public_SGameState_h_24_INCLASS \
private: \
	static void StaticRegisterNativesASGameState(); \
	friend struct Z_Construct_UClass_ASGameState_Statics; \
public: \
	DECLARE_CLASS(ASGameState, AGameStateBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GoopGame"), NO_API) \
	DECLARE_SERIALIZER(ASGameState) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		WaveState=NETFIELD_REP_START, \
		NETFIELD_REP_END=WaveState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define GoopGame_Source_GoopGame_Public_SGameState_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASGameState(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASGameState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASGameState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASGameState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASGameState(ASGameState&&); \
	NO_API ASGameState(const ASGameState&); \
public:


#define GoopGame_Source_GoopGame_Public_SGameState_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASGameState(ASGameState&&); \
	NO_API ASGameState(const ASGameState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASGameState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASGameState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASGameState)


#define GoopGame_Source_GoopGame_Public_SGameState_h_24_PRIVATE_PROPERTY_OFFSET
#define GoopGame_Source_GoopGame_Public_SGameState_h_21_PROLOG \
	GoopGame_Source_GoopGame_Public_SGameState_h_24_EVENT_PARMS


#define GoopGame_Source_GoopGame_Public_SGameState_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GoopGame_Source_GoopGame_Public_SGameState_h_24_PRIVATE_PROPERTY_OFFSET \
	GoopGame_Source_GoopGame_Public_SGameState_h_24_SPARSE_DATA \
	GoopGame_Source_GoopGame_Public_SGameState_h_24_RPC_WRAPPERS \
	GoopGame_Source_GoopGame_Public_SGameState_h_24_CALLBACK_WRAPPERS \
	GoopGame_Source_GoopGame_Public_SGameState_h_24_INCLASS \
	GoopGame_Source_GoopGame_Public_SGameState_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GoopGame_Source_GoopGame_Public_SGameState_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GoopGame_Source_GoopGame_Public_SGameState_h_24_PRIVATE_PROPERTY_OFFSET \
	GoopGame_Source_GoopGame_Public_SGameState_h_24_SPARSE_DATA \
	GoopGame_Source_GoopGame_Public_SGameState_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	GoopGame_Source_GoopGame_Public_SGameState_h_24_CALLBACK_WRAPPERS \
	GoopGame_Source_GoopGame_Public_SGameState_h_24_INCLASS_NO_PURE_DECLS \
	GoopGame_Source_GoopGame_Public_SGameState_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GOOPGAME_API UClass* StaticClass<class ASGameState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GoopGame_Source_GoopGame_Public_SGameState_h


#define FOREACH_ENUM_EWAVESTATE(op) \
	op(EWaveState::WatingToStart) \
	op(EWaveState::WaveInProgress) \
	op(EWaveState::WatingToComplete) \
	op(EWaveState::WaveComplate) \
	op(EWaveState::GameOver) 

enum class EWaveState : uint8;
template<> GOOPGAME_API UEnum* StaticEnum<EWaveState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
