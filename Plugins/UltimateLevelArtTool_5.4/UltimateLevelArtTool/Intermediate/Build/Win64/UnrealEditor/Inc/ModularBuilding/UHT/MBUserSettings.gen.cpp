// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularBuilding/Public/Data/MBUserSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMBUserSettings() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
MODULARBUILDING_API UClass* Z_Construct_UClass_UMBUserSettings();
MODULARBUILDING_API UClass* Z_Construct_UClass_UMBUserSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_ModularBuilding();
// End Cross Module References

// Begin Class UMBUserSettings
void UMBUserSettings::StaticRegisterNativesUMBUserSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMBUserSettings);
UClass* Z_Construct_UClass_UMBUserSettings_NoRegister()
{
	return UMBUserSettings::StaticClass();
}
struct Z_Construct_UClass_UMBUserSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Data/MBUserSettings.h" },
		{ "ModuleRelativePath", "Public/Data/MBUserSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectTracingDistance_MetaData[] = {
		{ "Category", "Placement" },
		{ "ClampMax", "100000.000000" },
		{ "ClampMin", "5000.000000" },
		{ "ModuleRelativePath", "Public/Data/MBUserSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FreePlacementDistance_MetaData[] = {
		{ "Category", "Placement" },
		{ "ClampMax", "50000.000000" },
		{ "ClampMin", "500.000000" },
		{ "ModuleRelativePath", "Public/Data/MBUserSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UsePreviewShader_MetaData[] = {
		{ "Category", "Debugging" },
		{ "ModuleRelativePath", "Public/Data/MBUserSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaceableColor_MetaData[] = {
		{ "Category", "Debugging" },
		{ "ModuleRelativePath", "Public/Data/MBUserSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NotPlaceableColor_MetaData[] = {
		{ "Category", "Debugging" },
		{ "ModuleRelativePath", "Public/Data/MBUserSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReplaceableColor_MetaData[] = {
		{ "Category", "Debugging" },
		{ "ModuleRelativePath", "Public/Data/MBUserSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnableDirectionDebugger_MetaData[] = {
		{ "Category", "Debugging" },
		{ "ModuleRelativePath", "Public/Data/MBUserSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirectionDebugColor_MetaData[] = {
		{ "Category", "Debugging" },
		{ "ModuleRelativePath", "Public/Data/MBUserSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugThickness_MetaData[] = {
		{ "Category", "Debugging" },
		{ "ClampMax", "50.000000" },
		{ "ClampMin", "0.100000" },
		{ "ModuleRelativePath", "Public/Data/MBUserSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetSelectionColor_MetaData[] = {
		{ "Category", "User Interface" },
		{ "ModuleRelativePath", "Public/Data/MBUserSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollectionSelectionColor_MetaData[] = {
		{ "Category", "User Interface" },
		{ "ModuleRelativePath", "Public/Data/MBUserSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ObjectTracingDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FreePlacementDistance;
	static void NewProp_UsePreviewShader_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UsePreviewShader;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlaceableColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NotPlaceableColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReplaceableColor;
	static void NewProp_EnableDirectionDebugger_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableDirectionDebugger;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DirectionDebugColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DebugThickness;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AssetSelectionColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CollectionSelectionColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMBUserSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMBUserSettings_Statics::NewProp_ObjectTracingDistance = { "ObjectTracingDistance", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBUserSettings, ObjectTracingDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectTracingDistance_MetaData), NewProp_ObjectTracingDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMBUserSettings_Statics::NewProp_FreePlacementDistance = { "FreePlacementDistance", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBUserSettings, FreePlacementDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FreePlacementDistance_MetaData), NewProp_FreePlacementDistance_MetaData) };
void Z_Construct_UClass_UMBUserSettings_Statics::NewProp_UsePreviewShader_SetBit(void* Obj)
{
	((UMBUserSettings*)Obj)->UsePreviewShader = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMBUserSettings_Statics::NewProp_UsePreviewShader = { "UsePreviewShader", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMBUserSettings), &Z_Construct_UClass_UMBUserSettings_Statics::NewProp_UsePreviewShader_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UsePreviewShader_MetaData), NewProp_UsePreviewShader_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMBUserSettings_Statics::NewProp_PlaceableColor = { "PlaceableColor", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBUserSettings, PlaceableColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaceableColor_MetaData), NewProp_PlaceableColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMBUserSettings_Statics::NewProp_NotPlaceableColor = { "NotPlaceableColor", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBUserSettings, NotPlaceableColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NotPlaceableColor_MetaData), NewProp_NotPlaceableColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMBUserSettings_Statics::NewProp_ReplaceableColor = { "ReplaceableColor", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBUserSettings, ReplaceableColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReplaceableColor_MetaData), NewProp_ReplaceableColor_MetaData) };
void Z_Construct_UClass_UMBUserSettings_Statics::NewProp_EnableDirectionDebugger_SetBit(void* Obj)
{
	((UMBUserSettings*)Obj)->EnableDirectionDebugger = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMBUserSettings_Statics::NewProp_EnableDirectionDebugger = { "EnableDirectionDebugger", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMBUserSettings), &Z_Construct_UClass_UMBUserSettings_Statics::NewProp_EnableDirectionDebugger_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnableDirectionDebugger_MetaData), NewProp_EnableDirectionDebugger_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMBUserSettings_Statics::NewProp_DirectionDebugColor = { "DirectionDebugColor", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBUserSettings, DirectionDebugColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirectionDebugColor_MetaData), NewProp_DirectionDebugColor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMBUserSettings_Statics::NewProp_DebugThickness = { "DebugThickness", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBUserSettings, DebugThickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugThickness_MetaData), NewProp_DebugThickness_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMBUserSettings_Statics::NewProp_AssetSelectionColor = { "AssetSelectionColor", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBUserSettings, AssetSelectionColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetSelectionColor_MetaData), NewProp_AssetSelectionColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMBUserSettings_Statics::NewProp_CollectionSelectionColor = { "CollectionSelectionColor", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBUserSettings, CollectionSelectionColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollectionSelectionColor_MetaData), NewProp_CollectionSelectionColor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMBUserSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBUserSettings_Statics::NewProp_ObjectTracingDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBUserSettings_Statics::NewProp_FreePlacementDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBUserSettings_Statics::NewProp_UsePreviewShader,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBUserSettings_Statics::NewProp_PlaceableColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBUserSettings_Statics::NewProp_NotPlaceableColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBUserSettings_Statics::NewProp_ReplaceableColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBUserSettings_Statics::NewProp_EnableDirectionDebugger,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBUserSettings_Statics::NewProp_DirectionDebugColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBUserSettings_Statics::NewProp_DebugThickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBUserSettings_Statics::NewProp_AssetSelectionColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBUserSettings_Statics::NewProp_CollectionSelectionColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMBUserSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMBUserSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_ModularBuilding,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMBUserSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMBUserSettings_Statics::ClassParams = {
	&UMBUserSettings::StaticClass,
	"MBUserSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMBUserSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMBUserSettings_Statics::PropPointers),
	0,
	0x001000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMBUserSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UMBUserSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMBUserSettings()
{
	if (!Z_Registration_Info_UClass_UMBUserSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMBUserSettings.OuterSingleton, Z_Construct_UClass_UMBUserSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMBUserSettings.OuterSingleton;
}
template<> MODULARBUILDING_API UClass* StaticClass<UMBUserSettings>()
{
	return UMBUserSettings::StaticClass();
}
UMBUserSettings::UMBUserSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMBUserSettings);
UMBUserSettings::~UMBUserSettings() {}
// End Class UMBUserSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Data_MBUserSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMBUserSettings, UMBUserSettings::StaticClass, TEXT("UMBUserSettings"), &Z_Registration_Info_UClass_UMBUserSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMBUserSettings), 3256979427U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Data_MBUserSettings_h_1001737313(TEXT("/Script/ModularBuilding"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Data_MBUserSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Data_MBUserSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
