// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GOOPGAME_SPlayerState_generated_h
#error "SPlayerState.generated.h already included, missing '#pragma once' in SPlayerState.h"
#endif
#define GOOPGAME_SPlayerState_generated_h

#define GoopGame_Source_GoopGame_Public_SPlayerState_h_15_SPARSE_DATA
#define GoopGame_Source_GoopGame_Public_SPlayerState_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddScore);


#define GoopGame_Source_GoopGame_Public_SPlayerState_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddScore);


#define GoopGame_Source_GoopGame_Public_SPlayerState_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASPlayerState(); \
	friend struct Z_Construct_UClass_ASPlayerState_Statics; \
public: \
	DECLARE_CLASS(ASPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GoopGame"), NO_API) \
	DECLARE_SERIALIZER(ASPlayerState)


#define GoopGame_Source_GoopGame_Public_SPlayerState_h_15_INCLASS \
private: \
	static void StaticRegisterNativesASPlayerState(); \
	friend struct Z_Construct_UClass_ASPlayerState_Statics; \
public: \
	DECLARE_CLASS(ASPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GoopGame"), NO_API) \
	DECLARE_SERIALIZER(ASPlayerState)


#define GoopGame_Source_GoopGame_Public_SPlayerState_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASPlayerState(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASPlayerState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASPlayerState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASPlayerState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASPlayerState(ASPlayerState&&); \
	NO_API ASPlayerState(const ASPlayerState&); \
public:


#define GoopGame_Source_GoopGame_Public_SPlayerState_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASPlayerState(ASPlayerState&&); \
	NO_API ASPlayerState(const ASPlayerState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASPlayerState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASPlayerState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASPlayerState)


#define GoopGame_Source_GoopGame_Public_SPlayerState_h_15_PRIVATE_PROPERTY_OFFSET
#define GoopGame_Source_GoopGame_Public_SPlayerState_h_12_PROLOG
#define GoopGame_Source_GoopGame_Public_SPlayerState_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GoopGame_Source_GoopGame_Public_SPlayerState_h_15_PRIVATE_PROPERTY_OFFSET \
	GoopGame_Source_GoopGame_Public_SPlayerState_h_15_SPARSE_DATA \
	GoopGame_Source_GoopGame_Public_SPlayerState_h_15_RPC_WRAPPERS \
	GoopGame_Source_GoopGame_Public_SPlayerState_h_15_INCLASS \
	GoopGame_Source_GoopGame_Public_SPlayerState_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GoopGame_Source_GoopGame_Public_SPlayerState_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GoopGame_Source_GoopGame_Public_SPlayerState_h_15_PRIVATE_PROPERTY_OFFSET \
	GoopGame_Source_GoopGame_Public_SPlayerState_h_15_SPARSE_DATA \
	GoopGame_Source_GoopGame_Public_SPlayerState_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	GoopGame_Source_GoopGame_Public_SPlayerState_h_15_INCLASS_NO_PURE_DECLS \
	GoopGame_Source_GoopGame_Public_SPlayerState_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GOOPGAME_API UClass* StaticClass<class ASPlayerState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GoopGame_Source_GoopGame_Public_SPlayerState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
