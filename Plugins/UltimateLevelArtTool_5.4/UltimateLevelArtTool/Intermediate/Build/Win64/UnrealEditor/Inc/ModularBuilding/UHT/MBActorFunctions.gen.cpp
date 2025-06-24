// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularBuilding/Public/Libraries/MBActorFunctions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMBActorFunctions() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
MODULARBUILDING_API UClass* Z_Construct_UClass_UMBActorFunctions();
MODULARBUILDING_API UClass* Z_Construct_UClass_UMBActorFunctions_NoRegister();
MODULARBUILDING_API UEnum* Z_Construct_UEnum_ModularBuilding_EBuildingCategory();
UPackage* Z_Construct_UPackage__Script_ModularBuilding();
// End Cross Module References

// Begin Class UMBActorFunctions Function FilterForCategory
struct Z_Construct_UFunction_UMBActorFunctions_FilterForCategory_Statics
{
	struct MBActorFunctions_eventFilterForCategory_Parms
	{
		EBuildingCategory InCategory;
		TArray<AActor*> InActors;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Editor/MBActor" },
		{ "Keywords", "Modular Actor" },
		{ "ModuleRelativePath", "Public/Libraries/MBActorFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InCategory_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InCategory_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InCategory;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InActors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMBActorFunctions_FilterForCategory_Statics::NewProp_InCategory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMBActorFunctions_FilterForCategory_Statics::NewProp_InCategory = { "InCategory", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MBActorFunctions_eventFilterForCategory_Parms, InCategory), Z_Construct_UEnum_ModularBuilding_EBuildingCategory, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InCategory_MetaData), NewProp_InCategory_MetaData) }; // 385100287
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMBActorFunctions_FilterForCategory_Statics::NewProp_InActors_Inner = { "InActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMBActorFunctions_FilterForCategory_Statics::NewProp_InActors = { "InActors", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MBActorFunctions_eventFilterForCategory_Parms, InActors), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMBActorFunctions_FilterForCategory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMBActorFunctions_FilterForCategory_Statics::NewProp_InCategory_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMBActorFunctions_FilterForCategory_Statics::NewProp_InCategory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMBActorFunctions_FilterForCategory_Statics::NewProp_InActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMBActorFunctions_FilterForCategory_Statics::NewProp_InActors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBActorFunctions_FilterForCategory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMBActorFunctions_FilterForCategory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMBActorFunctions, nullptr, "FilterForCategory", nullptr, nullptr, Z_Construct_UFunction_UMBActorFunctions_FilterForCategory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMBActorFunctions_FilterForCategory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMBActorFunctions_FilterForCategory_Statics::MBActorFunctions_eventFilterForCategory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBActorFunctions_FilterForCategory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMBActorFunctions_FilterForCategory_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMBActorFunctions_FilterForCategory_Statics::MBActorFunctions_eventFilterForCategory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMBActorFunctions_FilterForCategory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMBActorFunctions_FilterForCategory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMBActorFunctions::execFilterForCategory)
{
	P_GET_ENUM(EBuildingCategory,Z_Param_InCategory);
	P_GET_TARRAY_REF(AActor*,Z_Param_Out_InActors);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMBActorFunctions::FilterForCategory(EBuildingCategory(Z_Param_InCategory),Z_Param_Out_InActors);
	P_NATIVE_END;
}
// End Class UMBActorFunctions Function FilterForCategory

// Begin Class UMBActorFunctions Function FilterModularActors
struct Z_Construct_UFunction_UMBActorFunctions_FilterModularActors_Statics
{
	struct MBActorFunctions_eventFilterModularActors_Parms
	{
		TArray<AActor*> InActors;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Editor/MBActor" },
		{ "Keywords", "Modular Actor" },
		{ "ModuleRelativePath", "Public/Libraries/MBActorFunctions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InActors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMBActorFunctions_FilterModularActors_Statics::NewProp_InActors_Inner = { "InActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMBActorFunctions_FilterModularActors_Statics::NewProp_InActors = { "InActors", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MBActorFunctions_eventFilterModularActors_Parms, InActors), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMBActorFunctions_FilterModularActors_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMBActorFunctions_FilterModularActors_Statics::NewProp_InActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMBActorFunctions_FilterModularActors_Statics::NewProp_InActors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBActorFunctions_FilterModularActors_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMBActorFunctions_FilterModularActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMBActorFunctions, nullptr, "FilterModularActors", nullptr, nullptr, Z_Construct_UFunction_UMBActorFunctions_FilterModularActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMBActorFunctions_FilterModularActors_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMBActorFunctions_FilterModularActors_Statics::MBActorFunctions_eventFilterModularActors_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBActorFunctions_FilterModularActors_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMBActorFunctions_FilterModularActors_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMBActorFunctions_FilterModularActors_Statics::MBActorFunctions_eventFilterModularActors_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMBActorFunctions_FilterModularActors()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMBActorFunctions_FilterModularActors_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMBActorFunctions::execFilterModularActors)
{
	P_GET_TARRAY_REF(AActor*,Z_Param_Out_InActors);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMBActorFunctions::FilterModularActors(Z_Param_Out_InActors);
	P_NATIVE_END;
}
// End Class UMBActorFunctions Function FilterModularActors

// Begin Class UMBActorFunctions Function GetActorWithObjectName
struct Z_Construct_UFunction_UMBActorFunctions_GetActorWithObjectName_Statics
{
	struct MBActorFunctions_eventGetActorWithObjectName_Parms
	{
		FString InName;
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Editor/MBActor" },
		{ "Keywords", "Modular Actor" },
		{ "ModuleRelativePath", "Public/Libraries/MBActorFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMBActorFunctions_GetActorWithObjectName_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MBActorFunctions_eventGetActorWithObjectName_Parms, InName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InName_MetaData), NewProp_InName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMBActorFunctions_GetActorWithObjectName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MBActorFunctions_eventGetActorWithObjectName_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMBActorFunctions_GetActorWithObjectName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMBActorFunctions_GetActorWithObjectName_Statics::NewProp_InName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMBActorFunctions_GetActorWithObjectName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBActorFunctions_GetActorWithObjectName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMBActorFunctions_GetActorWithObjectName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMBActorFunctions, nullptr, "GetActorWithObjectName", nullptr, nullptr, Z_Construct_UFunction_UMBActorFunctions_GetActorWithObjectName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMBActorFunctions_GetActorWithObjectName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMBActorFunctions_GetActorWithObjectName_Statics::MBActorFunctions_eventGetActorWithObjectName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBActorFunctions_GetActorWithObjectName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMBActorFunctions_GetActorWithObjectName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMBActorFunctions_GetActorWithObjectName_Statics::MBActorFunctions_eventGetActorWithObjectName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMBActorFunctions_GetActorWithObjectName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMBActorFunctions_GetActorWithObjectName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMBActorFunctions::execGetActorWithObjectName)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=UMBActorFunctions::GetActorWithObjectName(Z_Param_InName);
	P_NATIVE_END;
}
// End Class UMBActorFunctions Function GetActorWithObjectName

// Begin Class UMBActorFunctions Function GetAllActorsTransportPoint
struct Z_Construct_UFunction_UMBActorFunctions_GetAllActorsTransportPoint_Statics
{
	struct MBActorFunctions_eventGetAllActorsTransportPoint_Parms
	{
		TArray<AActor*> InActors;
		FBox ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Editor/MBActor" },
		{ "Keywords", "Modular Actor" },
		{ "ModuleRelativePath", "Public/Libraries/MBActorFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InActors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InActors;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMBActorFunctions_GetAllActorsTransportPoint_Statics::NewProp_InActors_Inner = { "InActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMBActorFunctions_GetAllActorsTransportPoint_Statics::NewProp_InActors = { "InActors", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MBActorFunctions_eventGetAllActorsTransportPoint_Parms, InActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InActors_MetaData), NewProp_InActors_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMBActorFunctions_GetAllActorsTransportPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MBActorFunctions_eventGetAllActorsTransportPoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMBActorFunctions_GetAllActorsTransportPoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMBActorFunctions_GetAllActorsTransportPoint_Statics::NewProp_InActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMBActorFunctions_GetAllActorsTransportPoint_Statics::NewProp_InActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMBActorFunctions_GetAllActorsTransportPoint_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBActorFunctions_GetAllActorsTransportPoint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMBActorFunctions_GetAllActorsTransportPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMBActorFunctions, nullptr, "GetAllActorsTransportPoint", nullptr, nullptr, Z_Construct_UFunction_UMBActorFunctions_GetAllActorsTransportPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMBActorFunctions_GetAllActorsTransportPoint_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMBActorFunctions_GetAllActorsTransportPoint_Statics::MBActorFunctions_eventGetAllActorsTransportPoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBActorFunctions_GetAllActorsTransportPoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMBActorFunctions_GetAllActorsTransportPoint_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMBActorFunctions_GetAllActorsTransportPoint_Statics::MBActorFunctions_eventGetAllActorsTransportPoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMBActorFunctions_GetAllActorsTransportPoint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMBActorFunctions_GetAllActorsTransportPoint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMBActorFunctions::execGetAllActorsTransportPoint)
{
	P_GET_TARRAY_REF(AActor*,Z_Param_Out_InActors);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FBox*)Z_Param__Result=UMBActorFunctions::GetAllActorsTransportPoint(Z_Param_Out_InActors);
	P_NATIVE_END;
}
// End Class UMBActorFunctions Function GetAllActorsTransportPoint

// Begin Class UMBActorFunctions Function GetAllActorsTransportPointWithExtents
struct Z_Construct_UFunction_UMBActorFunctions_GetAllActorsTransportPointWithExtents_Statics
{
	struct MBActorFunctions_eventGetAllActorsTransportPointWithExtents_Parms
	{
		TArray<AActor*> InActors;
		FBox ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Editor/MBActor" },
		{ "Keywords", "Modular Actor" },
		{ "ModuleRelativePath", "Public/Libraries/MBActorFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InActors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InActors;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMBActorFunctions_GetAllActorsTransportPointWithExtents_Statics::NewProp_InActors_Inner = { "InActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMBActorFunctions_GetAllActorsTransportPointWithExtents_Statics::NewProp_InActors = { "InActors", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MBActorFunctions_eventGetAllActorsTransportPointWithExtents_Parms, InActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InActors_MetaData), NewProp_InActors_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMBActorFunctions_GetAllActorsTransportPointWithExtents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MBActorFunctions_eventGetAllActorsTransportPointWithExtents_Parms, ReturnValue), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMBActorFunctions_GetAllActorsTransportPointWithExtents_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMBActorFunctions_GetAllActorsTransportPointWithExtents_Statics::NewProp_InActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMBActorFunctions_GetAllActorsTransportPointWithExtents_Statics::NewProp_InActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMBActorFunctions_GetAllActorsTransportPointWithExtents_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBActorFunctions_GetAllActorsTransportPointWithExtents_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMBActorFunctions_GetAllActorsTransportPointWithExtents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMBActorFunctions, nullptr, "GetAllActorsTransportPointWithExtents", nullptr, nullptr, Z_Construct_UFunction_UMBActorFunctions_GetAllActorsTransportPointWithExtents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMBActorFunctions_GetAllActorsTransportPointWithExtents_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMBActorFunctions_GetAllActorsTransportPointWithExtents_Statics::MBActorFunctions_eventGetAllActorsTransportPointWithExtents_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBActorFunctions_GetAllActorsTransportPointWithExtents_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMBActorFunctions_GetAllActorsTransportPointWithExtents_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMBActorFunctions_GetAllActorsTransportPointWithExtents_Statics::MBActorFunctions_eventGetAllActorsTransportPointWithExtents_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMBActorFunctions_GetAllActorsTransportPointWithExtents()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMBActorFunctions_GetAllActorsTransportPointWithExtents_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMBActorFunctions::execGetAllActorsTransportPointWithExtents)
{
	P_GET_TARRAY_REF(AActor*,Z_Param_Out_InActors);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FBox*)Z_Param__Result=UMBActorFunctions::GetAllActorsTransportPointWithExtents(Z_Param_Out_InActors);
	P_NATIVE_END;
}
// End Class UMBActorFunctions Function GetAllActorsTransportPointWithExtents

// Begin Class UMBActorFunctions Function GetAllActorsUnderTheFolderPath
struct Z_Construct_UFunction_UMBActorFunctions_GetAllActorsUnderTheFolderPath_Statics
{
	struct MBActorFunctions_eventGetAllActorsUnderTheFolderPath_Parms
	{
		FName InFolderPath;
		TArray<AActor*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Editor/MBActor" },
		{ "Keywords", "Modular Actor" },
		{ "ModuleRelativePath", "Public/Libraries/MBActorFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InFolderPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InFolderPath;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMBActorFunctions_GetAllActorsUnderTheFolderPath_Statics::NewProp_InFolderPath = { "InFolderPath", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MBActorFunctions_eventGetAllActorsUnderTheFolderPath_Parms, InFolderPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InFolderPath_MetaData), NewProp_InFolderPath_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMBActorFunctions_GetAllActorsUnderTheFolderPath_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMBActorFunctions_GetAllActorsUnderTheFolderPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MBActorFunctions_eventGetAllActorsUnderTheFolderPath_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMBActorFunctions_GetAllActorsUnderTheFolderPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMBActorFunctions_GetAllActorsUnderTheFolderPath_Statics::NewProp_InFolderPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMBActorFunctions_GetAllActorsUnderTheFolderPath_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMBActorFunctions_GetAllActorsUnderTheFolderPath_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBActorFunctions_GetAllActorsUnderTheFolderPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMBActorFunctions_GetAllActorsUnderTheFolderPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMBActorFunctions, nullptr, "GetAllActorsUnderTheFolderPath", nullptr, nullptr, Z_Construct_UFunction_UMBActorFunctions_GetAllActorsUnderTheFolderPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMBActorFunctions_GetAllActorsUnderTheFolderPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMBActorFunctions_GetAllActorsUnderTheFolderPath_Statics::MBActorFunctions_eventGetAllActorsUnderTheFolderPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBActorFunctions_GetAllActorsUnderTheFolderPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMBActorFunctions_GetAllActorsUnderTheFolderPath_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMBActorFunctions_GetAllActorsUnderTheFolderPath_Statics::MBActorFunctions_eventGetAllActorsUnderTheFolderPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMBActorFunctions_GetAllActorsUnderTheFolderPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMBActorFunctions_GetAllActorsUnderTheFolderPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMBActorFunctions::execGetAllActorsUnderTheFolderPath)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InFolderPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<AActor*>*)Z_Param__Result=UMBActorFunctions::GetAllActorsUnderTheFolderPath(Z_Param_Out_InFolderPath);
	P_NATIVE_END;
}
// End Class UMBActorFunctions Function GetAllActorsUnderTheFolderPath

// Begin Class UMBActorFunctions Function GetAllActorsWithGivenObjectNames
struct Z_Construct_UFunction_UMBActorFunctions_GetAllActorsWithGivenObjectNames_Statics
{
	struct MBActorFunctions_eventGetAllActorsWithGivenObjectNames_Parms
	{
		TArray<FString> InNames;
		TArray<AActor*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Editor/MBActor" },
		{ "Keywords", "Modular Actor" },
		{ "ModuleRelativePath", "Public/Libraries/MBActorFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InNames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InNames;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMBActorFunctions_GetAllActorsWithGivenObjectNames_Statics::NewProp_InNames_Inner = { "InNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMBActorFunctions_GetAllActorsWithGivenObjectNames_Statics::NewProp_InNames = { "InNames", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MBActorFunctions_eventGetAllActorsWithGivenObjectNames_Parms, InNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InNames_MetaData), NewProp_InNames_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMBActorFunctions_GetAllActorsWithGivenObjectNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMBActorFunctions_GetAllActorsWithGivenObjectNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MBActorFunctions_eventGetAllActorsWithGivenObjectNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMBActorFunctions_GetAllActorsWithGivenObjectNames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMBActorFunctions_GetAllActorsWithGivenObjectNames_Statics::NewProp_InNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMBActorFunctions_GetAllActorsWithGivenObjectNames_Statics::NewProp_InNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMBActorFunctions_GetAllActorsWithGivenObjectNames_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMBActorFunctions_GetAllActorsWithGivenObjectNames_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBActorFunctions_GetAllActorsWithGivenObjectNames_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMBActorFunctions_GetAllActorsWithGivenObjectNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMBActorFunctions, nullptr, "GetAllActorsWithGivenObjectNames", nullptr, nullptr, Z_Construct_UFunction_UMBActorFunctions_GetAllActorsWithGivenObjectNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMBActorFunctions_GetAllActorsWithGivenObjectNames_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMBActorFunctions_GetAllActorsWithGivenObjectNames_Statics::MBActorFunctions_eventGetAllActorsWithGivenObjectNames_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBActorFunctions_GetAllActorsWithGivenObjectNames_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMBActorFunctions_GetAllActorsWithGivenObjectNames_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMBActorFunctions_GetAllActorsWithGivenObjectNames_Statics::MBActorFunctions_eventGetAllActorsWithGivenObjectNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMBActorFunctions_GetAllActorsWithGivenObjectNames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMBActorFunctions_GetAllActorsWithGivenObjectNames_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMBActorFunctions::execGetAllActorsWithGivenObjectNames)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_InNames);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<AActor*>*)Z_Param__Result=UMBActorFunctions::GetAllActorsWithGivenObjectNames(Z_Param_Out_InNames);
	P_NATIVE_END;
}
// End Class UMBActorFunctions Function GetAllActorsWithGivenObjectNames

// Begin Class UMBActorFunctions Function GetAllModularActorsInWorld
struct Z_Construct_UFunction_UMBActorFunctions_GetAllModularActorsInWorld_Statics
{
	struct MBActorFunctions_eventGetAllModularActorsInWorld_Parms
	{
		TArray<AActor*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Editor/MBActor" },
		{ "Keywords", "Modular Actor" },
		{ "ModuleRelativePath", "Public/Libraries/MBActorFunctions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMBActorFunctions_GetAllModularActorsInWorld_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMBActorFunctions_GetAllModularActorsInWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MBActorFunctions_eventGetAllModularActorsInWorld_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMBActorFunctions_GetAllModularActorsInWorld_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMBActorFunctions_GetAllModularActorsInWorld_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMBActorFunctions_GetAllModularActorsInWorld_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBActorFunctions_GetAllModularActorsInWorld_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMBActorFunctions_GetAllModularActorsInWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMBActorFunctions, nullptr, "GetAllModularActorsInWorld", nullptr, nullptr, Z_Construct_UFunction_UMBActorFunctions_GetAllModularActorsInWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMBActorFunctions_GetAllModularActorsInWorld_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMBActorFunctions_GetAllModularActorsInWorld_Statics::MBActorFunctions_eventGetAllModularActorsInWorld_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBActorFunctions_GetAllModularActorsInWorld_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMBActorFunctions_GetAllModularActorsInWorld_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMBActorFunctions_GetAllModularActorsInWorld_Statics::MBActorFunctions_eventGetAllModularActorsInWorld_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMBActorFunctions_GetAllModularActorsInWorld()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMBActorFunctions_GetAllModularActorsInWorld_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMBActorFunctions::execGetAllModularActorsInWorld)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<AActor*>*)Z_Param__Result=UMBActorFunctions::GetAllModularActorsInWorld();
	P_NATIVE_END;
}
// End Class UMBActorFunctions Function GetAllModularActorsInWorld

// Begin Class UMBActorFunctions Function GetBuildingCategory
struct Z_Construct_UFunction_UMBActorFunctions_GetBuildingCategory_Statics
{
	struct MBActorFunctions_eventGetBuildingCategory_Parms
	{
		const AActor* InActor;
		EBuildingCategory ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Editor/MBActor" },
		{ "Keywords", "Modular Actor" },
		{ "ModuleRelativePath", "Public/Libraries/MBActorFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InActor;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMBActorFunctions_GetBuildingCategory_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MBActorFunctions_eventGetBuildingCategory_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InActor_MetaData), NewProp_InActor_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMBActorFunctions_GetBuildingCategory_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMBActorFunctions_GetBuildingCategory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MBActorFunctions_eventGetBuildingCategory_Parms, ReturnValue), Z_Construct_UEnum_ModularBuilding_EBuildingCategory, METADATA_PARAMS(0, nullptr) }; // 385100287
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMBActorFunctions_GetBuildingCategory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMBActorFunctions_GetBuildingCategory_Statics::NewProp_InActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMBActorFunctions_GetBuildingCategory_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMBActorFunctions_GetBuildingCategory_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBActorFunctions_GetBuildingCategory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMBActorFunctions_GetBuildingCategory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMBActorFunctions, nullptr, "GetBuildingCategory", nullptr, nullptr, Z_Construct_UFunction_UMBActorFunctions_GetBuildingCategory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMBActorFunctions_GetBuildingCategory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMBActorFunctions_GetBuildingCategory_Statics::MBActorFunctions_eventGetBuildingCategory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBActorFunctions_GetBuildingCategory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMBActorFunctions_GetBuildingCategory_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMBActorFunctions_GetBuildingCategory_Statics::MBActorFunctions_eventGetBuildingCategory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMBActorFunctions_GetBuildingCategory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMBActorFunctions_GetBuildingCategory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMBActorFunctions::execGetBuildingCategory)
{
	P_GET_OBJECT(AActor,Z_Param_InActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EBuildingCategory*)Z_Param__Result=UMBActorFunctions::GetBuildingCategory(Z_Param_InActor);
	P_NATIVE_END;
}
// End Class UMBActorFunctions Function GetBuildingCategory

// Begin Class UMBActorFunctions Function IsActorFromTool
struct Z_Construct_UFunction_UMBActorFunctions_IsActorFromTool_Statics
{
	struct MBActorFunctions_eventIsActorFromTool_Parms
	{
		const AActor* InActor;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Editor/MBActor" },
		{ "Keywords", "Modular Actor" },
		{ "ModuleRelativePath", "Public/Libraries/MBActorFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InActor;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMBActorFunctions_IsActorFromTool_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MBActorFunctions_eventIsActorFromTool_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InActor_MetaData), NewProp_InActor_MetaData) };
void Z_Construct_UFunction_UMBActorFunctions_IsActorFromTool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MBActorFunctions_eventIsActorFromTool_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMBActorFunctions_IsActorFromTool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MBActorFunctions_eventIsActorFromTool_Parms), &Z_Construct_UFunction_UMBActorFunctions_IsActorFromTool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMBActorFunctions_IsActorFromTool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMBActorFunctions_IsActorFromTool_Statics::NewProp_InActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMBActorFunctions_IsActorFromTool_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBActorFunctions_IsActorFromTool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMBActorFunctions_IsActorFromTool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMBActorFunctions, nullptr, "IsActorFromTool", nullptr, nullptr, Z_Construct_UFunction_UMBActorFunctions_IsActorFromTool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMBActorFunctions_IsActorFromTool_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMBActorFunctions_IsActorFromTool_Statics::MBActorFunctions_eventIsActorFromTool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBActorFunctions_IsActorFromTool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMBActorFunctions_IsActorFromTool_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMBActorFunctions_IsActorFromTool_Statics::MBActorFunctions_eventIsActorFromTool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMBActorFunctions_IsActorFromTool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMBActorFunctions_IsActorFromTool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMBActorFunctions::execIsActorFromTool)
{
	P_GET_OBJECT(AActor,Z_Param_InActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UMBActorFunctions::IsActorFromTool(Z_Param_InActor);
	P_NATIVE_END;
}
// End Class UMBActorFunctions Function IsActorFromTool

// Begin Class UMBActorFunctions
void UMBActorFunctions::StaticRegisterNativesUMBActorFunctions()
{
	UClass* Class = UMBActorFunctions::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FilterForCategory", &UMBActorFunctions::execFilterForCategory },
		{ "FilterModularActors", &UMBActorFunctions::execFilterModularActors },
		{ "GetActorWithObjectName", &UMBActorFunctions::execGetActorWithObjectName },
		{ "GetAllActorsTransportPoint", &UMBActorFunctions::execGetAllActorsTransportPoint },
		{ "GetAllActorsTransportPointWithExtents", &UMBActorFunctions::execGetAllActorsTransportPointWithExtents },
		{ "GetAllActorsUnderTheFolderPath", &UMBActorFunctions::execGetAllActorsUnderTheFolderPath },
		{ "GetAllActorsWithGivenObjectNames", &UMBActorFunctions::execGetAllActorsWithGivenObjectNames },
		{ "GetAllModularActorsInWorld", &UMBActorFunctions::execGetAllModularActorsInWorld },
		{ "GetBuildingCategory", &UMBActorFunctions::execGetBuildingCategory },
		{ "IsActorFromTool", &UMBActorFunctions::execIsActorFromTool },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMBActorFunctions);
UClass* Z_Construct_UClass_UMBActorFunctions_NoRegister()
{
	return UMBActorFunctions::StaticClass();
}
struct Z_Construct_UClass_UMBActorFunctions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Libraries/MBActorFunctions.h" },
		{ "ModuleRelativePath", "Public/Libraries/MBActorFunctions.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMBActorFunctions_FilterForCategory, "FilterForCategory" }, // 4125046164
		{ &Z_Construct_UFunction_UMBActorFunctions_FilterModularActors, "FilterModularActors" }, // 981700313
		{ &Z_Construct_UFunction_UMBActorFunctions_GetActorWithObjectName, "GetActorWithObjectName" }, // 2035399983
		{ &Z_Construct_UFunction_UMBActorFunctions_GetAllActorsTransportPoint, "GetAllActorsTransportPoint" }, // 1562632269
		{ &Z_Construct_UFunction_UMBActorFunctions_GetAllActorsTransportPointWithExtents, "GetAllActorsTransportPointWithExtents" }, // 1715783857
		{ &Z_Construct_UFunction_UMBActorFunctions_GetAllActorsUnderTheFolderPath, "GetAllActorsUnderTheFolderPath" }, // 3334156474
		{ &Z_Construct_UFunction_UMBActorFunctions_GetAllActorsWithGivenObjectNames, "GetAllActorsWithGivenObjectNames" }, // 1174558461
		{ &Z_Construct_UFunction_UMBActorFunctions_GetAllModularActorsInWorld, "GetAllModularActorsInWorld" }, // 2726257367
		{ &Z_Construct_UFunction_UMBActorFunctions_GetBuildingCategory, "GetBuildingCategory" }, // 1261734278
		{ &Z_Construct_UFunction_UMBActorFunctions_IsActorFromTool, "IsActorFromTool" }, // 1694741367
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMBActorFunctions>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMBActorFunctions_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_ModularBuilding,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMBActorFunctions_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMBActorFunctions_Statics::ClassParams = {
	&UMBActorFunctions::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMBActorFunctions_Statics::Class_MetaDataParams), Z_Construct_UClass_UMBActorFunctions_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMBActorFunctions()
{
	if (!Z_Registration_Info_UClass_UMBActorFunctions.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMBActorFunctions.OuterSingleton, Z_Construct_UClass_UMBActorFunctions_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMBActorFunctions.OuterSingleton;
}
template<> MODULARBUILDING_API UClass* StaticClass<UMBActorFunctions>()
{
	return UMBActorFunctions::StaticClass();
}
UMBActorFunctions::UMBActorFunctions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMBActorFunctions);
UMBActorFunctions::~UMBActorFunctions() {}
// End Class UMBActorFunctions

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Libraries_MBActorFunctions_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMBActorFunctions, UMBActorFunctions::StaticClass, TEXT("UMBActorFunctions"), &Z_Registration_Info_UClass_UMBActorFunctions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMBActorFunctions), 1355748311U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Libraries_MBActorFunctions_h_2764662929(TEXT("/Script/ModularBuilding"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Libraries_MBActorFunctions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Libraries_MBActorFunctions_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
