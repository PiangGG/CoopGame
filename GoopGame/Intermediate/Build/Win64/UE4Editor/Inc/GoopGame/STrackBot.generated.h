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
#ifdef GOOPGAME_STrackBot_generated_h
#error "STrackBot.generated.h already included, missing '#pragma once' in STrackBot.h"
#endif
#define GOOPGAME_STrackBot_generated_h

#define GoopGame_Source_GoopGame_AI_STrackBot_h_21_SPARSE_DATA
#define GoopGame_Source_GoopGame_AI_STrackBot_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDamageSelf); \
	DECLARE_FUNCTION(execOnRep_Exploded); \
	DECLARE_FUNCTION(execSelfDestuct); \
	DECLARE_FUNCTION(execHandleTakeDamage);


#define GoopGame_Source_GoopGame_AI_STrackBot_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDamageSelf); \
	DECLARE_FUNCTION(execOnRep_Exploded); \
	DECLARE_FUNCTION(execSelfDestuct); \
	DECLARE_FUNCTION(execHandleTakeDamage);


#define GoopGame_Source_GoopGame_AI_STrackBot_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASTrackBot(); \
	friend struct Z_Construct_UClass_ASTrackBot_Statics; \
public: \
	DECLARE_CLASS(ASTrackBot, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GoopGame"), NO_API) \
	DECLARE_SERIALIZER(ASTrackBot) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bExploded=NETFIELD_REP_START, \
		NETFIELD_REP_END=bExploded	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define GoopGame_Source_GoopGame_AI_STrackBot_h_21_INCLASS \
private: \
	static void StaticRegisterNativesASTrackBot(); \
	friend struct Z_Construct_UClass_ASTrackBot_Statics; \
public: \
	DECLARE_CLASS(ASTrackBot, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GoopGame"), NO_API) \
	DECLARE_SERIALIZER(ASTrackBot) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bExploded=NETFIELD_REP_START, \
		NETFIELD_REP_END=bExploded	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define GoopGame_Source_GoopGame_AI_STrackBot_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASTrackBot(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASTrackBot) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASTrackBot); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASTrackBot); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASTrackBot(ASTrackBot&&); \
	NO_API ASTrackBot(const ASTrackBot&); \
public:


#define GoopGame_Source_GoopGame_AI_STrackBot_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASTrackBot(ASTrackBot&&); \
	NO_API ASTrackBot(const ASTrackBot&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASTrackBot); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASTrackBot); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASTrackBot)


#define GoopGame_Source_GoopGame_AI_STrackBot_h_21_PRIVATE_PROPERTY_OFFSET
#define GoopGame_Source_GoopGame_AI_STrackBot_h_18_PROLOG
#define GoopGame_Source_GoopGame_AI_STrackBot_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GoopGame_Source_GoopGame_AI_STrackBot_h_21_PRIVATE_PROPERTY_OFFSET \
	GoopGame_Source_GoopGame_AI_STrackBot_h_21_SPARSE_DATA \
	GoopGame_Source_GoopGame_AI_STrackBot_h_21_RPC_WRAPPERS \
	GoopGame_Source_GoopGame_AI_STrackBot_h_21_INCLASS \
	GoopGame_Source_GoopGame_AI_STrackBot_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GoopGame_Source_GoopGame_AI_STrackBot_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GoopGame_Source_GoopGame_AI_STrackBot_h_21_PRIVATE_PROPERTY_OFFSET \
	GoopGame_Source_GoopGame_AI_STrackBot_h_21_SPARSE_DATA \
	GoopGame_Source_GoopGame_AI_STrackBot_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	GoopGame_Source_GoopGame_AI_STrackBot_h_21_INCLASS_NO_PURE_DECLS \
	GoopGame_Source_GoopGame_AI_STrackBot_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GOOPGAME_API UClass* StaticClass<class ASTrackBot>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GoopGame_Source_GoopGame_AI_STrackBot_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
