// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularBuilding/Public/Building/MBCircleDistribution.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMBCircleDistribution() {}

// Begin Cross Module References
MODULARBUILDING_API UClass* Z_Construct_UClass_UMBCircleDistribution();
MODULARBUILDING_API UClass* Z_Construct_UClass_UMBCircleDistribution_NoRegister();
MODULARBUILDING_API UClass* Z_Construct_UClass_UMBPropDistributionBase();
UPackage* Z_Construct_UPackage__Script_ModularBuilding();
// End Cross Module References

// Begin Class UMBCircleDistribution
void UMBCircleDistribution::StaticRegisterNativesUMBCircleDistribution()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMBCircleDistribution);
UClass* Z_Construct_UClass_UMBCircleDistribution_NoRegister()
{
	return UMBCircleDistribution::StaticClass();
}
struct Z_Construct_UClass_UMBCircleDistribution_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Building/MBCircleDistribution.h" },
		{ "ModuleRelativePath", "Public/Building/MBCircleDistribution.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArcAngle_MetaData[] = {
		{ "Category", "Distribution|Circle" },
		{ "ModuleRelativePath", "Public/Building/MBCircleDistribution.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[] = {
		{ "Category", "Distribution|Circle" },
		{ "ModuleRelativePath", "Public/Building/MBCircleDistribution.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "Category", "Distribution|Circle" },
		{ "ModuleRelativePath", "Public/Building/MBCircleDistribution.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ArcAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMBCircleDistribution>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMBCircleDistribution_Statics::NewProp_ArcAngle = { "ArcAngle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBCircleDistribution, ArcAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArcAngle_MetaData), NewProp_ArcAngle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMBCircleDistribution_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBCircleDistribution, Offset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Offset_MetaData), NewProp_Offset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMBCircleDistribution_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBCircleDistribution, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMBCircleDistribution_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBCircleDistribution_Statics::NewProp_ArcAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBCircleDistribution_Statics::NewProp_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBCircleDistribution_Statics::NewProp_Radius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMBCircleDistribution_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMBCircleDistribution_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMBPropDistributionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ModularBuilding,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMBCircleDistribution_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMBCircleDistribution_Statics::ClassParams = {
	&UMBCircleDistribution::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMBCircleDistribution_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMBCircleDistribution_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMBCircleDistribution_Statics::Class_MetaDataParams), Z_Construct_UClass_UMBCircleDistribution_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMBCircleDistribution()
{
	if (!Z_Registration_Info_UClass_UMBCircleDistribution.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMBCircleDistribution.OuterSingleton, Z_Construct_UClass_UMBCircleDistribution_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMBCircleDistribution.OuterSingleton;
}
template<> MODULARBUILDING_API UClass* StaticClass<UMBCircleDistribution>()
{
	return UMBCircleDistribution::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMBCircleDistribution);
UMBCircleDistribution::~UMBCircleDistribution() {}
// End Class UMBCircleDistribution

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Building_MBCircleDistribution_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMBCircleDistribution, UMBCircleDistribution::StaticClass, TEXT("UMBCircleDistribution"), &Z_Registration_Info_UClass_UMBCircleDistribution, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMBCircleDistribution), 3359048284U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Building_MBCircleDistribution_h_1955646168(TEXT("/Script/ModularBuilding"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Building_MBCircleDistribution_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Building_MBCircleDistribution_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
