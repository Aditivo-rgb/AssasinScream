// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularBuilding/Public/Data/MBToolData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMBToolData() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
MODULARBUILDING_API UClass* Z_Construct_UClass_UMBToolData();
MODULARBUILDING_API UClass* Z_Construct_UClass_UMBToolData_NoRegister();
MODULARBUILDING_API UEnum* Z_Construct_UEnum_ModularBuilding_EBuildingCategory();
MODULARBUILDING_API UEnum* Z_Construct_UEnum_ModularBuilding_EMBModularSnapType();
MODULARBUILDING_API UScriptStruct* Z_Construct_UScriptStruct_FMBModBuildingSettingsData();
MODULARBUILDING_API UScriptStruct* Z_Construct_UScriptStruct_FMBPropBuildingSettingsData();
UPackage* Z_Construct_UPackage__Script_ModularBuilding();
// End Cross Module References

// Begin ScriptStruct FMBModBuildingSettingsData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MBModBuildingSettingsData;
class UScriptStruct* FMBModBuildingSettingsData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MBModBuildingSettingsData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MBModBuildingSettingsData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMBModBuildingSettingsData, (UObject*)Z_Construct_UPackage__Script_ModularBuilding(), TEXT("MBModBuildingSettingsData"));
	}
	return Z_Registration_Info_UScriptStruct_MBModBuildingSettingsData.OuterSingleton;
}
template<> MODULARBUILDING_API UScriptStruct* StaticStruct<FMBModBuildingSettingsData>()
{
	return FMBModBuildingSettingsData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMBModBuildingSettingsData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Data/MBToolData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableModularSnapping_MetaData[] = {
		{ "Category", "Modular Building" },
		{ "ModuleRelativePath", "Public/Data/MBToolData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSnapOffsetCond_MetaData[] = {
		{ "Category", "Modular Building" },
		{ "ModuleRelativePath", "Public/Data/MBToolData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SnapOffset_MetaData[] = {
		{ "Category", "Modular Building" },
		{ "ModuleRelativePath", "Public/Data/MBToolData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bZOffsetCond_MetaData[] = {
		{ "Category", "Modular Building" },
		{ "ModuleRelativePath", "Public/Data/MBToolData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZOffset_MetaData[] = {
		{ "Category", "Modular Building" },
		{ "ModuleRelativePath", "Public/Data/MBToolData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SnappingType_MetaData[] = {
		{ "Category", "Modular Building" },
		{ "ModuleRelativePath", "Public/Data/MBToolData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundCorrectionSensitivity_MetaData[] = {
		{ "Category", "Modular Building" },
		{ "ModuleRelativePath", "Public/Data/MBToolData.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnableModularSnapping_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableModularSnapping;
	static void NewProp_bSnapOffsetCond_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSnapOffsetCond;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SnapOffset;
	static void NewProp_bZOffsetCond_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bZOffsetCond;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ZOffset;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SnappingType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SnappingType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BoundCorrectionSensitivity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMBModBuildingSettingsData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FMBModBuildingSettingsData_Statics::NewProp_bEnableModularSnapping_SetBit(void* Obj)
{
	((FMBModBuildingSettingsData*)Obj)->bEnableModularSnapping = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMBModBuildingSettingsData_Statics::NewProp_bEnableModularSnapping = { "bEnableModularSnapping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMBModBuildingSettingsData), &Z_Construct_UScriptStruct_FMBModBuildingSettingsData_Statics::NewProp_bEnableModularSnapping_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableModularSnapping_MetaData), NewProp_bEnableModularSnapping_MetaData) };
void Z_Construct_UScriptStruct_FMBModBuildingSettingsData_Statics::NewProp_bSnapOffsetCond_SetBit(void* Obj)
{
	((FMBModBuildingSettingsData*)Obj)->bSnapOffsetCond = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMBModBuildingSettingsData_Statics::NewProp_bSnapOffsetCond = { "bSnapOffsetCond", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMBModBuildingSettingsData), &Z_Construct_UScriptStruct_FMBModBuildingSettingsData_Statics::NewProp_bSnapOffsetCond_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSnapOffsetCond_MetaData), NewProp_bSnapOffsetCond_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMBModBuildingSettingsData_Statics::NewProp_SnapOffset = { "SnapOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMBModBuildingSettingsData, SnapOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SnapOffset_MetaData), NewProp_SnapOffset_MetaData) };
void Z_Construct_UScriptStruct_FMBModBuildingSettingsData_Statics::NewProp_bZOffsetCond_SetBit(void* Obj)
{
	((FMBModBuildingSettingsData*)Obj)->bZOffsetCond = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMBModBuildingSettingsData_Statics::NewProp_bZOffsetCond = { "bZOffsetCond", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMBModBuildingSettingsData), &Z_Construct_UScriptStruct_FMBModBuildingSettingsData_Statics::NewProp_bZOffsetCond_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bZOffsetCond_MetaData), NewProp_bZOffsetCond_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMBModBuildingSettingsData_Statics::NewProp_ZOffset = { "ZOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMBModBuildingSettingsData, ZOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZOffset_MetaData), NewProp_ZOffset_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMBModBuildingSettingsData_Statics::NewProp_SnappingType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMBModBuildingSettingsData_Statics::NewProp_SnappingType = { "SnappingType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMBModBuildingSettingsData, SnappingType), Z_Construct_UEnum_ModularBuilding_EMBModularSnapType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SnappingType_MetaData), NewProp_SnappingType_MetaData) }; // 3074431339
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMBModBuildingSettingsData_Statics::NewProp_BoundCorrectionSensitivity = { "BoundCorrectionSensitivity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMBModBuildingSettingsData, BoundCorrectionSensitivity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundCorrectionSensitivity_MetaData), NewProp_BoundCorrectionSensitivity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMBModBuildingSettingsData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMBModBuildingSettingsData_Statics::NewProp_bEnableModularSnapping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMBModBuildingSettingsData_Statics::NewProp_bSnapOffsetCond,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMBModBuildingSettingsData_Statics::NewProp_SnapOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMBModBuildingSettingsData_Statics::NewProp_bZOffsetCond,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMBModBuildingSettingsData_Statics::NewProp_ZOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMBModBuildingSettingsData_Statics::NewProp_SnappingType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMBModBuildingSettingsData_Statics::NewProp_SnappingType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMBModBuildingSettingsData_Statics::NewProp_BoundCorrectionSensitivity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMBModBuildingSettingsData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMBModBuildingSettingsData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ModularBuilding,
	nullptr,
	&NewStructOps,
	"MBModBuildingSettingsData",
	Z_Construct_UScriptStruct_FMBModBuildingSettingsData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMBModBuildingSettingsData_Statics::PropPointers),
	sizeof(FMBModBuildingSettingsData),
	alignof(FMBModBuildingSettingsData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMBModBuildingSettingsData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMBModBuildingSettingsData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMBModBuildingSettingsData()
{
	if (!Z_Registration_Info_UScriptStruct_MBModBuildingSettingsData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MBModBuildingSettingsData.InnerSingleton, Z_Construct_UScriptStruct_FMBModBuildingSettingsData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MBModBuildingSettingsData.InnerSingleton;
}
// End ScriptStruct FMBModBuildingSettingsData

// Begin ScriptStruct FMBPropBuildingSettingsData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MBPropBuildingSettingsData;
class UScriptStruct* FMBPropBuildingSettingsData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MBPropBuildingSettingsData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MBPropBuildingSettingsData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMBPropBuildingSettingsData, (UObject*)Z_Construct_UPackage__Script_ModularBuilding(), TEXT("MBPropBuildingSettingsData"));
	}
	return Z_Registration_Info_UScriptStruct_MBPropBuildingSettingsData.OuterSingleton;
}
template<> MODULARBUILDING_API UScriptStruct* StaticStruct<FMBPropBuildingSettingsData>()
{
	return FMBPropBuildingSettingsData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMBPropBuildingSettingsData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Data/MBToolData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableSurfaceSnapping_MetaData[] = {
		{ "Category", "Prop Building" },
		{ "ModuleRelativePath", "Public/Data/MBToolData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCustomRotationRateCond_MetaData[] = {
		{ "Category", "Prop Building" },
		{ "ModuleRelativePath", "Public/Data/MBToolData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomRotationRate_MetaData[] = {
		{ "Category", "Prop Building" },
		{ "ModuleRelativePath", "Public/Data/MBToolData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bScaleRateCond_MetaData[] = {
		{ "Category", "Prop Building" },
		{ "ModuleRelativePath", "Public/Data/MBToolData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleRate_MetaData[] = {
		{ "Category", "Prop Building" },
		{ "ModuleRelativePath", "Public/Data/MBToolData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bZOffsetCond_MetaData[] = {
		{ "Category", "Prop Building" },
		{ "ModuleRelativePath", "Public/Data/MBToolData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZOffset_MetaData[] = {
		{ "Category", "Prop Building" },
		{ "ModuleRelativePath", "Public/Data/MBToolData.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnableSurfaceSnapping_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableSurfaceSnapping;
	static void NewProp_bCustomRotationRateCond_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCustomRotationRateCond;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CustomRotationRate;
	static void NewProp_bScaleRateCond_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bScaleRateCond;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleRate;
	static void NewProp_bZOffsetCond_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bZOffsetCond;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ZOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMBPropBuildingSettingsData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FMBPropBuildingSettingsData_Statics::NewProp_bEnableSurfaceSnapping_SetBit(void* Obj)
{
	((FMBPropBuildingSettingsData*)Obj)->bEnableSurfaceSnapping = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMBPropBuildingSettingsData_Statics::NewProp_bEnableSurfaceSnapping = { "bEnableSurfaceSnapping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMBPropBuildingSettingsData), &Z_Construct_UScriptStruct_FMBPropBuildingSettingsData_Statics::NewProp_bEnableSurfaceSnapping_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableSurfaceSnapping_MetaData), NewProp_bEnableSurfaceSnapping_MetaData) };
void Z_Construct_UScriptStruct_FMBPropBuildingSettingsData_Statics::NewProp_bCustomRotationRateCond_SetBit(void* Obj)
{
	((FMBPropBuildingSettingsData*)Obj)->bCustomRotationRateCond = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMBPropBuildingSettingsData_Statics::NewProp_bCustomRotationRateCond = { "bCustomRotationRateCond", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMBPropBuildingSettingsData), &Z_Construct_UScriptStruct_FMBPropBuildingSettingsData_Statics::NewProp_bCustomRotationRateCond_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCustomRotationRateCond_MetaData), NewProp_bCustomRotationRateCond_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMBPropBuildingSettingsData_Statics::NewProp_CustomRotationRate = { "CustomRotationRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMBPropBuildingSettingsData, CustomRotationRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomRotationRate_MetaData), NewProp_CustomRotationRate_MetaData) };
void Z_Construct_UScriptStruct_FMBPropBuildingSettingsData_Statics::NewProp_bScaleRateCond_SetBit(void* Obj)
{
	((FMBPropBuildingSettingsData*)Obj)->bScaleRateCond = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMBPropBuildingSettingsData_Statics::NewProp_bScaleRateCond = { "bScaleRateCond", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMBPropBuildingSettingsData), &Z_Construct_UScriptStruct_FMBPropBuildingSettingsData_Statics::NewProp_bScaleRateCond_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bScaleRateCond_MetaData), NewProp_bScaleRateCond_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMBPropBuildingSettingsData_Statics::NewProp_ScaleRate = { "ScaleRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMBPropBuildingSettingsData, ScaleRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleRate_MetaData), NewProp_ScaleRate_MetaData) };
void Z_Construct_UScriptStruct_FMBPropBuildingSettingsData_Statics::NewProp_bZOffsetCond_SetBit(void* Obj)
{
	((FMBPropBuildingSettingsData*)Obj)->bZOffsetCond = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMBPropBuildingSettingsData_Statics::NewProp_bZOffsetCond = { "bZOffsetCond", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMBPropBuildingSettingsData), &Z_Construct_UScriptStruct_FMBPropBuildingSettingsData_Statics::NewProp_bZOffsetCond_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bZOffsetCond_MetaData), NewProp_bZOffsetCond_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMBPropBuildingSettingsData_Statics::NewProp_ZOffset = { "ZOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMBPropBuildingSettingsData, ZOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZOffset_MetaData), NewProp_ZOffset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMBPropBuildingSettingsData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMBPropBuildingSettingsData_Statics::NewProp_bEnableSurfaceSnapping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMBPropBuildingSettingsData_Statics::NewProp_bCustomRotationRateCond,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMBPropBuildingSettingsData_Statics::NewProp_CustomRotationRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMBPropBuildingSettingsData_Statics::NewProp_bScaleRateCond,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMBPropBuildingSettingsData_Statics::NewProp_ScaleRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMBPropBuildingSettingsData_Statics::NewProp_bZOffsetCond,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMBPropBuildingSettingsData_Statics::NewProp_ZOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMBPropBuildingSettingsData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMBPropBuildingSettingsData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ModularBuilding,
	nullptr,
	&NewStructOps,
	"MBPropBuildingSettingsData",
	Z_Construct_UScriptStruct_FMBPropBuildingSettingsData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMBPropBuildingSettingsData_Statics::PropPointers),
	sizeof(FMBPropBuildingSettingsData),
	alignof(FMBPropBuildingSettingsData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMBPropBuildingSettingsData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMBPropBuildingSettingsData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMBPropBuildingSettingsData()
{
	if (!Z_Registration_Info_UScriptStruct_MBPropBuildingSettingsData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MBPropBuildingSettingsData.InnerSingleton, Z_Construct_UScriptStruct_FMBPropBuildingSettingsData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MBPropBuildingSettingsData.InnerSingleton;
}
// End ScriptStruct FMBPropBuildingSettingsData

// Begin Class UMBToolData
void UMBToolData::StaticRegisterNativesUMBToolData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMBToolData);
UClass* Z_Construct_UClass_UMBToolData_NoRegister()
{
	return UMBToolData::StaticClass();
}
struct Z_Construct_UClass_UMBToolData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Data/MBToolData.h" },
		{ "ModuleRelativePath", "Public/Data/MBToolData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModularMeshTypes_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "ModuleRelativePath", "Public/Data/MBToolData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropMeshTypes_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "ModuleRelativePath", "Public/Data/MBToolData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Collections_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "ModuleRelativePath", "Public/Data/MBToolData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastActiveBuildingCategory_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "ModuleRelativePath", "Public/Data/MBToolData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuildingSettingsData_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "ModuleRelativePath", "Public/Data/MBToolData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropBuildingSettingsData_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "ModuleRelativePath", "Public/Data/MBToolData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ModularMeshTypes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ModularMeshTypes;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PropMeshTypes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PropMeshTypes;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Collections_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Collections;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LastActiveBuildingCategory_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LastActiveBuildingCategory;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BuildingSettingsData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PropBuildingSettingsData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMBToolData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMBToolData_Statics::NewProp_ModularMeshTypes_Inner = { "ModularMeshTypes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMBToolData_Statics::NewProp_ModularMeshTypes = { "ModularMeshTypes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBToolData, ModularMeshTypes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModularMeshTypes_MetaData), NewProp_ModularMeshTypes_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMBToolData_Statics::NewProp_PropMeshTypes_Inner = { "PropMeshTypes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMBToolData_Statics::NewProp_PropMeshTypes = { "PropMeshTypes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBToolData, PropMeshTypes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropMeshTypes_MetaData), NewProp_PropMeshTypes_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMBToolData_Statics::NewProp_Collections_Inner = { "Collections", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMBToolData_Statics::NewProp_Collections = { "Collections", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBToolData, Collections), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Collections_MetaData), NewProp_Collections_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMBToolData_Statics::NewProp_LastActiveBuildingCategory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMBToolData_Statics::NewProp_LastActiveBuildingCategory = { "LastActiveBuildingCategory", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBToolData, LastActiveBuildingCategory), Z_Construct_UEnum_ModularBuilding_EBuildingCategory, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastActiveBuildingCategory_MetaData), NewProp_LastActiveBuildingCategory_MetaData) }; // 385100287
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMBToolData_Statics::NewProp_BuildingSettingsData = { "BuildingSettingsData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBToolData, BuildingSettingsData), Z_Construct_UScriptStruct_FMBModBuildingSettingsData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuildingSettingsData_MetaData), NewProp_BuildingSettingsData_MetaData) }; // 387375873
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMBToolData_Statics::NewProp_PropBuildingSettingsData = { "PropBuildingSettingsData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBToolData, PropBuildingSettingsData), Z_Construct_UScriptStruct_FMBPropBuildingSettingsData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropBuildingSettingsData_MetaData), NewProp_PropBuildingSettingsData_MetaData) }; // 2303984821
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMBToolData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBToolData_Statics::NewProp_ModularMeshTypes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBToolData_Statics::NewProp_ModularMeshTypes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBToolData_Statics::NewProp_PropMeshTypes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBToolData_Statics::NewProp_PropMeshTypes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBToolData_Statics::NewProp_Collections_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBToolData_Statics::NewProp_Collections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBToolData_Statics::NewProp_LastActiveBuildingCategory_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBToolData_Statics::NewProp_LastActiveBuildingCategory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBToolData_Statics::NewProp_BuildingSettingsData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBToolData_Statics::NewProp_PropBuildingSettingsData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMBToolData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMBToolData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_ModularBuilding,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMBToolData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMBToolData_Statics::ClassParams = {
	&UMBToolData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMBToolData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMBToolData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMBToolData_Statics::Class_MetaDataParams), Z_Construct_UClass_UMBToolData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMBToolData()
{
	if (!Z_Registration_Info_UClass_UMBToolData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMBToolData.OuterSingleton, Z_Construct_UClass_UMBToolData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMBToolData.OuterSingleton;
}
template<> MODULARBUILDING_API UClass* StaticClass<UMBToolData>()
{
	return UMBToolData::StaticClass();
}
UMBToolData::UMBToolData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMBToolData);
UMBToolData::~UMBToolData() {}
// End Class UMBToolData

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Data_MBToolData_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMBModBuildingSettingsData::StaticStruct, Z_Construct_UScriptStruct_FMBModBuildingSettingsData_Statics::NewStructOps, TEXT("MBModBuildingSettingsData"), &Z_Registration_Info_UScriptStruct_MBModBuildingSettingsData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMBModBuildingSettingsData), 387375873U) },
		{ FMBPropBuildingSettingsData::StaticStruct, Z_Construct_UScriptStruct_FMBPropBuildingSettingsData_Statics::NewStructOps, TEXT("MBPropBuildingSettingsData"), &Z_Registration_Info_UScriptStruct_MBPropBuildingSettingsData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMBPropBuildingSettingsData), 2303984821U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMBToolData, UMBToolData::StaticClass, TEXT("UMBToolData"), &Z_Registration_Info_UClass_UMBToolData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMBToolData), 2088217488U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Data_MBToolData_h_2320403225(TEXT("/Script/ModularBuilding"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Data_MBToolData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Data_MBToolData_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Data_MBToolData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Data_MBToolData_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
