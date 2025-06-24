// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObjectDistribution/Public/Data/ODToolSubsystem.h"
#include "ObjectDistribution/Public/Data/ODMeshData.h"
#include "ObjectDistribution/Public/Data/ODPresetData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeODToolSubsystem() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
EDITORSUBSYSTEM_API UClass* Z_Construct_UClass_UEditorSubsystem();
ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
OBJECTDISTRIBUTION_API UClass* Z_Construct_UClass_UODSettingsObject_NoRegister();
OBJECTDISTRIBUTION_API UClass* Z_Construct_UClass_UODToolSettings_NoRegister();
OBJECTDISTRIBUTION_API UClass* Z_Construct_UClass_UODToolSubsystem();
OBJECTDISTRIBUTION_API UClass* Z_Construct_UClass_UODToolSubsystem_NoRegister();
OBJECTDISTRIBUTION_API UScriptStruct* Z_Construct_UScriptStruct_FDistObjectData();
OBJECTDISTRIBUTION_API UScriptStruct* Z_Construct_UScriptStruct_FPresetMixerMapData();
UPackage* Z_Construct_UPackage__Script_ObjectDistribution();
// End Cross Module References

// Begin Class UODToolSubsystem
void UODToolSubsystem::StaticRegisterNativesUODToolSubsystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UODToolSubsystem);
UClass* Z_Construct_UClass_UODToolSubsystem_NoRegister()
{
	return UODToolSubsystem::StaticClass();
}
struct Z_Construct_UClass_UODToolSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Data/ODToolSubsystem.h" },
		{ "ModuleRelativePath", "Public/Data/ODToolSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ODToolSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/ODToolSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PresetData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/ODToolSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PresetColorMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/ODToolSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SettingsObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/ODToolSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PresetMixerMapData_MetaData[] = {
		{ "Comment", "//This data updated automatically when a preset checked or unchecked\n" },
		{ "ModuleRelativePath", "Public/Data/ODToolSubsystem.h" },
		{ "ToolTip", "This data updated automatically when a preset checked or unchecked" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CreatedDistObjects_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/ODToolSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectDataMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/ODToolSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectDistributionData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/ODToolSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialRelativeLocations_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/ODToolSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialRelativeRotations_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/ODToolSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedPaletteSlotIndexes_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/ODToolSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastSelectIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/ODToolSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialTotal_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/ODToolSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DensityMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/ODToolSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ODToolSettings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PresetData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PresetColorMap_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PresetColorMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_PresetColorMap;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SettingsObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PresetMixerMapData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PresetMixerMapData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CreatedDistObjects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CreatedDistObjects;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectDataMap_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ObjectDataMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ObjectDataMap;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectDistributionData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ObjectDistributionData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InitialRelativeLocations_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InitialRelativeLocations;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InitialRelativeRotations_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InitialRelativeRotations;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SelectedPaletteSlotIndexes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SelectedPaletteSlotIndexes;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LastSelectIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InitialTotal;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DensityMap_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DensityMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_DensityMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UODToolSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UODToolSubsystem_Statics::NewProp_ODToolSettings = { "ODToolSettings", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UODToolSubsystem, ODToolSettings), Z_Construct_UClass_UODToolSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ODToolSettings_MetaData), NewProp_ODToolSettings_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UODToolSubsystem_Statics::NewProp_PresetData = { "PresetData", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UODToolSubsystem, PresetData), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PresetData_MetaData), NewProp_PresetData_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UODToolSubsystem_Statics::NewProp_PresetColorMap_ValueProp = { "PresetColorMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UODToolSubsystem_Statics::NewProp_PresetColorMap_Key_KeyProp = { "PresetColorMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UODToolSubsystem_Statics::NewProp_PresetColorMap = { "PresetColorMap", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UODToolSubsystem, PresetColorMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PresetColorMap_MetaData), NewProp_PresetColorMap_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UODToolSubsystem_Statics::NewProp_SettingsObject = { "SettingsObject", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UODToolSubsystem, SettingsObject), Z_Construct_UClass_UODSettingsObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SettingsObject_MetaData), NewProp_SettingsObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UODToolSubsystem_Statics::NewProp_PresetMixerMapData_Inner = { "PresetMixerMapData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPresetMixerMapData, METADATA_PARAMS(0, nullptr) }; // 2848401551
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UODToolSubsystem_Statics::NewProp_PresetMixerMapData = { "PresetMixerMapData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UODToolSubsystem, PresetMixerMapData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PresetMixerMapData_MetaData), NewProp_PresetMixerMapData_MetaData) }; // 2848401551
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UODToolSubsystem_Statics::NewProp_CreatedDistObjects_Inner = { "CreatedDistObjects", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AStaticMeshActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UODToolSubsystem_Statics::NewProp_CreatedDistObjects = { "CreatedDistObjects", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UODToolSubsystem, CreatedDistObjects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CreatedDistObjects_MetaData), NewProp_CreatedDistObjects_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UODToolSubsystem_Statics::NewProp_ObjectDataMap_ValueProp = { "ObjectDataMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FDistObjectData, METADATA_PARAMS(0, nullptr) }; // 3413145670
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UODToolSubsystem_Statics::NewProp_ObjectDataMap_Key_KeyProp = { "ObjectDataMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UODToolSubsystem_Statics::NewProp_ObjectDataMap = { "ObjectDataMap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UODToolSubsystem, ObjectDataMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectDataMap_MetaData), NewProp_ObjectDataMap_MetaData) }; // 3413145670
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UODToolSubsystem_Statics::NewProp_ObjectDistributionData_Inner = { "ObjectDistributionData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDistObjectData, METADATA_PARAMS(0, nullptr) }; // 3413145670
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UODToolSubsystem_Statics::NewProp_ObjectDistributionData = { "ObjectDistributionData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UODToolSubsystem, ObjectDistributionData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectDistributionData_MetaData), NewProp_ObjectDistributionData_MetaData) }; // 3413145670
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UODToolSubsystem_Statics::NewProp_InitialRelativeLocations_Inner = { "InitialRelativeLocations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UODToolSubsystem_Statics::NewProp_InitialRelativeLocations = { "InitialRelativeLocations", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UODToolSubsystem, InitialRelativeLocations), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialRelativeLocations_MetaData), NewProp_InitialRelativeLocations_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UODToolSubsystem_Statics::NewProp_InitialRelativeRotations_Inner = { "InitialRelativeRotations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UODToolSubsystem_Statics::NewProp_InitialRelativeRotations = { "InitialRelativeRotations", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UODToolSubsystem, InitialRelativeRotations), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialRelativeRotations_MetaData), NewProp_InitialRelativeRotations_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UODToolSubsystem_Statics::NewProp_SelectedPaletteSlotIndexes_Inner = { "SelectedPaletteSlotIndexes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UODToolSubsystem_Statics::NewProp_SelectedPaletteSlotIndexes = { "SelectedPaletteSlotIndexes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UODToolSubsystem, SelectedPaletteSlotIndexes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedPaletteSlotIndexes_MetaData), NewProp_SelectedPaletteSlotIndexes_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UODToolSubsystem_Statics::NewProp_LastSelectIndex = { "LastSelectIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UODToolSubsystem, LastSelectIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastSelectIndex_MetaData), NewProp_LastSelectIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UODToolSubsystem_Statics::NewProp_InitialTotal = { "InitialTotal", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UODToolSubsystem, InitialTotal), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialTotal_MetaData), NewProp_InitialTotal_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UODToolSubsystem_Statics::NewProp_DensityMap_ValueProp = { "DensityMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UODToolSubsystem_Statics::NewProp_DensityMap_Key_KeyProp = { "DensityMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UODToolSubsystem_Statics::NewProp_DensityMap = { "DensityMap", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UODToolSubsystem, DensityMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DensityMap_MetaData), NewProp_DensityMap_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UODToolSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODToolSubsystem_Statics::NewProp_ODToolSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODToolSubsystem_Statics::NewProp_PresetData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODToolSubsystem_Statics::NewProp_PresetColorMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODToolSubsystem_Statics::NewProp_PresetColorMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODToolSubsystem_Statics::NewProp_PresetColorMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODToolSubsystem_Statics::NewProp_SettingsObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODToolSubsystem_Statics::NewProp_PresetMixerMapData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODToolSubsystem_Statics::NewProp_PresetMixerMapData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODToolSubsystem_Statics::NewProp_CreatedDistObjects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODToolSubsystem_Statics::NewProp_CreatedDistObjects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODToolSubsystem_Statics::NewProp_ObjectDataMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODToolSubsystem_Statics::NewProp_ObjectDataMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODToolSubsystem_Statics::NewProp_ObjectDataMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODToolSubsystem_Statics::NewProp_ObjectDistributionData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODToolSubsystem_Statics::NewProp_ObjectDistributionData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODToolSubsystem_Statics::NewProp_InitialRelativeLocations_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODToolSubsystem_Statics::NewProp_InitialRelativeLocations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODToolSubsystem_Statics::NewProp_InitialRelativeRotations_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODToolSubsystem_Statics::NewProp_InitialRelativeRotations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODToolSubsystem_Statics::NewProp_SelectedPaletteSlotIndexes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODToolSubsystem_Statics::NewProp_SelectedPaletteSlotIndexes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODToolSubsystem_Statics::NewProp_LastSelectIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODToolSubsystem_Statics::NewProp_InitialTotal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODToolSubsystem_Statics::NewProp_DensityMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODToolSubsystem_Statics::NewProp_DensityMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODToolSubsystem_Statics::NewProp_DensityMap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UODToolSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UODToolSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEditorSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_ObjectDistribution,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UODToolSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UODToolSubsystem_Statics::ClassParams = {
	&UODToolSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UODToolSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UODToolSubsystem_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UODToolSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UODToolSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UODToolSubsystem()
{
	if (!Z_Registration_Info_UClass_UODToolSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UODToolSubsystem.OuterSingleton, Z_Construct_UClass_UODToolSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UODToolSubsystem.OuterSingleton;
}
template<> OBJECTDISTRIBUTION_API UClass* StaticClass<UODToolSubsystem>()
{
	return UODToolSubsystem::StaticClass();
}
UODToolSubsystem::UODToolSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UODToolSubsystem);
UODToolSubsystem::~UODToolSubsystem() {}
// End Class UODToolSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ObjectDistribution_Public_Data_ODToolSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UODToolSubsystem, UODToolSubsystem::StaticClass, TEXT("UODToolSubsystem"), &Z_Registration_Info_UClass_UODToolSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UODToolSubsystem), 1368485674U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ObjectDistribution_Public_Data_ODToolSubsystem_h_2351078039(TEXT("/Script/ObjectDistribution"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ObjectDistribution_Public_Data_ODToolSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ObjectDistribution_Public_Data_ODToolSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
