// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_USFX_1/NaveEnemigaRebastecimiento.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveEnemigaRebastecimiento() {}
// Cross Module References
	GALAGA_USFX_1_API UClass* Z_Construct_UClass_ANaveEnemigaRebastecimiento_NoRegister();
	GALAGA_USFX_1_API UClass* Z_Construct_UClass_ANaveEnemigaRebastecimiento();
	GALAGA_USFX_1_API UClass* Z_Construct_UClass_ANaveEnemiga();
	UPackage* Z_Construct_UPackage__Script_GALAGA_USFX_1();
// End Cross Module References
	void ANaveEnemigaRebastecimiento::StaticRegisterNativesANaveEnemigaRebastecimiento()
	{
	}
	UClass* Z_Construct_UClass_ANaveEnemigaRebastecimiento_NoRegister()
	{
		return ANaveEnemigaRebastecimiento::StaticClass();
	}
	struct Z_Construct_UClass_ANaveEnemigaRebastecimiento_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveEnemigaRebastecimiento_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveEnemiga,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_USFX_1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEnemigaRebastecimiento_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NaveEnemigaRebastecimiento.h" },
		{ "ModuleRelativePath", "NaveEnemigaRebastecimiento.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveEnemigaRebastecimiento_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveEnemigaRebastecimiento>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveEnemigaRebastecimiento_Statics::ClassParams = {
		&ANaveEnemigaRebastecimiento::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANaveEnemigaRebastecimiento_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemigaRebastecimiento_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveEnemigaRebastecimiento()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveEnemigaRebastecimiento_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveEnemigaRebastecimiento, 448521518);
	template<> GALAGA_USFX_1_API UClass* StaticClass<ANaveEnemigaRebastecimiento>()
	{
		return ANaveEnemigaRebastecimiento::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveEnemigaRebastecimiento(Z_Construct_UClass_ANaveEnemigaRebastecimiento, &ANaveEnemigaRebastecimiento::StaticClass, TEXT("/Script/GALAGA_USFX_1"), TEXT("ANaveEnemigaRebastecimiento"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveEnemigaRebastecimiento);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
