// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GoopGame/Public/SProjectileWeapon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSProjectileWeapon() {}
// Cross Module References
	GOOPGAME_API UClass* Z_Construct_UClass_ASProjectileWeapon_NoRegister();
	GOOPGAME_API UClass* Z_Construct_UClass_ASProjectileWeapon();
	GOOPGAME_API UClass* Z_Construct_UClass_ASWeapon();
	UPackage* Z_Construct_UPackage__Script_GoopGame();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void ASProjectileWeapon::StaticRegisterNativesASProjectileWeapon()
	{
	}
	UClass* Z_Construct_UClass_ASProjectileWeapon_NoRegister()
	{
		return ASProjectileWeapon::StaticClass();
	}
	struct Z_Construct_UClass_ASProjectileWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Projectile_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Projectile;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASProjectileWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASWeapon,
		(UObject* (*)())Z_Construct_UPackage__Script_GoopGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASProjectileWeapon_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SProjectileWeapon.h" },
		{ "ModuleRelativePath", "Public/SProjectileWeapon.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASProjectileWeapon_Statics::NewProp_Projectile_MetaData[] = {
		{ "Category", "SProjectileWeapon" },
		{ "ModuleRelativePath", "Public/SProjectileWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASProjectileWeapon_Statics::NewProp_Projectile = { "Projectile", nullptr, (EPropertyFlags)0x0014000000010015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASProjectileWeapon, Projectile), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASProjectileWeapon_Statics::NewProp_Projectile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASProjectileWeapon_Statics::NewProp_Projectile_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASProjectileWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASProjectileWeapon_Statics::NewProp_Projectile,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASProjectileWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASProjectileWeapon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASProjectileWeapon_Statics::ClassParams = {
		&ASProjectileWeapon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASProjectileWeapon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASProjectileWeapon_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASProjectileWeapon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASProjectileWeapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASProjectileWeapon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASProjectileWeapon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASProjectileWeapon, 1110658671);
	template<> GOOPGAME_API UClass* StaticClass<ASProjectileWeapon>()
	{
		return ASProjectileWeapon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASProjectileWeapon(Z_Construct_UClass_ASProjectileWeapon, &ASProjectileWeapon::StaticClass, TEXT("/Script/GoopGame"), TEXT("ASProjectileWeapon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASProjectileWeapon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
