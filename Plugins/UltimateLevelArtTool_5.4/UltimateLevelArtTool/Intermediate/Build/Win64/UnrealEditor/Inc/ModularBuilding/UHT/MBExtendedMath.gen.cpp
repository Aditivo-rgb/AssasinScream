// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularBuilding/Public/Libraries/MBExtendedMath.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMBExtendedMath() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
MODULARBUILDING_API UClass* Z_Construct_UClass_UMBExtendedMath();
MODULARBUILDING_API UClass* Z_Construct_UClass_UMBExtendedMath_NoRegister();
MODULARBUILDING_API UEnum* Z_Construct_UEnum_ModularBuilding_EMBAxis();
UPackage* Z_Construct_UPackage__Script_ModularBuilding();
// End Cross Module References

// Begin Class UMBExtendedMath Function GetAxisEnumOfDirectionVector
struct Z_Construct_UFunction_UMBExtendedMath_GetAxisEnumOfDirectionVector_Statics
{
	struct MBExtendedMath_eventGetAxisEnumOfDirectionVector_Parms
	{
		FVector InVector;
		EMBAxis ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Editor/MBMath" },
		{ "Keywords", "Editor Math" },
		{ "ModuleRelativePath", "Public/Libraries/MBExtendedMath.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InVector_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InVector;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMBExtendedMath_GetAxisEnumOfDirectionVector_Statics::NewProp_InVector = { "InVector", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MBExtendedMath_eventGetAxisEnumOfDirectionVector_Parms, InVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InVector_MetaData), NewProp_InVector_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMBExtendedMath_GetAxisEnumOfDirectionVector_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMBExtendedMath_GetAxisEnumOfDirectionVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MBExtendedMath_eventGetAxisEnumOfDirectionVector_Parms, ReturnValue), Z_Construct_UEnum_ModularBuilding_EMBAxis, METADATA_PARAMS(0, nullptr) }; // 3735486892
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMBExtendedMath_GetAxisEnumOfDirectionVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMBExtendedMath_GetAxisEnumOfDirectionVector_Statics::NewProp_InVector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMBExtendedMath_GetAxisEnumOfDirectionVector_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMBExtendedMath_GetAxisEnumOfDirectionVector_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBExtendedMath_GetAxisEnumOfDirectionVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMBExtendedMath_GetAxisEnumOfDirectionVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMBExtendedMath, nullptr, "GetAxisEnumOfDirectionVector", nullptr, nullptr, Z_Construct_UFunction_UMBExtendedMath_GetAxisEnumOfDirectionVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMBExtendedMath_GetAxisEnumOfDirectionVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMBExtendedMath_GetAxisEnumOfDirectionVector_Statics::MBExtendedMath_eventGetAxisEnumOfDirectionVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBExtendedMath_GetAxisEnumOfDirectionVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMBExtendedMath_GetAxisEnumOfDirectionVector_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMBExtendedMath_GetAxisEnumOfDirectionVector_Statics::MBExtendedMath_eventGetAxisEnumOfDirectionVector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMBExtendedMath_GetAxisEnumOfDirectionVector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMBExtendedMath_GetAxisEnumOfDirectionVector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMBExtendedMath::execGetAxisEnumOfDirectionVector)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_InVector);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EMBAxis*)Z_Param__Result=UMBExtendedMath::GetAxisEnumOfDirectionVector(Z_Param_Out_InVector);
	P_NATIVE_END;
}
// End Class UMBExtendedMath Function GetAxisEnumOfDirectionVector

// Begin Class UMBExtendedMath Function GetAxisOfVector
struct Z_Construct_UFunction_UMBExtendedMath_GetAxisOfVector_Statics
{
	struct MBExtendedMath_eventGetAxisOfVector_Parms
	{
		EMBAxis InAxis;
		FVector InVector;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Editor/MBMath" },
		{ "Keywords", "Editor Math" },
		{ "ModuleRelativePath", "Public/Libraries/MBExtendedMath.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAxis_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InVector_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InAxis_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InAxis;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InVector;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMBExtendedMath_GetAxisOfVector_Statics::NewProp_InAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMBExtendedMath_GetAxisOfVector_Statics::NewProp_InAxis = { "InAxis", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MBExtendedMath_eventGetAxisOfVector_Parms, InAxis), Z_Construct_UEnum_ModularBuilding_EMBAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAxis_MetaData), NewProp_InAxis_MetaData) }; // 3735486892
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMBExtendedMath_GetAxisOfVector_Statics::NewProp_InVector = { "InVector", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MBExtendedMath_eventGetAxisOfVector_Parms, InVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InVector_MetaData), NewProp_InVector_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMBExtendedMath_GetAxisOfVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MBExtendedMath_eventGetAxisOfVector_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMBExtendedMath_GetAxisOfVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMBExtendedMath_GetAxisOfVector_Statics::NewProp_InAxis_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMBExtendedMath_GetAxisOfVector_Statics::NewProp_InAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMBExtendedMath_GetAxisOfVector_Statics::NewProp_InVector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMBExtendedMath_GetAxisOfVector_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBExtendedMath_GetAxisOfVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMBExtendedMath_GetAxisOfVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMBExtendedMath, nullptr, "GetAxisOfVector", nullptr, nullptr, Z_Construct_UFunction_UMBExtendedMath_GetAxisOfVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMBExtendedMath_GetAxisOfVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMBExtendedMath_GetAxisOfVector_Statics::MBExtendedMath_eventGetAxisOfVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBExtendedMath_GetAxisOfVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMBExtendedMath_GetAxisOfVector_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMBExtendedMath_GetAxisOfVector_Statics::MBExtendedMath_eventGetAxisOfVector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMBExtendedMath_GetAxisOfVector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMBExtendedMath_GetAxisOfVector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMBExtendedMath::execGetAxisOfVector)
{
	P_GET_ENUM(EMBAxis,Z_Param_InAxis);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_InVector);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UMBExtendedMath::GetAxisOfVector(EMBAxis(Z_Param_InAxis),Z_Param_Out_InVector);
	P_NATIVE_END;
}
// End Class UMBExtendedMath Function GetAxisOfVector

// Begin Class UMBExtendedMath Function GetAxisVectorWithEnumValue
struct Z_Construct_UFunction_UMBExtendedMath_GetAxisVectorWithEnumValue_Statics
{
	struct MBExtendedMath_eventGetAxisVectorWithEnumValue_Parms
	{
		EMBAxis InAxis;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Editor/MBMath" },
		{ "Keywords", "Editor Math" },
		{ "ModuleRelativePath", "Public/Libraries/MBExtendedMath.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAxis_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InAxis_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InAxis;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMBExtendedMath_GetAxisVectorWithEnumValue_Statics::NewProp_InAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMBExtendedMath_GetAxisVectorWithEnumValue_Statics::NewProp_InAxis = { "InAxis", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MBExtendedMath_eventGetAxisVectorWithEnumValue_Parms, InAxis), Z_Construct_UEnum_ModularBuilding_EMBAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAxis_MetaData), NewProp_InAxis_MetaData) }; // 3735486892
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMBExtendedMath_GetAxisVectorWithEnumValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MBExtendedMath_eventGetAxisVectorWithEnumValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMBExtendedMath_GetAxisVectorWithEnumValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMBExtendedMath_GetAxisVectorWithEnumValue_Statics::NewProp_InAxis_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMBExtendedMath_GetAxisVectorWithEnumValue_Statics::NewProp_InAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMBExtendedMath_GetAxisVectorWithEnumValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBExtendedMath_GetAxisVectorWithEnumValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMBExtendedMath_GetAxisVectorWithEnumValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMBExtendedMath, nullptr, "GetAxisVectorWithEnumValue", nullptr, nullptr, Z_Construct_UFunction_UMBExtendedMath_GetAxisVectorWithEnumValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMBExtendedMath_GetAxisVectorWithEnumValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMBExtendedMath_GetAxisVectorWithEnumValue_Statics::MBExtendedMath_eventGetAxisVectorWithEnumValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBExtendedMath_GetAxisVectorWithEnumValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMBExtendedMath_GetAxisVectorWithEnumValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMBExtendedMath_GetAxisVectorWithEnumValue_Statics::MBExtendedMath_eventGetAxisVectorWithEnumValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMBExtendedMath_GetAxisVectorWithEnumValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMBExtendedMath_GetAxisVectorWithEnumValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMBExtendedMath::execGetAxisVectorWithEnumValue)
{
	P_GET_ENUM_REF(EMBAxis,Z_Param_Out_InAxis);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UMBExtendedMath::GetAxisVectorWithEnumValue((EMBAxis&)(Z_Param_Out_InAxis));
	P_NATIVE_END;
}
// End Class UMBExtendedMath Function GetAxisVectorWithEnumValue

// Begin Class UMBExtendedMath Function GetHighestAxisAndDirectionOfVector
struct Z_Construct_UFunction_UMBExtendedMath_GetHighestAxisAndDirectionOfVector_Statics
{
	struct MBExtendedMath_eventGetHighestAxisAndDirectionOfVector_Parms
	{
		FVector InVector;
		EMBAxis OutAxis;
		bool OutDirection;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Editor/MBMath" },
		{ "Keywords", "Editor Math" },
		{ "ModuleRelativePath", "Public/Libraries/MBExtendedMath.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InVector_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InVector;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutAxis_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutAxis;
	static void NewProp_OutDirection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_OutDirection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMBExtendedMath_GetHighestAxisAndDirectionOfVector_Statics::NewProp_InVector = { "InVector", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MBExtendedMath_eventGetHighestAxisAndDirectionOfVector_Parms, InVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InVector_MetaData), NewProp_InVector_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMBExtendedMath_GetHighestAxisAndDirectionOfVector_Statics::NewProp_OutAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMBExtendedMath_GetHighestAxisAndDirectionOfVector_Statics::NewProp_OutAxis = { "OutAxis", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MBExtendedMath_eventGetHighestAxisAndDirectionOfVector_Parms, OutAxis), Z_Construct_UEnum_ModularBuilding_EMBAxis, METADATA_PARAMS(0, nullptr) }; // 3735486892
void Z_Construct_UFunction_UMBExtendedMath_GetHighestAxisAndDirectionOfVector_Statics::NewProp_OutDirection_SetBit(void* Obj)
{
	((MBExtendedMath_eventGetHighestAxisAndDirectionOfVector_Parms*)Obj)->OutDirection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMBExtendedMath_GetHighestAxisAndDirectionOfVector_Statics::NewProp_OutDirection = { "OutDirection", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MBExtendedMath_eventGetHighestAxisAndDirectionOfVector_Parms), &Z_Construct_UFunction_UMBExtendedMath_GetHighestAxisAndDirectionOfVector_Statics::NewProp_OutDirection_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMBExtendedMath_GetHighestAxisAndDirectionOfVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMBExtendedMath_GetHighestAxisAndDirectionOfVector_Statics::NewProp_InVector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMBExtendedMath_GetHighestAxisAndDirectionOfVector_Statics::NewProp_OutAxis_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMBExtendedMath_GetHighestAxisAndDirectionOfVector_Statics::NewProp_OutAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMBExtendedMath_GetHighestAxisAndDirectionOfVector_Statics::NewProp_OutDirection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBExtendedMath_GetHighestAxisAndDirectionOfVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMBExtendedMath_GetHighestAxisAndDirectionOfVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMBExtendedMath, nullptr, "GetHighestAxisAndDirectionOfVector", nullptr, nullptr, Z_Construct_UFunction_UMBExtendedMath_GetHighestAxisAndDirectionOfVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMBExtendedMath_GetHighestAxisAndDirectionOfVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMBExtendedMath_GetHighestAxisAndDirectionOfVector_Statics::MBExtendedMath_eventGetHighestAxisAndDirectionOfVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBExtendedMath_GetHighestAxisAndDirectionOfVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMBExtendedMath_GetHighestAxisAndDirectionOfVector_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMBExtendedMath_GetHighestAxisAndDirectionOfVector_Statics::MBExtendedMath_eventGetHighestAxisAndDirectionOfVector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMBExtendedMath_GetHighestAxisAndDirectionOfVector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMBExtendedMath_GetHighestAxisAndDirectionOfVector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMBExtendedMath::execGetHighestAxisAndDirectionOfVector)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_InVector);
	P_GET_ENUM_REF(EMBAxis,Z_Param_Out_OutAxis);
	P_GET_UBOOL_REF(Z_Param_Out_OutDirection);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMBExtendedMath::GetHighestAxisAndDirectionOfVector(Z_Param_Out_InVector,(EMBAxis&)(Z_Param_Out_OutAxis),Z_Param_Out_OutDirection);
	P_NATIVE_END;
}
// End Class UMBExtendedMath Function GetHighestAxisAndDirectionOfVector

// Begin Class UMBExtendedMath Function GetNearestAxisOfVector
struct Z_Construct_UFunction_UMBExtendedMath_GetNearestAxisOfVector_Statics
{
	struct MBExtendedMath_eventGetNearestAxisOfVector_Parms
	{
		FVector InVector;
		EMBAxis OutAxis;
		FVector OutDirection;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Editor/MBMath" },
		{ "Keywords", "Editor Math" },
		{ "ModuleRelativePath", "Public/Libraries/MBExtendedMath.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InVector_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InVector;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutAxis_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutAxis;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutDirection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMBExtendedMath_GetNearestAxisOfVector_Statics::NewProp_InVector = { "InVector", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MBExtendedMath_eventGetNearestAxisOfVector_Parms, InVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InVector_MetaData), NewProp_InVector_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMBExtendedMath_GetNearestAxisOfVector_Statics::NewProp_OutAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMBExtendedMath_GetNearestAxisOfVector_Statics::NewProp_OutAxis = { "OutAxis", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MBExtendedMath_eventGetNearestAxisOfVector_Parms, OutAxis), Z_Construct_UEnum_ModularBuilding_EMBAxis, METADATA_PARAMS(0, nullptr) }; // 3735486892
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMBExtendedMath_GetNearestAxisOfVector_Statics::NewProp_OutDirection = { "OutDirection", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MBExtendedMath_eventGetNearestAxisOfVector_Parms, OutDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMBExtendedMath_GetNearestAxisOfVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMBExtendedMath_GetNearestAxisOfVector_Statics::NewProp_InVector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMBExtendedMath_GetNearestAxisOfVector_Statics::NewProp_OutAxis_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMBExtendedMath_GetNearestAxisOfVector_Statics::NewProp_OutAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMBExtendedMath_GetNearestAxisOfVector_Statics::NewProp_OutDirection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBExtendedMath_GetNearestAxisOfVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMBExtendedMath_GetNearestAxisOfVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMBExtendedMath, nullptr, "GetNearestAxisOfVector", nullptr, nullptr, Z_Construct_UFunction_UMBExtendedMath_GetNearestAxisOfVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMBExtendedMath_GetNearestAxisOfVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMBExtendedMath_GetNearestAxisOfVector_Statics::MBExtendedMath_eventGetNearestAxisOfVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBExtendedMath_GetNearestAxisOfVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMBExtendedMath_GetNearestAxisOfVector_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMBExtendedMath_GetNearestAxisOfVector_Statics::MBExtendedMath_eventGetNearestAxisOfVector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMBExtendedMath_GetNearestAxisOfVector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMBExtendedMath_GetNearestAxisOfVector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMBExtendedMath::execGetNearestAxisOfVector)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_InVector);
	P_GET_ENUM_REF(EMBAxis,Z_Param_Out_OutAxis);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_OutDirection);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMBExtendedMath::GetNearestAxisOfVector(Z_Param_Out_InVector,(EMBAxis&)(Z_Param_Out_OutAxis),Z_Param_Out_OutDirection);
	P_NATIVE_END;
}
// End Class UMBExtendedMath Function GetNearestAxisOfVector

// Begin Class UMBExtendedMath Function GetSecAxis
struct Z_Construct_UFunction_UMBExtendedMath_GetSecAxis_Statics
{
	struct MBExtendedMath_eventGetSecAxis_Parms
	{
		EMBAxis InWorkingAxis;
		EMBAxis InBlockedAxis;
		EMBAxis ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Editor/MBMath" },
		{ "Keywords", "Editor Math" },
		{ "ModuleRelativePath", "Public/Libraries/MBExtendedMath.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InWorkingAxis_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InBlockedAxis_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InWorkingAxis_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InWorkingAxis;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InBlockedAxis_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InBlockedAxis;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMBExtendedMath_GetSecAxis_Statics::NewProp_InWorkingAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMBExtendedMath_GetSecAxis_Statics::NewProp_InWorkingAxis = { "InWorkingAxis", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MBExtendedMath_eventGetSecAxis_Parms, InWorkingAxis), Z_Construct_UEnum_ModularBuilding_EMBAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InWorkingAxis_MetaData), NewProp_InWorkingAxis_MetaData) }; // 3735486892
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMBExtendedMath_GetSecAxis_Statics::NewProp_InBlockedAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMBExtendedMath_GetSecAxis_Statics::NewProp_InBlockedAxis = { "InBlockedAxis", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MBExtendedMath_eventGetSecAxis_Parms, InBlockedAxis), Z_Construct_UEnum_ModularBuilding_EMBAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InBlockedAxis_MetaData), NewProp_InBlockedAxis_MetaData) }; // 3735486892
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMBExtendedMath_GetSecAxis_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMBExtendedMath_GetSecAxis_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MBExtendedMath_eventGetSecAxis_Parms, ReturnValue), Z_Construct_UEnum_ModularBuilding_EMBAxis, METADATA_PARAMS(0, nullptr) }; // 3735486892
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMBExtendedMath_GetSecAxis_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMBExtendedMath_GetSecAxis_Statics::NewProp_InWorkingAxis_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMBExtendedMath_GetSecAxis_Statics::NewProp_InWorkingAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMBExtendedMath_GetSecAxis_Statics::NewProp_InBlockedAxis_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMBExtendedMath_GetSecAxis_Statics::NewProp_InBlockedAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMBExtendedMath_GetSecAxis_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMBExtendedMath_GetSecAxis_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBExtendedMath_GetSecAxis_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMBExtendedMath_GetSecAxis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMBExtendedMath, nullptr, "GetSecAxis", nullptr, nullptr, Z_Construct_UFunction_UMBExtendedMath_GetSecAxis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMBExtendedMath_GetSecAxis_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMBExtendedMath_GetSecAxis_Statics::MBExtendedMath_eventGetSecAxis_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBExtendedMath_GetSecAxis_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMBExtendedMath_GetSecAxis_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMBExtendedMath_GetSecAxis_Statics::MBExtendedMath_eventGetSecAxis_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMBExtendedMath_GetSecAxis()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMBExtendedMath_GetSecAxis_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMBExtendedMath::execGetSecAxis)
{
	P_GET_ENUM_REF(EMBAxis,Z_Param_Out_InWorkingAxis);
	P_GET_ENUM_REF(EMBAxis,Z_Param_Out_InBlockedAxis);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EMBAxis*)Z_Param__Result=UMBExtendedMath::GetSecAxis((EMBAxis&)(Z_Param_Out_InWorkingAxis),(EMBAxis&)(Z_Param_Out_InBlockedAxis));
	P_NATIVE_END;
}
// End Class UMBExtendedMath Function GetSecAxis

// Begin Class UMBExtendedMath Function SetAxisOfVector
struct Z_Construct_UFunction_UMBExtendedMath_SetAxisOfVector_Statics
{
	struct MBExtendedMath_eventSetAxisOfVector_Parms
	{
		EMBAxis InAxis;
		FVector InVector;
		float InNewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Editor/MBMath" },
		{ "Keywords", "Editor Math" },
		{ "ModuleRelativePath", "Public/Libraries/MBExtendedMath.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAxis_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InNewValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InAxis_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InAxis;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InVector;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InNewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMBExtendedMath_SetAxisOfVector_Statics::NewProp_InAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMBExtendedMath_SetAxisOfVector_Statics::NewProp_InAxis = { "InAxis", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MBExtendedMath_eventSetAxisOfVector_Parms, InAxis), Z_Construct_UEnum_ModularBuilding_EMBAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAxis_MetaData), NewProp_InAxis_MetaData) }; // 3735486892
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMBExtendedMath_SetAxisOfVector_Statics::NewProp_InVector = { "InVector", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MBExtendedMath_eventSetAxisOfVector_Parms, InVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMBExtendedMath_SetAxisOfVector_Statics::NewProp_InNewValue = { "InNewValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MBExtendedMath_eventSetAxisOfVector_Parms, InNewValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InNewValue_MetaData), NewProp_InNewValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMBExtendedMath_SetAxisOfVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMBExtendedMath_SetAxisOfVector_Statics::NewProp_InAxis_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMBExtendedMath_SetAxisOfVector_Statics::NewProp_InAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMBExtendedMath_SetAxisOfVector_Statics::NewProp_InVector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMBExtendedMath_SetAxisOfVector_Statics::NewProp_InNewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBExtendedMath_SetAxisOfVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMBExtendedMath_SetAxisOfVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMBExtendedMath, nullptr, "SetAxisOfVector", nullptr, nullptr, Z_Construct_UFunction_UMBExtendedMath_SetAxisOfVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMBExtendedMath_SetAxisOfVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMBExtendedMath_SetAxisOfVector_Statics::MBExtendedMath_eventSetAxisOfVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBExtendedMath_SetAxisOfVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMBExtendedMath_SetAxisOfVector_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMBExtendedMath_SetAxisOfVector_Statics::MBExtendedMath_eventSetAxisOfVector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMBExtendedMath_SetAxisOfVector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMBExtendedMath_SetAxisOfVector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMBExtendedMath::execSetAxisOfVector)
{
	P_GET_ENUM(EMBAxis,Z_Param_InAxis);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_InVector);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_InNewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMBExtendedMath::SetAxisOfVector(EMBAxis(Z_Param_InAxis),Z_Param_Out_InVector,Z_Param_Out_InNewValue);
	P_NATIVE_END;
}
// End Class UMBExtendedMath Function SetAxisOfVector

// Begin Class UMBExtendedMath
void UMBExtendedMath::StaticRegisterNativesUMBExtendedMath()
{
	UClass* Class = UMBExtendedMath::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAxisEnumOfDirectionVector", &UMBExtendedMath::execGetAxisEnumOfDirectionVector },
		{ "GetAxisOfVector", &UMBExtendedMath::execGetAxisOfVector },
		{ "GetAxisVectorWithEnumValue", &UMBExtendedMath::execGetAxisVectorWithEnumValue },
		{ "GetHighestAxisAndDirectionOfVector", &UMBExtendedMath::execGetHighestAxisAndDirectionOfVector },
		{ "GetNearestAxisOfVector", &UMBExtendedMath::execGetNearestAxisOfVector },
		{ "GetSecAxis", &UMBExtendedMath::execGetSecAxis },
		{ "SetAxisOfVector", &UMBExtendedMath::execSetAxisOfVector },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMBExtendedMath);
UClass* Z_Construct_UClass_UMBExtendedMath_NoRegister()
{
	return UMBExtendedMath::StaticClass();
}
struct Z_Construct_UClass_UMBExtendedMath_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Libraries/MBExtendedMath.h" },
		{ "ModuleRelativePath", "Public/Libraries/MBExtendedMath.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMBExtendedMath_GetAxisEnumOfDirectionVector, "GetAxisEnumOfDirectionVector" }, // 3984325104
		{ &Z_Construct_UFunction_UMBExtendedMath_GetAxisOfVector, "GetAxisOfVector" }, // 2198450143
		{ &Z_Construct_UFunction_UMBExtendedMath_GetAxisVectorWithEnumValue, "GetAxisVectorWithEnumValue" }, // 1735643919
		{ &Z_Construct_UFunction_UMBExtendedMath_GetHighestAxisAndDirectionOfVector, "GetHighestAxisAndDirectionOfVector" }, // 1047015490
		{ &Z_Construct_UFunction_UMBExtendedMath_GetNearestAxisOfVector, "GetNearestAxisOfVector" }, // 797497118
		{ &Z_Construct_UFunction_UMBExtendedMath_GetSecAxis, "GetSecAxis" }, // 3498426340
		{ &Z_Construct_UFunction_UMBExtendedMath_SetAxisOfVector, "SetAxisOfVector" }, // 570919851
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMBExtendedMath>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMBExtendedMath_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_ModularBuilding,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMBExtendedMath_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMBExtendedMath_Statics::ClassParams = {
	&UMBExtendedMath::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMBExtendedMath_Statics::Class_MetaDataParams), Z_Construct_UClass_UMBExtendedMath_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMBExtendedMath()
{
	if (!Z_Registration_Info_UClass_UMBExtendedMath.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMBExtendedMath.OuterSingleton, Z_Construct_UClass_UMBExtendedMath_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMBExtendedMath.OuterSingleton;
}
template<> MODULARBUILDING_API UClass* StaticClass<UMBExtendedMath>()
{
	return UMBExtendedMath::StaticClass();
}
UMBExtendedMath::UMBExtendedMath(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMBExtendedMath);
UMBExtendedMath::~UMBExtendedMath() {}
// End Class UMBExtendedMath

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Libraries_MBExtendedMath_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMBExtendedMath, UMBExtendedMath::StaticClass, TEXT("UMBExtendedMath"), &Z_Registration_Info_UClass_UMBExtendedMath, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMBExtendedMath), 2460969619U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Libraries_MBExtendedMath_h_2580819501(TEXT("/Script/ModularBuilding"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Libraries_MBExtendedMath_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Libraries_MBExtendedMath_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
