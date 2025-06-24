// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularBuilding/Public/UI/MBPropActionSettings.h"
#include "ModularBuilding/Public/Data/MBModularEnum.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMBPropActionSettings() {}

// Begin Cross Module References
MODULARBUILDING_API UClass* Z_Construct_UClass_UMBPropActionSettings();
MODULARBUILDING_API UClass* Z_Construct_UClass_UMBPropActionSettings_NoRegister();
MODULARBUILDING_API UClass* Z_Construct_UClass_UMBPropDistributionBase_NoRegister();
MODULARBUILDING_API UScriptStruct* Z_Construct_UScriptStruct_FDistributionBaseData();
SCRIPTABLEEDITORWIDGETS_API UClass* Z_Construct_UClass_UDetailsView_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_ModularBuilding();
// End Cross Module References

// Begin Class UMBPropActionSettings
void UMBPropActionSettings::StaticRegisterNativesUMBPropActionSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMBPropActionSettings);
UClass* Z_Construct_UClass_UMBPropActionSettings_NoRegister()
{
	return UMBPropActionSettings::StaticClass();
}
struct Z_Construct_UClass_UMBPropActionSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/MBPropActionSettings.h" },
		{ "ModuleRelativePath", "Public/UI/MBPropActionSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropDistributionDetails_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Prop Distribution" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MBPropActionSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropDistributionBase_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/MBPropActionSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistributionBaseData_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/MBPropActionSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PropDistributionDetails;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PropDistributionBase;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DistributionBaseData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMBPropActionSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMBPropActionSettings_Statics::NewProp_PropDistributionDetails = { "PropDistributionDetails", nullptr, (EPropertyFlags)0x012408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBPropActionSettings, PropDistributionDetails), Z_Construct_UClass_UDetailsView_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropDistributionDetails_MetaData), NewProp_PropDistributionDetails_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMBPropActionSettings_Statics::NewProp_PropDistributionBase = { "PropDistributionBase", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBPropActionSettings, PropDistributionBase), Z_Construct_UClass_UMBPropDistributionBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropDistributionBase_MetaData), NewProp_PropDistributionBase_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMBPropActionSettings_Statics::NewProp_DistributionBaseData = { "DistributionBaseData", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBPropActionSettings, DistributionBaseData), Z_Construct_UScriptStruct_FDistributionBaseData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistributionBaseData_MetaData), NewProp_DistributionBaseData_MetaData) }; // 1915448655
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMBPropActionSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBPropActionSettings_Statics::NewProp_PropDistributionDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBPropActionSettings_Statics::NewProp_PropDistributionBase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBPropActionSettings_Statics::NewProp_DistributionBaseData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMBPropActionSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMBPropActionSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ModularBuilding,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMBPropActionSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMBPropActionSettings_Statics::ClassParams = {
	&UMBPropActionSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMBPropActionSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMBPropActionSettings_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMBPropActionSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UMBPropActionSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMBPropActionSettings()
{
	if (!Z_Registration_Info_UClass_UMBPropActionSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMBPropActionSettings.OuterSingleton, Z_Construct_UClass_UMBPropActionSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMBPropActionSettings.OuterSingleton;
}
template<> MODULARBUILDING_API UClass* StaticClass<UMBPropActionSettings>()
{
	return UMBPropActionSettings::StaticClass();
}
UMBPropActionSettings::UMBPropActionSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMBPropActionSettings);
UMBPropActionSettings::~UMBPropActionSettings() {}
// End Class UMBPropActionSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBPropActionSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMBPropActionSettings, UMBPropActionSettings::StaticClass, TEXT("UMBPropActionSettings"), &Z_Registration_Info_UClass_UMBPropActionSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMBPropActionSettings), 3912188755U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBPropActionSettings_h_3534006228(TEXT("/Script/ModularBuilding"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBPropActionSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBPropActionSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
