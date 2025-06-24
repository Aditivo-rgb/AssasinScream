// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularBuilding/Public/Building/MBTDDistribution.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMBTDDistribution() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
MODULARBUILDING_API UClass* Z_Construct_UClass_UMBPropDistributionBase();
MODULARBUILDING_API UClass* Z_Construct_UClass_UMBTDDistribution();
MODULARBUILDING_API UClass* Z_Construct_UClass_UMBTDDistribution_NoRegister();
UPackage* Z_Construct_UPackage__Script_ModularBuilding();
// End Cross Module References

// Begin Class UMBTDDistribution
void UMBTDDistribution::StaticRegisterNativesUMBTDDistribution()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMBTDDistribution);
UClass* Z_Construct_UClass_UMBTDDistribution_NoRegister()
{
	return UMBTDDistribution::StaticClass();
}
struct Z_Construct_UClass_UMBTDDistribution_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Building/MBTDDistribution.h" },
		{ "ModuleRelativePath", "Public/Building/MBTDDistribution.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridSize_MetaData[] = {
		{ "Category", "Distribution|3D Grid" },
		{ "ModuleRelativePath", "Public/Building/MBTDDistribution.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridLength_MetaData[] = {
		{ "Category", "Distribution|3D Grid" },
		{ "ModuleRelativePath", "Public/Building/MBTDDistribution.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GridSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GridLength;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMBTDDistribution>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMBTDDistribution_Statics::NewProp_GridSize = { "GridSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBTDDistribution, GridSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridSize_MetaData), NewProp_GridSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMBTDDistribution_Statics::NewProp_GridLength = { "GridLength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBTDDistribution, GridLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridLength_MetaData), NewProp_GridLength_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMBTDDistribution_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBTDDistribution_Statics::NewProp_GridSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBTDDistribution_Statics::NewProp_GridLength,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMBTDDistribution_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMBTDDistribution_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMBPropDistributionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ModularBuilding,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMBTDDistribution_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMBTDDistribution_Statics::ClassParams = {
	&UMBTDDistribution::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMBTDDistribution_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMBTDDistribution_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMBTDDistribution_Statics::Class_MetaDataParams), Z_Construct_UClass_UMBTDDistribution_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMBTDDistribution()
{
	if (!Z_Registration_Info_UClass_UMBTDDistribution.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMBTDDistribution.OuterSingleton, Z_Construct_UClass_UMBTDDistribution_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMBTDDistribution.OuterSingleton;
}
template<> MODULARBUILDING_API UClass* StaticClass<UMBTDDistribution>()
{
	return UMBTDDistribution::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMBTDDistribution);
UMBTDDistribution::~UMBTDDistribution() {}
// End Class UMBTDDistribution

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Building_MBTDDistribution_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMBTDDistribution, UMBTDDistribution::StaticClass, TEXT("UMBTDDistribution"), &Z_Registration_Info_UClass_UMBTDDistribution, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMBTDDistribution), 358474008U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Building_MBTDDistribution_h_4001973487(TEXT("/Script/ModularBuilding"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Building_MBTDDistribution_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Building_MBTDDistribution_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
