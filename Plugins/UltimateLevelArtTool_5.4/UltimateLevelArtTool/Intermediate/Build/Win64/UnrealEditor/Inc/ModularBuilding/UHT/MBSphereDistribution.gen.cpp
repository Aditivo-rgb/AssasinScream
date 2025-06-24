// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularBuilding/Public/Building/MBSphereDistribution.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMBSphereDistribution() {}

// Begin Cross Module References
MODULARBUILDING_API UClass* Z_Construct_UClass_UMBPropDistributionBase();
MODULARBUILDING_API UClass* Z_Construct_UClass_UMBSphereDistribution();
MODULARBUILDING_API UClass* Z_Construct_UClass_UMBSphereDistribution_NoRegister();
UPackage* Z_Construct_UPackage__Script_ModularBuilding();
// End Cross Module References

// Begin Class UMBSphereDistribution
void UMBSphereDistribution::StaticRegisterNativesUMBSphereDistribution()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMBSphereDistribution);
UClass* Z_Construct_UClass_UMBSphereDistribution_NoRegister()
{
	return UMBSphereDistribution::StaticClass();
}
struct Z_Construct_UClass_UMBSphereDistribution_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Building/MBSphereDistribution.h" },
		{ "ModuleRelativePath", "Public/Building/MBSphereDistribution.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpiralWinding_MetaData[] = {
		{ "Category", "Distribution|Sphere" },
		{ "ModuleRelativePath", "Public/Building/MBSphereDistribution.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SphereRadius_MetaData[] = {
		{ "Category", "Distribution|Sphere" },
		{ "ModuleRelativePath", "Public/Building/MBSphereDistribution.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpiralWinding;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SphereRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMBSphereDistribution>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMBSphereDistribution_Statics::NewProp_SpiralWinding = { "SpiralWinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBSphereDistribution, SpiralWinding), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpiralWinding_MetaData), NewProp_SpiralWinding_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMBSphereDistribution_Statics::NewProp_SphereRadius = { "SphereRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBSphereDistribution, SphereRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SphereRadius_MetaData), NewProp_SphereRadius_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMBSphereDistribution_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBSphereDistribution_Statics::NewProp_SpiralWinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBSphereDistribution_Statics::NewProp_SphereRadius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMBSphereDistribution_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMBSphereDistribution_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMBPropDistributionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ModularBuilding,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMBSphereDistribution_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMBSphereDistribution_Statics::ClassParams = {
	&UMBSphereDistribution::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMBSphereDistribution_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMBSphereDistribution_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMBSphereDistribution_Statics::Class_MetaDataParams), Z_Construct_UClass_UMBSphereDistribution_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMBSphereDistribution()
{
	if (!Z_Registration_Info_UClass_UMBSphereDistribution.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMBSphereDistribution.OuterSingleton, Z_Construct_UClass_UMBSphereDistribution_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMBSphereDistribution.OuterSingleton;
}
template<> MODULARBUILDING_API UClass* StaticClass<UMBSphereDistribution>()
{
	return UMBSphereDistribution::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMBSphereDistribution);
UMBSphereDistribution::~UMBSphereDistribution() {}
// End Class UMBSphereDistribution

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Building_MBSphereDistribution_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMBSphereDistribution, UMBSphereDistribution::StaticClass, TEXT("UMBSphereDistribution"), &Z_Registration_Info_UClass_UMBSphereDistribution, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMBSphereDistribution), 3485485654U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Building_MBSphereDistribution_h_1499073682(TEXT("/Script/ModularBuilding"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Building_MBSphereDistribution_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Building_MBSphereDistribution_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
