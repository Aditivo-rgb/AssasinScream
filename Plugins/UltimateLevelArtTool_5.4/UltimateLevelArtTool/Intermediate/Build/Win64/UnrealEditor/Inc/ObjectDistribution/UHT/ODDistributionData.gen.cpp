// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObjectDistribution/Public/Data/ODDistributionData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeODDistributionData() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
OBJECTDISTRIBUTION_API UEnum* Z_Construct_UEnum_ObjectDistribution_EODLineAxis();
OBJECTDISTRIBUTION_API UScriptStruct* Z_Construct_UScriptStruct_FODCubeDistributionData();
OBJECTDISTRIBUTION_API UScriptStruct* Z_Construct_UScriptStruct_FODDiskDistributionData();
OBJECTDISTRIBUTION_API UScriptStruct* Z_Construct_UScriptStruct_FODGridDistributionData();
OBJECTDISTRIBUTION_API UScriptStruct* Z_Construct_UScriptStruct_FODLineDistributionData();
OBJECTDISTRIBUTION_API UScriptStruct* Z_Construct_UScriptStruct_FODPlaneDistributionData();
OBJECTDISTRIBUTION_API UScriptStruct* Z_Construct_UScriptStruct_FODRingDistributionData();
OBJECTDISTRIBUTION_API UScriptStruct* Z_Construct_UScriptStruct_FODSphereDistributionData();
OBJECTDISTRIBUTION_API UScriptStruct* Z_Construct_UScriptStruct_FODSpiralDistributionData();
UPackage* Z_Construct_UPackage__Script_ObjectDistribution();
// End Cross Module References

// Begin ScriptStruct FODDiskDistributionData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ODDiskDistributionData;
class UScriptStruct* FODDiskDistributionData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ODDiskDistributionData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ODDiskDistributionData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FODDiskDistributionData, (UObject*)Z_Construct_UPackage__Script_ObjectDistribution(), TEXT("ODDiskDistributionData"));
	}
	return Z_Registration_Info_UScriptStruct_ODDiskDistributionData.OuterSingleton;
}
template<> OBJECTDISTRIBUTION_API UScriptStruct* StaticStruct<FODDiskDistributionData>()
{
	return FODDiskDistributionData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FODDiskDistributionData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Data/ODDistributionData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/ODDistributionData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRandZRangeCond_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/ODDistributionData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandZRange_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/ODDistributionData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Chaos_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/ODDistributionData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static void NewProp_bRandZRangeCond_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRandZRangeCond;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RandZRange;
	static void NewProp_Chaos_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Chaos;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FODDiskDistributionData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FODDiskDistributionData_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FODDiskDistributionData, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
void Z_Construct_UScriptStruct_FODDiskDistributionData_Statics::NewProp_bRandZRangeCond_SetBit(void* Obj)
{
	((FODDiskDistributionData*)Obj)->bRandZRangeCond = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FODDiskDistributionData_Statics::NewProp_bRandZRangeCond = { "bRandZRangeCond", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FODDiskDistributionData), &Z_Construct_UScriptStruct_FODDiskDistributionData_Statics::NewProp_bRandZRangeCond_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRandZRangeCond_MetaData), NewProp_bRandZRangeCond_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FODDiskDistributionData_Statics::NewProp_RandZRange = { "RandZRange", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FODDiskDistributionData, RandZRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandZRange_MetaData), NewProp_RandZRange_MetaData) };
void Z_Construct_UScriptStruct_FODDiskDistributionData_Statics::NewProp_Chaos_SetBit(void* Obj)
{
	((FODDiskDistributionData*)Obj)->Chaos = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FODDiskDistributionData_Statics::NewProp_Chaos = { "Chaos", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FODDiskDistributionData), &Z_Construct_UScriptStruct_FODDiskDistributionData_Statics::NewProp_Chaos_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Chaos_MetaData), NewProp_Chaos_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FODDiskDistributionData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FODDiskDistributionData_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FODDiskDistributionData_Statics::NewProp_bRandZRangeCond,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FODDiskDistributionData_Statics::NewProp_RandZRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FODDiskDistributionData_Statics::NewProp_Chaos,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FODDiskDistributionData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FODDiskDistributionData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ObjectDistribution,
	nullptr,
	&NewStructOps,
	"ODDiskDistributionData",
	Z_Construct_UScriptStruct_FODDiskDistributionData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FODDiskDistributionData_Statics::PropPointers),
	sizeof(FODDiskDistributionData),
	alignof(FODDiskDistributionData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FODDiskDistributionData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FODDiskDistributionData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FODDiskDistributionData()
{
	if (!Z_Registration_Info_UScriptStruct_ODDiskDistributionData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ODDiskDistributionData.InnerSingleton, Z_Construct_UScriptStruct_FODDiskDistributionData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ODDiskDistributionData.InnerSingleton;
}
// End ScriptStruct FODDiskDistributionData

// Begin ScriptStruct FODCubeDistributionData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ODCubeDistributionData;
class UScriptStruct* FODCubeDistributionData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ODCubeDistributionData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ODCubeDistributionData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FODCubeDistributionData, (UObject*)Z_Construct_UPackage__Script_ObjectDistribution(), TEXT("ODCubeDistributionData"));
	}
	return Z_Registration_Info_UScriptStruct_ODCubeDistributionData.OuterSingleton;
}
template<> OBJECTDISTRIBUTION_API UScriptStruct* StaticStruct<FODCubeDistributionData>()
{
	return FODCubeDistributionData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FODCubeDistributionData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "//********************************************************************************************************************************//\n" },
		{ "ModuleRelativePath", "Public/Data/ODDistributionData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleDistance_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/ODDistributionData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRandomOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/ODDistributionData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/ODDistributionData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleDistance;
	static void NewProp_bRandomOffset_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRandomOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RandomOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FODCubeDistributionData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FODCubeDistributionData_Statics::NewProp_ScaleDistance = { "ScaleDistance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FODCubeDistributionData, ScaleDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleDistance_MetaData), NewProp_ScaleDistance_MetaData) };
void Z_Construct_UScriptStruct_FODCubeDistributionData_Statics::NewProp_bRandomOffset_SetBit(void* Obj)
{
	((FODCubeDistributionData*)Obj)->bRandomOffset = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FODCubeDistributionData_Statics::NewProp_bRandomOffset = { "bRandomOffset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FODCubeDistributionData), &Z_Construct_UScriptStruct_FODCubeDistributionData_Statics::NewProp_bRandomOffset_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRandomOffset_MetaData), NewProp_bRandomOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FODCubeDistributionData_Statics::NewProp_RandomOffset = { "RandomOffset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FODCubeDistributionData, RandomOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomOffset_MetaData), NewProp_RandomOffset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FODCubeDistributionData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FODCubeDistributionData_Statics::NewProp_ScaleDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FODCubeDistributionData_Statics::NewProp_bRandomOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FODCubeDistributionData_Statics::NewProp_RandomOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FODCubeDistributionData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FODCubeDistributionData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ObjectDistribution,
	nullptr,
	&NewStructOps,
	"ODCubeDistributionData",
	Z_Construct_UScriptStruct_FODCubeDistributionData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FODCubeDistributionData_Statics::PropPointers),
	sizeof(FODCubeDistributionData),
	alignof(FODCubeDistributionData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FODCubeDistributionData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FODCubeDistributionData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FODCubeDistributionData()
{
	if (!Z_Registration_Info_UScriptStruct_ODCubeDistributionData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ODCubeDistributionData.InnerSingleton, Z_Construct_UScriptStruct_FODCubeDistributionData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ODCubeDistributionData.InnerSingleton;
}
// End ScriptStruct FODCubeDistributionData

// Begin ScriptStruct FODLineDistributionData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ODLineDistributionData;
class UScriptStruct* FODLineDistributionData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ODLineDistributionData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ODLineDistributionData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FODLineDistributionData, (UObject*)Z_Construct_UPackage__Script_ObjectDistribution(), TEXT("ODLineDistributionData"));
	}
	return Z_Registration_Info_UScriptStruct_ODLineDistributionData.OuterSingleton;
}
template<> OBJECTDISTRIBUTION_API UScriptStruct* StaticStruct<FODLineDistributionData>()
{
	return FODLineDistributionData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FODLineDistributionData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/********************************************************************************************************************************/" },
		{ "ModuleRelativePath", "Public/Data/ODDistributionData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineAxis_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/ODDistributionData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineLength_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/ODDistributionData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRandomOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/ODDistributionData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/ODDistributionData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PivotCentered_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/ODDistributionData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_LineAxis_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LineAxis;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LineLength;
	static void NewProp_bRandomOffset_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRandomOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RandomOffset;
	static void NewProp_PivotCentered_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_PivotCentered;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FODLineDistributionData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FODLineDistributionData_Statics::NewProp_LineAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FODLineDistributionData_Statics::NewProp_LineAxis = { "LineAxis", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FODLineDistributionData, LineAxis), Z_Construct_UEnum_ObjectDistribution_EODLineAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineAxis_MetaData), NewProp_LineAxis_MetaData) }; // 1577191740
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FODLineDistributionData_Statics::NewProp_LineLength = { "LineLength", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FODLineDistributionData, LineLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineLength_MetaData), NewProp_LineLength_MetaData) };
void Z_Construct_UScriptStruct_FODLineDistributionData_Statics::NewProp_bRandomOffset_SetBit(void* Obj)
{
	((FODLineDistributionData*)Obj)->bRandomOffset = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FODLineDistributionData_Statics::NewProp_bRandomOffset = { "bRandomOffset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FODLineDistributionData), &Z_Construct_UScriptStruct_FODLineDistributionData_Statics::NewProp_bRandomOffset_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRandomOffset_MetaData), NewProp_bRandomOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FODLineDistributionData_Statics::NewProp_RandomOffset = { "RandomOffset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FODLineDistributionData, RandomOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomOffset_MetaData), NewProp_RandomOffset_MetaData) };
void Z_Construct_UScriptStruct_FODLineDistributionData_Statics::NewProp_PivotCentered_SetBit(void* Obj)
{
	((FODLineDistributionData*)Obj)->PivotCentered = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FODLineDistributionData_Statics::NewProp_PivotCentered = { "PivotCentered", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FODLineDistributionData), &Z_Construct_UScriptStruct_FODLineDistributionData_Statics::NewProp_PivotCentered_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PivotCentered_MetaData), NewProp_PivotCentered_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FODLineDistributionData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FODLineDistributionData_Statics::NewProp_LineAxis_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FODLineDistributionData_Statics::NewProp_LineAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FODLineDistributionData_Statics::NewProp_LineLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FODLineDistributionData_Statics::NewProp_bRandomOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FODLineDistributionData_Statics::NewProp_RandomOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FODLineDistributionData_Statics::NewProp_PivotCentered,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FODLineDistributionData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FODLineDistributionData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ObjectDistribution,
	nullptr,
	&NewStructOps,
	"ODLineDistributionData",
	Z_Construct_UScriptStruct_FODLineDistributionData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FODLineDistributionData_Statics::PropPointers),
	sizeof(FODLineDistributionData),
	alignof(FODLineDistributionData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FODLineDistributionData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FODLineDistributionData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FODLineDistributionData()
{
	if (!Z_Registration_Info_UScriptStruct_ODLineDistributionData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ODLineDistributionData.InnerSingleton, Z_Construct_UScriptStruct_FODLineDistributionData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ODLineDistributionData.InnerSingleton;
}
// End ScriptStruct FODLineDistributionData

// Begin ScriptStruct FODRingDistributionData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ODRingDistributionData;
class UScriptStruct* FODRingDistributionData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ODRingDistributionData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ODRingDistributionData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FODRingDistributionData, (UObject*)Z_Construct_UPackage__Script_ObjectDistribution(), TEXT("ODRingDistributionData"));
	}
	return Z_Registration_Info_UScriptStruct_ODRingDistributionData.OuterSingleton;
}
template<> OBJECTDISTRIBUTION_API UScriptStruct* StaticStruct<FODRingDistributionData>()
{
	return FODRingDistributionData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FODRingDistributionData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/********************************************************************************************************************************/" },
		{ "ModuleRelativePath", "Public/Data/ODDistributionData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArcAngle_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/ODDistributionData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/ODDistributionData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/ODDistributionData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRandZRangeCond_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/ODDistributionData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandZRange_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/ODDistributionData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Chaos_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/ODDistributionData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ArcAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static void NewProp_bRandZRangeCond_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRandZRangeCond;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RandZRange;
	static void NewProp_Chaos_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Chaos;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FODRingDistributionData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FODRingDistributionData_Statics::NewProp_ArcAngle = { "ArcAngle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FODRingDistributionData, ArcAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArcAngle_MetaData), NewProp_ArcAngle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FODRingDistributionData_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FODRingDistributionData, Offset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Offset_MetaData), NewProp_Offset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FODRingDistributionData_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FODRingDistributionData, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
void Z_Construct_UScriptStruct_FODRingDistributionData_Statics::NewProp_bRandZRangeCond_SetBit(void* Obj)
{
	((FODRingDistributionData*)Obj)->bRandZRangeCond = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FODRingDistributionData_Statics::NewProp_bRandZRangeCond = { "bRandZRangeCond", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FODRingDistributionData), &Z_Construct_UScriptStruct_FODRingDistributionData_Statics::NewProp_bRandZRangeCond_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRandZRangeCond_MetaData), NewProp_bRandZRangeCond_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FODRingDistributionData_Statics::NewProp_RandZRange = { "RandZRange", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FODRingDistributionData, RandZRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandZRange_MetaData), NewProp_RandZRange_MetaData) };
void Z_Construct_UScriptStruct_FODRingDistributionData_Statics::NewProp_Chaos_SetBit(void* Obj)
{
	((FODRingDistributionData*)Obj)->Chaos = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FODRingDistributionData_Statics::NewProp_Chaos = { "Chaos", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FODRingDistributionData), &Z_Construct_UScriptStruct_FODRingDistributionData_Statics::NewProp_Chaos_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Chaos_MetaData), NewProp_Chaos_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FODRingDistributionData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FODRingDistributionData_Statics::NewProp_ArcAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FODRingDistributionData_Statics::NewProp_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FODRingDistributionData_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FODRingDistributionData_Statics::NewProp_bRandZRangeCond,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FODRingDistributionData_Statics::NewProp_RandZRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FODRingDistributionData_Statics::NewProp_Chaos,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FODRingDistributionData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FODRingDistributionData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ObjectDistribution,
	nullptr,
	&NewStructOps,
	"ODRingDistributionData",
	Z_Construct_UScriptStruct_FODRingDistributionData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FODRingDistributionData_Statics::PropPointers),
	sizeof(FODRingDistributionData),
	alignof(FODRingDistributionData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FODRingDistributionData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FODRingDistributionData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FODRingDistributionData()
{
	if (!Z_Registration_Info_UScriptStruct_ODRingDistributionData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ODRingDistributionData.InnerSingleton, Z_Construct_UScriptStruct_FODRingDistributionData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ODRingDistributionData.InnerSingleton;
}
// End ScriptStruct FODRingDistributionData

// Begin ScriptStruct FODSphereDistributionData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ODSphereDistributionData;
class UScriptStruct* FODSphereDistributionData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ODSphereDistributionData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ODSphereDistributionData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FODSphereDistributionData, (UObject*)Z_Construct_UPackage__Script_ObjectDistribution(), TEXT("ODSphereDistributionData"));
	}
	return Z_Registration_Info_UScriptStruct_ODSphereDistributionData.OuterSingleton;
}
template<> OBJECTDISTRIBUTION_API UScriptStruct* StaticStruct<FODSphereDistributionData>()
{
	return FODSphereDistributionData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FODSphereDistributionData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/********************************************************************************************************************************/" },
		{ "ModuleRelativePath", "Public/Data/ODDistributionData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpiralWinding_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/ODDistributionData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SphereRadius_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/ODDistributionData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Chaos_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/ODDistributionData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpiralWinding;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SphereRadius;
	static void NewProp_Chaos_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Chaos;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FODSphereDistributionData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FODSphereDistributionData_Statics::NewProp_SpiralWinding = { "SpiralWinding", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FODSphereDistributionData, SpiralWinding), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpiralWinding_MetaData), NewProp_SpiralWinding_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FODSphereDistributionData_Statics::NewProp_SphereRadius = { "SphereRadius", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FODSphereDistributionData, SphereRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SphereRadius_MetaData), NewProp_SphereRadius_MetaData) };
void Z_Construct_UScriptStruct_FODSphereDistributionData_Statics::NewProp_Chaos_SetBit(void* Obj)
{
	((FODSphereDistributionData*)Obj)->Chaos = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FODSphereDistributionData_Statics::NewProp_Chaos = { "Chaos", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FODSphereDistributionData), &Z_Construct_UScriptStruct_FODSphereDistributionData_Statics::NewProp_Chaos_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Chaos_MetaData), NewProp_Chaos_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FODSphereDistributionData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FODSphereDistributionData_Statics::NewProp_SpiralWinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FODSphereDistributionData_Statics::NewProp_SphereRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FODSphereDistributionData_Statics::NewProp_Chaos,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FODSphereDistributionData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FODSphereDistributionData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ObjectDistribution,
	nullptr,
	&NewStructOps,
	"ODSphereDistributionData",
	Z_Construct_UScriptStruct_FODSphereDistributionData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FODSphereDistributionData_Statics::PropPointers),
	sizeof(FODSphereDistributionData),
	alignof(FODSphereDistributionData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FODSphereDistributionData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FODSphereDistributionData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FODSphereDistributionData()
{
	if (!Z_Registration_Info_UScriptStruct_ODSphereDistributionData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ODSphereDistributionData.InnerSingleton, Z_Construct_UScriptStruct_FODSphereDistributionData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ODSphereDistributionData.InnerSingleton;
}
// End ScriptStruct FODSphereDistributionData

// Begin ScriptStruct FODGridDistributionData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ODGridDistributionData;
class UScriptStruct* FODGridDistributionData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ODGridDistributionData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ODGridDistributionData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FODGridDistributionData, (UObject*)Z_Construct_UPackage__Script_ObjectDistribution(), TEXT("ODGridDistributionData"));
	}
	return Z_Registration_Info_UScriptStruct_ODGridDistributionData.OuterSingleton;
}
template<> OBJECTDISTRIBUTION_API UScriptStruct* StaticStruct<FODGridDistributionData>()
{
	return FODGridDistributionData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FODGridDistributionData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/********************************************************************************************************************************/" },
		{ "ModuleRelativePath", "Public/Data/ODDistributionData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridSize_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/ODDistributionData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridLength_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/ODDistributionData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Chaos_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/ODDistributionData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GridSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GridLength;
	static void NewProp_Chaos_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Chaos;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FODGridDistributionData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FODGridDistributionData_Statics::NewProp_GridSize = { "GridSize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FODGridDistributionData, GridSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridSize_MetaData), NewProp_GridSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FODGridDistributionData_Statics::NewProp_GridLength = { "GridLength", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FODGridDistributionData, GridLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridLength_MetaData), NewProp_GridLength_MetaData) };
void Z_Construct_UScriptStruct_FODGridDistributionData_Statics::NewProp_Chaos_SetBit(void* Obj)
{
	((FODGridDistributionData*)Obj)->Chaos = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FODGridDistributionData_Statics::NewProp_Chaos = { "Chaos", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FODGridDistributionData), &Z_Construct_UScriptStruct_FODGridDistributionData_Statics::NewProp_Chaos_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Chaos_MetaData), NewProp_Chaos_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FODGridDistributionData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FODGridDistributionData_Statics::NewProp_GridSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FODGridDistributionData_Statics::NewProp_GridLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FODGridDistributionData_Statics::NewProp_Chaos,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FODGridDistributionData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FODGridDistributionData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ObjectDistribution,
	nullptr,
	&NewStructOps,
	"ODGridDistributionData",
	Z_Construct_UScriptStruct_FODGridDistributionData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FODGridDistributionData_Statics::PropPointers),
	sizeof(FODGridDistributionData),
	alignof(FODGridDistributionData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FODGridDistributionData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FODGridDistributionData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FODGridDistributionData()
{
	if (!Z_Registration_Info_UScriptStruct_ODGridDistributionData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ODGridDistributionData.InnerSingleton, Z_Construct_UScriptStruct_FODGridDistributionData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ODGridDistributionData.InnerSingleton;
}
// End ScriptStruct FODGridDistributionData

// Begin ScriptStruct FODPlaneDistributionData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ODPlaneDistributionData;
class UScriptStruct* FODPlaneDistributionData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ODPlaneDistributionData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ODPlaneDistributionData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FODPlaneDistributionData, (UObject*)Z_Construct_UPackage__Script_ObjectDistribution(), TEXT("ODPlaneDistributionData"));
	}
	return Z_Registration_Info_UScriptStruct_ODPlaneDistributionData.OuterSingleton;
}
template<> OBJECTDISTRIBUTION_API UScriptStruct* StaticStruct<FODPlaneDistributionData>()
{
	return FODPlaneDistributionData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FODPlaneDistributionData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/********************************************************************************************************************************/" },
		{ "ModuleRelativePath", "Public/Data/ODDistributionData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/ODDistributionData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRandomOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/ODDistributionData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/ODDistributionData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Offset;
	static void NewProp_bRandomOffset_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRandomOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RandomOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FODPlaneDistributionData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FODPlaneDistributionData_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FODPlaneDistributionData, Offset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Offset_MetaData), NewProp_Offset_MetaData) };
void Z_Construct_UScriptStruct_FODPlaneDistributionData_Statics::NewProp_bRandomOffset_SetBit(void* Obj)
{
	((FODPlaneDistributionData*)Obj)->bRandomOffset = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FODPlaneDistributionData_Statics::NewProp_bRandomOffset = { "bRandomOffset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FODPlaneDistributionData), &Z_Construct_UScriptStruct_FODPlaneDistributionData_Statics::NewProp_bRandomOffset_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRandomOffset_MetaData), NewProp_bRandomOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FODPlaneDistributionData_Statics::NewProp_RandomOffset = { "RandomOffset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FODPlaneDistributionData, RandomOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomOffset_MetaData), NewProp_RandomOffset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FODPlaneDistributionData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FODPlaneDistributionData_Statics::NewProp_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FODPlaneDistributionData_Statics::NewProp_bRandomOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FODPlaneDistributionData_Statics::NewProp_RandomOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FODPlaneDistributionData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FODPlaneDistributionData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ObjectDistribution,
	nullptr,
	&NewStructOps,
	"ODPlaneDistributionData",
	Z_Construct_UScriptStruct_FODPlaneDistributionData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FODPlaneDistributionData_Statics::PropPointers),
	sizeof(FODPlaneDistributionData),
	alignof(FODPlaneDistributionData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FODPlaneDistributionData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FODPlaneDistributionData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FODPlaneDistributionData()
{
	if (!Z_Registration_Info_UScriptStruct_ODPlaneDistributionData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ODPlaneDistributionData.InnerSingleton, Z_Construct_UScriptStruct_FODPlaneDistributionData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ODPlaneDistributionData.InnerSingleton;
}
// End ScriptStruct FODPlaneDistributionData

// Begin ScriptStruct FODSpiralDistributionData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ODSpiralDistributionData;
class UScriptStruct* FODSpiralDistributionData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ODSpiralDistributionData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ODSpiralDistributionData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FODSpiralDistributionData, (UObject*)Z_Construct_UPackage__Script_ObjectDistribution(), TEXT("ODSpiralDistributionData"));
	}
	return Z_Registration_Info_UScriptStruct_ODSpiralDistributionData.OuterSingleton;
}
template<> OBJECTDISTRIBUTION_API UScriptStruct* StaticStruct<FODSpiralDistributionData>()
{
	return FODSpiralDistributionData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FODSpiralDistributionData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/********************************************************************************************************************************/" },
		{ "ModuleRelativePath", "Public/Data/ODDistributionData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/ODDistributionData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Length_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/ODDistributionData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleDistance_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/ODDistributionData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Length;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleDistance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FODSpiralDistributionData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FODSpiralDistributionData_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FODSpiralDistributionData, Rotation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FODSpiralDistributionData_Statics::NewProp_Length = { "Length", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FODSpiralDistributionData, Length), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Length_MetaData), NewProp_Length_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FODSpiralDistributionData_Statics::NewProp_ScaleDistance = { "ScaleDistance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FODSpiralDistributionData, ScaleDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleDistance_MetaData), NewProp_ScaleDistance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FODSpiralDistributionData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FODSpiralDistributionData_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FODSpiralDistributionData_Statics::NewProp_Length,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FODSpiralDistributionData_Statics::NewProp_ScaleDistance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FODSpiralDistributionData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FODSpiralDistributionData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ObjectDistribution,
	nullptr,
	&NewStructOps,
	"ODSpiralDistributionData",
	Z_Construct_UScriptStruct_FODSpiralDistributionData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FODSpiralDistributionData_Statics::PropPointers),
	sizeof(FODSpiralDistributionData),
	alignof(FODSpiralDistributionData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FODSpiralDistributionData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FODSpiralDistributionData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FODSpiralDistributionData()
{
	if (!Z_Registration_Info_UScriptStruct_ODSpiralDistributionData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ODSpiralDistributionData.InnerSingleton, Z_Construct_UScriptStruct_FODSpiralDistributionData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ODSpiralDistributionData.InnerSingleton;
}
// End ScriptStruct FODSpiralDistributionData

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ObjectDistribution_Public_Data_ODDistributionData_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FODDiskDistributionData::StaticStruct, Z_Construct_UScriptStruct_FODDiskDistributionData_Statics::NewStructOps, TEXT("ODDiskDistributionData"), &Z_Registration_Info_UScriptStruct_ODDiskDistributionData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FODDiskDistributionData), 2276438453U) },
		{ FODCubeDistributionData::StaticStruct, Z_Construct_UScriptStruct_FODCubeDistributionData_Statics::NewStructOps, TEXT("ODCubeDistributionData"), &Z_Registration_Info_UScriptStruct_ODCubeDistributionData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FODCubeDistributionData), 4014688577U) },
		{ FODLineDistributionData::StaticStruct, Z_Construct_UScriptStruct_FODLineDistributionData_Statics::NewStructOps, TEXT("ODLineDistributionData"), &Z_Registration_Info_UScriptStruct_ODLineDistributionData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FODLineDistributionData), 1230466085U) },
		{ FODRingDistributionData::StaticStruct, Z_Construct_UScriptStruct_FODRingDistributionData_Statics::NewStructOps, TEXT("ODRingDistributionData"), &Z_Registration_Info_UScriptStruct_ODRingDistributionData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FODRingDistributionData), 2132914566U) },
		{ FODSphereDistributionData::StaticStruct, Z_Construct_UScriptStruct_FODSphereDistributionData_Statics::NewStructOps, TEXT("ODSphereDistributionData"), &Z_Registration_Info_UScriptStruct_ODSphereDistributionData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FODSphereDistributionData), 1537026329U) },
		{ FODGridDistributionData::StaticStruct, Z_Construct_UScriptStruct_FODGridDistributionData_Statics::NewStructOps, TEXT("ODGridDistributionData"), &Z_Registration_Info_UScriptStruct_ODGridDistributionData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FODGridDistributionData), 736794814U) },
		{ FODPlaneDistributionData::StaticStruct, Z_Construct_UScriptStruct_FODPlaneDistributionData_Statics::NewStructOps, TEXT("ODPlaneDistributionData"), &Z_Registration_Info_UScriptStruct_ODPlaneDistributionData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FODPlaneDistributionData), 3851040986U) },
		{ FODSpiralDistributionData::StaticStruct, Z_Construct_UScriptStruct_FODSpiralDistributionData_Statics::NewStructOps, TEXT("ODSpiralDistributionData"), &Z_Registration_Info_UScriptStruct_ODSpiralDistributionData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FODSpiralDistributionData), 1376488153U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ObjectDistribution_Public_Data_ODDistributionData_h_3957235255(TEXT("/Script/ObjectDistribution"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ObjectDistribution_Public_Data_ODDistributionData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ObjectDistribution_Public_Data_ODDistributionData_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
