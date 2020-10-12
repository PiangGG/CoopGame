// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GoopGame/AI/STrackBot.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSTrackBot() {}
// Cross Module References
	GOOPGAME_API UClass* Z_Construct_UClass_ASTrackBot_NoRegister();
	GOOPGAME_API UClass* Z_Construct_UClass_ASTrackBot();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_GoopGame();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	GOOPGAME_API UClass* Z_Construct_UClass_USHealthComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASTrackBot::execDamageSelf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DamageSelf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASTrackBot::execOnRep_Exploded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Exploded();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASTrackBot::execSelfDestuct)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelfDestuct();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASTrackBot::execHandleTakeDamage)
	{
		P_GET_OBJECT(USHealthComponent,Z_Param_OwnerHealthComponent);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Health);
		P_GET_PROPERTY(FFloatProperty,Z_Param_HealthDelta);
		P_GET_OBJECT(UDamageType,Z_Param_DamageType);
		P_GET_OBJECT(AController,Z_Param_InstigatedBy);
		P_GET_OBJECT(AActor,Z_Param_DamageCauser);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleTakeDamage(Z_Param_OwnerHealthComponent,Z_Param_Health,Z_Param_HealthDelta,Z_Param_DamageType,Z_Param_InstigatedBy,Z_Param_DamageCauser);
		P_NATIVE_END;
	}
	void ASTrackBot::StaticRegisterNativesASTrackBot()
	{
		UClass* Class = ASTrackBot::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DamageSelf", &ASTrackBot::execDamageSelf },
			{ "HandleTakeDamage", &ASTrackBot::execHandleTakeDamage },
			{ "OnRep_Exploded", &ASTrackBot::execOnRep_Exploded },
			{ "SelfDestuct", &ASTrackBot::execSelfDestuct },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASTrackBot_DamageSelf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASTrackBot_DamageSelf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AI/STrackBot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASTrackBot_DamageSelf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASTrackBot, nullptr, "DamageSelf", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASTrackBot_DamageSelf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASTrackBot_DamageSelf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASTrackBot_DamageSelf()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASTrackBot_DamageSelf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASTrackBot_HandleTakeDamage_Statics
	{
		struct STrackBot_eventHandleTakeDamage_Parms
		{
			USHealthComponent* OwnerHealthComponent;
			float Health;
			float HealthDelta;
			const UDamageType* DamageType;
			AController* InstigatedBy;
			AActor* DamageCauser;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstigatedBy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageType;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HealthDelta;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnerHealthComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerHealthComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASTrackBot_HandleTakeDamage_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(STrackBot_eventHandleTakeDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASTrackBot_HandleTakeDamage_Statics::NewProp_InstigatedBy = { "InstigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(STrackBot_eventHandleTakeDamage_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASTrackBot_HandleTakeDamage_Statics::NewProp_DamageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASTrackBot_HandleTakeDamage_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(STrackBot_eventHandleTakeDamage_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASTrackBot_HandleTakeDamage_Statics::NewProp_DamageType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASTrackBot_HandleTakeDamage_Statics::NewProp_DamageType_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASTrackBot_HandleTakeDamage_Statics::NewProp_HealthDelta = { "HealthDelta", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(STrackBot_eventHandleTakeDamage_Parms, HealthDelta), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASTrackBot_HandleTakeDamage_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(STrackBot_eventHandleTakeDamage_Parms, Health), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASTrackBot_HandleTakeDamage_Statics::NewProp_OwnerHealthComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASTrackBot_HandleTakeDamage_Statics::NewProp_OwnerHealthComponent = { "OwnerHealthComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(STrackBot_eventHandleTakeDamage_Parms, OwnerHealthComponent), Z_Construct_UClass_USHealthComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASTrackBot_HandleTakeDamage_Statics::NewProp_OwnerHealthComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASTrackBot_HandleTakeDamage_Statics::NewProp_OwnerHealthComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASTrackBot_HandleTakeDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASTrackBot_HandleTakeDamage_Statics::NewProp_DamageCauser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASTrackBot_HandleTakeDamage_Statics::NewProp_InstigatedBy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASTrackBot_HandleTakeDamage_Statics::NewProp_DamageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASTrackBot_HandleTakeDamage_Statics::NewProp_HealthDelta,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASTrackBot_HandleTakeDamage_Statics::NewProp_Health,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASTrackBot_HandleTakeDamage_Statics::NewProp_OwnerHealthComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASTrackBot_HandleTakeDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AI/STrackBot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASTrackBot_HandleTakeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASTrackBot, nullptr, "HandleTakeDamage", nullptr, nullptr, sizeof(STrackBot_eventHandleTakeDamage_Parms), Z_Construct_UFunction_ASTrackBot_HandleTakeDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASTrackBot_HandleTakeDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASTrackBot_HandleTakeDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASTrackBot_HandleTakeDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASTrackBot_HandleTakeDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASTrackBot_HandleTakeDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASTrackBot_OnRep_Exploded_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASTrackBot_OnRep_Exploded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AI/STrackBot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASTrackBot_OnRep_Exploded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASTrackBot, nullptr, "OnRep_Exploded", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASTrackBot_OnRep_Exploded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASTrackBot_OnRep_Exploded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASTrackBot_OnRep_Exploded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASTrackBot_OnRep_Exploded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASTrackBot_SelfDestuct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASTrackBot_SelfDestuct_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AI/STrackBot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASTrackBot_SelfDestuct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASTrackBot, nullptr, "SelfDestuct", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASTrackBot_SelfDestuct_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASTrackBot_SelfDestuct_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASTrackBot_SelfDestuct()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASTrackBot_SelfDestuct_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASTrackBot_NoRegister()
	{
		return ASTrackBot::StaticClass();
	}
	struct Z_Construct_UClass_ASTrackBot_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplodedSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExplodedSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelfDestuctSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SelfDestuctSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlapTimerHandle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OverlapTimerHandle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSelfStartDestruction_MetaData[];
#endif
		static void NewProp_bSelfStartDestruction_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSelfStartDestruction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_selfDamageIntervar_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_selfDamageIntervar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplodedDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ExplodedDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplodedRadis_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ExplodedRadis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bExploded_MetaData[];
#endif
		static void NewProp_bExploded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bExploded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mainst_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mainst;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartickeSystemE_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PartickeSystemE;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequiredDestanceTogarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RequiredDestanceTogarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseVelocityChange_MetaData[];
#endif
		static void NewProp_bUseVelocityChange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseVelocityChange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementForce_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MovementForce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NextPathPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NextPathPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphereComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SphereComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HealthComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASTrackBot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_GoopGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASTrackBot_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASTrackBot_DamageSelf, "DamageSelf" }, // 1405066664
		{ &Z_Construct_UFunction_ASTrackBot_HandleTakeDamage, "HandleTakeDamage" }, // 1227840954
		{ &Z_Construct_UFunction_ASTrackBot_OnRep_Exploded, "OnRep_Exploded" }, // 2722603234
		{ &Z_Construct_UFunction_ASTrackBot_SelfDestuct, "SelfDestuct" }, // 3338778975
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTrackBot_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AI/STrackBot.h" },
		{ "ModuleRelativePath", "AI/STrackBot.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTrackBot_Statics::NewProp_ExplodedSound_MetaData[] = {
		{ "Category", "STrackBot" },
		{ "ModuleRelativePath", "AI/STrackBot.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASTrackBot_Statics::NewProp_ExplodedSound = { "ExplodedSound", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASTrackBot, ExplodedSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASTrackBot_Statics::NewProp_ExplodedSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASTrackBot_Statics::NewProp_ExplodedSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTrackBot_Statics::NewProp_SelfDestuctSound_MetaData[] = {
		{ "Category", "STrackBot" },
		{ "ModuleRelativePath", "AI/STrackBot.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASTrackBot_Statics::NewProp_SelfDestuctSound = { "SelfDestuctSound", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASTrackBot, SelfDestuctSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASTrackBot_Statics::NewProp_SelfDestuctSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASTrackBot_Statics::NewProp_SelfDestuctSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTrackBot_Statics::NewProp_OverlapTimerHandle_MetaData[] = {
		{ "Category", "STrackBot" },
		{ "ModuleRelativePath", "AI/STrackBot.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASTrackBot_Statics::NewProp_OverlapTimerHandle = { "OverlapTimerHandle", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASTrackBot, OverlapTimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_ASTrackBot_Statics::NewProp_OverlapTimerHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASTrackBot_Statics::NewProp_OverlapTimerHandle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTrackBot_Statics::NewProp_bSelfStartDestruction_MetaData[] = {
		{ "Category", "STrackBot" },
		{ "ModuleRelativePath", "AI/STrackBot.h" },
	};
#endif
	void Z_Construct_UClass_ASTrackBot_Statics::NewProp_bSelfStartDestruction_SetBit(void* Obj)
	{
		((ASTrackBot*)Obj)->bSelfStartDestruction = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASTrackBot_Statics::NewProp_bSelfStartDestruction = { "bSelfStartDestruction", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASTrackBot), &Z_Construct_UClass_ASTrackBot_Statics::NewProp_bSelfStartDestruction_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASTrackBot_Statics::NewProp_bSelfStartDestruction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASTrackBot_Statics::NewProp_bSelfStartDestruction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTrackBot_Statics::NewProp_selfDamageIntervar_MetaData[] = {
		{ "Category", "STrackBot" },
		{ "ModuleRelativePath", "AI/STrackBot.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASTrackBot_Statics::NewProp_selfDamageIntervar = { "selfDamageIntervar", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASTrackBot, selfDamageIntervar), METADATA_PARAMS(Z_Construct_UClass_ASTrackBot_Statics::NewProp_selfDamageIntervar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASTrackBot_Statics::NewProp_selfDamageIntervar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTrackBot_Statics::NewProp_ExplodedDamage_MetaData[] = {
		{ "Category", "STrackBot" },
		{ "ModuleRelativePath", "AI/STrackBot.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASTrackBot_Statics::NewProp_ExplodedDamage = { "ExplodedDamage", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASTrackBot, ExplodedDamage), METADATA_PARAMS(Z_Construct_UClass_ASTrackBot_Statics::NewProp_ExplodedDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASTrackBot_Statics::NewProp_ExplodedDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTrackBot_Statics::NewProp_ExplodedRadis_MetaData[] = {
		{ "Category", "STrackBot" },
		{ "ModuleRelativePath", "AI/STrackBot.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASTrackBot_Statics::NewProp_ExplodedRadis = { "ExplodedRadis", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASTrackBot, ExplodedRadis), METADATA_PARAMS(Z_Construct_UClass_ASTrackBot_Statics::NewProp_ExplodedRadis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASTrackBot_Statics::NewProp_ExplodedRadis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTrackBot_Statics::NewProp_bExploded_MetaData[] = {
		{ "ModuleRelativePath", "AI/STrackBot.h" },
	};
#endif
	void Z_Construct_UClass_ASTrackBot_Statics::NewProp_bExploded_SetBit(void* Obj)
	{
		((ASTrackBot*)Obj)->bExploded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASTrackBot_Statics::NewProp_bExploded = { "bExploded", "OnRep_Exploded", (EPropertyFlags)0x0010000100000020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASTrackBot), &Z_Construct_UClass_ASTrackBot_Statics::NewProp_bExploded_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASTrackBot_Statics::NewProp_bExploded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASTrackBot_Statics::NewProp_bExploded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTrackBot_Statics::NewProp_Mainst_MetaData[] = {
		{ "ModuleRelativePath", "AI/STrackBot.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASTrackBot_Statics::NewProp_Mainst = { "Mainst", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASTrackBot, Mainst), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASTrackBot_Statics::NewProp_Mainst_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASTrackBot_Statics::NewProp_Mainst_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTrackBot_Statics::NewProp_PartickeSystemE_MetaData[] = {
		{ "Category", "STrackBot" },
		{ "ModuleRelativePath", "AI/STrackBot.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASTrackBot_Statics::NewProp_PartickeSystemE = { "PartickeSystemE", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASTrackBot, PartickeSystemE), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASTrackBot_Statics::NewProp_PartickeSystemE_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASTrackBot_Statics::NewProp_PartickeSystemE_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTrackBot_Statics::NewProp_RequiredDestanceTogarget_MetaData[] = {
		{ "Category", "STrackBot" },
		{ "ModuleRelativePath", "AI/STrackBot.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASTrackBot_Statics::NewProp_RequiredDestanceTogarget = { "RequiredDestanceTogarget", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASTrackBot, RequiredDestanceTogarget), METADATA_PARAMS(Z_Construct_UClass_ASTrackBot_Statics::NewProp_RequiredDestanceTogarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASTrackBot_Statics::NewProp_RequiredDestanceTogarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTrackBot_Statics::NewProp_bUseVelocityChange_MetaData[] = {
		{ "Category", "STrackBot" },
		{ "ModuleRelativePath", "AI/STrackBot.h" },
	};
#endif
	void Z_Construct_UClass_ASTrackBot_Statics::NewProp_bUseVelocityChange_SetBit(void* Obj)
	{
		((ASTrackBot*)Obj)->bUseVelocityChange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASTrackBot_Statics::NewProp_bUseVelocityChange = { "bUseVelocityChange", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASTrackBot), &Z_Construct_UClass_ASTrackBot_Statics::NewProp_bUseVelocityChange_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASTrackBot_Statics::NewProp_bUseVelocityChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASTrackBot_Statics::NewProp_bUseVelocityChange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTrackBot_Statics::NewProp_MovementForce_MetaData[] = {
		{ "Category", "STrackBot" },
		{ "ModuleRelativePath", "AI/STrackBot.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASTrackBot_Statics::NewProp_MovementForce = { "MovementForce", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASTrackBot, MovementForce), METADATA_PARAMS(Z_Construct_UClass_ASTrackBot_Statics::NewProp_MovementForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASTrackBot_Statics::NewProp_MovementForce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTrackBot_Statics::NewProp_NextPathPoint_MetaData[] = {
		{ "Category", "STrackBot" },
		{ "ModuleRelativePath", "AI/STrackBot.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASTrackBot_Statics::NewProp_NextPathPoint = { "NextPathPoint", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASTrackBot, NextPathPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ASTrackBot_Statics::NewProp_NextPathPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASTrackBot_Statics::NewProp_NextPathPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTrackBot_Statics::NewProp_SphereComponent_MetaData[] = {
		{ "Category", "STrackBot" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AI/STrackBot.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASTrackBot_Statics::NewProp_SphereComponent = { "SphereComponent", nullptr, (EPropertyFlags)0x001000000009001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASTrackBot, SphereComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASTrackBot_Statics::NewProp_SphereComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASTrackBot_Statics::NewProp_SphereComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTrackBot_Statics::NewProp_HealthComponent_MetaData[] = {
		{ "Category", "STrackBot" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AI/STrackBot.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASTrackBot_Statics::NewProp_HealthComponent = { "HealthComponent", nullptr, (EPropertyFlags)0x001000000009001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASTrackBot, HealthComponent), Z_Construct_UClass_USHealthComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASTrackBot_Statics::NewProp_HealthComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASTrackBot_Statics::NewProp_HealthComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTrackBot_Statics::NewProp_MeshComponent_MetaData[] = {
		{ "Category", "STrackBot" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AI/STrackBot.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASTrackBot_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x001000000009001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASTrackBot, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASTrackBot_Statics::NewProp_MeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASTrackBot_Statics::NewProp_MeshComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASTrackBot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTrackBot_Statics::NewProp_ExplodedSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTrackBot_Statics::NewProp_SelfDestuctSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTrackBot_Statics::NewProp_OverlapTimerHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTrackBot_Statics::NewProp_bSelfStartDestruction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTrackBot_Statics::NewProp_selfDamageIntervar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTrackBot_Statics::NewProp_ExplodedDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTrackBot_Statics::NewProp_ExplodedRadis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTrackBot_Statics::NewProp_bExploded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTrackBot_Statics::NewProp_Mainst,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTrackBot_Statics::NewProp_PartickeSystemE,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTrackBot_Statics::NewProp_RequiredDestanceTogarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTrackBot_Statics::NewProp_bUseVelocityChange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTrackBot_Statics::NewProp_MovementForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTrackBot_Statics::NewProp_NextPathPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTrackBot_Statics::NewProp_SphereComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTrackBot_Statics::NewProp_HealthComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTrackBot_Statics::NewProp_MeshComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASTrackBot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASTrackBot>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASTrackBot_Statics::ClassParams = {
		&ASTrackBot::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASTrackBot_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASTrackBot_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASTrackBot_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASTrackBot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASTrackBot()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASTrackBot_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASTrackBot, 1469426443);
	template<> GOOPGAME_API UClass* StaticClass<ASTrackBot>()
	{
		return ASTrackBot::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASTrackBot(Z_Construct_UClass_ASTrackBot, &ASTrackBot::StaticClass, TEXT("/Script/GoopGame"), TEXT("ASTrackBot"), false, nullptr, nullptr, nullptr);

	void ASTrackBot::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_bExploded(TEXT("bExploded"));

		const bool bIsValid = true
			&& Name_bExploded == ClassReps[(int32)ENetFields_Private::bExploded].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASTrackBot"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASTrackBot);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
