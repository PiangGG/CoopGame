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
#ifdef GOOPGAME_STong_generated_h
#error "STong.generated.h already included, missing '#pragma once' in STong.h"
#endif
#define GOOPGAME_STong_generated_h

#define GoopGame_Source_GoopGame_Public_STong_h_17_SPARSE_DATA
#define GoopGame_Source_GoopGame_Public_STong_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHealthChanged); \
	DECLARE_FUNCTION(execOn_RepBoom);


#define GoopGame_Source_GoopGame_Public_STong_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHealthChanged); \
	DECLARE_FUNCTION(execOn_RepBoom);


#define GoopGame_Source_GoopGame_Public_STong_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASTong(); \
	friend struct Z_Construct_UClass_ASTong_Statics; \
public: \
	DECLARE_CLASS(ASTong, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GoopGame"), NO_API) \
	DECLARE_SERIALIZER(ASTong) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bBoom=NETFIELD_REP_START, \
		NETFIELD_REP_END=bBoom	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define GoopGame_Source_GoopGame_Public_STong_h_17_INCLASS \
private: \
	static void StaticRegisterNativesASTong(); \
	friend struct Z_Construct_UClass_ASTong_Statics; \
public: \
	DECLARE_CLASS(ASTong, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GoopGame"), NO_API) \
	DECLARE_SERIALIZER(ASTong) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bBoom=NETFIELD_REP_START, \
		NETFIELD_REP_END=bBoom	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define GoopGame_Source_GoopGame_Public_STong_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASTong(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASTong) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASTong); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASTong); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASTong(ASTong&&); \
	NO_API ASTong(const ASTong&); \
public:


#define GoopGame_Source_GoopGame_Public_STong_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASTong(ASTong&&); \
	NO_API ASTong(const ASTong&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASTong); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASTong); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASTong)


#define GoopGame_Source_GoopGame_Public_STong_h_17_PRIVATE_PROPERTY_OFFSET
#define GoopGame_Source_GoopGame_Public_STong_h_14_PROLOG
#define GoopGame_Source_GoopGame_Public_STong_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GoopGame_Source_GoopGame_Public_STong_h_17_PRIVATE_PROPERTY_OFFSET \
	GoopGame_Source_GoopGame_Public_STong_h_17_SPARSE_DATA \
	GoopGame_Source_GoopGame_Public_STong_h_17_RPC_WRAPPERS \
	GoopGame_Source_GoopGame_Public_STong_h_17_INCLASS \
	GoopGame_Source_GoopGame_Public_STong_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GoopGame_Source_GoopGame_Public_STong_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GoopGame_Source_GoopGame_Public_STong_h_17_PRIVATE_PROPERTY_OFFSET \
	GoopGame_Source_GoopGame_Public_STong_h_17_SPARSE_DATA \
	GoopGame_Source_GoopGame_Public_STong_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	GoopGame_Source_GoopGame_Public_STong_h_17_INCLASS_NO_PURE_DECLS \
	GoopGame_Source_GoopGame_Public_STong_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GOOPGAME_API UClass* StaticClass<class ASTong>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GoopGame_Source_GoopGame_Public_STong_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
