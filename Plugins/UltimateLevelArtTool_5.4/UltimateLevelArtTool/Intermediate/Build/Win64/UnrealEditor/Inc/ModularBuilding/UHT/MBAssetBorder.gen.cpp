// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularBuilding/Public/Slate/MBAssetBorder.h"
#include "Runtime/SlateCore/Public/Layout/Margin.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMBAssetBorder() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USlateBrushAsset_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
MODULARBUILDING_API UClass* Z_Construct_UClass_UMBAssetBorder();
MODULARBUILDING_API UClass* Z_Construct_UClass_UMBAssetBorder_NoRegister();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EHorizontalAlignment();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EVerticalAlignment();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
UMG_API UClass* Z_Construct_UClass_UContentWidget();
UMG_API UFunction* Z_Construct_UDelegateFunction_UWidget_GetLinearColor__DelegateSignature();
UMG_API UFunction* Z_Construct_UDelegateFunction_UWidget_GetSlateBrush__DelegateSignature();
UMG_API UFunction* Z_Construct_UDelegateFunction_UWidget_OnPointerEvent__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_ModularBuilding();
// End Cross Module References

// Begin Class UMBAssetBorder Function GetDynamicMaterial
struct Z_Construct_UFunction_UMBAssetBorder_GetDynamicMaterial_Statics
{
	struct MBAssetBorder_eventGetDynamicMaterial_Parms
	{
		UMaterialInstanceDynamic* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Slate/MBAssetBorder.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMBAssetBorder_GetDynamicMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MBAssetBorder_eventGetDynamicMaterial_Parms, ReturnValue), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMBAssetBorder_GetDynamicMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMBAssetBorder_GetDynamicMaterial_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBAssetBorder_GetDynamicMaterial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMBAssetBorder_GetDynamicMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMBAssetBorder, nullptr, "GetDynamicMaterial", nullptr, nullptr, Z_Construct_UFunction_UMBAssetBorder_GetDynamicMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMBAssetBorder_GetDynamicMaterial_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMBAssetBorder_GetDynamicMaterial_Statics::MBAssetBorder_eventGetDynamicMaterial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBAssetBorder_GetDynamicMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMBAssetBorder_GetDynamicMaterial_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMBAssetBorder_GetDynamicMaterial_Statics::MBAssetBorder_eventGetDynamicMaterial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMBAssetBorder_GetDynamicMaterial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMBAssetBorder_GetDynamicMaterial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMBAssetBorder::execGetDynamicMaterial)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMaterialInstanceDynamic**)Z_Param__Result=P_THIS->GetDynamicMaterial();
	P_NATIVE_END;
}
// End Class UMBAssetBorder Function GetDynamicMaterial

// Begin Class UMBAssetBorder Function SetBrush
struct Z_Construct_UFunction_UMBAssetBorder_SetBrush_Statics
{
	struct MBAssetBorder_eventSetBrush_Parms
	{
		FSlateBrush InBrush;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Slate/MBAssetBorder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InBrush_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InBrush;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMBAssetBorder_SetBrush_Statics::NewProp_InBrush = { "InBrush", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MBAssetBorder_eventSetBrush_Parms, InBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InBrush_MetaData), NewProp_InBrush_MetaData) }; // 1704263518
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMBAssetBorder_SetBrush_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMBAssetBorder_SetBrush_Statics::NewProp_InBrush,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBAssetBorder_SetBrush_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMBAssetBorder_SetBrush_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMBAssetBorder, nullptr, "SetBrush", nullptr, nullptr, Z_Construct_UFunction_UMBAssetBorder_SetBrush_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMBAssetBorder_SetBrush_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMBAssetBorder_SetBrush_Statics::MBAssetBorder_eventSetBrush_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBAssetBorder_SetBrush_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMBAssetBorder_SetBrush_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMBAssetBorder_SetBrush_Statics::MBAssetBorder_eventSetBrush_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMBAssetBorder_SetBrush()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMBAssetBorder_SetBrush_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMBAssetBorder::execSetBrush)
{
	P_GET_STRUCT_REF(FSlateBrush,Z_Param_Out_InBrush);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBrush(Z_Param_Out_InBrush);
	P_NATIVE_END;
}
// End Class UMBAssetBorder Function SetBrush

// Begin Class UMBAssetBorder Function SetBrushColor
struct Z_Construct_UFunction_UMBAssetBorder_SetBrushColor_Statics
{
	struct MBAssetBorder_eventSetBrushColor_Parms
	{
		FLinearColor InBrushColor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Slate/MBAssetBorder.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InBrushColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMBAssetBorder_SetBrushColor_Statics::NewProp_InBrushColor = { "InBrushColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MBAssetBorder_eventSetBrushColor_Parms, InBrushColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMBAssetBorder_SetBrushColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMBAssetBorder_SetBrushColor_Statics::NewProp_InBrushColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBAssetBorder_SetBrushColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMBAssetBorder_SetBrushColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMBAssetBorder, nullptr, "SetBrushColor", nullptr, nullptr, Z_Construct_UFunction_UMBAssetBorder_SetBrushColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMBAssetBorder_SetBrushColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMBAssetBorder_SetBrushColor_Statics::MBAssetBorder_eventSetBrushColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBAssetBorder_SetBrushColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMBAssetBorder_SetBrushColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMBAssetBorder_SetBrushColor_Statics::MBAssetBorder_eventSetBrushColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMBAssetBorder_SetBrushColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMBAssetBorder_SetBrushColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMBAssetBorder::execSetBrushColor)
{
	P_GET_STRUCT(FLinearColor,Z_Param_InBrushColor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBrushColor(Z_Param_InBrushColor);
	P_NATIVE_END;
}
// End Class UMBAssetBorder Function SetBrushColor

// Begin Class UMBAssetBorder Function SetBrushFromAsset
struct Z_Construct_UFunction_UMBAssetBorder_SetBrushFromAsset_Statics
{
	struct MBAssetBorder_eventSetBrushFromAsset_Parms
	{
		USlateBrushAsset* Asset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Slate/MBAssetBorder.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Asset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMBAssetBorder_SetBrushFromAsset_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MBAssetBorder_eventSetBrushFromAsset_Parms, Asset), Z_Construct_UClass_USlateBrushAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMBAssetBorder_SetBrushFromAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMBAssetBorder_SetBrushFromAsset_Statics::NewProp_Asset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBAssetBorder_SetBrushFromAsset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMBAssetBorder_SetBrushFromAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMBAssetBorder, nullptr, "SetBrushFromAsset", nullptr, nullptr, Z_Construct_UFunction_UMBAssetBorder_SetBrushFromAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMBAssetBorder_SetBrushFromAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMBAssetBorder_SetBrushFromAsset_Statics::MBAssetBorder_eventSetBrushFromAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBAssetBorder_SetBrushFromAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMBAssetBorder_SetBrushFromAsset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMBAssetBorder_SetBrushFromAsset_Statics::MBAssetBorder_eventSetBrushFromAsset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMBAssetBorder_SetBrushFromAsset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMBAssetBorder_SetBrushFromAsset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMBAssetBorder::execSetBrushFromAsset)
{
	P_GET_OBJECT(USlateBrushAsset,Z_Param_Asset);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBrushFromAsset(Z_Param_Asset);
	P_NATIVE_END;
}
// End Class UMBAssetBorder Function SetBrushFromAsset

// Begin Class UMBAssetBorder Function SetBrushFromMaterial
struct Z_Construct_UFunction_UMBAssetBorder_SetBrushFromMaterial_Statics
{
	struct MBAssetBorder_eventSetBrushFromMaterial_Parms
	{
		UMaterialInterface* Material;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Slate/MBAssetBorder.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMBAssetBorder_SetBrushFromMaterial_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MBAssetBorder_eventSetBrushFromMaterial_Parms, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMBAssetBorder_SetBrushFromMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMBAssetBorder_SetBrushFromMaterial_Statics::NewProp_Material,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBAssetBorder_SetBrushFromMaterial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMBAssetBorder_SetBrushFromMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMBAssetBorder, nullptr, "SetBrushFromMaterial", nullptr, nullptr, Z_Construct_UFunction_UMBAssetBorder_SetBrushFromMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMBAssetBorder_SetBrushFromMaterial_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMBAssetBorder_SetBrushFromMaterial_Statics::MBAssetBorder_eventSetBrushFromMaterial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBAssetBorder_SetBrushFromMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMBAssetBorder_SetBrushFromMaterial_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMBAssetBorder_SetBrushFromMaterial_Statics::MBAssetBorder_eventSetBrushFromMaterial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMBAssetBorder_SetBrushFromMaterial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMBAssetBorder_SetBrushFromMaterial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMBAssetBorder::execSetBrushFromMaterial)
{
	P_GET_OBJECT(UMaterialInterface,Z_Param_Material);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBrushFromMaterial(Z_Param_Material);
	P_NATIVE_END;
}
// End Class UMBAssetBorder Function SetBrushFromMaterial

// Begin Class UMBAssetBorder Function SetBrushFromTexture
struct Z_Construct_UFunction_UMBAssetBorder_SetBrushFromTexture_Statics
{
	struct MBAssetBorder_eventSetBrushFromTexture_Parms
	{
		UTexture2D* Texture;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Slate/MBAssetBorder.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMBAssetBorder_SetBrushFromTexture_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MBAssetBorder_eventSetBrushFromTexture_Parms, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMBAssetBorder_SetBrushFromTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMBAssetBorder_SetBrushFromTexture_Statics::NewProp_Texture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBAssetBorder_SetBrushFromTexture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMBAssetBorder_SetBrushFromTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMBAssetBorder, nullptr, "SetBrushFromTexture", nullptr, nullptr, Z_Construct_UFunction_UMBAssetBorder_SetBrushFromTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMBAssetBorder_SetBrushFromTexture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMBAssetBorder_SetBrushFromTexture_Statics::MBAssetBorder_eventSetBrushFromTexture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBAssetBorder_SetBrushFromTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMBAssetBorder_SetBrushFromTexture_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMBAssetBorder_SetBrushFromTexture_Statics::MBAssetBorder_eventSetBrushFromTexture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMBAssetBorder_SetBrushFromTexture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMBAssetBorder_SetBrushFromTexture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMBAssetBorder::execSetBrushFromTexture)
{
	P_GET_OBJECT(UTexture2D,Z_Param_Texture);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBrushFromTexture(Z_Param_Texture);
	P_NATIVE_END;
}
// End Class UMBAssetBorder Function SetBrushFromTexture

// Begin Class UMBAssetBorder Function SetContentColorAndOpacity
struct Z_Construct_UFunction_UMBAssetBorder_SetContentColorAndOpacity_Statics
{
	struct MBAssetBorder_eventSetContentColorAndOpacity_Parms
	{
		FLinearColor InContentColorAndOpacity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Slate/MBAssetBorder.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InContentColorAndOpacity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMBAssetBorder_SetContentColorAndOpacity_Statics::NewProp_InContentColorAndOpacity = { "InContentColorAndOpacity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MBAssetBorder_eventSetContentColorAndOpacity_Parms, InContentColorAndOpacity), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMBAssetBorder_SetContentColorAndOpacity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMBAssetBorder_SetContentColorAndOpacity_Statics::NewProp_InContentColorAndOpacity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBAssetBorder_SetContentColorAndOpacity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMBAssetBorder_SetContentColorAndOpacity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMBAssetBorder, nullptr, "SetContentColorAndOpacity", nullptr, nullptr, Z_Construct_UFunction_UMBAssetBorder_SetContentColorAndOpacity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMBAssetBorder_SetContentColorAndOpacity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMBAssetBorder_SetContentColorAndOpacity_Statics::MBAssetBorder_eventSetContentColorAndOpacity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBAssetBorder_SetContentColorAndOpacity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMBAssetBorder_SetContentColorAndOpacity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMBAssetBorder_SetContentColorAndOpacity_Statics::MBAssetBorder_eventSetContentColorAndOpacity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMBAssetBorder_SetContentColorAndOpacity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMBAssetBorder_SetContentColorAndOpacity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMBAssetBorder::execSetContentColorAndOpacity)
{
	P_GET_STRUCT(FLinearColor,Z_Param_InContentColorAndOpacity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetContentColorAndOpacity(Z_Param_InContentColorAndOpacity);
	P_NATIVE_END;
}
// End Class UMBAssetBorder Function SetContentColorAndOpacity

// Begin Class UMBAssetBorder Function SetDesiredSizeScale
struct Z_Construct_UFunction_UMBAssetBorder_SetDesiredSizeScale_Statics
{
	struct MBAssetBorder_eventSetDesiredSizeScale_Parms
	{
		FVector2D InScale;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**\n\x09* Sets the DesireSizeScale of this border.\n\x09*\n\x09* @param InScale    The X and Y multipliers for the desired size\n\x09*/" },
		{ "ModuleRelativePath", "Public/Slate/MBAssetBorder.h" },
		{ "ToolTip", "Sets the DesireSizeScale of this border.\n\n@param InScale    The X and Y multipliers for the desired size" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InScale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMBAssetBorder_SetDesiredSizeScale_Statics::NewProp_InScale = { "InScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MBAssetBorder_eventSetDesiredSizeScale_Parms, InScale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMBAssetBorder_SetDesiredSizeScale_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMBAssetBorder_SetDesiredSizeScale_Statics::NewProp_InScale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBAssetBorder_SetDesiredSizeScale_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMBAssetBorder_SetDesiredSizeScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMBAssetBorder, nullptr, "SetDesiredSizeScale", nullptr, nullptr, Z_Construct_UFunction_UMBAssetBorder_SetDesiredSizeScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMBAssetBorder_SetDesiredSizeScale_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMBAssetBorder_SetDesiredSizeScale_Statics::MBAssetBorder_eventSetDesiredSizeScale_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBAssetBorder_SetDesiredSizeScale_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMBAssetBorder_SetDesiredSizeScale_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMBAssetBorder_SetDesiredSizeScale_Statics::MBAssetBorder_eventSetDesiredSizeScale_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMBAssetBorder_SetDesiredSizeScale()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMBAssetBorder_SetDesiredSizeScale_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMBAssetBorder::execSetDesiredSizeScale)
{
	P_GET_STRUCT(FVector2D,Z_Param_InScale);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDesiredSizeScale(Z_Param_InScale);
	P_NATIVE_END;
}
// End Class UMBAssetBorder Function SetDesiredSizeScale

// Begin Class UMBAssetBorder Function SetHorizontalAlignment
struct Z_Construct_UFunction_UMBAssetBorder_SetHorizontalAlignment_Statics
{
	struct MBAssetBorder_eventSetHorizontalAlignment_Parms
	{
		TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Slate/MBAssetBorder.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InHorizontalAlignment;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMBAssetBorder_SetHorizontalAlignment_Statics::NewProp_InHorizontalAlignment = { "InHorizontalAlignment", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MBAssetBorder_eventSetHorizontalAlignment_Parms, InHorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(0, nullptr) }; // 1062133256
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMBAssetBorder_SetHorizontalAlignment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMBAssetBorder_SetHorizontalAlignment_Statics::NewProp_InHorizontalAlignment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBAssetBorder_SetHorizontalAlignment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMBAssetBorder_SetHorizontalAlignment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMBAssetBorder, nullptr, "SetHorizontalAlignment", nullptr, nullptr, Z_Construct_UFunction_UMBAssetBorder_SetHorizontalAlignment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMBAssetBorder_SetHorizontalAlignment_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMBAssetBorder_SetHorizontalAlignment_Statics::MBAssetBorder_eventSetHorizontalAlignment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBAssetBorder_SetHorizontalAlignment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMBAssetBorder_SetHorizontalAlignment_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMBAssetBorder_SetHorizontalAlignment_Statics::MBAssetBorder_eventSetHorizontalAlignment_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMBAssetBorder_SetHorizontalAlignment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMBAssetBorder_SetHorizontalAlignment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMBAssetBorder::execSetHorizontalAlignment)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_InHorizontalAlignment);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHorizontalAlignment(EHorizontalAlignment(Z_Param_InHorizontalAlignment));
	P_NATIVE_END;
}
// End Class UMBAssetBorder Function SetHorizontalAlignment

// Begin Class UMBAssetBorder Function SetPadding
struct Z_Construct_UFunction_UMBAssetBorder_SetPadding_Statics
{
	struct MBAssetBorder_eventSetPadding_Parms
	{
		FMargin InPadding;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Slate/MBAssetBorder.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InPadding;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMBAssetBorder_SetPadding_Statics::NewProp_InPadding = { "InPadding", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MBAssetBorder_eventSetPadding_Parms, InPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(0, nullptr) }; // 2986890016
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMBAssetBorder_SetPadding_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMBAssetBorder_SetPadding_Statics::NewProp_InPadding,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBAssetBorder_SetPadding_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMBAssetBorder_SetPadding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMBAssetBorder, nullptr, "SetPadding", nullptr, nullptr, Z_Construct_UFunction_UMBAssetBorder_SetPadding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMBAssetBorder_SetPadding_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMBAssetBorder_SetPadding_Statics::MBAssetBorder_eventSetPadding_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBAssetBorder_SetPadding_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMBAssetBorder_SetPadding_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMBAssetBorder_SetPadding_Statics::MBAssetBorder_eventSetPadding_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMBAssetBorder_SetPadding()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMBAssetBorder_SetPadding_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMBAssetBorder::execSetPadding)
{
	P_GET_STRUCT(FMargin,Z_Param_InPadding);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPadding(Z_Param_InPadding);
	P_NATIVE_END;
}
// End Class UMBAssetBorder Function SetPadding

// Begin Class UMBAssetBorder Function SetVerticalAlignment
struct Z_Construct_UFunction_UMBAssetBorder_SetVerticalAlignment_Statics
{
	struct MBAssetBorder_eventSetVerticalAlignment_Parms
	{
		TEnumAsByte<EVerticalAlignment> InVerticalAlignment;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Slate/MBAssetBorder.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InVerticalAlignment;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMBAssetBorder_SetVerticalAlignment_Statics::NewProp_InVerticalAlignment = { "InVerticalAlignment", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MBAssetBorder_eventSetVerticalAlignment_Parms, InVerticalAlignment), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(0, nullptr) }; // 550775363
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMBAssetBorder_SetVerticalAlignment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMBAssetBorder_SetVerticalAlignment_Statics::NewProp_InVerticalAlignment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBAssetBorder_SetVerticalAlignment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMBAssetBorder_SetVerticalAlignment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMBAssetBorder, nullptr, "SetVerticalAlignment", nullptr, nullptr, Z_Construct_UFunction_UMBAssetBorder_SetVerticalAlignment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMBAssetBorder_SetVerticalAlignment_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMBAssetBorder_SetVerticalAlignment_Statics::MBAssetBorder_eventSetVerticalAlignment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBAssetBorder_SetVerticalAlignment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMBAssetBorder_SetVerticalAlignment_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMBAssetBorder_SetVerticalAlignment_Statics::MBAssetBorder_eventSetVerticalAlignment_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMBAssetBorder_SetVerticalAlignment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMBAssetBorder_SetVerticalAlignment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMBAssetBorder::execSetVerticalAlignment)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_InVerticalAlignment);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetVerticalAlignment(EVerticalAlignment(Z_Param_InVerticalAlignment));
	P_NATIVE_END;
}
// End Class UMBAssetBorder Function SetVerticalAlignment

// Begin Class UMBAssetBorder
void UMBAssetBorder::StaticRegisterNativesUMBAssetBorder()
{
	UClass* Class = UMBAssetBorder::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetDynamicMaterial", &UMBAssetBorder::execGetDynamicMaterial },
		{ "SetBrush", &UMBAssetBorder::execSetBrush },
		{ "SetBrushColor", &UMBAssetBorder::execSetBrushColor },
		{ "SetBrushFromAsset", &UMBAssetBorder::execSetBrushFromAsset },
		{ "SetBrushFromMaterial", &UMBAssetBorder::execSetBrushFromMaterial },
		{ "SetBrushFromTexture", &UMBAssetBorder::execSetBrushFromTexture },
		{ "SetContentColorAndOpacity", &UMBAssetBorder::execSetContentColorAndOpacity },
		{ "SetDesiredSizeScale", &UMBAssetBorder::execSetDesiredSizeScale },
		{ "SetHorizontalAlignment", &UMBAssetBorder::execSetHorizontalAlignment },
		{ "SetPadding", &UMBAssetBorder::execSetPadding },
		{ "SetVerticalAlignment", &UMBAssetBorder::execSetVerticalAlignment },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMBAssetBorder);
UClass* Z_Construct_UClass_UMBAssetBorder_NoRegister()
{
	return UMBAssetBorder::StaticClass();
}
struct Z_Construct_UClass_UMBAssetBorder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A border is a container widget that can contain one child widget, providing an opportunity \n * to surround it with a background image and adjustable padding.\n *\n * * Single Child\n * * Image\n */" },
		{ "IncludePath", "Slate/MBAssetBorder.h" },
		{ "ModuleRelativePath", "Public/Slate/MBAssetBorder.h" },
		{ "ToolTip", "A border is a container widget that can contain one child widget, providing an opportunity\nto surround it with a background image and adjustable padding.\n\n* Single Child\n* Image" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalAlignment_MetaData[] = {
		{ "Category", "Content" },
		{ "Comment", "/** The alignment of the content horizontally. */" },
		{ "ModuleRelativePath", "Public/Slate/MBAssetBorder.h" },
		{ "ToolTip", "The alignment of the content horizontally." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VerticalAlignment_MetaData[] = {
		{ "Category", "Content" },
		{ "Comment", "/** The alignment of the content vertically. */" },
		{ "ModuleRelativePath", "Public/Slate/MBAssetBorder.h" },
		{ "ToolTip", "The alignment of the content vertically." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowEffectWhenDisabled_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Whether or not to show the disabled effect when this border is disabled */" },
		{ "ModuleRelativePath", "Public/Slate/MBAssetBorder.h" },
		{ "ToolTip", "Whether or not to show the disabled effect when this border is disabled" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContentColorAndOpacity_MetaData[] = {
		{ "Category", "Content" },
		{ "Comment", "/** Color and opacity multiplier of content in the border */" },
		{ "ModuleRelativePath", "Public/Slate/MBAssetBorder.h" },
		{ "sRGB", "true" },
		{ "ToolTip", "Color and opacity multiplier of content in the border" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContentColorAndOpacityDelegate_MetaData[] = {
		{ "Comment", "/** A bindable delegate for the ContentColorAndOpacity. */" },
		{ "ModuleRelativePath", "Public/Slate/MBAssetBorder.h" },
		{ "ToolTip", "A bindable delegate for the ContentColorAndOpacity." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Padding_MetaData[] = {
		{ "Category", "Content" },
		{ "Comment", "/** The padding area between the slot and the content it contains. */" },
		{ "ModuleRelativePath", "Public/Slate/MBAssetBorder.h" },
		{ "ToolTip", "The padding area between the slot and the content it contains." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Background_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush to drag as the background */" },
		{ "DisplayName", "Brush" },
		{ "ModuleRelativePath", "Public/Slate/MBAssetBorder.h" },
		{ "ToolTip", "Brush to drag as the background" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundDelegate_MetaData[] = {
		{ "Comment", "/** A bindable delegate for the Brush. */" },
		{ "ModuleRelativePath", "Public/Slate/MBAssetBorder.h" },
		{ "ToolTip", "A bindable delegate for the Brush." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrushColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Color and opacity of the actual border image */" },
		{ "ModuleRelativePath", "Public/Slate/MBAssetBorder.h" },
		{ "sRGB", "true" },
		{ "ToolTip", "Color and opacity of the actual border image" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrushColorDelegate_MetaData[] = {
		{ "Comment", "/** A bindable delegate for the BrushColor. */" },
		{ "ModuleRelativePath", "Public/Slate/MBAssetBorder.h" },
		{ "ToolTip", "A bindable delegate for the BrushColor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DesiredSizeScale_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**\n\x09 * Scales the computed desired size of this border and its contents. Useful\n\x09 * for making things that slide open without having to hard-code their size.\n\x09 * Note: if the parent widget is set up to ignore this widget's desired size,\n\x09 * then changing this value will have no effect.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Slate/MBAssetBorder.h" },
		{ "ToolTip", "Scales the computed desired size of this border and its contents. Useful\nfor making things that slide open without having to hard-code their size.\nNote: if the parent widget is set up to ignore this widget's desired size,\nthen changing this value will have no effect." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFlipForRightToLeftFlowDirection_MetaData[] = {
		{ "Category", "Localization" },
		{ "Comment", "/** Flips the background image if the localization's flow direction is RightToLeft */" },
		{ "ModuleRelativePath", "Public/Slate/MBAssetBorder.h" },
		{ "ToolTip", "Flips the background image if the localization's flow direction is RightToLeft" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMouseButtonDownEvent_MetaData[] = {
		{ "Category", "Events" },
		{ "IsBindableEvent", "True" },
		{ "ModuleRelativePath", "Public/Slate/MBAssetBorder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMouseButtonUpEvent_MetaData[] = {
		{ "Category", "Events" },
		{ "IsBindableEvent", "True" },
		{ "ModuleRelativePath", "Public/Slate/MBAssetBorder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMouseMoveEvent_MetaData[] = {
		{ "Category", "Events" },
		{ "IsBindableEvent", "True" },
		{ "ModuleRelativePath", "Public/Slate/MBAssetBorder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMouseDoubleClickEvent_MetaData[] = {
		{ "Category", "Events" },
		{ "IsBindableEvent", "True" },
		{ "ModuleRelativePath", "Public/Slate/MBAssetBorder.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Brush_MetaData[] = {
		{ "Comment", "/** Image to use for the border */" },
		{ "ModuleRelativePath", "Public/Slate/MBAssetBorder.h" },
		{ "ToolTip", "Image to use for the border" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_HorizontalAlignment;
	static const UECodeGen_Private::FBytePropertyParams NewProp_VerticalAlignment;
	static void NewProp_bShowEffectWhenDisabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowEffectWhenDisabled;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ContentColorAndOpacity;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_ContentColorAndOpacityDelegate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Padding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Background;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_BackgroundDelegate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BrushColor;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_BrushColorDelegate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DesiredSizeScale;
	static void NewProp_bFlipForRightToLeftFlowDirection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlipForRightToLeftFlowDirection;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnMouseButtonDownEvent;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnMouseButtonUpEvent;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnMouseMoveEvent;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnMouseDoubleClickEvent;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Brush;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMBAssetBorder_GetDynamicMaterial, "GetDynamicMaterial" }, // 443288002
		{ &Z_Construct_UFunction_UMBAssetBorder_SetBrush, "SetBrush" }, // 4007184275
		{ &Z_Construct_UFunction_UMBAssetBorder_SetBrushColor, "SetBrushColor" }, // 1287134257
		{ &Z_Construct_UFunction_UMBAssetBorder_SetBrushFromAsset, "SetBrushFromAsset" }, // 3502089208
		{ &Z_Construct_UFunction_UMBAssetBorder_SetBrushFromMaterial, "SetBrushFromMaterial" }, // 2484474921
		{ &Z_Construct_UFunction_UMBAssetBorder_SetBrushFromTexture, "SetBrushFromTexture" }, // 2954131999
		{ &Z_Construct_UFunction_UMBAssetBorder_SetContentColorAndOpacity, "SetContentColorAndOpacity" }, // 3851131690
		{ &Z_Construct_UFunction_UMBAssetBorder_SetDesiredSizeScale, "SetDesiredSizeScale" }, // 3239229654
		{ &Z_Construct_UFunction_UMBAssetBorder_SetHorizontalAlignment, "SetHorizontalAlignment" }, // 3476154930
		{ &Z_Construct_UFunction_UMBAssetBorder_SetPadding, "SetPadding" }, // 4096144588
		{ &Z_Construct_UFunction_UMBAssetBorder_SetVerticalAlignment, "SetVerticalAlignment" }, // 1932991474
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMBAssetBorder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMBAssetBorder_Statics::NewProp_HorizontalAlignment = { "HorizontalAlignment", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBAssetBorder, HorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HorizontalAlignment_MetaData), NewProp_HorizontalAlignment_MetaData) }; // 1062133256
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMBAssetBorder_Statics::NewProp_VerticalAlignment = { "VerticalAlignment", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBAssetBorder, VerticalAlignment), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VerticalAlignment_MetaData), NewProp_VerticalAlignment_MetaData) }; // 550775363
void Z_Construct_UClass_UMBAssetBorder_Statics::NewProp_bShowEffectWhenDisabled_SetBit(void* Obj)
{
	((UMBAssetBorder*)Obj)->bShowEffectWhenDisabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMBAssetBorder_Statics::NewProp_bShowEffectWhenDisabled = { "bShowEffectWhenDisabled", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMBAssetBorder), &Z_Construct_UClass_UMBAssetBorder_Statics::NewProp_bShowEffectWhenDisabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowEffectWhenDisabled_MetaData), NewProp_bShowEffectWhenDisabled_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMBAssetBorder_Statics::NewProp_ContentColorAndOpacity = { "ContentColorAndOpacity", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBAssetBorder, ContentColorAndOpacity), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContentColorAndOpacity_MetaData), NewProp_ContentColorAndOpacity_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UMBAssetBorder_Statics::NewProp_ContentColorAndOpacityDelegate = { "ContentColorAndOpacityDelegate", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBAssetBorder, ContentColorAndOpacityDelegate), Z_Construct_UDelegateFunction_UWidget_GetLinearColor__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContentColorAndOpacityDelegate_MetaData), NewProp_ContentColorAndOpacityDelegate_MetaData) }; // 3367946829
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMBAssetBorder_Statics::NewProp_Padding = { "Padding", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBAssetBorder, Padding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Padding_MetaData), NewProp_Padding_MetaData) }; // 2986890016
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMBAssetBorder_Statics::NewProp_Background = { "Background", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBAssetBorder, Background), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Background_MetaData), NewProp_Background_MetaData) }; // 1704263518
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UMBAssetBorder_Statics::NewProp_BackgroundDelegate = { "BackgroundDelegate", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBAssetBorder, BackgroundDelegate), Z_Construct_UDelegateFunction_UWidget_GetSlateBrush__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackgroundDelegate_MetaData), NewProp_BackgroundDelegate_MetaData) }; // 3558432909
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMBAssetBorder_Statics::NewProp_BrushColor = { "BrushColor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBAssetBorder, BrushColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrushColor_MetaData), NewProp_BrushColor_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UMBAssetBorder_Statics::NewProp_BrushColorDelegate = { "BrushColorDelegate", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBAssetBorder, BrushColorDelegate), Z_Construct_UDelegateFunction_UWidget_GetLinearColor__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrushColorDelegate_MetaData), NewProp_BrushColorDelegate_MetaData) }; // 3367946829
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMBAssetBorder_Statics::NewProp_DesiredSizeScale = { "DesiredSizeScale", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBAssetBorder, DesiredSizeScale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DesiredSizeScale_MetaData), NewProp_DesiredSizeScale_MetaData) };
void Z_Construct_UClass_UMBAssetBorder_Statics::NewProp_bFlipForRightToLeftFlowDirection_SetBit(void* Obj)
{
	((UMBAssetBorder*)Obj)->bFlipForRightToLeftFlowDirection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMBAssetBorder_Statics::NewProp_bFlipForRightToLeftFlowDirection = { "bFlipForRightToLeftFlowDirection", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMBAssetBorder), &Z_Construct_UClass_UMBAssetBorder_Statics::NewProp_bFlipForRightToLeftFlowDirection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFlipForRightToLeftFlowDirection_MetaData), NewProp_bFlipForRightToLeftFlowDirection_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UMBAssetBorder_Statics::NewProp_OnMouseButtonDownEvent = { "OnMouseButtonDownEvent", nullptr, (EPropertyFlags)0x0010000000080001, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBAssetBorder, OnMouseButtonDownEvent), Z_Construct_UDelegateFunction_UWidget_OnPointerEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMouseButtonDownEvent_MetaData), NewProp_OnMouseButtonDownEvent_MetaData) }; // 951480833
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UMBAssetBorder_Statics::NewProp_OnMouseButtonUpEvent = { "OnMouseButtonUpEvent", nullptr, (EPropertyFlags)0x0010000000080001, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBAssetBorder, OnMouseButtonUpEvent), Z_Construct_UDelegateFunction_UWidget_OnPointerEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMouseButtonUpEvent_MetaData), NewProp_OnMouseButtonUpEvent_MetaData) }; // 951480833
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UMBAssetBorder_Statics::NewProp_OnMouseMoveEvent = { "OnMouseMoveEvent", nullptr, (EPropertyFlags)0x0010000000080001, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBAssetBorder, OnMouseMoveEvent), Z_Construct_UDelegateFunction_UWidget_OnPointerEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMouseMoveEvent_MetaData), NewProp_OnMouseMoveEvent_MetaData) }; // 951480833
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UMBAssetBorder_Statics::NewProp_OnMouseDoubleClickEvent = { "OnMouseDoubleClickEvent", nullptr, (EPropertyFlags)0x0010000000080001, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBAssetBorder, OnMouseDoubleClickEvent), Z_Construct_UDelegateFunction_UWidget_OnPointerEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMouseDoubleClickEvent_MetaData), NewProp_OnMouseDoubleClickEvent_MetaData) }; // 951480833
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMBAssetBorder_Statics::NewProp_Brush = { "Brush", nullptr, (EPropertyFlags)0x0124080820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBAssetBorder, Brush_DEPRECATED), Z_Construct_UClass_USlateBrushAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Brush_MetaData), NewProp_Brush_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMBAssetBorder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBAssetBorder_Statics::NewProp_HorizontalAlignment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBAssetBorder_Statics::NewProp_VerticalAlignment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBAssetBorder_Statics::NewProp_bShowEffectWhenDisabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBAssetBorder_Statics::NewProp_ContentColorAndOpacity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBAssetBorder_Statics::NewProp_ContentColorAndOpacityDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBAssetBorder_Statics::NewProp_Padding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBAssetBorder_Statics::NewProp_Background,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBAssetBorder_Statics::NewProp_BackgroundDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBAssetBorder_Statics::NewProp_BrushColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBAssetBorder_Statics::NewProp_BrushColorDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBAssetBorder_Statics::NewProp_DesiredSizeScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBAssetBorder_Statics::NewProp_bFlipForRightToLeftFlowDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBAssetBorder_Statics::NewProp_OnMouseButtonDownEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBAssetBorder_Statics::NewProp_OnMouseButtonUpEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBAssetBorder_Statics::NewProp_OnMouseMoveEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBAssetBorder_Statics::NewProp_OnMouseDoubleClickEvent,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBAssetBorder_Statics::NewProp_Brush,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMBAssetBorder_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMBAssetBorder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UContentWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ModularBuilding,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMBAssetBorder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMBAssetBorder_Statics::ClassParams = {
	&UMBAssetBorder::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMBAssetBorder_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMBAssetBorder_Statics::PropPointers),
	0,
	0x00B000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMBAssetBorder_Statics::Class_MetaDataParams), Z_Construct_UClass_UMBAssetBorder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMBAssetBorder()
{
	if (!Z_Registration_Info_UClass_UMBAssetBorder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMBAssetBorder.OuterSingleton, Z_Construct_UClass_UMBAssetBorder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMBAssetBorder.OuterSingleton;
}
template<> MODULARBUILDING_API UClass* StaticClass<UMBAssetBorder>()
{
	return UMBAssetBorder::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMBAssetBorder);
UMBAssetBorder::~UMBAssetBorder() {}
// End Class UMBAssetBorder

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Slate_MBAssetBorder_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMBAssetBorder, UMBAssetBorder::StaticClass, TEXT("UMBAssetBorder"), &Z_Registration_Info_UClass_UMBAssetBorder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMBAssetBorder), 3402513811U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Slate_MBAssetBorder_h_3110645229(TEXT("/Script/ModularBuilding"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Slate_MBAssetBorder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Slate_MBAssetBorder_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
