// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularBuilding/Public/UI/MBPropBuildingSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMBPropBuildingSettings() {}

// Begin Cross Module References
MODULARBUILDING_API UClass* Z_Construct_UClass_UMBPBuildingSettingsObj_NoRegister();
MODULARBUILDING_API UClass* Z_Construct_UClass_UMBPropBuildingSettings();
MODULARBUILDING_API UClass* Z_Construct_UClass_UMBPropBuildingSettings_NoRegister();
SCRIPTABLEEDITORWIDGETS_API UClass* Z_Construct_UClass_UDetailsView_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_ModularBuilding();
// End Cross Module References

// Begin Class UMBPropBuildingSettings
void UMBPropBuildingSettings::StaticRegisterNativesUMBPropBuildingSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMBPropBuildingSettings);
UClass* Z_Construct_UClass_UMBPropBuildingSettings_NoRegister()
{
	return UMBPropBuildingSettings::StaticClass();
}
struct Z_Construct_UClass_UMBPropBuildingSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/MBPropBuildingSettings.h" },
		{ "ModuleRelativePath", "Public/UI/MBPropBuildingSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropBuildingSettingsObj_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/MBPropBuildingSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MBPDetails_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MBPropBuildingSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PropBuildingSettingsObj;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MBPDetails;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMBPropBuildingSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMBPropBuildingSettings_Statics::NewProp_PropBuildingSettingsObj = { "PropBuildingSettingsObj", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBPropBuildingSettings, PropBuildingSettingsObj), Z_Construct_UClass_UMBPBuildingSettingsObj_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropBuildingSettingsObj_MetaData), NewProp_PropBuildingSettingsObj_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMBPropBuildingSettings_Statics::NewProp_MBPDetails = { "MBPDetails", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBPropBuildingSettings, MBPDetails), Z_Construct_UClass_UDetailsView_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MBPDetails_MetaData), NewProp_MBPDetails_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMBPropBuildingSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBPropBuildingSettings_Statics::NewProp_PropBuildingSettingsObj,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBPropBuildingSettings_Statics::NewProp_MBPDetails,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMBPropBuildingSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMBPropBuildingSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ModularBuilding,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMBPropBuildingSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMBPropBuildingSettings_Statics::ClassParams = {
	&UMBPropBuildingSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMBPropBuildingSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMBPropBuildingSettings_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMBPropBuildingSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UMBPropBuildingSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMBPropBuildingSettings()
{
	if (!Z_Registration_Info_UClass_UMBPropBuildingSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMBPropBuildingSettings.OuterSingleton, Z_Construct_UClass_UMBPropBuildingSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMBPropBuildingSettings.OuterSingleton;
}
template<> MODULARBUILDING_API UClass* StaticClass<UMBPropBuildingSettings>()
{
	return UMBPropBuildingSettings::StaticClass();
}
UMBPropBuildingSettings::UMBPropBuildingSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMBPropBuildingSettings);
UMBPropBuildingSettings::~UMBPropBuildingSettings() {}
// End Class UMBPropBuildingSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBPropBuildingSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMBPropBuildingSettings, UMBPropBuildingSettings::StaticClass, TEXT("UMBPropBuildingSettings"), &Z_Registration_Info_UClass_UMBPropBuildingSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMBPropBuildingSettings), 354424932U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBPropBuildingSettings_h_1726449468(TEXT("/Script/ModularBuilding"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBPropBuildingSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBPropBuildingSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
