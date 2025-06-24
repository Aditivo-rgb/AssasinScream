// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObjectDistribution/Public/ObjectDistribution/ODDistributionCube.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeODDistributionCube() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
OBJECTDISTRIBUTION_API UClass* Z_Construct_UClass_UODDistributionBase();
OBJECTDISTRIBUTION_API UClass* Z_Construct_UClass_UODDistributionCube();
OBJECTDISTRIBUTION_API UClass* Z_Construct_UClass_UODDistributionCube_NoRegister();
UPackage* Z_Construct_UPackage__Script_ObjectDistribution();
// End Cross Module References

// Begin Class UODDistributionCube
void UODDistributionCube::StaticRegisterNativesUODDistributionCube()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UODDistributionCube);
UClass* Z_Construct_UClass_UODDistributionCube_NoRegister()
{
	return UODDistributionCube::StaticClass();
}
struct Z_Construct_UClass_UODDistributionCube_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ObjectDistribution/ODDistributionCube.h" },
		{ "ModuleRelativePath", "Public/ObjectDistribution/ODDistributionCube.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleDistance_MetaData[] = {
		{ "Category", "Distribution" },
		{ "ModuleRelativePath", "Public/ObjectDistribution/ODDistributionCube.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRandomOffset_MetaData[] = {
		{ "Category", "Distribution" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/ObjectDistribution/ODDistributionCube.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomOffset_MetaData[] = {
		{ "Category", "Distribution" },
		{ "EditCondition", "bRandomOffset" },
		{ "ModuleRelativePath", "Public/ObjectDistribution/ODDistributionCube.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleDistance;
	static void NewProp_bRandomOffset_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRandomOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RandomOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UODDistributionCube>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UODDistributionCube_Statics::NewProp_ScaleDistance = { "ScaleDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UODDistributionCube, ScaleDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleDistance_MetaData), NewProp_ScaleDistance_MetaData) };
void Z_Construct_UClass_UODDistributionCube_Statics::NewProp_bRandomOffset_SetBit(void* Obj)
{
	((UODDistributionCube*)Obj)->bRandomOffset = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UODDistributionCube_Statics::NewProp_bRandomOffset = { "bRandomOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UODDistributionCube), &Z_Construct_UClass_UODDistributionCube_Statics::NewProp_bRandomOffset_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRandomOffset_MetaData), NewProp_bRandomOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UODDistributionCube_Statics::NewProp_RandomOffset = { "RandomOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UODDistributionCube, RandomOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomOffset_MetaData), NewProp_RandomOffset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UODDistributionCube_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODDistributionCube_Statics::NewProp_ScaleDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODDistributionCube_Statics::NewProp_bRandomOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODDistributionCube_Statics::NewProp_RandomOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UODDistributionCube_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UODDistributionCube_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UODDistributionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ObjectDistribution,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UODDistributionCube_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UODDistributionCube_Statics::ClassParams = {
	&UODDistributionCube::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UODDistributionCube_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UODDistributionCube_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UODDistributionCube_Statics::Class_MetaDataParams), Z_Construct_UClass_UODDistributionCube_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UODDistributionCube()
{
	if (!Z_Registration_Info_UClass_UODDistributionCube.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UODDistributionCube.OuterSingleton, Z_Construct_UClass_UODDistributionCube_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UODDistributionCube.OuterSingleton;
}
template<> OBJECTDISTRIBUTION_API UClass* StaticClass<UODDistributionCube>()
{
	return UODDistributionCube::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UODDistributionCube);
UODDistributionCube::~UODDistributionCube() {}
// End Class UODDistributionCube

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ObjectDistribution_Source_ObjectDistribution_Public_ObjectDistribution_ODDistributionCube_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UODDistributionCube, UODDistributionCube::StaticClass, TEXT("UODDistributionCube"), &Z_Registration_Info_UClass_UODDistributionCube, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UODDistributionCube), 457368790U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ObjectDistribution_Source_ObjectDistribution_Public_ObjectDistribution_ODDistributionCube_h_2192790397(TEXT("/Script/ObjectDistribution"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_ObjectDistribution_Source_ObjectDistribution_Public_ObjectDistribution_ODDistributionCube_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ObjectDistribution_Source_ObjectDistribution_Public_ObjectDistribution_ODDistributionCube_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
