// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObjectDistribution/Public/Data/ODMeshData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeODMeshData() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
OBJECTDISTRIBUTION_API UEnum* Z_Construct_UEnum_ObjectDistribution_EObjectDistributionType();
OBJECTDISTRIBUTION_API UEnum* Z_Construct_UEnum_ObjectDistribution_EObjectOrientation();
OBJECTDISTRIBUTION_API UEnum* Z_Construct_UEnum_ObjectDistribution_EODDistributionFinishType();
OBJECTDISTRIBUTION_API UEnum* Z_Construct_UEnum_ObjectDistribution_EODLineAxis();
OBJECTDISTRIBUTION_API UEnum* Z_Construct_UEnum_ObjectDistribution_EODMeshConversionType();
OBJECTDISTRIBUTION_API UScriptStruct* Z_Construct_UScriptStruct_FDistObjectData();
OBJECTDISTRIBUTION_API UScriptStruct* Z_Construct_UScriptStruct_FDistObjectPropertyData();
UPackage* Z_Construct_UPackage__Script_ObjectDistribution();
// End Cross Module References

// Begin Enum EObjectDistributionType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EObjectDistributionType;
static UEnum* EObjectDistributionType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EObjectDistributionType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EObjectDistributionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ObjectDistribution_EObjectDistributionType, (UObject*)Z_Construct_UPackage__Script_ObjectDistribution(), TEXT("EObjectDistributionType"));
	}
	return Z_Registration_Info_UEnum_EObjectDistributionType.OuterSingleton;
}
template<> OBJECTDISTRIBUTION_API UEnum* StaticEnum<EObjectDistributionType>()
{
	return EObjectDistributionType_StaticEnum();
}
struct Z_Construct_UEnum_ObjectDistribution_EObjectDistributionType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Object Distribution Data" },
		{ "Cube.DisplayName", "Cube" },
		{ "Cube.Name", "EObjectDistributionType::Cube" },
		{ "Disk.DisplayName", "Disk" },
		{ "Disk.Name", "EObjectDistributionType::Disk" },
		{ "Grid.DisplayName", "Grid" },
		{ "Grid.Name", "EObjectDistributionType::Grid" },
		{ "Line.DisplayName", "Line" },
		{ "Line.Name", "EObjectDistributionType::Line" },
		{ "ModuleRelativePath", "Public/Data/ODMeshData.h" },
		{ "Plane.DisplayName", "Plane" },
		{ "Plane.Name", "EObjectDistributionType::Plane" },
		{ "Ring.DisplayName", "Ring" },
		{ "Ring.Name", "EObjectDistributionType::Ring" },
		{ "Sphere.DisplayName", "Sphere" },
		{ "Sphere.Name", "EObjectDistributionType::Sphere" },
		{ "Spiral.DisplayName", "Spiral" },
		{ "Spiral.Name", "EObjectDistributionType::Spiral" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EObjectDistributionType::Cube", (int64)EObjectDistributionType::Cube },
		{ "EObjectDistributionType::Ring", (int64)EObjectDistributionType::Ring },
		{ "EObjectDistributionType::Disk", (int64)EObjectDistributionType::Disk },
		{ "EObjectDistributionType::Sphere", (int64)EObjectDistributionType::Sphere },
		{ "EObjectDistributionType::Spiral", (int64)EObjectDistributionType::Spiral },
		{ "EObjectDistributionType::Line", (int64)EObjectDistributionType::Line },
		{ "EObjectDistributionType::Plane", (int64)EObjectDistributionType::Plane },
		{ "EObjectDistributionType::Grid", (int64)EObjectDistributionType::Grid },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ObjectDistribution_EObjectDistributionType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ObjectDistribution,
	nullptr,
	"EObjectDistributionType",
	"EObjectDistributionType",
	Z_Construct_UEnum_ObjectDistribution_EObjectDistributionType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ObjectDistribution_EObjectDistributionType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ObjectDistribution_EObjectDistributionType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ObjectDistribution_EObjectDistributionType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ObjectDistribution_EObjectDistributionType()
{
	if (!Z_Registration_Info_UEnum_EObjectDistributionType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EObjectDistributionType.InnerSingleton, Z_Construct_UEnum_ObjectDistribution_EObjectDistributionType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EObjectDistributionType.InnerSingleton;
}
// End Enum EObjectDistributionType

// Begin Enum EObjectOrientation
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EObjectOrientation;
static UEnum* EObjectOrientation_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EObjectOrientation.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EObjectOrientation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ObjectDistribution_EObjectOrientation, (UObject*)Z_Construct_UPackage__Script_ObjectDistribution(), TEXT("EObjectOrientation"));
	}
	return Z_Registration_Info_UEnum_EObjectOrientation.OuterSingleton;
}
template<> OBJECTDISTRIBUTION_API UEnum* StaticEnum<EObjectOrientation>()
{
	return EObjectOrientation_StaticEnum();
}
struct Z_Construct_UEnum_ObjectDistribution_EObjectOrientation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Object Distribution Data" },
		{ "Inside.DisplayName", "Inside" },
		{ "Inside.Name", "EObjectOrientation::Inside" },
		{ "Keep.DisplayName", "Keep" },
		{ "Keep.Name", "EObjectOrientation::Keep" },
		{ "ModuleRelativePath", "Public/Data/ODMeshData.h" },
		{ "Outside.DisplayName", "Outside" },
		{ "Outside.Name", "EObjectOrientation::Outside" },
		{ "Random.DisplayName", "Random" },
		{ "Random.Name", "EObjectOrientation::Random" },
		{ "RandomZ.DisplayName", "Random Around" },
		{ "RandomZ.Name", "EObjectOrientation::RandomZ" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EObjectOrientation::Keep", (int64)EObjectOrientation::Keep },
		{ "EObjectOrientation::Inside", (int64)EObjectOrientation::Inside },
		{ "EObjectOrientation::Outside", (int64)EObjectOrientation::Outside },
		{ "EObjectOrientation::RandomZ", (int64)EObjectOrientation::RandomZ },
		{ "EObjectOrientation::Random", (int64)EObjectOrientation::Random },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ObjectDistribution_EObjectOrientation_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ObjectDistribution,
	nullptr,
	"EObjectOrientation",
	"EObjectOrientation",
	Z_Construct_UEnum_ObjectDistribution_EObjectOrientation_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ObjectDistribution_EObjectOrientation_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ObjectDistribution_EObjectOrientation_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ObjectDistribution_EObjectOrientation_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ObjectDistribution_EObjectOrientation()
{
	if (!Z_Registration_Info_UEnum_EObjectOrientation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EObjectOrientation.InnerSingleton, Z_Construct_UEnum_ObjectDistribution_EObjectOrientation_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EObjectOrientation.InnerSingleton;
}
// End Enum EObjectOrientation

// Begin Enum EODLineAxis
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EODLineAxis;
static UEnum* EODLineAxis_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EODLineAxis.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EODLineAxis.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ObjectDistribution_EODLineAxis, (UObject*)Z_Construct_UPackage__Script_ObjectDistribution(), TEXT("EODLineAxis"));
	}
	return Z_Registration_Info_UEnum_EODLineAxis.OuterSingleton;
}
template<> OBJECTDISTRIBUTION_API UEnum* StaticEnum<EODLineAxis>()
{
	return EODLineAxis_StaticEnum();
}
struct Z_Construct_UEnum_ObjectDistribution_EODLineAxis_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AxisX.DisplayName", "AxisX" },
		{ "AxisX.Name", "EODLineAxis::AxisX" },
		{ "AxisY.DisplayName", "AxisY" },
		{ "AxisY.Name", "EODLineAxis::AxisY" },
		{ "AxisZ.DisplayName", "AxisZ" },
		{ "AxisZ.Name", "EODLineAxis::AxisZ" },
		{ "BlueprintType", "true" },
		{ "Category", "Object Distribution Data" },
		{ "ModuleRelativePath", "Public/Data/ODMeshData.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EODLineAxis::None" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EODLineAxis::None", (int64)EODLineAxis::None },
		{ "EODLineAxis::AxisX", (int64)EODLineAxis::AxisX },
		{ "EODLineAxis::AxisY", (int64)EODLineAxis::AxisY },
		{ "EODLineAxis::AxisZ", (int64)EODLineAxis::AxisZ },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ObjectDistribution_EODLineAxis_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ObjectDistribution,
	nullptr,
	"EODLineAxis",
	"EODLineAxis",
	Z_Construct_UEnum_ObjectDistribution_EODLineAxis_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ObjectDistribution_EODLineAxis_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ObjectDistribution_EODLineAxis_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ObjectDistribution_EODLineAxis_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ObjectDistribution_EODLineAxis()
{
	if (!Z_Registration_Info_UEnum_EODLineAxis.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EODLineAxis.InnerSingleton, Z_Construct_UEnum_ObjectDistribution_EODLineAxis_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EODLineAxis.InnerSingleton;
}
// End Enum EODLineAxis

// Begin Enum EODDistributionFinishType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EODDistributionFinishType;
static UEnum* EODDistributionFinishType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EODDistributionFinishType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EODDistributionFinishType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ObjectDistribution_EODDistributionFinishType, (UObject*)Z_Construct_UPackage__Script_ObjectDistribution(), TEXT("EODDistributionFinishType"));
	}
	return Z_Registration_Info_UEnum_EODDistributionFinishType.OuterSingleton;
}
template<> OBJECTDISTRIBUTION_API UEnum* StaticEnum<EODDistributionFinishType>()
{
	return EODDistributionFinishType_StaticEnum();
}
struct Z_Construct_UEnum_ObjectDistribution_EODDistributionFinishType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Batch.DisplayName", "Batch" },
		{ "Batch.Name", "EODDistributionFinishType::Batch" },
		{ "Batch.ToolTip", "Batch the selected objects under a common actor based on the selected target component type." },
		{ "BlueprintType", "true" },
		{ "Category", "Object Distribution Data" },
		{ "Keep.DisplayName", "Keep" },
		{ "Keep.Name", "EODDistributionFinishType::Keep" },
		{ "Keep.ToolTip", "It leaves the objects as separate individual static mesh actors." },
		{ "Merge.DisplayName", "Run Merge Tool" },
		{ "Merge.Name", "EODDistributionFinishType::Merge" },
		{ "Merge.ToolTip", "Runs the built-in merge tool for the created objects. " },
		{ "ModuleRelativePath", "Public/Data/ODMeshData.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EODDistributionFinishType::Keep", (int64)EODDistributionFinishType::Keep },
		{ "EODDistributionFinishType::Batch", (int64)EODDistributionFinishType::Batch },
		{ "EODDistributionFinishType::Merge", (int64)EODDistributionFinishType::Merge },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ObjectDistribution_EODDistributionFinishType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ObjectDistribution,
	nullptr,
	"EODDistributionFinishType",
	"EODDistributionFinishType",
	Z_Construct_UEnum_ObjectDistribution_EODDistributionFinishType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ObjectDistribution_EODDistributionFinishType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ObjectDistribution_EODDistributionFinishType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ObjectDistribution_EODDistributionFinishType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ObjectDistribution_EODDistributionFinishType()
{
	if (!Z_Registration_Info_UEnum_EODDistributionFinishType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EODDistributionFinishType.InnerSingleton, Z_Construct_UEnum_ObjectDistribution_EODDistributionFinishType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EODDistributionFinishType.InnerSingleton;
}
// End Enum EODDistributionFinishType

// Begin Enum EODMeshConversionType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EODMeshConversionType;
static UEnum* EODMeshConversionType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EODMeshConversionType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EODMeshConversionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ObjectDistribution_EODMeshConversionType, (UObject*)Z_Construct_UPackage__Script_ObjectDistribution(), TEXT("EODMeshConversionType"));
	}
	return Z_Registration_Info_UEnum_EODMeshConversionType.OuterSingleton;
}
template<> OBJECTDISTRIBUTION_API UEnum* StaticEnum<EODMeshConversionType>()
{
	return EODMeshConversionType_StaticEnum();
}
struct Z_Construct_UEnum_ObjectDistribution_EODMeshConversionType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Object Distribution Data" },
		{ "HIsm.DisplayName", "HISM Component" },
		{ "HIsm.Name", "EODMeshConversionType::HIsm" },
		{ "HIsm.ToolTip", "Hierarchical Instanced Static Mesh Component" },
		{ "Ism.DisplayName", "ISM Component" },
		{ "Ism.Name", "EODMeshConversionType::Ism" },
		{ "Ism.ToolTip", "Instanced Static Mesh Component" },
		{ "ModuleRelativePath", "Public/Data/ODMeshData.h" },
		{ "Sm.DisplayName", "SM Component" },
		{ "Sm.Name", "EODMeshConversionType::Sm" },
		{ "Sm.ToolTip", "Static Mesh Component" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EODMeshConversionType::Sm", (int64)EODMeshConversionType::Sm },
		{ "EODMeshConversionType::Ism", (int64)EODMeshConversionType::Ism },
		{ "EODMeshConversionType::HIsm", (int64)EODMeshConversionType::HIsm },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ObjectDistribution_EODMeshConversionType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ObjectDistribution,
	nullptr,
	"EODMeshConversionType",
	"EODMeshConversionType",
	Z_Construct_UEnum_ObjectDistribution_EODMeshConversionType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ObjectDistribution_EODMeshConversionType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ObjectDistribution_EODMeshConversionType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ObjectDistribution_EODMeshConversionType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ObjectDistribution_EODMeshConversionType()
{
	if (!Z_Registration_Info_UEnum_EODMeshConversionType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EODMeshConversionType.InnerSingleton, Z_Construct_UEnum_ObjectDistribution_EODMeshConversionType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EODMeshConversionType.InnerSingleton;
}
// End Enum EODMeshConversionType

// Begin ScriptStruct FDistObjectPropertyData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DistObjectPropertyData;
class UScriptStruct* FDistObjectPropertyData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DistObjectPropertyData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DistObjectPropertyData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDistObjectPropertyData, (UObject*)Z_Construct_UPackage__Script_ObjectDistribution(), TEXT("DistObjectPropertyData"));
	}
	return Z_Registration_Info_UScriptStruct_DistObjectPropertyData.OuterSingleton;
}
template<> OBJECTDISTRIBUTION_API UScriptStruct* StaticStruct<FDistObjectPropertyData>()
{
	return FDistObjectPropertyData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDistObjectPropertyData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Data/ODMeshData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnCount_MetaData[] = {
		{ "Category", "Object Distribution Data" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Data/ODMeshData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleRange_MetaData[] = {
		{ "Category", "Object Distribution Data" },
		{ "ModuleRelativePath", "Public/Data/ODMeshData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinearDamping_MetaData[] = {
		{ "Category", "Object Distribution Data" },
		{ "ModuleRelativePath", "Public/Data/ODMeshData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngularDamping_MetaData[] = {
		{ "Category", "Object Distribution Data" },
		{ "ModuleRelativePath", "Public/Data/ODMeshData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mass_MetaData[] = {
		{ "Category", "Object Distribution Data" },
		{ "ModuleRelativePath", "Public/Data/ODMeshData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrientationType_MetaData[] = {
		{ "Category", "Object Distribution Data" },
		{ "ModuleRelativePath", "Public/Data/ODMeshData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SpawnCount;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScaleRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LinearDamping;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AngularDamping;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Mass;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OrientationType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OrientationType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDistObjectPropertyData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDistObjectPropertyData_Statics::NewProp_SpawnCount = { "SpawnCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDistObjectPropertyData, SpawnCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnCount_MetaData), NewProp_SpawnCount_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDistObjectPropertyData_Statics::NewProp_ScaleRange = { "ScaleRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDistObjectPropertyData, ScaleRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleRange_MetaData), NewProp_ScaleRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDistObjectPropertyData_Statics::NewProp_LinearDamping = { "LinearDamping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDistObjectPropertyData, LinearDamping), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinearDamping_MetaData), NewProp_LinearDamping_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDistObjectPropertyData_Statics::NewProp_AngularDamping = { "AngularDamping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDistObjectPropertyData, AngularDamping), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngularDamping_MetaData), NewProp_AngularDamping_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDistObjectPropertyData_Statics::NewProp_Mass = { "Mass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDistObjectPropertyData, Mass), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mass_MetaData), NewProp_Mass_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDistObjectPropertyData_Statics::NewProp_OrientationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDistObjectPropertyData_Statics::NewProp_OrientationType = { "OrientationType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDistObjectPropertyData, OrientationType), Z_Construct_UEnum_ObjectDistribution_EObjectOrientation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrientationType_MetaData), NewProp_OrientationType_MetaData) }; // 1099171471
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDistObjectPropertyData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDistObjectPropertyData_Statics::NewProp_SpawnCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDistObjectPropertyData_Statics::NewProp_ScaleRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDistObjectPropertyData_Statics::NewProp_LinearDamping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDistObjectPropertyData_Statics::NewProp_AngularDamping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDistObjectPropertyData_Statics::NewProp_Mass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDistObjectPropertyData_Statics::NewProp_OrientationType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDistObjectPropertyData_Statics::NewProp_OrientationType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDistObjectPropertyData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDistObjectPropertyData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ObjectDistribution,
	nullptr,
	&NewStructOps,
	"DistObjectPropertyData",
	Z_Construct_UScriptStruct_FDistObjectPropertyData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDistObjectPropertyData_Statics::PropPointers),
	sizeof(FDistObjectPropertyData),
	alignof(FDistObjectPropertyData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDistObjectPropertyData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDistObjectPropertyData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDistObjectPropertyData()
{
	if (!Z_Registration_Info_UScriptStruct_DistObjectPropertyData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DistObjectPropertyData.InnerSingleton, Z_Construct_UScriptStruct_FDistObjectPropertyData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DistObjectPropertyData.InnerSingleton;
}
// End ScriptStruct FDistObjectPropertyData

// Begin ScriptStruct FDistObjectData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DistObjectData;
class UScriptStruct* FDistObjectData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DistObjectData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DistObjectData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDistObjectData, (UObject*)Z_Construct_UPackage__Script_ObjectDistribution(), TEXT("DistObjectData"));
	}
	return Z_Registration_Info_UScriptStruct_DistObjectData.OuterSingleton;
}
template<> OBJECTDISTRIBUTION_API UScriptStruct* StaticStruct<FDistObjectData>()
{
	return FDistObjectData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDistObjectData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Data/ODMeshData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[] = {
		{ "Category", "Object Distribution Data" },
		{ "ModuleRelativePath", "Public/Data/ODMeshData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSelectRandomMaterial_MetaData[] = {
		{ "Category", "Object Distribution Data" },
		{ "DisplayName", "Override Material" },
		{ "ModuleRelativePath", "Public/Data/ODMeshData.h" },
		{ "ToolTip", "Assign new material for first material slot" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondRandomMaterial_MetaData[] = {
		{ "Category", "Object Distribution Data" },
		{ "DisplayName", "New Material" },
		{ "EditCondition", "bSelectRandomMaterial" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Data/ODMeshData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSelectMaterialRandomly_MetaData[] = {
		{ "Category", "Object Distribution Data" },
		{ "DisplayName", "Select Material Randomly" },
		{ "EditCondition", "bSelectRandomMaterial" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Data/ODMeshData.h" },
		{ "ToolTip", "It randomly changes the assigned material or doesn't change it at all." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistributionProperties_MetaData[] = {
		{ "Category", "Object Distribution Data" },
		{ "ModuleRelativePath", "Public/Data/ODMeshData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveStatus_MetaData[] = {
		{ "Category", "Object Distribution Data" },
		{ "ModuleRelativePath", "Public/Data/ODMeshData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerPreset_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/ODMeshData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_StaticMesh;
	static void NewProp_bSelectRandomMaterial_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelectRandomMaterial;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SecondRandomMaterial;
	static void NewProp_bSelectMaterialRandomly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelectMaterialRandomly;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DistributionProperties;
	static void NewProp_ActiveStatus_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ActiveStatus;
	static const UECodeGen_Private::FNamePropertyParams NewProp_OwnerPreset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDistObjectData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FDistObjectData_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDistObjectData, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMesh_MetaData), NewProp_StaticMesh_MetaData) };
void Z_Construct_UScriptStruct_FDistObjectData_Statics::NewProp_bSelectRandomMaterial_SetBit(void* Obj)
{
	((FDistObjectData*)Obj)->bSelectRandomMaterial = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDistObjectData_Statics::NewProp_bSelectRandomMaterial = { "bSelectRandomMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDistObjectData), &Z_Construct_UScriptStruct_FDistObjectData_Statics::NewProp_bSelectRandomMaterial_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSelectRandomMaterial_MetaData), NewProp_bSelectRandomMaterial_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FDistObjectData_Statics::NewProp_SecondRandomMaterial = { "SecondRandomMaterial", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDistObjectData, SecondRandomMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondRandomMaterial_MetaData), NewProp_SecondRandomMaterial_MetaData) };
void Z_Construct_UScriptStruct_FDistObjectData_Statics::NewProp_bSelectMaterialRandomly_SetBit(void* Obj)
{
	((FDistObjectData*)Obj)->bSelectMaterialRandomly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDistObjectData_Statics::NewProp_bSelectMaterialRandomly = { "bSelectMaterialRandomly", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDistObjectData), &Z_Construct_UScriptStruct_FDistObjectData_Statics::NewProp_bSelectMaterialRandomly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSelectMaterialRandomly_MetaData), NewProp_bSelectMaterialRandomly_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDistObjectData_Statics::NewProp_DistributionProperties = { "DistributionProperties", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDistObjectData, DistributionProperties), Z_Construct_UScriptStruct_FDistObjectPropertyData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistributionProperties_MetaData), NewProp_DistributionProperties_MetaData) }; // 72803470
void Z_Construct_UScriptStruct_FDistObjectData_Statics::NewProp_ActiveStatus_SetBit(void* Obj)
{
	((FDistObjectData*)Obj)->ActiveStatus = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDistObjectData_Statics::NewProp_ActiveStatus = { "ActiveStatus", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDistObjectData), &Z_Construct_UScriptStruct_FDistObjectData_Statics::NewProp_ActiveStatus_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveStatus_MetaData), NewProp_ActiveStatus_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDistObjectData_Statics::NewProp_OwnerPreset = { "OwnerPreset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDistObjectData, OwnerPreset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerPreset_MetaData), NewProp_OwnerPreset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDistObjectData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDistObjectData_Statics::NewProp_StaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDistObjectData_Statics::NewProp_bSelectRandomMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDistObjectData_Statics::NewProp_SecondRandomMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDistObjectData_Statics::NewProp_bSelectMaterialRandomly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDistObjectData_Statics::NewProp_DistributionProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDistObjectData_Statics::NewProp_ActiveStatus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDistObjectData_Statics::NewProp_OwnerPreset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDistObjectData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDistObjectData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ObjectDistribution,
	nullptr,
	&NewStructOps,
	"DistObjectData",
	Z_Construct_UScriptStruct_FDistObjectData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDistObjectData_Statics::PropPointers),
	sizeof(FDistObjectData),
	alignof(FDistObjectData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDistObjectData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDistObjectData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDistObjectData()
{
	if (!Z_Registration_Info_UScriptStruct_DistObjectData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DistObjectData.InnerSingleton, Z_Construct_UScriptStruct_FDistObjectData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DistObjectData.InnerSingleton;
}
// End ScriptStruct FDistObjectData

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ObjectDistribution_Public_Data_ODMeshData_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EObjectDistributionType_StaticEnum, TEXT("EObjectDistributionType"), &Z_Registration_Info_UEnum_EObjectDistributionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3898895517U) },
		{ EObjectOrientation_StaticEnum, TEXT("EObjectOrientation"), &Z_Registration_Info_UEnum_EObjectOrientation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1099171471U) },
		{ EODLineAxis_StaticEnum, TEXT("EODLineAxis"), &Z_Registration_Info_UEnum_EODLineAxis, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1577191740U) },
		{ EODDistributionFinishType_StaticEnum, TEXT("EODDistributionFinishType"), &Z_Registration_Info_UEnum_EODDistributionFinishType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3679126802U) },
		{ EODMeshConversionType_StaticEnum, TEXT("EODMeshConversionType"), &Z_Registration_Info_UEnum_EODMeshConversionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1707667702U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDistObjectPropertyData::StaticStruct, Z_Construct_UScriptStruct_FDistObjectPropertyData_Statics::NewStructOps, TEXT("DistObjectPropertyData"), &Z_Registration_Info_UScriptStruct_DistObjectPropertyData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDistObjectPropertyData), 72803470U) },
		{ FDistObjectData::StaticStruct, Z_Construct_UScriptStruct_FDistObjectData_Statics::NewStructOps, TEXT("DistObjectData"), &Z_Registration_Info_UScriptStruct_DistObjectData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDistObjectData), 3413145670U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ObjectDistribution_Public_Data_ODMeshData_h_2812371920(TEXT("/Script/ObjectDistribution"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ObjectDistribution_Public_Data_ODMeshData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ObjectDistribution_Public_Data_ODMeshData_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ObjectDistribution_Public_Data_ODMeshData_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ObjectDistribution_Public_Data_ODMeshData_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
