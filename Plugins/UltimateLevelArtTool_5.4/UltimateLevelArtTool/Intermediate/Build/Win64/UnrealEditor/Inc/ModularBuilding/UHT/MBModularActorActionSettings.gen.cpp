// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularBuilding/Public/UI/MBModularActorActionSettings.h"
#include "ModularBuilding/Public/Data/MBDataStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMBModularActorActionSettings() {}

// Begin Cross Module References
MODULARBUILDING_API UClass* Z_Construct_UClass_UMBModularActorActionSettings();
MODULARBUILDING_API UClass* Z_Construct_UClass_UMBModularActorActionSettings_NoRegister();
MODULARBUILDING_API UScriptStruct* Z_Construct_UScriptStruct_FDuplicationData();
MODULARBUILDING_API UScriptStruct* Z_Construct_UScriptStruct_FDuplicationFilters();
SCRIPTABLEEDITORWIDGETS_API UClass* Z_Construct_UClass_UDetailsView_NoRegister();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ETextCommit();
UMG_API UClass* Z_Construct_UClass_UBorder_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UCheckBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UEditableTextBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_ModularBuilding();
// End Cross Module References

// Begin Class UMBModularActorActionSettings Function ApplyBtnPressed
struct Z_Construct_UFunction_UMBModularActorActionSettings_ApplyBtnPressed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/MBModularActorActionSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMBModularActorActionSettings_ApplyBtnPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMBModularActorActionSettings, nullptr, "ApplyBtnPressed", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBModularActorActionSettings_ApplyBtnPressed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMBModularActorActionSettings_ApplyBtnPressed_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMBModularActorActionSettings_ApplyBtnPressed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMBModularActorActionSettings_ApplyBtnPressed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMBModularActorActionSettings::execApplyBtnPressed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyBtnPressed();
	P_NATIVE_END;
}
// End Class UMBModularActorActionSettings Function ApplyBtnPressed

// Begin Class UMBModularActorActionSettings Function OnHoleCheckChanged
struct Z_Construct_UFunction_UMBModularActorActionSettings_OnHoleCheckChanged_Statics
{
	struct MBModularActorActionSettings_eventOnHoleCheckChanged_Parms
	{
		bool bInNewCondition;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/MBModularActorActionSettings.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bInNewCondition_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInNewCondition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMBModularActorActionSettings_OnHoleCheckChanged_Statics::NewProp_bInNewCondition_SetBit(void* Obj)
{
	((MBModularActorActionSettings_eventOnHoleCheckChanged_Parms*)Obj)->bInNewCondition = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMBModularActorActionSettings_OnHoleCheckChanged_Statics::NewProp_bInNewCondition = { "bInNewCondition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MBModularActorActionSettings_eventOnHoleCheckChanged_Parms), &Z_Construct_UFunction_UMBModularActorActionSettings_OnHoleCheckChanged_Statics::NewProp_bInNewCondition_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMBModularActorActionSettings_OnHoleCheckChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMBModularActorActionSettings_OnHoleCheckChanged_Statics::NewProp_bInNewCondition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBModularActorActionSettings_OnHoleCheckChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMBModularActorActionSettings_OnHoleCheckChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMBModularActorActionSettings, nullptr, "OnHoleCheckChanged", nullptr, nullptr, Z_Construct_UFunction_UMBModularActorActionSettings_OnHoleCheckChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMBModularActorActionSettings_OnHoleCheckChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMBModularActorActionSettings_OnHoleCheckChanged_Statics::MBModularActorActionSettings_eventOnHoleCheckChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBModularActorActionSettings_OnHoleCheckChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMBModularActorActionSettings_OnHoleCheckChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMBModularActorActionSettings_OnHoleCheckChanged_Statics::MBModularActorActionSettings_eventOnHoleCheckChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMBModularActorActionSettings_OnHoleCheckChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMBModularActorActionSettings_OnHoleCheckChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMBModularActorActionSettings::execOnHoleCheckChanged)
{
	P_GET_UBOOL(Z_Param_bInNewCondition);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnHoleCheckChanged(Z_Param_bInNewCondition);
	P_NATIVE_END;
}
// End Class UMBModularActorActionSettings Function OnHoleCheckChanged

// Begin Class UMBModularActorActionSettings Function OnRectangleCheckChanged
struct Z_Construct_UFunction_UMBModularActorActionSettings_OnRectangleCheckChanged_Statics
{
	struct MBModularActorActionSettings_eventOnRectangleCheckChanged_Parms
	{
		bool bInNewCondition;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/MBModularActorActionSettings.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bInNewCondition_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInNewCondition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMBModularActorActionSettings_OnRectangleCheckChanged_Statics::NewProp_bInNewCondition_SetBit(void* Obj)
{
	((MBModularActorActionSettings_eventOnRectangleCheckChanged_Parms*)Obj)->bInNewCondition = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMBModularActorActionSettings_OnRectangleCheckChanged_Statics::NewProp_bInNewCondition = { "bInNewCondition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MBModularActorActionSettings_eventOnRectangleCheckChanged_Parms), &Z_Construct_UFunction_UMBModularActorActionSettings_OnRectangleCheckChanged_Statics::NewProp_bInNewCondition_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMBModularActorActionSettings_OnRectangleCheckChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMBModularActorActionSettings_OnRectangleCheckChanged_Statics::NewProp_bInNewCondition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBModularActorActionSettings_OnRectangleCheckChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMBModularActorActionSettings_OnRectangleCheckChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMBModularActorActionSettings, nullptr, "OnRectangleCheckChanged", nullptr, nullptr, Z_Construct_UFunction_UMBModularActorActionSettings_OnRectangleCheckChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMBModularActorActionSettings_OnRectangleCheckChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMBModularActorActionSettings_OnRectangleCheckChanged_Statics::MBModularActorActionSettings_eventOnRectangleCheckChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBModularActorActionSettings_OnRectangleCheckChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMBModularActorActionSettings_OnRectangleCheckChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMBModularActorActionSettings_OnRectangleCheckChanged_Statics::MBModularActorActionSettings_eventOnRectangleCheckChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMBModularActorActionSettings_OnRectangleCheckChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMBModularActorActionSettings_OnRectangleCheckChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMBModularActorActionSettings::execOnRectangleCheckChanged)
{
	P_GET_UBOOL(Z_Param_bInNewCondition);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRectangleCheckChanged(Z_Param_bInNewCondition);
	P_NATIVE_END;
}
// End Class UMBModularActorActionSettings Function OnRectangleCheckChanged

// Begin Class UMBModularActorActionSettings Function OnXDirCheckChanged
struct Z_Construct_UFunction_UMBModularActorActionSettings_OnXDirCheckChanged_Statics
{
	struct MBModularActorActionSettings_eventOnXDirCheckChanged_Parms
	{
		bool bInNewCondition;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/MBModularActorActionSettings.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bInNewCondition_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInNewCondition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMBModularActorActionSettings_OnXDirCheckChanged_Statics::NewProp_bInNewCondition_SetBit(void* Obj)
{
	((MBModularActorActionSettings_eventOnXDirCheckChanged_Parms*)Obj)->bInNewCondition = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMBModularActorActionSettings_OnXDirCheckChanged_Statics::NewProp_bInNewCondition = { "bInNewCondition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MBModularActorActionSettings_eventOnXDirCheckChanged_Parms), &Z_Construct_UFunction_UMBModularActorActionSettings_OnXDirCheckChanged_Statics::NewProp_bInNewCondition_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMBModularActorActionSettings_OnXDirCheckChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMBModularActorActionSettings_OnXDirCheckChanged_Statics::NewProp_bInNewCondition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBModularActorActionSettings_OnXDirCheckChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMBModularActorActionSettings_OnXDirCheckChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMBModularActorActionSettings, nullptr, "OnXDirCheckChanged", nullptr, nullptr, Z_Construct_UFunction_UMBModularActorActionSettings_OnXDirCheckChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMBModularActorActionSettings_OnXDirCheckChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMBModularActorActionSettings_OnXDirCheckChanged_Statics::MBModularActorActionSettings_eventOnXDirCheckChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBModularActorActionSettings_OnXDirCheckChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMBModularActorActionSettings_OnXDirCheckChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMBModularActorActionSettings_OnXDirCheckChanged_Statics::MBModularActorActionSettings_eventOnXDirCheckChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMBModularActorActionSettings_OnXDirCheckChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMBModularActorActionSettings_OnXDirCheckChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMBModularActorActionSettings::execOnXDirCheckChanged)
{
	P_GET_UBOOL(Z_Param_bInNewCondition);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnXDirCheckChanged(Z_Param_bInNewCondition);
	P_NATIVE_END;
}
// End Class UMBModularActorActionSettings Function OnXDirCheckChanged

// Begin Class UMBModularActorActionSettings Function OnXDupOffsetCommitted
struct Z_Construct_UFunction_UMBModularActorActionSettings_OnXDupOffsetCommitted_Statics
{
	struct MBModularActorActionSettings_eventOnXDupOffsetCommitted_Parms
	{
		FText Text;
		TEnumAsByte<ETextCommit::Type> CommitMethod;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/MBModularActorActionSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CommitMethod;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMBModularActorActionSettings_OnXDupOffsetCommitted_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MBModularActorActionSettings_eventOnXDupOffsetCommitted_Parms, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMBModularActorActionSettings_OnXDupOffsetCommitted_Statics::NewProp_CommitMethod = { "CommitMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MBModularActorActionSettings_eventOnXDupOffsetCommitted_Parms, CommitMethod), Z_Construct_UEnum_SlateCore_ETextCommit, METADATA_PARAMS(0, nullptr) }; // 1817921380
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMBModularActorActionSettings_OnXDupOffsetCommitted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMBModularActorActionSettings_OnXDupOffsetCommitted_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMBModularActorActionSettings_OnXDupOffsetCommitted_Statics::NewProp_CommitMethod,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBModularActorActionSettings_OnXDupOffsetCommitted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMBModularActorActionSettings_OnXDupOffsetCommitted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMBModularActorActionSettings, nullptr, "OnXDupOffsetCommitted", nullptr, nullptr, Z_Construct_UFunction_UMBModularActorActionSettings_OnXDupOffsetCommitted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMBModularActorActionSettings_OnXDupOffsetCommitted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMBModularActorActionSettings_OnXDupOffsetCommitted_Statics::MBModularActorActionSettings_eventOnXDupOffsetCommitted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBModularActorActionSettings_OnXDupOffsetCommitted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMBModularActorActionSettings_OnXDupOffsetCommitted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMBModularActorActionSettings_OnXDupOffsetCommitted_Statics::MBModularActorActionSettings_eventOnXDupOffsetCommitted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMBModularActorActionSettings_OnXDupOffsetCommitted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMBModularActorActionSettings_OnXDupOffsetCommitted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMBModularActorActionSettings::execOnXDupOffsetCommitted)
{
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Text);
	P_GET_PROPERTY(FByteProperty,Z_Param_CommitMethod);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnXDupOffsetCommitted(Z_Param_Out_Text,ETextCommit::Type(Z_Param_CommitMethod));
	P_NATIVE_END;
}
// End Class UMBModularActorActionSettings Function OnXDupOffsetCommitted

// Begin Class UMBModularActorActionSettings Function OnXDupTextCommitted
struct Z_Construct_UFunction_UMBModularActorActionSettings_OnXDupTextCommitted_Statics
{
	struct MBModularActorActionSettings_eventOnXDupTextCommitted_Parms
	{
		FText Text;
		TEnumAsByte<ETextCommit::Type> CommitMethod;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/MBModularActorActionSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CommitMethod;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMBModularActorActionSettings_OnXDupTextCommitted_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MBModularActorActionSettings_eventOnXDupTextCommitted_Parms, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMBModularActorActionSettings_OnXDupTextCommitted_Statics::NewProp_CommitMethod = { "CommitMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MBModularActorActionSettings_eventOnXDupTextCommitted_Parms, CommitMethod), Z_Construct_UEnum_SlateCore_ETextCommit, METADATA_PARAMS(0, nullptr) }; // 1817921380
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMBModularActorActionSettings_OnXDupTextCommitted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMBModularActorActionSettings_OnXDupTextCommitted_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMBModularActorActionSettings_OnXDupTextCommitted_Statics::NewProp_CommitMethod,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBModularActorActionSettings_OnXDupTextCommitted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMBModularActorActionSettings_OnXDupTextCommitted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMBModularActorActionSettings, nullptr, "OnXDupTextCommitted", nullptr, nullptr, Z_Construct_UFunction_UMBModularActorActionSettings_OnXDupTextCommitted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMBModularActorActionSettings_OnXDupTextCommitted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMBModularActorActionSettings_OnXDupTextCommitted_Statics::MBModularActorActionSettings_eventOnXDupTextCommitted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBModularActorActionSettings_OnXDupTextCommitted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMBModularActorActionSettings_OnXDupTextCommitted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMBModularActorActionSettings_OnXDupTextCommitted_Statics::MBModularActorActionSettings_eventOnXDupTextCommitted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMBModularActorActionSettings_OnXDupTextCommitted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMBModularActorActionSettings_OnXDupTextCommitted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMBModularActorActionSettings::execOnXDupTextCommitted)
{
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Text);
	P_GET_PROPERTY(FByteProperty,Z_Param_CommitMethod);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnXDupTextCommitted(Z_Param_Out_Text,ETextCommit::Type(Z_Param_CommitMethod));
	P_NATIVE_END;
}
// End Class UMBModularActorActionSettings Function OnXDupTextCommitted

// Begin Class UMBModularActorActionSettings Function OnYDirCheckChanged
struct Z_Construct_UFunction_UMBModularActorActionSettings_OnYDirCheckChanged_Statics
{
	struct MBModularActorActionSettings_eventOnYDirCheckChanged_Parms
	{
		bool bInNewCondition;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/MBModularActorActionSettings.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bInNewCondition_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInNewCondition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMBModularActorActionSettings_OnYDirCheckChanged_Statics::NewProp_bInNewCondition_SetBit(void* Obj)
{
	((MBModularActorActionSettings_eventOnYDirCheckChanged_Parms*)Obj)->bInNewCondition = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMBModularActorActionSettings_OnYDirCheckChanged_Statics::NewProp_bInNewCondition = { "bInNewCondition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MBModularActorActionSettings_eventOnYDirCheckChanged_Parms), &Z_Construct_UFunction_UMBModularActorActionSettings_OnYDirCheckChanged_Statics::NewProp_bInNewCondition_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMBModularActorActionSettings_OnYDirCheckChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMBModularActorActionSettings_OnYDirCheckChanged_Statics::NewProp_bInNewCondition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBModularActorActionSettings_OnYDirCheckChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMBModularActorActionSettings_OnYDirCheckChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMBModularActorActionSettings, nullptr, "OnYDirCheckChanged", nullptr, nullptr, Z_Construct_UFunction_UMBModularActorActionSettings_OnYDirCheckChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMBModularActorActionSettings_OnYDirCheckChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMBModularActorActionSettings_OnYDirCheckChanged_Statics::MBModularActorActionSettings_eventOnYDirCheckChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBModularActorActionSettings_OnYDirCheckChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMBModularActorActionSettings_OnYDirCheckChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMBModularActorActionSettings_OnYDirCheckChanged_Statics::MBModularActorActionSettings_eventOnYDirCheckChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMBModularActorActionSettings_OnYDirCheckChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMBModularActorActionSettings_OnYDirCheckChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMBModularActorActionSettings::execOnYDirCheckChanged)
{
	P_GET_UBOOL(Z_Param_bInNewCondition);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnYDirCheckChanged(Z_Param_bInNewCondition);
	P_NATIVE_END;
}
// End Class UMBModularActorActionSettings Function OnYDirCheckChanged

// Begin Class UMBModularActorActionSettings Function OnYDupOffsetCommitted
struct Z_Construct_UFunction_UMBModularActorActionSettings_OnYDupOffsetCommitted_Statics
{
	struct MBModularActorActionSettings_eventOnYDupOffsetCommitted_Parms
	{
		FText Text;
		TEnumAsByte<ETextCommit::Type> CommitMethod;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/MBModularActorActionSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CommitMethod;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMBModularActorActionSettings_OnYDupOffsetCommitted_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MBModularActorActionSettings_eventOnYDupOffsetCommitted_Parms, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMBModularActorActionSettings_OnYDupOffsetCommitted_Statics::NewProp_CommitMethod = { "CommitMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MBModularActorActionSettings_eventOnYDupOffsetCommitted_Parms, CommitMethod), Z_Construct_UEnum_SlateCore_ETextCommit, METADATA_PARAMS(0, nullptr) }; // 1817921380
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMBModularActorActionSettings_OnYDupOffsetCommitted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMBModularActorActionSettings_OnYDupOffsetCommitted_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMBModularActorActionSettings_OnYDupOffsetCommitted_Statics::NewProp_CommitMethod,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBModularActorActionSettings_OnYDupOffsetCommitted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMBModularActorActionSettings_OnYDupOffsetCommitted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMBModularActorActionSettings, nullptr, "OnYDupOffsetCommitted", nullptr, nullptr, Z_Construct_UFunction_UMBModularActorActionSettings_OnYDupOffsetCommitted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMBModularActorActionSettings_OnYDupOffsetCommitted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMBModularActorActionSettings_OnYDupOffsetCommitted_Statics::MBModularActorActionSettings_eventOnYDupOffsetCommitted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBModularActorActionSettings_OnYDupOffsetCommitted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMBModularActorActionSettings_OnYDupOffsetCommitted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMBModularActorActionSettings_OnYDupOffsetCommitted_Statics::MBModularActorActionSettings_eventOnYDupOffsetCommitted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMBModularActorActionSettings_OnYDupOffsetCommitted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMBModularActorActionSettings_OnYDupOffsetCommitted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMBModularActorActionSettings::execOnYDupOffsetCommitted)
{
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Text);
	P_GET_PROPERTY(FByteProperty,Z_Param_CommitMethod);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnYDupOffsetCommitted(Z_Param_Out_Text,ETextCommit::Type(Z_Param_CommitMethod));
	P_NATIVE_END;
}
// End Class UMBModularActorActionSettings Function OnYDupOffsetCommitted

// Begin Class UMBModularActorActionSettings Function OnYDupTextCommitted
struct Z_Construct_UFunction_UMBModularActorActionSettings_OnYDupTextCommitted_Statics
{
	struct MBModularActorActionSettings_eventOnYDupTextCommitted_Parms
	{
		FText Text;
		TEnumAsByte<ETextCommit::Type> CommitMethod;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/MBModularActorActionSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CommitMethod;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMBModularActorActionSettings_OnYDupTextCommitted_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MBModularActorActionSettings_eventOnYDupTextCommitted_Parms, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMBModularActorActionSettings_OnYDupTextCommitted_Statics::NewProp_CommitMethod = { "CommitMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MBModularActorActionSettings_eventOnYDupTextCommitted_Parms, CommitMethod), Z_Construct_UEnum_SlateCore_ETextCommit, METADATA_PARAMS(0, nullptr) }; // 1817921380
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMBModularActorActionSettings_OnYDupTextCommitted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMBModularActorActionSettings_OnYDupTextCommitted_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMBModularActorActionSettings_OnYDupTextCommitted_Statics::NewProp_CommitMethod,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBModularActorActionSettings_OnYDupTextCommitted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMBModularActorActionSettings_OnYDupTextCommitted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMBModularActorActionSettings, nullptr, "OnYDupTextCommitted", nullptr, nullptr, Z_Construct_UFunction_UMBModularActorActionSettings_OnYDupTextCommitted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMBModularActorActionSettings_OnYDupTextCommitted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMBModularActorActionSettings_OnYDupTextCommitted_Statics::MBModularActorActionSettings_eventOnYDupTextCommitted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBModularActorActionSettings_OnYDupTextCommitted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMBModularActorActionSettings_OnYDupTextCommitted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMBModularActorActionSettings_OnYDupTextCommitted_Statics::MBModularActorActionSettings_eventOnYDupTextCommitted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMBModularActorActionSettings_OnYDupTextCommitted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMBModularActorActionSettings_OnYDupTextCommitted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMBModularActorActionSettings::execOnYDupTextCommitted)
{
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Text);
	P_GET_PROPERTY(FByteProperty,Z_Param_CommitMethod);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnYDupTextCommitted(Z_Param_Out_Text,ETextCommit::Type(Z_Param_CommitMethod));
	P_NATIVE_END;
}
// End Class UMBModularActorActionSettings Function OnYDupTextCommitted

// Begin Class UMBModularActorActionSettings Function OnZDirCheckChanged
struct Z_Construct_UFunction_UMBModularActorActionSettings_OnZDirCheckChanged_Statics
{
	struct MBModularActorActionSettings_eventOnZDirCheckChanged_Parms
	{
		bool bInNewCondition;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/MBModularActorActionSettings.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bInNewCondition_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInNewCondition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMBModularActorActionSettings_OnZDirCheckChanged_Statics::NewProp_bInNewCondition_SetBit(void* Obj)
{
	((MBModularActorActionSettings_eventOnZDirCheckChanged_Parms*)Obj)->bInNewCondition = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMBModularActorActionSettings_OnZDirCheckChanged_Statics::NewProp_bInNewCondition = { "bInNewCondition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MBModularActorActionSettings_eventOnZDirCheckChanged_Parms), &Z_Construct_UFunction_UMBModularActorActionSettings_OnZDirCheckChanged_Statics::NewProp_bInNewCondition_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMBModularActorActionSettings_OnZDirCheckChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMBModularActorActionSettings_OnZDirCheckChanged_Statics::NewProp_bInNewCondition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBModularActorActionSettings_OnZDirCheckChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMBModularActorActionSettings_OnZDirCheckChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMBModularActorActionSettings, nullptr, "OnZDirCheckChanged", nullptr, nullptr, Z_Construct_UFunction_UMBModularActorActionSettings_OnZDirCheckChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMBModularActorActionSettings_OnZDirCheckChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMBModularActorActionSettings_OnZDirCheckChanged_Statics::MBModularActorActionSettings_eventOnZDirCheckChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBModularActorActionSettings_OnZDirCheckChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMBModularActorActionSettings_OnZDirCheckChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMBModularActorActionSettings_OnZDirCheckChanged_Statics::MBModularActorActionSettings_eventOnZDirCheckChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMBModularActorActionSettings_OnZDirCheckChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMBModularActorActionSettings_OnZDirCheckChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMBModularActorActionSettings::execOnZDirCheckChanged)
{
	P_GET_UBOOL(Z_Param_bInNewCondition);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnZDirCheckChanged(Z_Param_bInNewCondition);
	P_NATIVE_END;
}
// End Class UMBModularActorActionSettings Function OnZDirCheckChanged

// Begin Class UMBModularActorActionSettings Function OnZDupOffsetCommitted
struct Z_Construct_UFunction_UMBModularActorActionSettings_OnZDupOffsetCommitted_Statics
{
	struct MBModularActorActionSettings_eventOnZDupOffsetCommitted_Parms
	{
		FText Text;
		TEnumAsByte<ETextCommit::Type> CommitMethod;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/MBModularActorActionSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CommitMethod;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMBModularActorActionSettings_OnZDupOffsetCommitted_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MBModularActorActionSettings_eventOnZDupOffsetCommitted_Parms, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMBModularActorActionSettings_OnZDupOffsetCommitted_Statics::NewProp_CommitMethod = { "CommitMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MBModularActorActionSettings_eventOnZDupOffsetCommitted_Parms, CommitMethod), Z_Construct_UEnum_SlateCore_ETextCommit, METADATA_PARAMS(0, nullptr) }; // 1817921380
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMBModularActorActionSettings_OnZDupOffsetCommitted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMBModularActorActionSettings_OnZDupOffsetCommitted_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMBModularActorActionSettings_OnZDupOffsetCommitted_Statics::NewProp_CommitMethod,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBModularActorActionSettings_OnZDupOffsetCommitted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMBModularActorActionSettings_OnZDupOffsetCommitted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMBModularActorActionSettings, nullptr, "OnZDupOffsetCommitted", nullptr, nullptr, Z_Construct_UFunction_UMBModularActorActionSettings_OnZDupOffsetCommitted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMBModularActorActionSettings_OnZDupOffsetCommitted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMBModularActorActionSettings_OnZDupOffsetCommitted_Statics::MBModularActorActionSettings_eventOnZDupOffsetCommitted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBModularActorActionSettings_OnZDupOffsetCommitted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMBModularActorActionSettings_OnZDupOffsetCommitted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMBModularActorActionSettings_OnZDupOffsetCommitted_Statics::MBModularActorActionSettings_eventOnZDupOffsetCommitted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMBModularActorActionSettings_OnZDupOffsetCommitted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMBModularActorActionSettings_OnZDupOffsetCommitted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMBModularActorActionSettings::execOnZDupOffsetCommitted)
{
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Text);
	P_GET_PROPERTY(FByteProperty,Z_Param_CommitMethod);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnZDupOffsetCommitted(Z_Param_Out_Text,ETextCommit::Type(Z_Param_CommitMethod));
	P_NATIVE_END;
}
// End Class UMBModularActorActionSettings Function OnZDupOffsetCommitted

// Begin Class UMBModularActorActionSettings Function OnZDupTextCommitted
struct Z_Construct_UFunction_UMBModularActorActionSettings_OnZDupTextCommitted_Statics
{
	struct MBModularActorActionSettings_eventOnZDupTextCommitted_Parms
	{
		FText Text;
		TEnumAsByte<ETextCommit::Type> CommitMethod;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/MBModularActorActionSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CommitMethod;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMBModularActorActionSettings_OnZDupTextCommitted_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MBModularActorActionSettings_eventOnZDupTextCommitted_Parms, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMBModularActorActionSettings_OnZDupTextCommitted_Statics::NewProp_CommitMethod = { "CommitMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MBModularActorActionSettings_eventOnZDupTextCommitted_Parms, CommitMethod), Z_Construct_UEnum_SlateCore_ETextCommit, METADATA_PARAMS(0, nullptr) }; // 1817921380
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMBModularActorActionSettings_OnZDupTextCommitted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMBModularActorActionSettings_OnZDupTextCommitted_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMBModularActorActionSettings_OnZDupTextCommitted_Statics::NewProp_CommitMethod,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBModularActorActionSettings_OnZDupTextCommitted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMBModularActorActionSettings_OnZDupTextCommitted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMBModularActorActionSettings, nullptr, "OnZDupTextCommitted", nullptr, nullptr, Z_Construct_UFunction_UMBModularActorActionSettings_OnZDupTextCommitted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMBModularActorActionSettings_OnZDupTextCommitted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMBModularActorActionSettings_OnZDupTextCommitted_Statics::MBModularActorActionSettings_eventOnZDupTextCommitted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBModularActorActionSettings_OnZDupTextCommitted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMBModularActorActionSettings_OnZDupTextCommitted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMBModularActorActionSettings_OnZDupTextCommitted_Statics::MBModularActorActionSettings_eventOnZDupTextCommitted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMBModularActorActionSettings_OnZDupTextCommitted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMBModularActorActionSettings_OnZDupTextCommitted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMBModularActorActionSettings::execOnZDupTextCommitted)
{
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Text);
	P_GET_PROPERTY(FByteProperty,Z_Param_CommitMethod);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnZDupTextCommitted(Z_Param_Out_Text,ETextCommit::Type(Z_Param_CommitMethod));
	P_NATIVE_END;
}
// End Class UMBModularActorActionSettings Function OnZDupTextCommitted

// Begin Class UMBModularActorActionSettings Function ResetDupBtnPressed
struct Z_Construct_UFunction_UMBModularActorActionSettings_ResetDupBtnPressed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/MBModularActorActionSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMBModularActorActionSettings_ResetDupBtnPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMBModularActorActionSettings, nullptr, "ResetDupBtnPressed", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBModularActorActionSettings_ResetDupBtnPressed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMBModularActorActionSettings_ResetDupBtnPressed_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMBModularActorActionSettings_ResetDupBtnPressed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMBModularActorActionSettings_ResetDupBtnPressed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMBModularActorActionSettings::execResetDupBtnPressed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetDupBtnPressed();
	P_NATIVE_END;
}
// End Class UMBModularActorActionSettings Function ResetDupBtnPressed

// Begin Class UMBModularActorActionSettings
void UMBModularActorActionSettings::StaticRegisterNativesUMBModularActorActionSettings()
{
	UClass* Class = UMBModularActorActionSettings::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ApplyBtnPressed", &UMBModularActorActionSettings::execApplyBtnPressed },
		{ "OnHoleCheckChanged", &UMBModularActorActionSettings::execOnHoleCheckChanged },
		{ "OnRectangleCheckChanged", &UMBModularActorActionSettings::execOnRectangleCheckChanged },
		{ "OnXDirCheckChanged", &UMBModularActorActionSettings::execOnXDirCheckChanged },
		{ "OnXDupOffsetCommitted", &UMBModularActorActionSettings::execOnXDupOffsetCommitted },
		{ "OnXDupTextCommitted", &UMBModularActorActionSettings::execOnXDupTextCommitted },
		{ "OnYDirCheckChanged", &UMBModularActorActionSettings::execOnYDirCheckChanged },
		{ "OnYDupOffsetCommitted", &UMBModularActorActionSettings::execOnYDupOffsetCommitted },
		{ "OnYDupTextCommitted", &UMBModularActorActionSettings::execOnYDupTextCommitted },
		{ "OnZDirCheckChanged", &UMBModularActorActionSettings::execOnZDirCheckChanged },
		{ "OnZDupOffsetCommitted", &UMBModularActorActionSettings::execOnZDupOffsetCommitted },
		{ "OnZDupTextCommitted", &UMBModularActorActionSettings::execOnZDupTextCommitted },
		{ "ResetDupBtnPressed", &UMBModularActorActionSettings::execResetDupBtnPressed },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMBModularActorActionSettings);
UClass* Z_Construct_UClass_UMBModularActorActionSettings_NoRegister()
{
	return UMBModularActorActionSettings::StaticClass();
}
struct Z_Construct_UClass_UMBModularActorActionSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/MBModularActorActionSettings.h" },
		{ "ModuleRelativePath", "Public/UI/MBModularActorActionSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ApplyBtn_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MBModularActorActionSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResetDupBtn_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MBModularActorActionSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_XDupText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MBModularActorActionSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_YDupText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MBModularActorActionSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZDupText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MBModularActorActionSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_XDupOffset_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MBModularActorActionSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_YDupOffset_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MBModularActorActionSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZDupOffset_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MBModularActorActionSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_XDirCheck_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MBModularActorActionSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_YDirCheck_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MBModularActorActionSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZDirCheck_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MBModularActorActionSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoleCheck_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MBModularActorActionSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RectangleCheck_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MBModularActorActionSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialAssignmentBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MBModularActorActionSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModActorActionDetails_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MBModularActorActionSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_XDuplicationData_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/MBModularActorActionSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_YDuplicationData_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/MBModularActorActionSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZDuplicationData_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/MBModularActorActionSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DuplicationFilters_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/MBModularActorActionSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ApplyBtn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ResetDupBtn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_XDupText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_YDupText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ZDupText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_XDupOffset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_YDupOffset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ZDupOffset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_XDirCheck;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_YDirCheck;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ZDirCheck;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HoleCheck;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RectangleCheck;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialAssignmentBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ModActorActionDetails;
	static const UECodeGen_Private::FStructPropertyParams NewProp_XDuplicationData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_YDuplicationData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ZDuplicationData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DuplicationFilters;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMBModularActorActionSettings_ApplyBtnPressed, "ApplyBtnPressed" }, // 474613042
		{ &Z_Construct_UFunction_UMBModularActorActionSettings_OnHoleCheckChanged, "OnHoleCheckChanged" }, // 2893975892
		{ &Z_Construct_UFunction_UMBModularActorActionSettings_OnRectangleCheckChanged, "OnRectangleCheckChanged" }, // 3360579750
		{ &Z_Construct_UFunction_UMBModularActorActionSettings_OnXDirCheckChanged, "OnXDirCheckChanged" }, // 1058609731
		{ &Z_Construct_UFunction_UMBModularActorActionSettings_OnXDupOffsetCommitted, "OnXDupOffsetCommitted" }, // 1245696555
		{ &Z_Construct_UFunction_UMBModularActorActionSettings_OnXDupTextCommitted, "OnXDupTextCommitted" }, // 149665648
		{ &Z_Construct_UFunction_UMBModularActorActionSettings_OnYDirCheckChanged, "OnYDirCheckChanged" }, // 3864166746
		{ &Z_Construct_UFunction_UMBModularActorActionSettings_OnYDupOffsetCommitted, "OnYDupOffsetCommitted" }, // 564451062
		{ &Z_Construct_UFunction_UMBModularActorActionSettings_OnYDupTextCommitted, "OnYDupTextCommitted" }, // 988291482
		{ &Z_Construct_UFunction_UMBModularActorActionSettings_OnZDirCheckChanged, "OnZDirCheckChanged" }, // 1881261342
		{ &Z_Construct_UFunction_UMBModularActorActionSettings_OnZDupOffsetCommitted, "OnZDupOffsetCommitted" }, // 3669900899
		{ &Z_Construct_UFunction_UMBModularActorActionSettings_OnZDupTextCommitted, "OnZDupTextCommitted" }, // 3720803749
		{ &Z_Construct_UFunction_UMBModularActorActionSettings_ResetDupBtnPressed, "ResetDupBtnPressed" }, // 3247173427
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMBModularActorActionSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMBModularActorActionSettings_Statics::NewProp_ApplyBtn = { "ApplyBtn", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBModularActorActionSettings, ApplyBtn), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ApplyBtn_MetaData), NewProp_ApplyBtn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMBModularActorActionSettings_Statics::NewProp_ResetDupBtn = { "ResetDupBtn", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBModularActorActionSettings, ResetDupBtn), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResetDupBtn_MetaData), NewProp_ResetDupBtn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMBModularActorActionSettings_Statics::NewProp_XDupText = { "XDupText", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBModularActorActionSettings, XDupText), Z_Construct_UClass_UEditableTextBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_XDupText_MetaData), NewProp_XDupText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMBModularActorActionSettings_Statics::NewProp_YDupText = { "YDupText", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBModularActorActionSettings, YDupText), Z_Construct_UClass_UEditableTextBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_YDupText_MetaData), NewProp_YDupText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMBModularActorActionSettings_Statics::NewProp_ZDupText = { "ZDupText", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBModularActorActionSettings, ZDupText), Z_Construct_UClass_UEditableTextBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZDupText_MetaData), NewProp_ZDupText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMBModularActorActionSettings_Statics::NewProp_XDupOffset = { "XDupOffset", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBModularActorActionSettings, XDupOffset), Z_Construct_UClass_UEditableTextBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_XDupOffset_MetaData), NewProp_XDupOffset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMBModularActorActionSettings_Statics::NewProp_YDupOffset = { "YDupOffset", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBModularActorActionSettings, YDupOffset), Z_Construct_UClass_UEditableTextBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_YDupOffset_MetaData), NewProp_YDupOffset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMBModularActorActionSettings_Statics::NewProp_ZDupOffset = { "ZDupOffset", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBModularActorActionSettings, ZDupOffset), Z_Construct_UClass_UEditableTextBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZDupOffset_MetaData), NewProp_ZDupOffset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMBModularActorActionSettings_Statics::NewProp_XDirCheck = { "XDirCheck", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBModularActorActionSettings, XDirCheck), Z_Construct_UClass_UCheckBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_XDirCheck_MetaData), NewProp_XDirCheck_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMBModularActorActionSettings_Statics::NewProp_YDirCheck = { "YDirCheck", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBModularActorActionSettings, YDirCheck), Z_Construct_UClass_UCheckBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_YDirCheck_MetaData), NewProp_YDirCheck_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMBModularActorActionSettings_Statics::NewProp_ZDirCheck = { "ZDirCheck", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBModularActorActionSettings, ZDirCheck), Z_Construct_UClass_UCheckBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZDirCheck_MetaData), NewProp_ZDirCheck_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMBModularActorActionSettings_Statics::NewProp_HoleCheck = { "HoleCheck", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBModularActorActionSettings, HoleCheck), Z_Construct_UClass_UCheckBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoleCheck_MetaData), NewProp_HoleCheck_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMBModularActorActionSettings_Statics::NewProp_RectangleCheck = { "RectangleCheck", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBModularActorActionSettings, RectangleCheck), Z_Construct_UClass_UCheckBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RectangleCheck_MetaData), NewProp_RectangleCheck_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMBModularActorActionSettings_Statics::NewProp_MaterialAssignmentBox = { "MaterialAssignmentBox", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBModularActorActionSettings, MaterialAssignmentBox), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialAssignmentBox_MetaData), NewProp_MaterialAssignmentBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMBModularActorActionSettings_Statics::NewProp_ModActorActionDetails = { "ModActorActionDetails", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBModularActorActionSettings, ModActorActionDetails), Z_Construct_UClass_UDetailsView_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModActorActionDetails_MetaData), NewProp_ModActorActionDetails_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMBModularActorActionSettings_Statics::NewProp_XDuplicationData = { "XDuplicationData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBModularActorActionSettings, XDuplicationData), Z_Construct_UScriptStruct_FDuplicationData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_XDuplicationData_MetaData), NewProp_XDuplicationData_MetaData) }; // 4279460606
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMBModularActorActionSettings_Statics::NewProp_YDuplicationData = { "YDuplicationData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBModularActorActionSettings, YDuplicationData), Z_Construct_UScriptStruct_FDuplicationData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_YDuplicationData_MetaData), NewProp_YDuplicationData_MetaData) }; // 4279460606
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMBModularActorActionSettings_Statics::NewProp_ZDuplicationData = { "ZDuplicationData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBModularActorActionSettings, ZDuplicationData), Z_Construct_UScriptStruct_FDuplicationData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZDuplicationData_MetaData), NewProp_ZDuplicationData_MetaData) }; // 4279460606
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMBModularActorActionSettings_Statics::NewProp_DuplicationFilters = { "DuplicationFilters", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBModularActorActionSettings, DuplicationFilters), Z_Construct_UScriptStruct_FDuplicationFilters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DuplicationFilters_MetaData), NewProp_DuplicationFilters_MetaData) }; // 1790621036
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMBModularActorActionSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBModularActorActionSettings_Statics::NewProp_ApplyBtn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBModularActorActionSettings_Statics::NewProp_ResetDupBtn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBModularActorActionSettings_Statics::NewProp_XDupText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBModularActorActionSettings_Statics::NewProp_YDupText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBModularActorActionSettings_Statics::NewProp_ZDupText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBModularActorActionSettings_Statics::NewProp_XDupOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBModularActorActionSettings_Statics::NewProp_YDupOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBModularActorActionSettings_Statics::NewProp_ZDupOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBModularActorActionSettings_Statics::NewProp_XDirCheck,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBModularActorActionSettings_Statics::NewProp_YDirCheck,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBModularActorActionSettings_Statics::NewProp_ZDirCheck,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBModularActorActionSettings_Statics::NewProp_HoleCheck,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBModularActorActionSettings_Statics::NewProp_RectangleCheck,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBModularActorActionSettings_Statics::NewProp_MaterialAssignmentBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBModularActorActionSettings_Statics::NewProp_ModActorActionDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBModularActorActionSettings_Statics::NewProp_XDuplicationData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBModularActorActionSettings_Statics::NewProp_YDuplicationData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBModularActorActionSettings_Statics::NewProp_ZDuplicationData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBModularActorActionSettings_Statics::NewProp_DuplicationFilters,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMBModularActorActionSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMBModularActorActionSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ModularBuilding,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMBModularActorActionSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMBModularActorActionSettings_Statics::ClassParams = {
	&UMBModularActorActionSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMBModularActorActionSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMBModularActorActionSettings_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMBModularActorActionSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UMBModularActorActionSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMBModularActorActionSettings()
{
	if (!Z_Registration_Info_UClass_UMBModularActorActionSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMBModularActorActionSettings.OuterSingleton, Z_Construct_UClass_UMBModularActorActionSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMBModularActorActionSettings.OuterSingleton;
}
template<> MODULARBUILDING_API UClass* StaticClass<UMBModularActorActionSettings>()
{
	return UMBModularActorActionSettings::StaticClass();
}
UMBModularActorActionSettings::UMBModularActorActionSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMBModularActorActionSettings);
UMBModularActorActionSettings::~UMBModularActorActionSettings() {}
// End Class UMBModularActorActionSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBModularActorActionSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMBModularActorActionSettings, UMBModularActorActionSettings::StaticClass, TEXT("UMBModularActorActionSettings"), &Z_Registration_Info_UClass_UMBModularActorActionSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMBModularActorActionSettings), 1345531602U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBModularActorActionSettings_h_3106997067(TEXT("/Script/ModularBuilding"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBModularActorActionSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBModularActorActionSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
