// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObjectDistribution/Public/Data/ODPresetData.h"
#include "ObjectDistribution/Public/Data/ODMeshData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeODPresetData() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
OBJECTDISTRIBUTION_API UScriptStruct* Z_Construct_UScriptStruct_FDistObjectData();
OBJECTDISTRIBUTION_API UScriptStruct* Z_Construct_UScriptStruct_FODPresetData();
OBJECTDISTRIBUTION_API UScriptStruct* Z_Construct_UScriptStruct_FPresetMixerMapData();
UPackage* Z_Construct_UPackage__Script_ObjectDistribution();
// End Cross Module References

// Begin ScriptStruct FODPresetData
static_assert(std::is_polymorphic<FODPresetData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FODPresetData cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ODPresetData;
class UScriptStruct* FODPresetData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ODPresetData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ODPresetData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FODPresetData, (UObject*)Z_Construct_UPackage__Script_ObjectDistribution(), TEXT("ODPresetData"));
	}
	return Z_Registration_Info_UScriptStruct_ODPresetData.OuterSingleton;
}
template<> OBJECTDISTRIBUTION_API UScriptStruct* StaticStruct<FODPresetData>()
{
	return FODPresetData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FODPresetData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Data/ODPresetData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PresetName_MetaData[] = {
		{ "Category", "Preset Data" },
		{ "ModuleRelativePath", "Public/Data/ODPresetData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PresetColor_MetaData[] = {
		{ "Category", "Preset Data" },
		{ "ModuleRelativePath", "Public/Data/ODPresetData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistObjectData_MetaData[] = {
		{ "Category", "Preset Data" },
		{ "ModuleRelativePath", "Public/Data/ODPresetData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_PresetName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PresetColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DistObjectData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DistObjectData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FODPresetData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FODPresetData_Statics::NewProp_PresetName = { "PresetName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FODPresetData, PresetName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PresetName_MetaData), NewProp_PresetName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FODPresetData_Statics::NewProp_PresetColor = { "PresetColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FODPresetData, PresetColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PresetColor_MetaData), NewProp_PresetColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FODPresetData_Statics::NewProp_DistObjectData_Inner = { "DistObjectData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDistObjectData, METADATA_PARAMS(0, nullptr) }; // 3413145670
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FODPresetData_Statics::NewProp_DistObjectData = { "DistObjectData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FODPresetData, DistObjectData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistObjectData_MetaData), NewProp_DistObjectData_MetaData) }; // 3413145670
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FODPresetData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FODPresetData_Statics::NewProp_PresetName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FODPresetData_Statics::NewProp_PresetColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FODPresetData_Statics::NewProp_DistObjectData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FODPresetData_Statics::NewProp_DistObjectData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FODPresetData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FODPresetData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ObjectDistribution,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"ODPresetData",
	Z_Construct_UScriptStruct_FODPresetData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FODPresetData_Statics::PropPointers),
	sizeof(FODPresetData),
	alignof(FODPresetData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FODPresetData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FODPresetData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FODPresetData()
{
	if (!Z_Registration_Info_UScriptStruct_ODPresetData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ODPresetData.InnerSingleton, Z_Construct_UScriptStruct_FODPresetData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ODPresetData.InnerSingleton;
}
// End ScriptStruct FODPresetData

// Begin ScriptStruct FPresetMixerMapData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PresetMixerMapData;
class UScriptStruct* FPresetMixerMapData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PresetMixerMapData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PresetMixerMapData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPresetMixerMapData, (UObject*)Z_Construct_UPackage__Script_ObjectDistribution(), TEXT("PresetMixerMapData"));
	}
	return Z_Registration_Info_UScriptStruct_PresetMixerMapData.OuterSingleton;
}
template<> OBJECTDISTRIBUTION_API UScriptStruct* StaticStruct<FPresetMixerMapData>()
{
	return FPresetMixerMapData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPresetMixerMapData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Data/ODPresetData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PresetName_MetaData[] = {
		{ "Category", "Preset Mixer Data" },
		{ "ModuleRelativePath", "Public/Data/ODPresetData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CheckState_MetaData[] = {
		{ "Category", "Preset Mixer Data" },
		{ "ModuleRelativePath", "Public/Data/ODPresetData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_PresetName;
	static void NewProp_CheckState_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CheckState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPresetMixerMapData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPresetMixerMapData_Statics::NewProp_PresetName = { "PresetName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPresetMixerMapData, PresetName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PresetName_MetaData), NewProp_PresetName_MetaData) };
void Z_Construct_UScriptStruct_FPresetMixerMapData_Statics::NewProp_CheckState_SetBit(void* Obj)
{
	((FPresetMixerMapData*)Obj)->CheckState = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPresetMixerMapData_Statics::NewProp_CheckState = { "CheckState", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPresetMixerMapData), &Z_Construct_UScriptStruct_FPresetMixerMapData_Statics::NewProp_CheckState_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CheckState_MetaData), NewProp_CheckState_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPresetMixerMapData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPresetMixerMapData_Statics::NewProp_PresetName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPresetMixerMapData_Statics::NewProp_CheckState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPresetMixerMapData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPresetMixerMapData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ObjectDistribution,
	nullptr,
	&NewStructOps,
	"PresetMixerMapData",
	Z_Construct_UScriptStruct_FPresetMixerMapData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPresetMixerMapData_Statics::PropPointers),
	sizeof(FPresetMixerMapData),
	alignof(FPresetMixerMapData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPresetMixerMapData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPresetMixerMapData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPresetMixerMapData()
{
	if (!Z_Registration_Info_UScriptStruct_PresetMixerMapData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PresetMixerMapData.InnerSingleton, Z_Construct_UScriptStruct_FPresetMixerMapData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PresetMixerMapData.InnerSingleton;
}
// End ScriptStruct FPresetMixerMapData

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ObjectDistribution_Source_ObjectDistribution_Public_Data_ODPresetData_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FODPresetData::StaticStruct, Z_Construct_UScriptStruct_FODPresetData_Statics::NewStructOps, TEXT("ODPresetData"), &Z_Registration_Info_UScriptStruct_ODPresetData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FODPresetData), 517155589U) },
		{ FPresetMixerMapData::StaticStruct, Z_Construct_UScriptStruct_FPresetMixerMapData_Statics::NewStructOps, TEXT("PresetMixerMapData"), &Z_Registration_Info_UScriptStruct_PresetMixerMapData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPresetMixerMapData), 2848401551U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ObjectDistribution_Source_ObjectDistribution_Public_Data_ODPresetData_h_1588651224(TEXT("/Script/ObjectDistribution"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_HostProject_Plugins_ObjectDistribution_Source_ObjectDistribution_Public_Data_ODPresetData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ObjectDistribution_Source_ObjectDistribution_Public_Data_ODPresetData_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
