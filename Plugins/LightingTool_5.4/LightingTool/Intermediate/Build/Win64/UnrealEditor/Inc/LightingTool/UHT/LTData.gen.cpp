// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LightingTool/Public/Data/LTData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLTData() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
LIGHTINGTOOL_API UEnum* Z_Construct_UEnum_LightingTool_ELTLightingToolType();
LIGHTINGTOOL_API UEnum* Z_Construct_UEnum_LightingTool_ELTLightmapPreset();
LIGHTINGTOOL_API UEnum* Z_Construct_UEnum_LightingTool_ELTLightType();
LIGHTINGTOOL_API UScriptStruct* Z_Construct_UScriptStruct_FLTAssetViewData();
UPackage* Z_Construct_UPackage__Script_LightingTool();
// End Cross Module References

// Begin Enum ELTLightingToolType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELTLightingToolType;
static UEnum* ELTLightingToolType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELTLightingToolType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELTLightingToolType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LightingTool_ELTLightingToolType, (UObject*)Z_Construct_UPackage__Script_LightingTool(), TEXT("ELTLightingToolType"));
	}
	return Z_Registration_Info_UEnum_ELTLightingToolType.OuterSingleton;
}
template<> LIGHTINGTOOL_API UEnum* StaticEnum<ELTLightingToolType>()
{
	return ELTLightingToolType_StaticEnum();
}
struct Z_Construct_UEnum_LightingTool_ELTLightingToolType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Lighting Tool" },
		{ "HDRIManager.DisplayName", "HDRI Tool" },
		{ "HDRIManager.Name", "ELTLightingToolType::HDRIManager" },
		{ "LightMapTool.DisplayName", "Light Map Tool" },
		{ "LightMapTool.Name", "ELTLightingToolType::LightMapTool" },
		{ "LightRenderTool.DisplayName", "Light Render Settings Tool" },
		{ "LightRenderTool.Name", "ELTLightingToolType::LightRenderTool" },
		{ "LightsTool.DisplayName", "Lights Tool" },
		{ "LightsTool.Name", "ELTLightingToolType::LightsTool" },
		{ "ModuleRelativePath", "Public/Data/LTData.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "ELTLightingToolType::None" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELTLightingToolType::None", (int64)ELTLightingToolType::None },
		{ "ELTLightingToolType::LightMapTool", (int64)ELTLightingToolType::LightMapTool },
		{ "ELTLightingToolType::LightsTool", (int64)ELTLightingToolType::LightsTool },
		{ "ELTLightingToolType::LightRenderTool", (int64)ELTLightingToolType::LightRenderTool },
		{ "ELTLightingToolType::HDRIManager", (int64)ELTLightingToolType::HDRIManager },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LightingTool_ELTLightingToolType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_LightingTool,
	nullptr,
	"ELTLightingToolType",
	"ELTLightingToolType",
	Z_Construct_UEnum_LightingTool_ELTLightingToolType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_LightingTool_ELTLightingToolType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_LightingTool_ELTLightingToolType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_LightingTool_ELTLightingToolType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_LightingTool_ELTLightingToolType()
{
	if (!Z_Registration_Info_UEnum_ELTLightingToolType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELTLightingToolType.InnerSingleton, Z_Construct_UEnum_LightingTool_ELTLightingToolType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELTLightingToolType.InnerSingleton;
}
// End Enum ELTLightingToolType

// Begin Enum ELTLightmapPreset
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELTLightmapPreset;
static UEnum* ELTLightmapPreset_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELTLightmapPreset.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELTLightmapPreset.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LightingTool_ELTLightmapPreset, (UObject*)Z_Construct_UPackage__Script_LightingTool(), TEXT("ELTLightmapPreset"));
	}
	return Z_Registration_Info_UEnum_ELTLightmapPreset.OuterSingleton;
}
template<> LIGHTINGTOOL_API UEnum* StaticEnum<ELTLightmapPreset>()
{
	return ELTLightmapPreset_StaticEnum();
}
struct Z_Construct_UEnum_LightingTool_ELTLightmapPreset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BestPerformance.DisplayName", "Best Performance" },
		{ "BestPerformance.Name", "ELTLightmapPreset::BestPerformance" },
		{ "BestQuality.DisplayName", "Best Quality" },
		{ "BestQuality.Name", "ELTLightmapPreset::BestQuality" },
		{ "BlueprintType", "true" },
		{ "Category", "Lighting Tool" },
		{ "ModuleRelativePath", "Public/Data/LTData.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "ELTLightmapPreset::None" },
		{ "Performance.DisplayName", "Performance" },
		{ "Performance.Name", "ELTLightmapPreset::Performance" },
		{ "Quality.DisplayName", "Quality" },
		{ "Quality.Name", "ELTLightmapPreset::Quality" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELTLightmapPreset::None", (int64)ELTLightmapPreset::None },
		{ "ELTLightmapPreset::BestPerformance", (int64)ELTLightmapPreset::BestPerformance },
		{ "ELTLightmapPreset::Performance", (int64)ELTLightmapPreset::Performance },
		{ "ELTLightmapPreset::Quality", (int64)ELTLightmapPreset::Quality },
		{ "ELTLightmapPreset::BestQuality", (int64)ELTLightmapPreset::BestQuality },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LightingTool_ELTLightmapPreset_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_LightingTool,
	nullptr,
	"ELTLightmapPreset",
	"ELTLightmapPreset",
	Z_Construct_UEnum_LightingTool_ELTLightmapPreset_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_LightingTool_ELTLightmapPreset_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_LightingTool_ELTLightmapPreset_Statics::Enum_MetaDataParams), Z_Construct_UEnum_LightingTool_ELTLightmapPreset_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_LightingTool_ELTLightmapPreset()
{
	if (!Z_Registration_Info_UEnum_ELTLightmapPreset.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELTLightmapPreset.InnerSingleton, Z_Construct_UEnum_LightingTool_ELTLightmapPreset_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELTLightmapPreset.InnerSingleton;
}
// End Enum ELTLightmapPreset

// Begin Enum ELTLightType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELTLightType;
static UEnum* ELTLightType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELTLightType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELTLightType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LightingTool_ELTLightType, (UObject*)Z_Construct_UPackage__Script_LightingTool(), TEXT("ELTLightType"));
	}
	return Z_Registration_Info_UEnum_ELTLightType.OuterSingleton;
}
template<> LIGHTINGTOOL_API UEnum* StaticEnum<ELTLightType>()
{
	return ELTLightType_StaticEnum();
}
struct Z_Construct_UEnum_LightingTool_ELTLightType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Breathing.DisplayName", "Breathing" },
		{ "Breathing.Name", "ELTLightType::Breathing" },
		{ "Category", "Lighting Tool" },
		{ "Flickering.DisplayName", "Flickering" },
		{ "Flickering.Name", "ELTLightType::Flickering" },
		{ "ModuleRelativePath", "Public/Data/LTData.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "ELTLightType::None" },
		{ "Standard.DisplayName", "Standard" },
		{ "Standard.Name", "ELTLightType::Standard" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELTLightType::None", (int64)ELTLightType::None },
		{ "ELTLightType::Standard", (int64)ELTLightType::Standard },
		{ "ELTLightType::Flickering", (int64)ELTLightType::Flickering },
		{ "ELTLightType::Breathing", (int64)ELTLightType::Breathing },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LightingTool_ELTLightType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_LightingTool,
	nullptr,
	"ELTLightType",
	"ELTLightType",
	Z_Construct_UEnum_LightingTool_ELTLightType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_LightingTool_ELTLightType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_LightingTool_ELTLightType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_LightingTool_ELTLightType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_LightingTool_ELTLightType()
{
	if (!Z_Registration_Info_UEnum_ELTLightType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELTLightType.InnerSingleton, Z_Construct_UEnum_LightingTool_ELTLightType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELTLightType.InnerSingleton;
}
// End Enum ELTLightType

// Begin ScriptStruct FLTAssetViewData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LTAssetViewData;
class UScriptStruct* FLTAssetViewData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LTAssetViewData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LTAssetViewData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLTAssetViewData, (UObject*)Z_Construct_UPackage__Script_LightingTool(), TEXT("LTAssetViewData"));
	}
	return Z_Registration_Info_UScriptStruct_LTAssetViewData.OuterSingleton;
}
template<> LIGHTINGTOOL_API UScriptStruct* StaticStruct<FLTAssetViewData>()
{
	return FLTAssetViewData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLTAssetViewData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Data/LTData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetName_MetaData[] = {
		{ "Category", "Lighting Tool" },
		{ "ModuleRelativePath", "Public/Data/LTData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectPath_MetaData[] = {
		{ "Category", "Lighting Tool" },
		{ "ModuleRelativePath", "Public/Data/LTData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentDensity_MetaData[] = {
		{ "Category", "Lighting Tool" },
		{ "ModuleRelativePath", "Public/Data/LTData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightmapResolution_MetaData[] = {
		{ "Category", "Lighting Tool" },
		{ "ModuleRelativePath", "Public/Data/LTData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CoordIndex_MetaData[] = {
		{ "Category", "Lighting Tool" },
		{ "ModuleRelativePath", "Public/Data/LTData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[] = {
		{ "Category", "Lighting Tool" },
		{ "ModuleRelativePath", "Public/Data/LTData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "Category", "Lighting Tool" },
		{ "ModuleRelativePath", "Public/Data/LTData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetIndex_MetaData[] = {
		{ "Category", "Lighting Tool" },
		{ "ModuleRelativePath", "Public/Data/LTData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsSelected_MetaData[] = {
		{ "Category", "Lighting Tool" },
		{ "ModuleRelativePath", "Public/Data/LTData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_AssetName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ObjectPath;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentDensity;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LightmapResolution;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CoordIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Icon;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AssetIndex;
	static void NewProp_bIsSelected_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSelected;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLTAssetViewData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLTAssetViewData_Statics::NewProp_AssetName = { "AssetName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLTAssetViewData, AssetName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetName_MetaData), NewProp_AssetName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLTAssetViewData_Statics::NewProp_ObjectPath = { "ObjectPath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLTAssetViewData, ObjectPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectPath_MetaData), NewProp_ObjectPath_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLTAssetViewData_Statics::NewProp_CurrentDensity = { "CurrentDensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLTAssetViewData, CurrentDensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentDensity_MetaData), NewProp_CurrentDensity_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLTAssetViewData_Statics::NewProp_LightmapResolution = { "LightmapResolution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLTAssetViewData, LightmapResolution), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightmapResolution_MetaData), NewProp_LightmapResolution_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLTAssetViewData_Statics::NewProp_CoordIndex = { "CoordIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLTAssetViewData, CoordIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CoordIndex_MetaData), NewProp_CoordIndex_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLTAssetViewData_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLTAssetViewData, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Icon_MetaData), NewProp_Icon_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLTAssetViewData_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLTAssetViewData, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLTAssetViewData_Statics::NewProp_AssetIndex = { "AssetIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLTAssetViewData, AssetIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetIndex_MetaData), NewProp_AssetIndex_MetaData) };
void Z_Construct_UScriptStruct_FLTAssetViewData_Statics::NewProp_bIsSelected_SetBit(void* Obj)
{
	((FLTAssetViewData*)Obj)->bIsSelected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLTAssetViewData_Statics::NewProp_bIsSelected = { "bIsSelected", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLTAssetViewData), &Z_Construct_UScriptStruct_FLTAssetViewData_Statics::NewProp_bIsSelected_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsSelected_MetaData), NewProp_bIsSelected_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLTAssetViewData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLTAssetViewData_Statics::NewProp_AssetName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLTAssetViewData_Statics::NewProp_ObjectPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLTAssetViewData_Statics::NewProp_CurrentDensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLTAssetViewData_Statics::NewProp_LightmapResolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLTAssetViewData_Statics::NewProp_CoordIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLTAssetViewData_Statics::NewProp_Icon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLTAssetViewData_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLTAssetViewData_Statics::NewProp_AssetIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLTAssetViewData_Statics::NewProp_bIsSelected,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLTAssetViewData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLTAssetViewData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LightingTool,
	nullptr,
	&NewStructOps,
	"LTAssetViewData",
	Z_Construct_UScriptStruct_FLTAssetViewData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLTAssetViewData_Statics::PropPointers),
	sizeof(FLTAssetViewData),
	alignof(FLTAssetViewData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLTAssetViewData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLTAssetViewData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLTAssetViewData()
{
	if (!Z_Registration_Info_UScriptStruct_LTAssetViewData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LTAssetViewData.InnerSingleton, Z_Construct_UScriptStruct_FLTAssetViewData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LTAssetViewData.InnerSingleton;
}
// End ScriptStruct FLTAssetViewData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_Data_LTData_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ELTLightingToolType_StaticEnum, TEXT("ELTLightingToolType"), &Z_Registration_Info_UEnum_ELTLightingToolType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4169488727U) },
		{ ELTLightmapPreset_StaticEnum, TEXT("ELTLightmapPreset"), &Z_Registration_Info_UEnum_ELTLightmapPreset, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2643897577U) },
		{ ELTLightType_StaticEnum, TEXT("ELTLightType"), &Z_Registration_Info_UEnum_ELTLightType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 613157306U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLTAssetViewData::StaticStruct, Z_Construct_UScriptStruct_FLTAssetViewData_Statics::NewStructOps, TEXT("LTAssetViewData"), &Z_Registration_Info_UScriptStruct_LTAssetViewData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLTAssetViewData), 1227170021U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_Data_LTData_h_2542766611(TEXT("/Script/LightingTool"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_Data_LTData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_Data_LTData_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_Data_LTData_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_Data_LTData_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
