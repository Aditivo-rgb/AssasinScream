// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularBuilding/Public/Data/MBDataStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMBDataStructs() {}

// Begin Cross Module References
MODULARBUILDING_API UEnum* Z_Construct_UEnum_ModularBuilding_EMBAxis();
MODULARBUILDING_API UScriptStruct* Z_Construct_UScriptStruct_FDuplicationData();
MODULARBUILDING_API UScriptStruct* Z_Construct_UScriptStruct_FDuplicationFilters();
UPackage* Z_Construct_UPackage__Script_ModularBuilding();
// End Cross Module References

// Begin ScriptStruct FDuplicationData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DuplicationData;
class UScriptStruct* FDuplicationData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DuplicationData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DuplicationData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDuplicationData, (UObject*)Z_Construct_UPackage__Script_ModularBuilding(), TEXT("DuplicationData"));
	}
	return Z_Registration_Info_UScriptStruct_DuplicationData.OuterSingleton;
}
template<> MODULARBUILDING_API UScriptStruct* StaticStruct<FDuplicationData>()
{
	return FDuplicationData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDuplicationData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Data/MBDataStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DupAxis_MetaData[] = {
		{ "Category", "ModularDuplication" },
		{ "ModuleRelativePath", "Public/Data/MBDataStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumOfDup_MetaData[] = {
		{ "Category", "ModularDuplication" },
		{ "ModuleRelativePath", "Public/Data/MBDataStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[] = {
		{ "Category", "ModularDuplication" },
		{ "ModuleRelativePath", "Public/Data/MBDataStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDirection_MetaData[] = {
		{ "Category", "ModularDuplication" },
		{ "ModuleRelativePath", "Public/Data/MBDataStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_DupAxis_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DupAxis;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumOfDup;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Offset;
	static void NewProp_bDirection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDirection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDuplicationData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDuplicationData_Statics::NewProp_DupAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDuplicationData_Statics::NewProp_DupAxis = { "DupAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDuplicationData, DupAxis), Z_Construct_UEnum_ModularBuilding_EMBAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DupAxis_MetaData), NewProp_DupAxis_MetaData) }; // 3735486892
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDuplicationData_Statics::NewProp_NumOfDup = { "NumOfDup", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDuplicationData, NumOfDup), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumOfDup_MetaData), NewProp_NumOfDup_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDuplicationData_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDuplicationData, Offset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Offset_MetaData), NewProp_Offset_MetaData) };
void Z_Construct_UScriptStruct_FDuplicationData_Statics::NewProp_bDirection_SetBit(void* Obj)
{
	((FDuplicationData*)Obj)->bDirection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDuplicationData_Statics::NewProp_bDirection = { "bDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDuplicationData), &Z_Construct_UScriptStruct_FDuplicationData_Statics::NewProp_bDirection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDirection_MetaData), NewProp_bDirection_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDuplicationData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDuplicationData_Statics::NewProp_DupAxis_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDuplicationData_Statics::NewProp_DupAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDuplicationData_Statics::NewProp_NumOfDup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDuplicationData_Statics::NewProp_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDuplicationData_Statics::NewProp_bDirection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDuplicationData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDuplicationData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ModularBuilding,
	nullptr,
	&NewStructOps,
	"DuplicationData",
	Z_Construct_UScriptStruct_FDuplicationData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDuplicationData_Statics::PropPointers),
	sizeof(FDuplicationData),
	alignof(FDuplicationData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDuplicationData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDuplicationData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDuplicationData()
{
	if (!Z_Registration_Info_UScriptStruct_DuplicationData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DuplicationData.InnerSingleton, Z_Construct_UScriptStruct_FDuplicationData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DuplicationData.InnerSingleton;
}
// End ScriptStruct FDuplicationData

// Begin ScriptStruct FDuplicationFilters
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DuplicationFilters;
class UScriptStruct* FDuplicationFilters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DuplicationFilters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DuplicationFilters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDuplicationFilters, (UObject*)Z_Construct_UPackage__Script_ModularBuilding(), TEXT("DuplicationFilters"));
	}
	return Z_Registration_Info_UScriptStruct_DuplicationFilters.OuterSingleton;
}
template<> MODULARBUILDING_API UScriptStruct* StaticStruct<FDuplicationFilters>()
{
	return FDuplicationFilters::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDuplicationFilters_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Data/MBDataStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hole_MetaData[] = {
		{ "Category", "ModularDuplication" },
		{ "ModuleRelativePath", "Public/Data/MBDataStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rectangle_MetaData[] = {
		{ "Category", "ModularDuplication" },
		{ "ModuleRelativePath", "Public/Data/MBDataStructs.h" },
	};
#endif // WITH_METADATA
	static void NewProp_Hole_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Hole;
	static void NewProp_Rectangle_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Rectangle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDuplicationFilters>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FDuplicationFilters_Statics::NewProp_Hole_SetBit(void* Obj)
{
	((FDuplicationFilters*)Obj)->Hole = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDuplicationFilters_Statics::NewProp_Hole = { "Hole", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDuplicationFilters), &Z_Construct_UScriptStruct_FDuplicationFilters_Statics::NewProp_Hole_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hole_MetaData), NewProp_Hole_MetaData) };
void Z_Construct_UScriptStruct_FDuplicationFilters_Statics::NewProp_Rectangle_SetBit(void* Obj)
{
	((FDuplicationFilters*)Obj)->Rectangle = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDuplicationFilters_Statics::NewProp_Rectangle = { "Rectangle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDuplicationFilters), &Z_Construct_UScriptStruct_FDuplicationFilters_Statics::NewProp_Rectangle_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rectangle_MetaData), NewProp_Rectangle_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDuplicationFilters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDuplicationFilters_Statics::NewProp_Hole,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDuplicationFilters_Statics::NewProp_Rectangle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDuplicationFilters_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDuplicationFilters_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ModularBuilding,
	nullptr,
	&NewStructOps,
	"DuplicationFilters",
	Z_Construct_UScriptStruct_FDuplicationFilters_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDuplicationFilters_Statics::PropPointers),
	sizeof(FDuplicationFilters),
	alignof(FDuplicationFilters),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDuplicationFilters_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDuplicationFilters_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDuplicationFilters()
{
	if (!Z_Registration_Info_UScriptStruct_DuplicationFilters.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DuplicationFilters.InnerSingleton, Z_Construct_UScriptStruct_FDuplicationFilters_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DuplicationFilters.InnerSingleton;
}
// End ScriptStruct FDuplicationFilters

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Data_MBDataStructs_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDuplicationData::StaticStruct, Z_Construct_UScriptStruct_FDuplicationData_Statics::NewStructOps, TEXT("DuplicationData"), &Z_Registration_Info_UScriptStruct_DuplicationData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDuplicationData), 4279460606U) },
		{ FDuplicationFilters::StaticStruct, Z_Construct_UScriptStruct_FDuplicationFilters_Statics::NewStructOps, TEXT("DuplicationFilters"), &Z_Registration_Info_UScriptStruct_DuplicationFilters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDuplicationFilters), 1790621036U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Data_MBDataStructs_h_1377763295(TEXT("/Script/ModularBuilding"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Data_MBDataStructs_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Data_MBDataStructs_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
