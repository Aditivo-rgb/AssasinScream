// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularBuilding/Public/UI/MBModularBuildingSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMBModularBuildingSettings() {}

// Begin Cross Module References
MODULARBUILDING_API UClass* Z_Construct_UClass_UMBMBuildingSettingsObj_NoRegister();
MODULARBUILDING_API UClass* Z_Construct_UClass_UMBModularBuildingSettings();
MODULARBUILDING_API UClass* Z_Construct_UClass_UMBModularBuildingSettings_NoRegister();
SCRIPTABLEEDITORWIDGETS_API UClass* Z_Construct_UClass_UDetailsView_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_ModularBuilding();
// End Cross Module References

// Begin Class UMBModularBuildingSettings Function OnPlacementTypeChanged
struct Z_Construct_UFunction_UMBModularBuildingSettings_OnPlacementTypeChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/MBModularBuildingSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMBModularBuildingSettings_OnPlacementTypeChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMBModularBuildingSettings, nullptr, "OnPlacementTypeChanged", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBModularBuildingSettings_OnPlacementTypeChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMBModularBuildingSettings_OnPlacementTypeChanged_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMBModularBuildingSettings_OnPlacementTypeChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMBModularBuildingSettings_OnPlacementTypeChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMBModularBuildingSettings::execOnPlacementTypeChanged)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPlacementTypeChanged();
	P_NATIVE_END;
}
// End Class UMBModularBuildingSettings Function OnPlacementTypeChanged

// Begin Class UMBModularBuildingSettings Function PlacementTypeBtnPressed
struct Z_Construct_UFunction_UMBModularBuildingSettings_PlacementTypeBtnPressed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/MBModularBuildingSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMBModularBuildingSettings_PlacementTypeBtnPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMBModularBuildingSettings, nullptr, "PlacementTypeBtnPressed", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBModularBuildingSettings_PlacementTypeBtnPressed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMBModularBuildingSettings_PlacementTypeBtnPressed_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMBModularBuildingSettings_PlacementTypeBtnPressed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMBModularBuildingSettings_PlacementTypeBtnPressed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMBModularBuildingSettings::execPlacementTypeBtnPressed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlacementTypeBtnPressed();
	P_NATIVE_END;
}
// End Class UMBModularBuildingSettings Function PlacementTypeBtnPressed

// Begin Class UMBModularBuildingSettings
void UMBModularBuildingSettings::StaticRegisterNativesUMBModularBuildingSettings()
{
	UClass* Class = UMBModularBuildingSettings::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnPlacementTypeChanged", &UMBModularBuildingSettings::execOnPlacementTypeChanged },
		{ "PlacementTypeBtnPressed", &UMBModularBuildingSettings::execPlacementTypeBtnPressed },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMBModularBuildingSettings);
UClass* Z_Construct_UClass_UMBModularBuildingSettings_NoRegister()
{
	return UMBModularBuildingSettings::StaticClass();
}
struct Z_Construct_UClass_UMBModularBuildingSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/MBModularBuildingSettings.h" },
		{ "ModuleRelativePath", "Public/UI/MBModularBuildingSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuildingSettingsObj_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/MBModularBuildingSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlacementTypeBtn_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MBModularBuildingSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlacementTypeText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MBModularBuildingSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MBDetails_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MBModularBuildingSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BuildingSettingsObj;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlacementTypeBtn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlacementTypeText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MBDetails;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMBModularBuildingSettings_OnPlacementTypeChanged, "OnPlacementTypeChanged" }, // 2164114577
		{ &Z_Construct_UFunction_UMBModularBuildingSettings_PlacementTypeBtnPressed, "PlacementTypeBtnPressed" }, // 1266432008
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMBModularBuildingSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMBModularBuildingSettings_Statics::NewProp_BuildingSettingsObj = { "BuildingSettingsObj", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBModularBuildingSettings, BuildingSettingsObj), Z_Construct_UClass_UMBMBuildingSettingsObj_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuildingSettingsObj_MetaData), NewProp_BuildingSettingsObj_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMBModularBuildingSettings_Statics::NewProp_PlacementTypeBtn = { "PlacementTypeBtn", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBModularBuildingSettings, PlacementTypeBtn), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlacementTypeBtn_MetaData), NewProp_PlacementTypeBtn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMBModularBuildingSettings_Statics::NewProp_PlacementTypeText = { "PlacementTypeText", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBModularBuildingSettings, PlacementTypeText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlacementTypeText_MetaData), NewProp_PlacementTypeText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMBModularBuildingSettings_Statics::NewProp_MBDetails = { "MBDetails", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBModularBuildingSettings, MBDetails), Z_Construct_UClass_UDetailsView_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MBDetails_MetaData), NewProp_MBDetails_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMBModularBuildingSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBModularBuildingSettings_Statics::NewProp_BuildingSettingsObj,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBModularBuildingSettings_Statics::NewProp_PlacementTypeBtn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBModularBuildingSettings_Statics::NewProp_PlacementTypeText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBModularBuildingSettings_Statics::NewProp_MBDetails,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMBModularBuildingSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMBModularBuildingSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ModularBuilding,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMBModularBuildingSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMBModularBuildingSettings_Statics::ClassParams = {
	&UMBModularBuildingSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMBModularBuildingSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMBModularBuildingSettings_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMBModularBuildingSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UMBModularBuildingSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMBModularBuildingSettings()
{
	if (!Z_Registration_Info_UClass_UMBModularBuildingSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMBModularBuildingSettings.OuterSingleton, Z_Construct_UClass_UMBModularBuildingSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMBModularBuildingSettings.OuterSingleton;
}
template<> MODULARBUILDING_API UClass* StaticClass<UMBModularBuildingSettings>()
{
	return UMBModularBuildingSettings::StaticClass();
}
UMBModularBuildingSettings::UMBModularBuildingSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMBModularBuildingSettings);
UMBModularBuildingSettings::~UMBModularBuildingSettings() {}
// End Class UMBModularBuildingSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBModularBuildingSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMBModularBuildingSettings, UMBModularBuildingSettings::StaticClass, TEXT("UMBModularBuildingSettings"), &Z_Registration_Info_UClass_UMBModularBuildingSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMBModularBuildingSettings), 2363252902U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBModularBuildingSettings_h_2076142822(TEXT("/Script/ModularBuilding"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBModularBuildingSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBModularBuildingSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
