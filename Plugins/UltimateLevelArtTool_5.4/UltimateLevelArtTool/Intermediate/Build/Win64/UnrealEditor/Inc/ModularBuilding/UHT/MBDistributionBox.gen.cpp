// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularBuilding/Public/Building/MBDistributionBox.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMBDistributionBox() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
MODULARBUILDING_API UClass* Z_Construct_UClass_UMBDistributionBox();
MODULARBUILDING_API UClass* Z_Construct_UClass_UMBDistributionBox_NoRegister();
MODULARBUILDING_API UClass* Z_Construct_UClass_UMBPropDistributionBase();
UPackage* Z_Construct_UPackage__Script_ModularBuilding();
// End Cross Module References

// Begin Class UMBDistributionBox
void UMBDistributionBox::StaticRegisterNativesUMBDistributionBox()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMBDistributionBox);
UClass* Z_Construct_UClass_UMBDistributionBox_NoRegister()
{
	return UMBDistributionBox::StaticClass();
}
struct Z_Construct_UClass_UMBDistributionBox_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Building/MBDistributionBox.h" },
		{ "ModuleRelativePath", "Public/Building/MBDistributionBox.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnRange_MetaData[] = {
		{ "Category", "Distribution|Box" },
		{ "ModuleRelativePath", "Public/Building/MBDistributionBox.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnRange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMBDistributionBox>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMBDistributionBox_Statics::NewProp_SpawnRange = { "SpawnRange", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBDistributionBox, SpawnRange), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnRange_MetaData), NewProp_SpawnRange_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMBDistributionBox_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBDistributionBox_Statics::NewProp_SpawnRange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMBDistributionBox_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMBDistributionBox_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMBPropDistributionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ModularBuilding,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMBDistributionBox_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMBDistributionBox_Statics::ClassParams = {
	&UMBDistributionBox::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMBDistributionBox_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMBDistributionBox_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMBDistributionBox_Statics::Class_MetaDataParams), Z_Construct_UClass_UMBDistributionBox_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMBDistributionBox()
{
	if (!Z_Registration_Info_UClass_UMBDistributionBox.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMBDistributionBox.OuterSingleton, Z_Construct_UClass_UMBDistributionBox_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMBDistributionBox.OuterSingleton;
}
template<> MODULARBUILDING_API UClass* StaticClass<UMBDistributionBox>()
{
	return UMBDistributionBox::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMBDistributionBox);
UMBDistributionBox::~UMBDistributionBox() {}
// End Class UMBDistributionBox

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Building_MBDistributionBox_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMBDistributionBox, UMBDistributionBox::StaticClass, TEXT("UMBDistributionBox"), &Z_Registration_Info_UClass_UMBDistributionBox, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMBDistributionBox), 2388013416U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Building_MBDistributionBox_h_351663386(TEXT("/Script/ModularBuilding"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Building_MBDistributionBox_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Building_MBDistributionBox_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
