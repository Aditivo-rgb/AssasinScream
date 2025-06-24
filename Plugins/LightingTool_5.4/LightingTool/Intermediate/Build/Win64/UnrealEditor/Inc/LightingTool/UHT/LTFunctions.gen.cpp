// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LightingTool/Public/Library/LTFunctions.h"
#include "LightingTool/Public/Data/LTLightRenderData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLTFunctions() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FAssetData();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ALight_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APostProcessVolume_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_ULightComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTextureCube_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTextureLightProfile_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDynamicGlobalIlluminationMethod();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EEasingFunc();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ELumenSoftwareTracingMode();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EReflectionMethod();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EShadowMapMethod();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EViewModeIndex();
LIGHTINGTOOL_API UClass* Z_Construct_UClass_ULTFunctions();
LIGHTINGTOOL_API UClass* Z_Construct_UClass_ULTFunctions_NoRegister();
LIGHTINGTOOL_API UScriptStruct* Z_Construct_UScriptStruct_FLightRenderData();
UPackage* Z_Construct_UPackage__Script_LightingTool();
WINDOWSTARGETPLATFORM_API UEnum* Z_Construct_UEnum_WindowsTargetPlatform_EDefaultGraphicsRHI();
// End Cross Module References

// Begin Class ULTFunctions Function AdjustDensityWithEase
struct Z_Construct_UFunction_ULTFunctions_AdjustDensityWithEase_Statics
{
	struct LTFunctions_eventAdjustDensityWithEase_Parms
	{
		float A;
		float B;
		float Alpha;
		TEnumAsByte<EEasingFunc::Type> EasingFunc;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LightingTool|Lightmap" },
		{ "ModuleRelativePath", "Public/Library/LTFunctions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_A;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_B;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Alpha;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EasingFunc;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULTFunctions_AdjustDensityWithEase_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LTFunctions_eventAdjustDensityWithEase_Parms, A), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULTFunctions_AdjustDensityWithEase_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LTFunctions_eventAdjustDensityWithEase_Parms, B), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULTFunctions_AdjustDensityWithEase_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LTFunctions_eventAdjustDensityWithEase_Parms, Alpha), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULTFunctions_AdjustDensityWithEase_Statics::NewProp_EasingFunc = { "EasingFunc", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LTFunctions_eventAdjustDensityWithEase_Parms, EasingFunc), Z_Construct_UEnum_Engine_EEasingFunc, METADATA_PARAMS(0, nullptr) }; // 1955521276
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULTFunctions_AdjustDensityWithEase_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LTFunctions_eventAdjustDensityWithEase_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULTFunctions_AdjustDensityWithEase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_AdjustDensityWithEase_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_AdjustDensityWithEase_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_AdjustDensityWithEase_Statics::NewProp_Alpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_AdjustDensityWithEase_Statics::NewProp_EasingFunc,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_AdjustDensityWithEase_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_AdjustDensityWithEase_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULTFunctions_AdjustDensityWithEase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULTFunctions, nullptr, "AdjustDensityWithEase", nullptr, nullptr, Z_Construct_UFunction_ULTFunctions_AdjustDensityWithEase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_AdjustDensityWithEase_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULTFunctions_AdjustDensityWithEase_Statics::LTFunctions_eventAdjustDensityWithEase_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_AdjustDensityWithEase_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULTFunctions_AdjustDensityWithEase_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULTFunctions_AdjustDensityWithEase_Statics::LTFunctions_eventAdjustDensityWithEase_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULTFunctions_AdjustDensityWithEase()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULTFunctions_AdjustDensityWithEase_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULTFunctions::execAdjustDensityWithEase)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_A);
	P_GET_PROPERTY(FFloatProperty,Z_Param_B);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Alpha);
	P_GET_PROPERTY(FByteProperty,Z_Param_EasingFunc);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=ULTFunctions::AdjustDensityWithEase(Z_Param_A,Z_Param_B,Z_Param_Alpha,EEasingFunc::Type(Z_Param_EasingFunc));
	P_NATIVE_END;
}
// End Class ULTFunctions Function AdjustDensityWithEase

// Begin Class ULTFunctions Function ApplyLightRenderPresetData
struct Z_Construct_UFunction_ULTFunctions_ApplyLightRenderPresetData_Statics
{
	struct LTFunctions_eventApplyLightRenderPresetData_Parms
	{
		FLightRenderData InLightRenderData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lighting Tool" },
		{ "Comment", "//Preset\n" },
		{ "ModuleRelativePath", "Public/Library/LTFunctions.h" },
		{ "ToolTip", "Preset" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InLightRenderData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InLightRenderData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULTFunctions_ApplyLightRenderPresetData_Statics::NewProp_InLightRenderData = { "InLightRenderData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LTFunctions_eventApplyLightRenderPresetData_Parms, InLightRenderData), Z_Construct_UScriptStruct_FLightRenderData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InLightRenderData_MetaData), NewProp_InLightRenderData_MetaData) }; // 2454118793
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULTFunctions_ApplyLightRenderPresetData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_ApplyLightRenderPresetData_Statics::NewProp_InLightRenderData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_ApplyLightRenderPresetData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULTFunctions_ApplyLightRenderPresetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULTFunctions, nullptr, "ApplyLightRenderPresetData", nullptr, nullptr, Z_Construct_UFunction_ULTFunctions_ApplyLightRenderPresetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_ApplyLightRenderPresetData_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULTFunctions_ApplyLightRenderPresetData_Statics::LTFunctions_eventApplyLightRenderPresetData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_ApplyLightRenderPresetData_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULTFunctions_ApplyLightRenderPresetData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULTFunctions_ApplyLightRenderPresetData_Statics::LTFunctions_eventApplyLightRenderPresetData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULTFunctions_ApplyLightRenderPresetData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULTFunctions_ApplyLightRenderPresetData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULTFunctions::execApplyLightRenderPresetData)
{
	P_GET_STRUCT_REF(FLightRenderData,Z_Param_Out_InLightRenderData);
	P_FINISH;
	P_NATIVE_BEGIN;
	ULTFunctions::ApplyLightRenderPresetData(Z_Param_Out_InLightRenderData);
	P_NATIVE_END;
}
// End Class ULTFunctions Function ApplyLightRenderPresetData

// Begin Class ULTFunctions Function CalculateDensityAndResolution
struct Z_Construct_UFunction_ULTFunctions_CalculateDensityAndResolution_Statics
{
	struct FTopLevelAssetPath
	{
		FName PackageName;
		FName AssetName;
	};

	struct LTFunctions_eventCalculateDensityAndResolution_Parms
	{
		FAssetData InAssetData;
		float OutDensity;
		int32 OutResolution;
		int32 OutCoordIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LightingTool|Lightmap" },
		{ "ModuleRelativePath", "Public/Library/LTFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAssetData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InAssetData;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutDensity;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutResolution;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutCoordIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULTFunctions_CalculateDensityAndResolution_Statics::NewProp_InAssetData = { "InAssetData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LTFunctions_eventCalculateDensityAndResolution_Parms, InAssetData), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAssetData_MetaData), NewProp_InAssetData_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULTFunctions_CalculateDensityAndResolution_Statics::NewProp_OutDensity = { "OutDensity", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LTFunctions_eventCalculateDensityAndResolution_Parms, OutDensity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULTFunctions_CalculateDensityAndResolution_Statics::NewProp_OutResolution = { "OutResolution", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LTFunctions_eventCalculateDensityAndResolution_Parms, OutResolution), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULTFunctions_CalculateDensityAndResolution_Statics::NewProp_OutCoordIndex = { "OutCoordIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LTFunctions_eventCalculateDensityAndResolution_Parms, OutCoordIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULTFunctions_CalculateDensityAndResolution_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_CalculateDensityAndResolution_Statics::NewProp_InAssetData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_CalculateDensityAndResolution_Statics::NewProp_OutDensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_CalculateDensityAndResolution_Statics::NewProp_OutResolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_CalculateDensityAndResolution_Statics::NewProp_OutCoordIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_CalculateDensityAndResolution_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULTFunctions_CalculateDensityAndResolution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULTFunctions, nullptr, "CalculateDensityAndResolution", nullptr, nullptr, Z_Construct_UFunction_ULTFunctions_CalculateDensityAndResolution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_CalculateDensityAndResolution_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULTFunctions_CalculateDensityAndResolution_Statics::LTFunctions_eventCalculateDensityAndResolution_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_CalculateDensityAndResolution_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULTFunctions_CalculateDensityAndResolution_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULTFunctions_CalculateDensityAndResolution_Statics::LTFunctions_eventCalculateDensityAndResolution_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULTFunctions_CalculateDensityAndResolution()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULTFunctions_CalculateDensityAndResolution_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULTFunctions::execCalculateDensityAndResolution)
{
	P_GET_STRUCT_REF(FAssetData,Z_Param_Out_InAssetData);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutDensity);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutResolution);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutCoordIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	ULTFunctions::CalculateDensityAndResolution(Z_Param_Out_InAssetData,Z_Param_Out_OutDensity,Z_Param_Out_OutResolution,Z_Param_Out_OutCoordIndex);
	P_NATIVE_END;
}
// End Class ULTFunctions Function CalculateDensityAndResolution

// Begin Class ULTFunctions Function CalculateDesiredLightmapResolution
struct Z_Construct_UFunction_ULTFunctions_CalculateDesiredLightmapResolution_Statics
{
	struct LTFunctions_eventCalculateDesiredLightmapResolution_Parms
	{
		const UStaticMeshComponent* StaticMeshComponent;
		float DesiredDensity;
		int32 MaxAllowedRes;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Library/LTFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DesiredDensity_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxAllowedRes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DesiredDensity;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxAllowedRes;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULTFunctions_CalculateDesiredLightmapResolution_Statics::NewProp_StaticMeshComponent = { "StaticMeshComponent", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LTFunctions_eventCalculateDesiredLightmapResolution_Parms, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshComponent_MetaData), NewProp_StaticMeshComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULTFunctions_CalculateDesiredLightmapResolution_Statics::NewProp_DesiredDensity = { "DesiredDensity", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LTFunctions_eventCalculateDesiredLightmapResolution_Parms, DesiredDensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DesiredDensity_MetaData), NewProp_DesiredDensity_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULTFunctions_CalculateDesiredLightmapResolution_Statics::NewProp_MaxAllowedRes = { "MaxAllowedRes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LTFunctions_eventCalculateDesiredLightmapResolution_Parms, MaxAllowedRes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxAllowedRes_MetaData), NewProp_MaxAllowedRes_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULTFunctions_CalculateDesiredLightmapResolution_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LTFunctions_eventCalculateDesiredLightmapResolution_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULTFunctions_CalculateDesiredLightmapResolution_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_CalculateDesiredLightmapResolution_Statics::NewProp_StaticMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_CalculateDesiredLightmapResolution_Statics::NewProp_DesiredDensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_CalculateDesiredLightmapResolution_Statics::NewProp_MaxAllowedRes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_CalculateDesiredLightmapResolution_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_CalculateDesiredLightmapResolution_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULTFunctions_CalculateDesiredLightmapResolution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULTFunctions, nullptr, "CalculateDesiredLightmapResolution", nullptr, nullptr, Z_Construct_UFunction_ULTFunctions_CalculateDesiredLightmapResolution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_CalculateDesiredLightmapResolution_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULTFunctions_CalculateDesiredLightmapResolution_Statics::LTFunctions_eventCalculateDesiredLightmapResolution_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_CalculateDesiredLightmapResolution_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULTFunctions_CalculateDesiredLightmapResolution_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULTFunctions_CalculateDesiredLightmapResolution_Statics::LTFunctions_eventCalculateDesiredLightmapResolution_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULTFunctions_CalculateDesiredLightmapResolution()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULTFunctions_CalculateDesiredLightmapResolution_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULTFunctions::execCalculateDesiredLightmapResolution)
{
	P_GET_OBJECT(UStaticMeshComponent,Z_Param_StaticMeshComponent);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_DesiredDensity);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_MaxAllowedRes);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=ULTFunctions::CalculateDesiredLightmapResolution(Z_Param_StaticMeshComponent,Z_Param_Out_DesiredDensity,Z_Param_Out_MaxAllowedRes);
	P_NATIVE_END;
}
// End Class ULTFunctions Function CalculateDesiredLightmapResolution

// Begin Class ULTFunctions Function ChangeDefaultRHI
struct Z_Construct_UFunction_ULTFunctions_ChangeDefaultRHI_Statics
{
	struct LTFunctions_eventChangeDefaultRHI_Parms
	{
		EDefaultGraphicsRHI InNewRHI;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lighting Tool" },
		{ "Comment", "/** Setters **/" },
		{ "ModuleRelativePath", "Public/Library/LTFunctions.h" },
		{ "ToolTip", "Setters *" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InNewRHI_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InNewRHI;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULTFunctions_ChangeDefaultRHI_Statics::NewProp_InNewRHI_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULTFunctions_ChangeDefaultRHI_Statics::NewProp_InNewRHI = { "InNewRHI", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LTFunctions_eventChangeDefaultRHI_Parms, InNewRHI), Z_Construct_UEnum_WindowsTargetPlatform_EDefaultGraphicsRHI, METADATA_PARAMS(0, nullptr) }; // 420144750
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULTFunctions_ChangeDefaultRHI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_ChangeDefaultRHI_Statics::NewProp_InNewRHI_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_ChangeDefaultRHI_Statics::NewProp_InNewRHI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_ChangeDefaultRHI_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULTFunctions_ChangeDefaultRHI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULTFunctions, nullptr, "ChangeDefaultRHI", nullptr, nullptr, Z_Construct_UFunction_ULTFunctions_ChangeDefaultRHI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_ChangeDefaultRHI_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULTFunctions_ChangeDefaultRHI_Statics::LTFunctions_eventChangeDefaultRHI_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_ChangeDefaultRHI_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULTFunctions_ChangeDefaultRHI_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULTFunctions_ChangeDefaultRHI_Statics::LTFunctions_eventChangeDefaultRHI_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULTFunctions_ChangeDefaultRHI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULTFunctions_ChangeDefaultRHI_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULTFunctions::execChangeDefaultRHI)
{
	P_GET_ENUM(EDefaultGraphicsRHI,Z_Param_InNewRHI);
	P_FINISH;
	P_NATIVE_BEGIN;
	ULTFunctions::ChangeDefaultRHI(EDefaultGraphicsRHI(Z_Param_InNewRHI));
	P_NATIVE_END;
}
// End Class ULTFunctions Function ChangeDefaultRHI

// Begin Class ULTFunctions Function ChangeDynamicGlobalIlluminationMethod
struct Z_Construct_UFunction_ULTFunctions_ChangeDynamicGlobalIlluminationMethod_Statics
{
	struct LTFunctions_eventChangeDynamicGlobalIlluminationMethod_Parms
	{
		TEnumAsByte<EDynamicGlobalIlluminationMethod::Type> InNewMethod;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lighting Tool" },
		{ "ModuleRelativePath", "Public/Library/LTFunctions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InNewMethod;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULTFunctions_ChangeDynamicGlobalIlluminationMethod_Statics::NewProp_InNewMethod = { "InNewMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LTFunctions_eventChangeDynamicGlobalIlluminationMethod_Parms, InNewMethod), Z_Construct_UEnum_Engine_EDynamicGlobalIlluminationMethod, METADATA_PARAMS(0, nullptr) }; // 2546568098
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULTFunctions_ChangeDynamicGlobalIlluminationMethod_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_ChangeDynamicGlobalIlluminationMethod_Statics::NewProp_InNewMethod,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_ChangeDynamicGlobalIlluminationMethod_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULTFunctions_ChangeDynamicGlobalIlluminationMethod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULTFunctions, nullptr, "ChangeDynamicGlobalIlluminationMethod", nullptr, nullptr, Z_Construct_UFunction_ULTFunctions_ChangeDynamicGlobalIlluminationMethod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_ChangeDynamicGlobalIlluminationMethod_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULTFunctions_ChangeDynamicGlobalIlluminationMethod_Statics::LTFunctions_eventChangeDynamicGlobalIlluminationMethod_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_ChangeDynamicGlobalIlluminationMethod_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULTFunctions_ChangeDynamicGlobalIlluminationMethod_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULTFunctions_ChangeDynamicGlobalIlluminationMethod_Statics::LTFunctions_eventChangeDynamicGlobalIlluminationMethod_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULTFunctions_ChangeDynamicGlobalIlluminationMethod()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULTFunctions_ChangeDynamicGlobalIlluminationMethod_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULTFunctions::execChangeDynamicGlobalIlluminationMethod)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_InNewMethod);
	P_FINISH;
	P_NATIVE_BEGIN;
	ULTFunctions::ChangeDynamicGlobalIlluminationMethod(EDynamicGlobalIlluminationMethod::Type(Z_Param_InNewMethod));
	P_NATIVE_END;
}
// End Class ULTFunctions Function ChangeDynamicGlobalIlluminationMethod

// Begin Class ULTFunctions Function ChangeEnablePathTracing
struct Z_Construct_UFunction_ULTFunctions_ChangeEnablePathTracing_Statics
{
	struct LTFunctions_eventChangeEnablePathTracing_Parms
	{
		bool InNewState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lighting Tool" },
		{ "ModuleRelativePath", "Public/Library/LTFunctions.h" },
	};
#endif // WITH_METADATA
	static void NewProp_InNewState_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InNewState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ULTFunctions_ChangeEnablePathTracing_Statics::NewProp_InNewState_SetBit(void* Obj)
{
	((LTFunctions_eventChangeEnablePathTracing_Parms*)Obj)->InNewState = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULTFunctions_ChangeEnablePathTracing_Statics::NewProp_InNewState = { "InNewState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LTFunctions_eventChangeEnablePathTracing_Parms), &Z_Construct_UFunction_ULTFunctions_ChangeEnablePathTracing_Statics::NewProp_InNewState_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULTFunctions_ChangeEnablePathTracing_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_ChangeEnablePathTracing_Statics::NewProp_InNewState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_ChangeEnablePathTracing_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULTFunctions_ChangeEnablePathTracing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULTFunctions, nullptr, "ChangeEnablePathTracing", nullptr, nullptr, Z_Construct_UFunction_ULTFunctions_ChangeEnablePathTracing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_ChangeEnablePathTracing_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULTFunctions_ChangeEnablePathTracing_Statics::LTFunctions_eventChangeEnablePathTracing_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_ChangeEnablePathTracing_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULTFunctions_ChangeEnablePathTracing_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULTFunctions_ChangeEnablePathTracing_Statics::LTFunctions_eventChangeEnablePathTracing_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULTFunctions_ChangeEnablePathTracing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULTFunctions_ChangeEnablePathTracing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULTFunctions::execChangeEnablePathTracing)
{
	P_GET_UBOOL(Z_Param_InNewState);
	P_FINISH;
	P_NATIVE_BEGIN;
	ULTFunctions::ChangeEnablePathTracing(Z_Param_InNewState);
	P_NATIVE_END;
}
// End Class ULTFunctions Function ChangeEnablePathTracing

// Begin Class ULTFunctions Function ChangeEnableRayTracing
struct Z_Construct_UFunction_ULTFunctions_ChangeEnableRayTracing_Statics
{
	struct LTFunctions_eventChangeEnableRayTracing_Parms
	{
		bool InNewState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lighting Tool" },
		{ "ModuleRelativePath", "Public/Library/LTFunctions.h" },
	};
#endif // WITH_METADATA
	static void NewProp_InNewState_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InNewState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ULTFunctions_ChangeEnableRayTracing_Statics::NewProp_InNewState_SetBit(void* Obj)
{
	((LTFunctions_eventChangeEnableRayTracing_Parms*)Obj)->InNewState = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULTFunctions_ChangeEnableRayTracing_Statics::NewProp_InNewState = { "InNewState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LTFunctions_eventChangeEnableRayTracing_Parms), &Z_Construct_UFunction_ULTFunctions_ChangeEnableRayTracing_Statics::NewProp_InNewState_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULTFunctions_ChangeEnableRayTracing_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_ChangeEnableRayTracing_Statics::NewProp_InNewState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_ChangeEnableRayTracing_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULTFunctions_ChangeEnableRayTracing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULTFunctions, nullptr, "ChangeEnableRayTracing", nullptr, nullptr, Z_Construct_UFunction_ULTFunctions_ChangeEnableRayTracing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_ChangeEnableRayTracing_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULTFunctions_ChangeEnableRayTracing_Statics::LTFunctions_eventChangeEnableRayTracing_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_ChangeEnableRayTracing_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULTFunctions_ChangeEnableRayTracing_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULTFunctions_ChangeEnableRayTracing_Statics::LTFunctions_eventChangeEnableRayTracing_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULTFunctions_ChangeEnableRayTracing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULTFunctions_ChangeEnableRayTracing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULTFunctions::execChangeEnableRayTracing)
{
	P_GET_UBOOL(Z_Param_InNewState);
	P_FINISH;
	P_NATIVE_BEGIN;
	ULTFunctions::ChangeEnableRayTracing(Z_Param_InNewState);
	P_NATIVE_END;
}
// End Class ULTFunctions Function ChangeEnableRayTracing

// Begin Class ULTFunctions Function ChangeGenerateMeshDistanceField
struct Z_Construct_UFunction_ULTFunctions_ChangeGenerateMeshDistanceField_Statics
{
	struct LTFunctions_eventChangeGenerateMeshDistanceField_Parms
	{
		bool InNewState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lighting Tool" },
		{ "ModuleRelativePath", "Public/Library/LTFunctions.h" },
	};
#endif // WITH_METADATA
	static void NewProp_InNewState_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InNewState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ULTFunctions_ChangeGenerateMeshDistanceField_Statics::NewProp_InNewState_SetBit(void* Obj)
{
	((LTFunctions_eventChangeGenerateMeshDistanceField_Parms*)Obj)->InNewState = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULTFunctions_ChangeGenerateMeshDistanceField_Statics::NewProp_InNewState = { "InNewState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LTFunctions_eventChangeGenerateMeshDistanceField_Parms), &Z_Construct_UFunction_ULTFunctions_ChangeGenerateMeshDistanceField_Statics::NewProp_InNewState_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULTFunctions_ChangeGenerateMeshDistanceField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_ChangeGenerateMeshDistanceField_Statics::NewProp_InNewState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_ChangeGenerateMeshDistanceField_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULTFunctions_ChangeGenerateMeshDistanceField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULTFunctions, nullptr, "ChangeGenerateMeshDistanceField", nullptr, nullptr, Z_Construct_UFunction_ULTFunctions_ChangeGenerateMeshDistanceField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_ChangeGenerateMeshDistanceField_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULTFunctions_ChangeGenerateMeshDistanceField_Statics::LTFunctions_eventChangeGenerateMeshDistanceField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_ChangeGenerateMeshDistanceField_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULTFunctions_ChangeGenerateMeshDistanceField_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULTFunctions_ChangeGenerateMeshDistanceField_Statics::LTFunctions_eventChangeGenerateMeshDistanceField_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULTFunctions_ChangeGenerateMeshDistanceField()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULTFunctions_ChangeGenerateMeshDistanceField_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULTFunctions::execChangeGenerateMeshDistanceField)
{
	P_GET_UBOOL(Z_Param_InNewState);
	P_FINISH;
	P_NATIVE_BEGIN;
	ULTFunctions::ChangeGenerateMeshDistanceField(Z_Param_InNewState);
	P_NATIVE_END;
}
// End Class ULTFunctions Function ChangeGenerateMeshDistanceField

// Begin Class ULTFunctions Function ChangeLightmapCoordinateIndex
struct Z_Construct_UFunction_ULTFunctions_ChangeLightmapCoordinateIndex_Statics
{
	struct LTFunctions_eventChangeLightmapCoordinateIndex_Parms
	{
		FName InObjectPath;
		int32 InNewIndex;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LightingTool|Lightmap" },
		{ "ModuleRelativePath", "Public/Library/LTFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InObjectPath_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InNewIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InObjectPath;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InNewIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULTFunctions_ChangeLightmapCoordinateIndex_Statics::NewProp_InObjectPath = { "InObjectPath", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LTFunctions_eventChangeLightmapCoordinateIndex_Parms, InObjectPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InObjectPath_MetaData), NewProp_InObjectPath_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULTFunctions_ChangeLightmapCoordinateIndex_Statics::NewProp_InNewIndex = { "InNewIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LTFunctions_eventChangeLightmapCoordinateIndex_Parms, InNewIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InNewIndex_MetaData), NewProp_InNewIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULTFunctions_ChangeLightmapCoordinateIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LTFunctions_eventChangeLightmapCoordinateIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULTFunctions_ChangeLightmapCoordinateIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_ChangeLightmapCoordinateIndex_Statics::NewProp_InObjectPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_ChangeLightmapCoordinateIndex_Statics::NewProp_InNewIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_ChangeLightmapCoordinateIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_ChangeLightmapCoordinateIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULTFunctions_ChangeLightmapCoordinateIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULTFunctions, nullptr, "ChangeLightmapCoordinateIndex", nullptr, nullptr, Z_Construct_UFunction_ULTFunctions_ChangeLightmapCoordinateIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_ChangeLightmapCoordinateIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULTFunctions_ChangeLightmapCoordinateIndex_Statics::LTFunctions_eventChangeLightmapCoordinateIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_ChangeLightmapCoordinateIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULTFunctions_ChangeLightmapCoordinateIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULTFunctions_ChangeLightmapCoordinateIndex_Statics::LTFunctions_eventChangeLightmapCoordinateIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULTFunctions_ChangeLightmapCoordinateIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULTFunctions_ChangeLightmapCoordinateIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULTFunctions::execChangeLightmapCoordinateIndex)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InObjectPath);
	P_GET_PROPERTY(FIntProperty,Z_Param_InNewIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=ULTFunctions::ChangeLightmapCoordinateIndex(Z_Param_Out_InObjectPath,Z_Param_InNewIndex);
	P_NATIVE_END;
}
// End Class ULTFunctions Function ChangeLightmapCoordinateIndex

// Begin Class ULTFunctions Function ChangeLightmapResolution
struct Z_Construct_UFunction_ULTFunctions_ChangeLightmapResolution_Statics
{
	struct LTFunctions_eventChangeLightmapResolution_Parms
	{
		FName InObjectPath;
		int32 InNewResolution;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LightingTool|Lightmap" },
		{ "ModuleRelativePath", "Public/Library/LTFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InObjectPath_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InNewResolution_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InObjectPath;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InNewResolution;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULTFunctions_ChangeLightmapResolution_Statics::NewProp_InObjectPath = { "InObjectPath", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LTFunctions_eventChangeLightmapResolution_Parms, InObjectPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InObjectPath_MetaData), NewProp_InObjectPath_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULTFunctions_ChangeLightmapResolution_Statics::NewProp_InNewResolution = { "InNewResolution", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LTFunctions_eventChangeLightmapResolution_Parms, InNewResolution), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InNewResolution_MetaData), NewProp_InNewResolution_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULTFunctions_ChangeLightmapResolution_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_ChangeLightmapResolution_Statics::NewProp_InObjectPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_ChangeLightmapResolution_Statics::NewProp_InNewResolution,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_ChangeLightmapResolution_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULTFunctions_ChangeLightmapResolution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULTFunctions, nullptr, "ChangeLightmapResolution", nullptr, nullptr, Z_Construct_UFunction_ULTFunctions_ChangeLightmapResolution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_ChangeLightmapResolution_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULTFunctions_ChangeLightmapResolution_Statics::LTFunctions_eventChangeLightmapResolution_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_ChangeLightmapResolution_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULTFunctions_ChangeLightmapResolution_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULTFunctions_ChangeLightmapResolution_Statics::LTFunctions_eventChangeLightmapResolution_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULTFunctions_ChangeLightmapResolution()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULTFunctions_ChangeLightmapResolution_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULTFunctions::execChangeLightmapResolution)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InObjectPath);
	P_GET_PROPERTY(FIntProperty,Z_Param_InNewResolution);
	P_FINISH;
	P_NATIVE_BEGIN;
	ULTFunctions::ChangeLightmapResolution(Z_Param_Out_InObjectPath,Z_Param_InNewResolution);
	P_NATIVE_END;
}
// End Class ULTFunctions Function ChangeLightmapResolution

// Begin Class ULTFunctions Function ChangeLightsBrightness
struct Z_Construct_UFunction_ULTFunctions_ChangeLightsBrightness_Statics
{
	struct LTFunctions_eventChangeLightsBrightness_Parms
	{
		float InBrightness;
		TArray<ALight*> InLights;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Light Functions" },
		{ "ModuleRelativePath", "Public/Library/LTFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InBrightness_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InLights_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InBrightness;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InLights_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InLights;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULTFunctions_ChangeLightsBrightness_Statics::NewProp_InBrightness = { "InBrightness", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LTFunctions_eventChangeLightsBrightness_Parms, InBrightness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InBrightness_MetaData), NewProp_InBrightness_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULTFunctions_ChangeLightsBrightness_Statics::NewProp_InLights_Inner = { "InLights", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ALight_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULTFunctions_ChangeLightsBrightness_Statics::NewProp_InLights = { "InLights", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LTFunctions_eventChangeLightsBrightness_Parms, InLights), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InLights_MetaData), NewProp_InLights_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULTFunctions_ChangeLightsBrightness_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_ChangeLightsBrightness_Statics::NewProp_InBrightness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_ChangeLightsBrightness_Statics::NewProp_InLights_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_ChangeLightsBrightness_Statics::NewProp_InLights,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_ChangeLightsBrightness_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULTFunctions_ChangeLightsBrightness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULTFunctions, nullptr, "ChangeLightsBrightness", nullptr, nullptr, Z_Construct_UFunction_ULTFunctions_ChangeLightsBrightness_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_ChangeLightsBrightness_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULTFunctions_ChangeLightsBrightness_Statics::LTFunctions_eventChangeLightsBrightness_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_ChangeLightsBrightness_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULTFunctions_ChangeLightsBrightness_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULTFunctions_ChangeLightsBrightness_Statics::LTFunctions_eventChangeLightsBrightness_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULTFunctions_ChangeLightsBrightness()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULTFunctions_ChangeLightsBrightness_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULTFunctions::execChangeLightsBrightness)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_InBrightness);
	P_GET_TARRAY_REF(ALight*,Z_Param_Out_InLights);
	P_FINISH;
	P_NATIVE_BEGIN;
	ULTFunctions::ChangeLightsBrightness(Z_Param_Out_InBrightness,Z_Param_Out_InLights);
	P_NATIVE_END;
}
// End Class ULTFunctions Function ChangeLightsBrightness

// Begin Class ULTFunctions Function ChangeLightsColor
struct Z_Construct_UFunction_ULTFunctions_ChangeLightsColor_Statics
{
	struct LTFunctions_eventChangeLightsColor_Parms
	{
		FLinearColor InColor;
		TArray<ALight*> InLights;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Light Functions" },
		{ "ModuleRelativePath", "Public/Library/LTFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InColor_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InLights_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InColor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InLights_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InLights;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULTFunctions_ChangeLightsColor_Statics::NewProp_InColor = { "InColor", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LTFunctions_eventChangeLightsColor_Parms, InColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InColor_MetaData), NewProp_InColor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULTFunctions_ChangeLightsColor_Statics::NewProp_InLights_Inner = { "InLights", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ALight_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULTFunctions_ChangeLightsColor_Statics::NewProp_InLights = { "InLights", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LTFunctions_eventChangeLightsColor_Parms, InLights), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InLights_MetaData), NewProp_InLights_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULTFunctions_ChangeLightsColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_ChangeLightsColor_Statics::NewProp_InColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_ChangeLightsColor_Statics::NewProp_InLights_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_ChangeLightsColor_Statics::NewProp_InLights,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_ChangeLightsColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULTFunctions_ChangeLightsColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULTFunctions, nullptr, "ChangeLightsColor", nullptr, nullptr, Z_Construct_UFunction_ULTFunctions_ChangeLightsColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_ChangeLightsColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULTFunctions_ChangeLightsColor_Statics::LTFunctions_eventChangeLightsColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_ChangeLightsColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULTFunctions_ChangeLightsColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULTFunctions_ChangeLightsColor_Statics::LTFunctions_eventChangeLightsColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULTFunctions_ChangeLightsColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULTFunctions_ChangeLightsColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULTFunctions::execChangeLightsColor)
{
	P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_InColor);
	P_GET_TARRAY_REF(ALight*,Z_Param_Out_InLights);
	P_FINISH;
	P_NATIVE_BEGIN;
	ULTFunctions::ChangeLightsColor(Z_Param_Out_InColor,Z_Param_Out_InLights);
	P_NATIVE_END;
}
// End Class ULTFunctions Function ChangeLightsColor

// Begin Class ULTFunctions Function ChangeLightsFunction
struct Z_Construct_UFunction_ULTFunctions_ChangeLightsFunction_Statics
{
	struct LTFunctions_eventChangeLightsFunction_Parms
	{
		UMaterialInterface* InMaterial;
		TArray<ALight*> InLights;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Light Functions" },
		{ "ModuleRelativePath", "Public/Library/LTFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InLights_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InLights_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InLights;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULTFunctions_ChangeLightsFunction_Statics::NewProp_InMaterial = { "InMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LTFunctions_eventChangeLightsFunction_Parms, InMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULTFunctions_ChangeLightsFunction_Statics::NewProp_InLights_Inner = { "InLights", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ALight_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULTFunctions_ChangeLightsFunction_Statics::NewProp_InLights = { "InLights", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LTFunctions_eventChangeLightsFunction_Parms, InLights), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InLights_MetaData), NewProp_InLights_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULTFunctions_ChangeLightsFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_ChangeLightsFunction_Statics::NewProp_InMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_ChangeLightsFunction_Statics::NewProp_InLights_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_ChangeLightsFunction_Statics::NewProp_InLights,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_ChangeLightsFunction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULTFunctions_ChangeLightsFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULTFunctions, nullptr, "ChangeLightsFunction", nullptr, nullptr, Z_Construct_UFunction_ULTFunctions_ChangeLightsFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_ChangeLightsFunction_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULTFunctions_ChangeLightsFunction_Statics::LTFunctions_eventChangeLightsFunction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_ChangeLightsFunction_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULTFunctions_ChangeLightsFunction_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULTFunctions_ChangeLightsFunction_Statics::LTFunctions_eventChangeLightsFunction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULTFunctions_ChangeLightsFunction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULTFunctions_ChangeLightsFunction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULTFunctions::execChangeLightsFunction)
{
	P_GET_OBJECT(UMaterialInterface,Z_Param_InMaterial);
	P_GET_TARRAY_REF(ALight*,Z_Param_Out_InLights);
	P_FINISH;
	P_NATIVE_BEGIN;
	ULTFunctions::ChangeLightsFunction(Z_Param_InMaterial,Z_Param_Out_InLights);
	P_NATIVE_END;
}
// End Class ULTFunctions Function ChangeLightsFunction

// Begin Class ULTFunctions Function ChangeLightsVisibility
struct Z_Construct_UFunction_ULTFunctions_ChangeLightsVisibility_Statics
{
	struct LTFunctions_eventChangeLightsVisibility_Parms
	{
		bool IsVisible;
		TArray<ALight*> InLights;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Light Functions" },
		{ "ModuleRelativePath", "Public/Library/LTFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InLights_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_IsVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsVisible;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InLights_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InLights;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ULTFunctions_ChangeLightsVisibility_Statics::NewProp_IsVisible_SetBit(void* Obj)
{
	((LTFunctions_eventChangeLightsVisibility_Parms*)Obj)->IsVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULTFunctions_ChangeLightsVisibility_Statics::NewProp_IsVisible = { "IsVisible", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LTFunctions_eventChangeLightsVisibility_Parms), &Z_Construct_UFunction_ULTFunctions_ChangeLightsVisibility_Statics::NewProp_IsVisible_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULTFunctions_ChangeLightsVisibility_Statics::NewProp_InLights_Inner = { "InLights", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ALight_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULTFunctions_ChangeLightsVisibility_Statics::NewProp_InLights = { "InLights", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LTFunctions_eventChangeLightsVisibility_Parms, InLights), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InLights_MetaData), NewProp_InLights_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULTFunctions_ChangeLightsVisibility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_ChangeLightsVisibility_Statics::NewProp_IsVisible,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_ChangeLightsVisibility_Statics::NewProp_InLights_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_ChangeLightsVisibility_Statics::NewProp_InLights,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_ChangeLightsVisibility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULTFunctions_ChangeLightsVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULTFunctions, nullptr, "ChangeLightsVisibility", nullptr, nullptr, Z_Construct_UFunction_ULTFunctions_ChangeLightsVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_ChangeLightsVisibility_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULTFunctions_ChangeLightsVisibility_Statics::LTFunctions_eventChangeLightsVisibility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_ChangeLightsVisibility_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULTFunctions_ChangeLightsVisibility_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULTFunctions_ChangeLightsVisibility_Statics::LTFunctions_eventChangeLightsVisibility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULTFunctions_ChangeLightsVisibility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULTFunctions_ChangeLightsVisibility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULTFunctions::execChangeLightsVisibility)
{
	P_GET_UBOOL(Z_Param_IsVisible);
	P_GET_TARRAY_REF(ALight*,Z_Param_Out_InLights);
	P_FINISH;
	P_NATIVE_BEGIN;
	ULTFunctions::ChangeLightsVisibility(Z_Param_IsVisible,Z_Param_Out_InLights);
	P_NATIVE_END;
}
// End Class ULTFunctions Function ChangeLightsVisibility

// Begin Class ULTFunctions Function ChangePathTracingViewMode
struct Z_Construct_UFunction_ULTFunctions_ChangePathTracingViewMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LightingTool|Lightmap" },
		{ "ModuleRelativePath", "Public/Library/LTFunctions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULTFunctions_ChangePathTracingViewMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULTFunctions, nullptr, "ChangePathTracingViewMode", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_ChangePathTracingViewMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULTFunctions_ChangePathTracingViewMode_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ULTFunctions_ChangePathTracingViewMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULTFunctions_ChangePathTracingViewMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULTFunctions::execChangePathTracingViewMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	ULTFunctions::ChangePathTracingViewMode();
	P_NATIVE_END;
}
// End Class ULTFunctions Function ChangePathTracingViewMode

// Begin Class ULTFunctions Function ChangeReflectionMethod
struct Z_Construct_UFunction_ULTFunctions_ChangeReflectionMethod_Statics
{
	struct LTFunctions_eventChangeReflectionMethod_Parms
	{
		TEnumAsByte<EReflectionMethod::Type> InNewMethod;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lighting Tool" },
		{ "ModuleRelativePath", "Public/Library/LTFunctions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InNewMethod;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULTFunctions_ChangeReflectionMethod_Statics::NewProp_InNewMethod = { "InNewMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LTFunctions_eventChangeReflectionMethod_Parms, InNewMethod), Z_Construct_UEnum_Engine_EReflectionMethod, METADATA_PARAMS(0, nullptr) }; // 569687725
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULTFunctions_ChangeReflectionMethod_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_ChangeReflectionMethod_Statics::NewProp_InNewMethod,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_ChangeReflectionMethod_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULTFunctions_ChangeReflectionMethod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULTFunctions, nullptr, "ChangeReflectionMethod", nullptr, nullptr, Z_Construct_UFunction_ULTFunctions_ChangeReflectionMethod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_ChangeReflectionMethod_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULTFunctions_ChangeReflectionMethod_Statics::LTFunctions_eventChangeReflectionMethod_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_ChangeReflectionMethod_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULTFunctions_ChangeReflectionMethod_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULTFunctions_ChangeReflectionMethod_Statics::LTFunctions_eventChangeReflectionMethod_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULTFunctions_ChangeReflectionMethod()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULTFunctions_ChangeReflectionMethod_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULTFunctions::execChangeReflectionMethod)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_InNewMethod);
	P_FINISH;
	P_NATIVE_BEGIN;
	ULTFunctions::ChangeReflectionMethod(EReflectionMethod::Type(Z_Param_InNewMethod));
	P_NATIVE_END;
}
// End Class ULTFunctions Function ChangeReflectionMethod

// Begin Class ULTFunctions Function ChangeShadowMapMethod
struct Z_Construct_UFunction_ULTFunctions_ChangeShadowMapMethod_Statics
{
	struct LTFunctions_eventChangeShadowMapMethod_Parms
	{
		TEnumAsByte<EShadowMapMethod::Type> InNewMethod;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lighting Tool" },
		{ "ModuleRelativePath", "Public/Library/LTFunctions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InNewMethod;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULTFunctions_ChangeShadowMapMethod_Statics::NewProp_InNewMethod = { "InNewMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LTFunctions_eventChangeShadowMapMethod_Parms, InNewMethod), Z_Construct_UEnum_Engine_EShadowMapMethod, METADATA_PARAMS(0, nullptr) }; // 422023146
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULTFunctions_ChangeShadowMapMethod_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_ChangeShadowMapMethod_Statics::NewProp_InNewMethod,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_ChangeShadowMapMethod_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULTFunctions_ChangeShadowMapMethod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULTFunctions, nullptr, "ChangeShadowMapMethod", nullptr, nullptr, Z_Construct_UFunction_ULTFunctions_ChangeShadowMapMethod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_ChangeShadowMapMethod_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULTFunctions_ChangeShadowMapMethod_Statics::LTFunctions_eventChangeShadowMapMethod_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_ChangeShadowMapMethod_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULTFunctions_ChangeShadowMapMethod_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULTFunctions_ChangeShadowMapMethod_Statics::LTFunctions_eventChangeShadowMapMethod_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULTFunctions_ChangeShadowMapMethod()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULTFunctions_ChangeShadowMapMethod_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULTFunctions::execChangeShadowMapMethod)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_InNewMethod);
	P_FINISH;
	P_NATIVE_BEGIN;
	ULTFunctions::ChangeShadowMapMethod(EShadowMapMethod::Type(Z_Param_InNewMethod));
	P_NATIVE_END;
}
// End Class ULTFunctions Function ChangeShadowMapMethod

// Begin Class ULTFunctions Function ChangeSoftwareRayTracingMode
struct Z_Construct_UFunction_ULTFunctions_ChangeSoftwareRayTracingMode_Statics
{
	struct LTFunctions_eventChangeSoftwareRayTracingMode_Parms
	{
		TEnumAsByte<ELumenSoftwareTracingMode::Type> InNewMode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lighting Tool" },
		{ "ModuleRelativePath", "Public/Library/LTFunctions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InNewMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULTFunctions_ChangeSoftwareRayTracingMode_Statics::NewProp_InNewMode = { "InNewMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LTFunctions_eventChangeSoftwareRayTracingMode_Parms, InNewMode), Z_Construct_UEnum_Engine_ELumenSoftwareTracingMode, METADATA_PARAMS(0, nullptr) }; // 2919508242
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULTFunctions_ChangeSoftwareRayTracingMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_ChangeSoftwareRayTracingMode_Statics::NewProp_InNewMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_ChangeSoftwareRayTracingMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULTFunctions_ChangeSoftwareRayTracingMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULTFunctions, nullptr, "ChangeSoftwareRayTracingMode", nullptr, nullptr, Z_Construct_UFunction_ULTFunctions_ChangeSoftwareRayTracingMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_ChangeSoftwareRayTracingMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULTFunctions_ChangeSoftwareRayTracingMode_Statics::LTFunctions_eventChangeSoftwareRayTracingMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_ChangeSoftwareRayTracingMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULTFunctions_ChangeSoftwareRayTracingMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULTFunctions_ChangeSoftwareRayTracingMode_Statics::LTFunctions_eventChangeSoftwareRayTracingMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULTFunctions_ChangeSoftwareRayTracingMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULTFunctions_ChangeSoftwareRayTracingMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULTFunctions::execChangeSoftwareRayTracingMode)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_InNewMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	ULTFunctions::ChangeSoftwareRayTracingMode(ELumenSoftwareTracingMode::Type(Z_Param_InNewMode));
	P_NATIVE_END;
}
// End Class ULTFunctions Function ChangeSoftwareRayTracingMode

// Begin Class ULTFunctions Function ChangeUseHardwareRayTracingWhenAvailable
struct Z_Construct_UFunction_ULTFunctions_ChangeUseHardwareRayTracingWhenAvailable_Statics
{
	struct LTFunctions_eventChangeUseHardwareRayTracingWhenAvailable_Parms
	{
		bool InNewState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lighting Tool" },
		{ "ModuleRelativePath", "Public/Library/LTFunctions.h" },
	};
#endif // WITH_METADATA
	static void NewProp_InNewState_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InNewState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ULTFunctions_ChangeUseHardwareRayTracingWhenAvailable_Statics::NewProp_InNewState_SetBit(void* Obj)
{
	((LTFunctions_eventChangeUseHardwareRayTracingWhenAvailable_Parms*)Obj)->InNewState = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULTFunctions_ChangeUseHardwareRayTracingWhenAvailable_Statics::NewProp_InNewState = { "InNewState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LTFunctions_eventChangeUseHardwareRayTracingWhenAvailable_Parms), &Z_Construct_UFunction_ULTFunctions_ChangeUseHardwareRayTracingWhenAvailable_Statics::NewProp_InNewState_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULTFunctions_ChangeUseHardwareRayTracingWhenAvailable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_ChangeUseHardwareRayTracingWhenAvailable_Statics::NewProp_InNewState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_ChangeUseHardwareRayTracingWhenAvailable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULTFunctions_ChangeUseHardwareRayTracingWhenAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULTFunctions, nullptr, "ChangeUseHardwareRayTracingWhenAvailable", nullptr, nullptr, Z_Construct_UFunction_ULTFunctions_ChangeUseHardwareRayTracingWhenAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_ChangeUseHardwareRayTracingWhenAvailable_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULTFunctions_ChangeUseHardwareRayTracingWhenAvailable_Statics::LTFunctions_eventChangeUseHardwareRayTracingWhenAvailable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_ChangeUseHardwareRayTracingWhenAvailable_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULTFunctions_ChangeUseHardwareRayTracingWhenAvailable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULTFunctions_ChangeUseHardwareRayTracingWhenAvailable_Statics::LTFunctions_eventChangeUseHardwareRayTracingWhenAvailable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULTFunctions_ChangeUseHardwareRayTracingWhenAvailable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULTFunctions_ChangeUseHardwareRayTracingWhenAvailable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULTFunctions::execChangeUseHardwareRayTracingWhenAvailable)
{
	P_GET_UBOOL(Z_Param_InNewState);
	P_FINISH;
	P_NATIVE_BEGIN;
	ULTFunctions::ChangeUseHardwareRayTracingWhenAvailable(Z_Param_InNewState);
	P_NATIVE_END;
}
// End Class ULTFunctions Function ChangeUseHardwareRayTracingWhenAvailable

// Begin Class ULTFunctions Function ChangeViewMode
struct Z_Construct_UFunction_ULTFunctions_ChangeViewMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LightingTool|Lightmap" },
		{ "ModuleRelativePath", "Public/Library/LTFunctions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULTFunctions_ChangeViewMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULTFunctions, nullptr, "ChangeViewMode", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_ChangeViewMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULTFunctions_ChangeViewMode_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ULTFunctions_ChangeViewMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULTFunctions_ChangeViewMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULTFunctions::execChangeViewMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	ULTFunctions::ChangeViewMode();
	P_NATIVE_END;
}
// End Class ULTFunctions Function ChangeViewMode

// Begin Class ULTFunctions Function CopyLightComponentProperties
struct Z_Construct_UFunction_ULTFunctions_CopyLightComponentProperties_Statics
{
	struct LTFunctions_eventCopyLightComponentProperties_Parms
	{
		ULightComponent* Source;
		ULightComponent* Destination;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Light Functions" },
		{ "ModuleRelativePath", "Public/Library/LTFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Destination_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Source;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Destination;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULTFunctions_CopyLightComponentProperties_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LTFunctions_eventCopyLightComponentProperties_Parms, Source), Z_Construct_UClass_ULightComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_MetaData), NewProp_Source_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULTFunctions_CopyLightComponentProperties_Statics::NewProp_Destination = { "Destination", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LTFunctions_eventCopyLightComponentProperties_Parms, Destination), Z_Construct_UClass_ULightComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Destination_MetaData), NewProp_Destination_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULTFunctions_CopyLightComponentProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_CopyLightComponentProperties_Statics::NewProp_Source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_CopyLightComponentProperties_Statics::NewProp_Destination,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_CopyLightComponentProperties_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULTFunctions_CopyLightComponentProperties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULTFunctions, nullptr, "CopyLightComponentProperties", nullptr, nullptr, Z_Construct_UFunction_ULTFunctions_CopyLightComponentProperties_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_CopyLightComponentProperties_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULTFunctions_CopyLightComponentProperties_Statics::LTFunctions_eventCopyLightComponentProperties_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_CopyLightComponentProperties_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULTFunctions_CopyLightComponentProperties_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULTFunctions_CopyLightComponentProperties_Statics::LTFunctions_eventCopyLightComponentProperties_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULTFunctions_CopyLightComponentProperties()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULTFunctions_CopyLightComponentProperties_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULTFunctions::execCopyLightComponentProperties)
{
	P_GET_OBJECT(ULightComponent,Z_Param_Source);
	P_GET_OBJECT(ULightComponent,Z_Param_Destination);
	P_FINISH;
	P_NATIVE_BEGIN;
	ULTFunctions::CopyLightComponentProperties(Z_Param_Source,Z_Param_Destination);
	P_NATIVE_END;
}
// End Class ULTFunctions Function CopyLightComponentProperties

// Begin Class ULTFunctions Function CreateEasingFuncNameArray
struct Z_Construct_UFunction_ULTFunctions_CreateEasingFuncNameArray_Statics
{
	struct LTFunctions_eventCreateEasingFuncNameArray_Parms
	{
		TArray<FName> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LightingTool|Lightmap" },
		{ "ModuleRelativePath", "Public/Library/LTFunctions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULTFunctions_CreateEasingFuncNameArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULTFunctions_CreateEasingFuncNameArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LTFunctions_eventCreateEasingFuncNameArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULTFunctions_CreateEasingFuncNameArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_CreateEasingFuncNameArray_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_CreateEasingFuncNameArray_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_CreateEasingFuncNameArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULTFunctions_CreateEasingFuncNameArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULTFunctions, nullptr, "CreateEasingFuncNameArray", nullptr, nullptr, Z_Construct_UFunction_ULTFunctions_CreateEasingFuncNameArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_CreateEasingFuncNameArray_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULTFunctions_CreateEasingFuncNameArray_Statics::LTFunctions_eventCreateEasingFuncNameArray_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_CreateEasingFuncNameArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULTFunctions_CreateEasingFuncNameArray_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULTFunctions_CreateEasingFuncNameArray_Statics::LTFunctions_eventCreateEasingFuncNameArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULTFunctions_CreateEasingFuncNameArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULTFunctions_CreateEasingFuncNameArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULTFunctions::execCreateEasingFuncNameArray)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FName>*)Z_Param__Result=ULTFunctions::CreateEasingFuncNameArray();
	P_NATIVE_END;
}
// End Class ULTFunctions Function CreateEasingFuncNameArray

// Begin Class ULTFunctions Function DoesToolHDRIActorExist
struct Z_Construct_UFunction_ULTFunctions_DoesToolHDRIActorExist_Statics
{
	struct LTFunctions_eventDoesToolHDRIActorExist_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Editor Tools" },
		{ "ModuleRelativePath", "Public/Library/LTFunctions.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ULTFunctions_DoesToolHDRIActorExist_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LTFunctions_eventDoesToolHDRIActorExist_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULTFunctions_DoesToolHDRIActorExist_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LTFunctions_eventDoesToolHDRIActorExist_Parms), &Z_Construct_UFunction_ULTFunctions_DoesToolHDRIActorExist_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULTFunctions_DoesToolHDRIActorExist_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_DoesToolHDRIActorExist_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_DoesToolHDRIActorExist_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULTFunctions_DoesToolHDRIActorExist_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULTFunctions, nullptr, "DoesToolHDRIActorExist", nullptr, nullptr, Z_Construct_UFunction_ULTFunctions_DoesToolHDRIActorExist_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_DoesToolHDRIActorExist_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULTFunctions_DoesToolHDRIActorExist_Statics::LTFunctions_eventDoesToolHDRIActorExist_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_DoesToolHDRIActorExist_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULTFunctions_DoesToolHDRIActorExist_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULTFunctions_DoesToolHDRIActorExist_Statics::LTFunctions_eventDoesToolHDRIActorExist_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULTFunctions_DoesToolHDRIActorExist()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULTFunctions_DoesToolHDRIActorExist_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULTFunctions::execDoesToolHDRIActorExist)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=ULTFunctions::DoesToolHDRIActorExist();
	P_NATIVE_END;
}
// End Class ULTFunctions Function DoesToolHDRIActorExist

// Begin Class ULTFunctions Function EnablePathTracingProgress
struct Z_Construct_UFunction_ULTFunctions_EnablePathTracingProgress_Statics
{
	struct LTFunctions_eventEnablePathTracingProgress_Parms
	{
		bool InEnable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LightingTool|Lightmap" },
		{ "ModuleRelativePath", "Public/Library/LTFunctions.h" },
	};
#endif // WITH_METADATA
	static void NewProp_InEnable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InEnable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ULTFunctions_EnablePathTracingProgress_Statics::NewProp_InEnable_SetBit(void* Obj)
{
	((LTFunctions_eventEnablePathTracingProgress_Parms*)Obj)->InEnable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULTFunctions_EnablePathTracingProgress_Statics::NewProp_InEnable = { "InEnable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LTFunctions_eventEnablePathTracingProgress_Parms), &Z_Construct_UFunction_ULTFunctions_EnablePathTracingProgress_Statics::NewProp_InEnable_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULTFunctions_EnablePathTracingProgress_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_EnablePathTracingProgress_Statics::NewProp_InEnable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_EnablePathTracingProgress_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULTFunctions_EnablePathTracingProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULTFunctions, nullptr, "EnablePathTracingProgress", nullptr, nullptr, Z_Construct_UFunction_ULTFunctions_EnablePathTracingProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_EnablePathTracingProgress_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULTFunctions_EnablePathTracingProgress_Statics::LTFunctions_eventEnablePathTracingProgress_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_EnablePathTracingProgress_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULTFunctions_EnablePathTracingProgress_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULTFunctions_EnablePathTracingProgress_Statics::LTFunctions_eventEnablePathTracingProgress_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULTFunctions_EnablePathTracingProgress()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULTFunctions_EnablePathTracingProgress_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULTFunctions::execEnablePathTracingProgress)
{
	P_GET_UBOOL(Z_Param_InEnable);
	P_FINISH;
	P_NATIVE_BEGIN;
	ULTFunctions::EnablePathTracingProgress(Z_Param_InEnable);
	P_NATIVE_END;
}
// End Class ULTFunctions Function EnablePathTracingProgress

// Begin Class ULTFunctions Function FindAndGetHDRIFromList
struct Z_Construct_UFunction_ULTFunctions_FindAndGetHDRIFromList_Statics
{
	struct FTopLevelAssetPath
	{
		FName PackageName;
		FName AssetName;
	};

	struct LTFunctions_eventFindAndGetHDRIFromList_Parms
	{
		TArray<FAssetData> InHDRIs;
		FName InHDRIName;
		UTextureCube* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Editor Tools" },
		{ "ModuleRelativePath", "Public/Library/LTFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InHDRIs_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InHDRIName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InHDRIs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InHDRIs;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InHDRIName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULTFunctions_FindAndGetHDRIFromList_Statics::NewProp_InHDRIs_Inner = { "InHDRIs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULTFunctions_FindAndGetHDRIFromList_Statics::NewProp_InHDRIs = { "InHDRIs", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LTFunctions_eventFindAndGetHDRIFromList_Parms, InHDRIs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InHDRIs_MetaData), NewProp_InHDRIs_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULTFunctions_FindAndGetHDRIFromList_Statics::NewProp_InHDRIName = { "InHDRIName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LTFunctions_eventFindAndGetHDRIFromList_Parms, InHDRIName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InHDRIName_MetaData), NewProp_InHDRIName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULTFunctions_FindAndGetHDRIFromList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LTFunctions_eventFindAndGetHDRIFromList_Parms, ReturnValue), Z_Construct_UClass_UTextureCube_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULTFunctions_FindAndGetHDRIFromList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_FindAndGetHDRIFromList_Statics::NewProp_InHDRIs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_FindAndGetHDRIFromList_Statics::NewProp_InHDRIs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_FindAndGetHDRIFromList_Statics::NewProp_InHDRIName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_FindAndGetHDRIFromList_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_FindAndGetHDRIFromList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULTFunctions_FindAndGetHDRIFromList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULTFunctions, nullptr, "FindAndGetHDRIFromList", nullptr, nullptr, Z_Construct_UFunction_ULTFunctions_FindAndGetHDRIFromList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_FindAndGetHDRIFromList_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULTFunctions_FindAndGetHDRIFromList_Statics::LTFunctions_eventFindAndGetHDRIFromList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_FindAndGetHDRIFromList_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULTFunctions_FindAndGetHDRIFromList_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULTFunctions_FindAndGetHDRIFromList_Statics::LTFunctions_eventFindAndGetHDRIFromList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULTFunctions_FindAndGetHDRIFromList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULTFunctions_FindAndGetHDRIFromList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULTFunctions::execFindAndGetHDRIFromList)
{
	P_GET_TARRAY_REF(FAssetData,Z_Param_Out_InHDRIs);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InHDRIName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTextureCube**)Z_Param__Result=ULTFunctions::FindAndGetHDRIFromList(Z_Param_Out_InHDRIs,Z_Param_Out_InHDRIName);
	P_NATIVE_END;
}
// End Class ULTFunctions Function FindAndGetHDRIFromList

// Begin Class ULTFunctions Function FindAndGetIESTextureFromList
struct Z_Construct_UFunction_ULTFunctions_FindAndGetIESTextureFromList_Statics
{
	struct FTopLevelAssetPath
	{
		FName PackageName;
		FName AssetName;
	};

	struct LTFunctions_eventFindAndGetIESTextureFromList_Parms
	{
		TArray<FAssetData> InTextures;
		FName InTextureName;
		UTextureLightProfile* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Light Functions" },
		{ "ModuleRelativePath", "Public/Library/LTFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InTextures_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InTextureName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InTextures_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InTextures;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InTextureName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULTFunctions_FindAndGetIESTextureFromList_Statics::NewProp_InTextures_Inner = { "InTextures", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULTFunctions_FindAndGetIESTextureFromList_Statics::NewProp_InTextures = { "InTextures", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LTFunctions_eventFindAndGetIESTextureFromList_Parms, InTextures), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InTextures_MetaData), NewProp_InTextures_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULTFunctions_FindAndGetIESTextureFromList_Statics::NewProp_InTextureName = { "InTextureName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LTFunctions_eventFindAndGetIESTextureFromList_Parms, InTextureName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InTextureName_MetaData), NewProp_InTextureName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULTFunctions_FindAndGetIESTextureFromList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LTFunctions_eventFindAndGetIESTextureFromList_Parms, ReturnValue), Z_Construct_UClass_UTextureLightProfile_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULTFunctions_FindAndGetIESTextureFromList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_FindAndGetIESTextureFromList_Statics::NewProp_InTextures_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_FindAndGetIESTextureFromList_Statics::NewProp_InTextures,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_FindAndGetIESTextureFromList_Statics::NewProp_InTextureName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_FindAndGetIESTextureFromList_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_FindAndGetIESTextureFromList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULTFunctions_FindAndGetIESTextureFromList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULTFunctions, nullptr, "FindAndGetIESTextureFromList", nullptr, nullptr, Z_Construct_UFunction_ULTFunctions_FindAndGetIESTextureFromList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_FindAndGetIESTextureFromList_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULTFunctions_FindAndGetIESTextureFromList_Statics::LTFunctions_eventFindAndGetIESTextureFromList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_FindAndGetIESTextureFromList_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULTFunctions_FindAndGetIESTextureFromList_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULTFunctions_FindAndGetIESTextureFromList_Statics::LTFunctions_eventFindAndGetIESTextureFromList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULTFunctions_FindAndGetIESTextureFromList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULTFunctions_FindAndGetIESTextureFromList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULTFunctions::execFindAndGetIESTextureFromList)
{
	P_GET_TARRAY_REF(FAssetData,Z_Param_Out_InTextures);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InTextureName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTextureLightProfile**)Z_Param__Result=ULTFunctions::FindAndGetIESTextureFromList(Z_Param_Out_InTextures,Z_Param_Out_InTextureName);
	P_NATIVE_END;
}
// End Class ULTFunctions Function FindAndGetIESTextureFromList

// Begin Class ULTFunctions Function FindAndGetTextureFromList
struct Z_Construct_UFunction_ULTFunctions_FindAndGetTextureFromList_Statics
{
	struct FTopLevelAssetPath
	{
		FName PackageName;
		FName AssetName;
	};

	struct LTFunctions_eventFindAndGetTextureFromList_Parms
	{
		TArray<FAssetData> InTextures;
		FName InTextureName;
		UTexture2D* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Light Functions" },
		{ "ModuleRelativePath", "Public/Library/LTFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InTextures_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InTextureName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InTextures_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InTextures;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InTextureName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULTFunctions_FindAndGetTextureFromList_Statics::NewProp_InTextures_Inner = { "InTextures", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULTFunctions_FindAndGetTextureFromList_Statics::NewProp_InTextures = { "InTextures", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LTFunctions_eventFindAndGetTextureFromList_Parms, InTextures), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InTextures_MetaData), NewProp_InTextures_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULTFunctions_FindAndGetTextureFromList_Statics::NewProp_InTextureName = { "InTextureName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LTFunctions_eventFindAndGetTextureFromList_Parms, InTextureName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InTextureName_MetaData), NewProp_InTextureName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULTFunctions_FindAndGetTextureFromList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LTFunctions_eventFindAndGetTextureFromList_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULTFunctions_FindAndGetTextureFromList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_FindAndGetTextureFromList_Statics::NewProp_InTextures_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_FindAndGetTextureFromList_Statics::NewProp_InTextures,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_FindAndGetTextureFromList_Statics::NewProp_InTextureName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_FindAndGetTextureFromList_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_FindAndGetTextureFromList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULTFunctions_FindAndGetTextureFromList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULTFunctions, nullptr, "FindAndGetTextureFromList", nullptr, nullptr, Z_Construct_UFunction_ULTFunctions_FindAndGetTextureFromList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_FindAndGetTextureFromList_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULTFunctions_FindAndGetTextureFromList_Statics::LTFunctions_eventFindAndGetTextureFromList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_FindAndGetTextureFromList_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULTFunctions_FindAndGetTextureFromList_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULTFunctions_FindAndGetTextureFromList_Statics::LTFunctions_eventFindAndGetTextureFromList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULTFunctions_FindAndGetTextureFromList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULTFunctions_FindAndGetTextureFromList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULTFunctions::execFindAndGetTextureFromList)
{
	P_GET_TARRAY_REF(FAssetData,Z_Param_Out_InTextures);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InTextureName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTexture2D**)Z_Param__Result=ULTFunctions::FindAndGetTextureFromList(Z_Param_Out_InTextures,Z_Param_Out_InTextureName);
	P_NATIVE_END;
}
// End Class ULTFunctions Function FindAndGetTextureFromList

// Begin Class ULTFunctions Function GenerateThumbnailForAsset
struct Z_Construct_UFunction_ULTFunctions_GenerateThumbnailForAsset_Statics
{
	struct FTopLevelAssetPath
	{
		FName PackageName;
		FName AssetName;
	};

	struct LTFunctions_eventGenerateThumbnailForAsset_Parms
	{
		FAssetData InAssetPath;
		UTexture2D* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LightingTool|Lightmap" },
		{ "ModuleRelativePath", "Public/Library/LTFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAssetPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InAssetPath;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULTFunctions_GenerateThumbnailForAsset_Statics::NewProp_InAssetPath = { "InAssetPath", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LTFunctions_eventGenerateThumbnailForAsset_Parms, InAssetPath), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAssetPath_MetaData), NewProp_InAssetPath_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULTFunctions_GenerateThumbnailForAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LTFunctions_eventGenerateThumbnailForAsset_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULTFunctions_GenerateThumbnailForAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_GenerateThumbnailForAsset_Statics::NewProp_InAssetPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_GenerateThumbnailForAsset_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_GenerateThumbnailForAsset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULTFunctions_GenerateThumbnailForAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULTFunctions, nullptr, "GenerateThumbnailForAsset", nullptr, nullptr, Z_Construct_UFunction_ULTFunctions_GenerateThumbnailForAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_GenerateThumbnailForAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULTFunctions_GenerateThumbnailForAsset_Statics::LTFunctions_eventGenerateThumbnailForAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_GenerateThumbnailForAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULTFunctions_GenerateThumbnailForAsset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULTFunctions_GenerateThumbnailForAsset_Statics::LTFunctions_eventGenerateThumbnailForAsset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULTFunctions_GenerateThumbnailForAsset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULTFunctions_GenerateThumbnailForAsset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULTFunctions::execGenerateThumbnailForAsset)
{
	P_GET_STRUCT_REF(FAssetData,Z_Param_Out_InAssetPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTexture2D**)Z_Param__Result=ULTFunctions::GenerateThumbnailForAsset(Z_Param_Out_InAssetPath);
	P_NATIVE_END;
}
// End Class ULTFunctions Function GenerateThumbnailForAsset

// Begin Class ULTFunctions Function GetAllHDRIsInPath
struct Z_Construct_UFunction_ULTFunctions_GetAllHDRIsInPath_Statics
{
	struct FTopLevelAssetPath
	{
		FName PackageName;
		FName AssetName;
	};

	struct LTFunctions_eventGetAllHDRIsInPath_Parms
	{
		FString InPath;
		bool bInRecursivePaths;
		TArray<FAssetData> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Editor Tools" },
		{ "ModuleRelativePath", "Public/Library/LTFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InPath;
	static void NewProp_bInRecursivePaths_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInRecursivePaths;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULTFunctions_GetAllHDRIsInPath_Statics::NewProp_InPath = { "InPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LTFunctions_eventGetAllHDRIsInPath_Parms, InPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPath_MetaData), NewProp_InPath_MetaData) };
void Z_Construct_UFunction_ULTFunctions_GetAllHDRIsInPath_Statics::NewProp_bInRecursivePaths_SetBit(void* Obj)
{
	((LTFunctions_eventGetAllHDRIsInPath_Parms*)Obj)->bInRecursivePaths = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULTFunctions_GetAllHDRIsInPath_Statics::NewProp_bInRecursivePaths = { "bInRecursivePaths", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LTFunctions_eventGetAllHDRIsInPath_Parms), &Z_Construct_UFunction_ULTFunctions_GetAllHDRIsInPath_Statics::NewProp_bInRecursivePaths_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULTFunctions_GetAllHDRIsInPath_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULTFunctions_GetAllHDRIsInPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LTFunctions_eventGetAllHDRIsInPath_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULTFunctions_GetAllHDRIsInPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_GetAllHDRIsInPath_Statics::NewProp_InPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_GetAllHDRIsInPath_Statics::NewProp_bInRecursivePaths,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_GetAllHDRIsInPath_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_GetAllHDRIsInPath_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_GetAllHDRIsInPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULTFunctions_GetAllHDRIsInPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULTFunctions, nullptr, "GetAllHDRIsInPath", nullptr, nullptr, Z_Construct_UFunction_ULTFunctions_GetAllHDRIsInPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_GetAllHDRIsInPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULTFunctions_GetAllHDRIsInPath_Statics::LTFunctions_eventGetAllHDRIsInPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_GetAllHDRIsInPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULTFunctions_GetAllHDRIsInPath_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULTFunctions_GetAllHDRIsInPath_Statics::LTFunctions_eventGetAllHDRIsInPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULTFunctions_GetAllHDRIsInPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULTFunctions_GetAllHDRIsInPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULTFunctions::execGetAllHDRIsInPath)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InPath);
	P_GET_UBOOL(Z_Param_bInRecursivePaths);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FAssetData>*)Z_Param__Result=ULTFunctions::GetAllHDRIsInPath(Z_Param_InPath,Z_Param_bInRecursivePaths);
	P_NATIVE_END;
}
// End Class ULTFunctions Function GetAllHDRIsInPath

// Begin Class ULTFunctions Function GetAllIESTexturesInPath
struct Z_Construct_UFunction_ULTFunctions_GetAllIESTexturesInPath_Statics
{
	struct FTopLevelAssetPath
	{
		FName PackageName;
		FName AssetName;
	};

	struct LTFunctions_eventGetAllIESTexturesInPath_Parms
	{
		FString InPath;
		FString InUserPath;
		TArray<FAssetData> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Light Functions" },
		{ "ModuleRelativePath", "Public/Library/LTFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPath_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InUserPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InUserPath;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULTFunctions_GetAllIESTexturesInPath_Statics::NewProp_InPath = { "InPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LTFunctions_eventGetAllIESTexturesInPath_Parms, InPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPath_MetaData), NewProp_InPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULTFunctions_GetAllIESTexturesInPath_Statics::NewProp_InUserPath = { "InUserPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LTFunctions_eventGetAllIESTexturesInPath_Parms, InUserPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InUserPath_MetaData), NewProp_InUserPath_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULTFunctions_GetAllIESTexturesInPath_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULTFunctions_GetAllIESTexturesInPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LTFunctions_eventGetAllIESTexturesInPath_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULTFunctions_GetAllIESTexturesInPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_GetAllIESTexturesInPath_Statics::NewProp_InPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_GetAllIESTexturesInPath_Statics::NewProp_InUserPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_GetAllIESTexturesInPath_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_GetAllIESTexturesInPath_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_GetAllIESTexturesInPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULTFunctions_GetAllIESTexturesInPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULTFunctions, nullptr, "GetAllIESTexturesInPath", nullptr, nullptr, Z_Construct_UFunction_ULTFunctions_GetAllIESTexturesInPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_GetAllIESTexturesInPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULTFunctions_GetAllIESTexturesInPath_Statics::LTFunctions_eventGetAllIESTexturesInPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_GetAllIESTexturesInPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULTFunctions_GetAllIESTexturesInPath_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULTFunctions_GetAllIESTexturesInPath_Statics::LTFunctions_eventGetAllIESTexturesInPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULTFunctions_GetAllIESTexturesInPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULTFunctions_GetAllIESTexturesInPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULTFunctions::execGetAllIESTexturesInPath)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InPath);
	P_GET_PROPERTY(FStrProperty,Z_Param_InUserPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FAssetData>*)Z_Param__Result=ULTFunctions::GetAllIESTexturesInPath(Z_Param_InPath,Z_Param_InUserPath);
	P_NATIVE_END;
}
// End Class ULTFunctions Function GetAllIESTexturesInPath

// Begin Class ULTFunctions Function GetAllTexturesInPath
struct Z_Construct_UFunction_ULTFunctions_GetAllTexturesInPath_Statics
{
	struct FTopLevelAssetPath
	{
		FName PackageName;
		FName AssetName;
	};

	struct LTFunctions_eventGetAllTexturesInPath_Parms
	{
		FString InPath;
		FString InUserPath;
		TArray<FAssetData> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Light Functions" },
		{ "ModuleRelativePath", "Public/Library/LTFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPath_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InUserPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InUserPath;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULTFunctions_GetAllTexturesInPath_Statics::NewProp_InPath = { "InPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LTFunctions_eventGetAllTexturesInPath_Parms, InPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPath_MetaData), NewProp_InPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULTFunctions_GetAllTexturesInPath_Statics::NewProp_InUserPath = { "InUserPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LTFunctions_eventGetAllTexturesInPath_Parms, InUserPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InUserPath_MetaData), NewProp_InUserPath_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULTFunctions_GetAllTexturesInPath_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULTFunctions_GetAllTexturesInPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LTFunctions_eventGetAllTexturesInPath_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULTFunctions_GetAllTexturesInPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_GetAllTexturesInPath_Statics::NewProp_InPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_GetAllTexturesInPath_Statics::NewProp_InUserPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_GetAllTexturesInPath_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_GetAllTexturesInPath_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_GetAllTexturesInPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULTFunctions_GetAllTexturesInPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULTFunctions, nullptr, "GetAllTexturesInPath", nullptr, nullptr, Z_Construct_UFunction_ULTFunctions_GetAllTexturesInPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_GetAllTexturesInPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULTFunctions_GetAllTexturesInPath_Statics::LTFunctions_eventGetAllTexturesInPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_GetAllTexturesInPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULTFunctions_GetAllTexturesInPath_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULTFunctions_GetAllTexturesInPath_Statics::LTFunctions_eventGetAllTexturesInPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULTFunctions_GetAllTexturesInPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULTFunctions_GetAllTexturesInPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULTFunctions::execGetAllTexturesInPath)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InPath);
	P_GET_PROPERTY(FStrProperty,Z_Param_InUserPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FAssetData>*)Z_Param__Result=ULTFunctions::GetAllTexturesInPath(Z_Param_InPath,Z_Param_InUserPath);
	P_NATIVE_END;
}
// End Class ULTFunctions Function GetAllTexturesInPath

// Begin Class ULTFunctions Function GetColorOfTheDensity
struct Z_Construct_UFunction_ULTFunctions_GetColorOfTheDensity_Statics
{
	struct LTFunctions_eventGetColorOfTheDensity_Parms
	{
		float InDensity;
		FLinearColor ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LightingTool|Lightmap" },
		{ "ModuleRelativePath", "Public/Library/LTFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InDensity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InDensity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULTFunctions_GetColorOfTheDensity_Statics::NewProp_InDensity = { "InDensity", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LTFunctions_eventGetColorOfTheDensity_Parms, InDensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InDensity_MetaData), NewProp_InDensity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULTFunctions_GetColorOfTheDensity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LTFunctions_eventGetColorOfTheDensity_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULTFunctions_GetColorOfTheDensity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_GetColorOfTheDensity_Statics::NewProp_InDensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_GetColorOfTheDensity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_GetColorOfTheDensity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULTFunctions_GetColorOfTheDensity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULTFunctions, nullptr, "GetColorOfTheDensity", nullptr, nullptr, Z_Construct_UFunction_ULTFunctions_GetColorOfTheDensity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_GetColorOfTheDensity_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULTFunctions_GetColorOfTheDensity_Statics::LTFunctions_eventGetColorOfTheDensity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_GetColorOfTheDensity_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULTFunctions_GetColorOfTheDensity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULTFunctions_GetColorOfTheDensity_Statics::LTFunctions_eventGetColorOfTheDensity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULTFunctions_GetColorOfTheDensity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULTFunctions_GetColorOfTheDensity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULTFunctions::execGetColorOfTheDensity)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_InDensity);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FLinearColor*)Z_Param__Result=ULTFunctions::GetColorOfTheDensity(Z_Param_Out_InDensity);
	P_NATIVE_END;
}
// End Class ULTFunctions Function GetColorOfTheDensity

// Begin Class ULTFunctions Function GetDefaultRHI
struct Z_Construct_UFunction_ULTFunctions_GetDefaultRHI_Statics
{
	struct LTFunctions_eventGetDefaultRHI_Parms
	{
		EDefaultGraphicsRHI ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lighting Tool" },
		{ "Comment", "/** Getters **/" },
		{ "ModuleRelativePath", "Public/Library/LTFunctions.h" },
		{ "ToolTip", "Getters *" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULTFunctions_GetDefaultRHI_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULTFunctions_GetDefaultRHI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LTFunctions_eventGetDefaultRHI_Parms, ReturnValue), Z_Construct_UEnum_WindowsTargetPlatform_EDefaultGraphicsRHI, METADATA_PARAMS(0, nullptr) }; // 420144750
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULTFunctions_GetDefaultRHI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_GetDefaultRHI_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_GetDefaultRHI_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_GetDefaultRHI_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULTFunctions_GetDefaultRHI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULTFunctions, nullptr, "GetDefaultRHI", nullptr, nullptr, Z_Construct_UFunction_ULTFunctions_GetDefaultRHI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_GetDefaultRHI_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULTFunctions_GetDefaultRHI_Statics::LTFunctions_eventGetDefaultRHI_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_GetDefaultRHI_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULTFunctions_GetDefaultRHI_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULTFunctions_GetDefaultRHI_Statics::LTFunctions_eventGetDefaultRHI_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULTFunctions_GetDefaultRHI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULTFunctions_GetDefaultRHI_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULTFunctions::execGetDefaultRHI)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EDefaultGraphicsRHI*)Z_Param__Result=ULTFunctions::GetDefaultRHI();
	P_NATIVE_END;
}
// End Class ULTFunctions Function GetDefaultRHI

// Begin Class ULTFunctions Function GetDynamicGlobalIlluminationMethod
struct Z_Construct_UFunction_ULTFunctions_GetDynamicGlobalIlluminationMethod_Statics
{
	struct LTFunctions_eventGetDynamicGlobalIlluminationMethod_Parms
	{
		TEnumAsByte<EDynamicGlobalIlluminationMethod::Type> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lighting Tool" },
		{ "ModuleRelativePath", "Public/Library/LTFunctions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULTFunctions_GetDynamicGlobalIlluminationMethod_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LTFunctions_eventGetDynamicGlobalIlluminationMethod_Parms, ReturnValue), Z_Construct_UEnum_Engine_EDynamicGlobalIlluminationMethod, METADATA_PARAMS(0, nullptr) }; // 2546568098
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULTFunctions_GetDynamicGlobalIlluminationMethod_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_GetDynamicGlobalIlluminationMethod_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_GetDynamicGlobalIlluminationMethod_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULTFunctions_GetDynamicGlobalIlluminationMethod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULTFunctions, nullptr, "GetDynamicGlobalIlluminationMethod", nullptr, nullptr, Z_Construct_UFunction_ULTFunctions_GetDynamicGlobalIlluminationMethod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_GetDynamicGlobalIlluminationMethod_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULTFunctions_GetDynamicGlobalIlluminationMethod_Statics::LTFunctions_eventGetDynamicGlobalIlluminationMethod_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_GetDynamicGlobalIlluminationMethod_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULTFunctions_GetDynamicGlobalIlluminationMethod_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULTFunctions_GetDynamicGlobalIlluminationMethod_Statics::LTFunctions_eventGetDynamicGlobalIlluminationMethod_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULTFunctions_GetDynamicGlobalIlluminationMethod()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULTFunctions_GetDynamicGlobalIlluminationMethod_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULTFunctions::execGetDynamicGlobalIlluminationMethod)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EDynamicGlobalIlluminationMethod::Type>*)Z_Param__Result=ULTFunctions::GetDynamicGlobalIlluminationMethod();
	P_NATIVE_END;
}
// End Class ULTFunctions Function GetDynamicGlobalIlluminationMethod

// Begin Class ULTFunctions Function GetEasingFuncValueFromIndex
struct Z_Construct_UFunction_ULTFunctions_GetEasingFuncValueFromIndex_Statics
{
	struct LTFunctions_eventGetEasingFuncValueFromIndex_Parms
	{
		int32 Index;
		TEnumAsByte<EEasingFunc::Type> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LightingTool|Lightmap" },
		{ "ModuleRelativePath", "Public/Library/LTFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULTFunctions_GetEasingFuncValueFromIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LTFunctions_eventGetEasingFuncValueFromIndex_Parms, Index), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Index_MetaData), NewProp_Index_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULTFunctions_GetEasingFuncValueFromIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LTFunctions_eventGetEasingFuncValueFromIndex_Parms, ReturnValue), Z_Construct_UEnum_Engine_EEasingFunc, METADATA_PARAMS(0, nullptr) }; // 1955521276
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULTFunctions_GetEasingFuncValueFromIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_GetEasingFuncValueFromIndex_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_GetEasingFuncValueFromIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_GetEasingFuncValueFromIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULTFunctions_GetEasingFuncValueFromIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULTFunctions, nullptr, "GetEasingFuncValueFromIndex", nullptr, nullptr, Z_Construct_UFunction_ULTFunctions_GetEasingFuncValueFromIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_GetEasingFuncValueFromIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULTFunctions_GetEasingFuncValueFromIndex_Statics::LTFunctions_eventGetEasingFuncValueFromIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_GetEasingFuncValueFromIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULTFunctions_GetEasingFuncValueFromIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULTFunctions_GetEasingFuncValueFromIndex_Statics::LTFunctions_eventGetEasingFuncValueFromIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULTFunctions_GetEasingFuncValueFromIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULTFunctions_GetEasingFuncValueFromIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULTFunctions::execGetEasingFuncValueFromIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEasingFunc::Type>*)Z_Param__Result=ULTFunctions::GetEasingFuncValueFromIndex(Z_Param_Index);
	P_NATIVE_END;
}
// End Class ULTFunctions Function GetEasingFuncValueFromIndex

// Begin Class ULTFunctions Function GetEasingFuncValueFromName
struct Z_Construct_UFunction_ULTFunctions_GetEasingFuncValueFromName_Statics
{
	struct LTFunctions_eventGetEasingFuncValueFromName_Parms
	{
		FName Name;
		TEnumAsByte<EEasingFunc::Type> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LightingTool|Lightmap" },
		{ "ModuleRelativePath", "Public/Library/LTFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULTFunctions_GetEasingFuncValueFromName_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LTFunctions_eventGetEasingFuncValueFromName_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULTFunctions_GetEasingFuncValueFromName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LTFunctions_eventGetEasingFuncValueFromName_Parms, ReturnValue), Z_Construct_UEnum_Engine_EEasingFunc, METADATA_PARAMS(0, nullptr) }; // 1955521276
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULTFunctions_GetEasingFuncValueFromName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_GetEasingFuncValueFromName_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_GetEasingFuncValueFromName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_GetEasingFuncValueFromName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULTFunctions_GetEasingFuncValueFromName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULTFunctions, nullptr, "GetEasingFuncValueFromName", nullptr, nullptr, Z_Construct_UFunction_ULTFunctions_GetEasingFuncValueFromName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_GetEasingFuncValueFromName_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULTFunctions_GetEasingFuncValueFromName_Statics::LTFunctions_eventGetEasingFuncValueFromName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_GetEasingFuncValueFromName_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULTFunctions_GetEasingFuncValueFromName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULTFunctions_GetEasingFuncValueFromName_Statics::LTFunctions_eventGetEasingFuncValueFromName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULTFunctions_GetEasingFuncValueFromName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULTFunctions_GetEasingFuncValueFromName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULTFunctions::execGetEasingFuncValueFromName)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EEasingFunc::Type>*)Z_Param__Result=ULTFunctions::GetEasingFuncValueFromName(Z_Param_Out_Name);
	P_NATIVE_END;
}
// End Class ULTFunctions Function GetEasingFuncValueFromName

// Begin Class ULTFunctions Function GetEditorWorld
struct Z_Construct_UFunction_ULTFunctions_GetEditorWorld_Statics
{
	struct LTFunctions_eventGetEditorWorld_Parms
	{
		UWorld* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Editor Tools" },
		{ "ModuleRelativePath", "Public/Library/LTFunctions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULTFunctions_GetEditorWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LTFunctions_eventGetEditorWorld_Parms, ReturnValue), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULTFunctions_GetEditorWorld_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_GetEditorWorld_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_GetEditorWorld_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULTFunctions_GetEditorWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULTFunctions, nullptr, "GetEditorWorld", nullptr, nullptr, Z_Construct_UFunction_ULTFunctions_GetEditorWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_GetEditorWorld_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULTFunctions_GetEditorWorld_Statics::LTFunctions_eventGetEditorWorld_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_GetEditorWorld_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULTFunctions_GetEditorWorld_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULTFunctions_GetEditorWorld_Statics::LTFunctions_eventGetEditorWorld_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULTFunctions_GetEditorWorld()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULTFunctions_GetEditorWorld_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULTFunctions::execGetEditorWorld)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UWorld**)Z_Param__Result=ULTFunctions::GetEditorWorld();
	P_NATIVE_END;
}
// End Class ULTFunctions Function GetEditorWorld

// Begin Class ULTFunctions Function GetEnablePathTracing
struct Z_Construct_UFunction_ULTFunctions_GetEnablePathTracing_Statics
{
	struct LTFunctions_eventGetEnablePathTracing_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lighting Tool" },
		{ "ModuleRelativePath", "Public/Library/LTFunctions.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ULTFunctions_GetEnablePathTracing_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LTFunctions_eventGetEnablePathTracing_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULTFunctions_GetEnablePathTracing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LTFunctions_eventGetEnablePathTracing_Parms), &Z_Construct_UFunction_ULTFunctions_GetEnablePathTracing_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULTFunctions_GetEnablePathTracing_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_GetEnablePathTracing_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_GetEnablePathTracing_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULTFunctions_GetEnablePathTracing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULTFunctions, nullptr, "GetEnablePathTracing", nullptr, nullptr, Z_Construct_UFunction_ULTFunctions_GetEnablePathTracing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_GetEnablePathTracing_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULTFunctions_GetEnablePathTracing_Statics::LTFunctions_eventGetEnablePathTracing_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_GetEnablePathTracing_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULTFunctions_GetEnablePathTracing_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULTFunctions_GetEnablePathTracing_Statics::LTFunctions_eventGetEnablePathTracing_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULTFunctions_GetEnablePathTracing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULTFunctions_GetEnablePathTracing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULTFunctions::execGetEnablePathTracing)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=ULTFunctions::GetEnablePathTracing();
	P_NATIVE_END;
}
// End Class ULTFunctions Function GetEnablePathTracing

// Begin Class ULTFunctions Function GetEnableRayTracing
struct Z_Construct_UFunction_ULTFunctions_GetEnableRayTracing_Statics
{
	struct LTFunctions_eventGetEnableRayTracing_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lighting Tool" },
		{ "ModuleRelativePath", "Public/Library/LTFunctions.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ULTFunctions_GetEnableRayTracing_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LTFunctions_eventGetEnableRayTracing_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULTFunctions_GetEnableRayTracing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LTFunctions_eventGetEnableRayTracing_Parms), &Z_Construct_UFunction_ULTFunctions_GetEnableRayTracing_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULTFunctions_GetEnableRayTracing_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_GetEnableRayTracing_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_GetEnableRayTracing_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULTFunctions_GetEnableRayTracing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULTFunctions, nullptr, "GetEnableRayTracing", nullptr, nullptr, Z_Construct_UFunction_ULTFunctions_GetEnableRayTracing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_GetEnableRayTracing_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULTFunctions_GetEnableRayTracing_Statics::LTFunctions_eventGetEnableRayTracing_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_GetEnableRayTracing_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULTFunctions_GetEnableRayTracing_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULTFunctions_GetEnableRayTracing_Statics::LTFunctions_eventGetEnableRayTracing_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULTFunctions_GetEnableRayTracing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULTFunctions_GetEnableRayTracing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULTFunctions::execGetEnableRayTracing)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=ULTFunctions::GetEnableRayTracing();
	P_NATIVE_END;
}
// End Class ULTFunctions Function GetEnableRayTracing

// Begin Class ULTFunctions Function GetGenerateMeshDistanceField
struct Z_Construct_UFunction_ULTFunctions_GetGenerateMeshDistanceField_Statics
{
	struct LTFunctions_eventGetGenerateMeshDistanceField_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lighting Tool" },
		{ "ModuleRelativePath", "Public/Library/LTFunctions.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ULTFunctions_GetGenerateMeshDistanceField_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LTFunctions_eventGetGenerateMeshDistanceField_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULTFunctions_GetGenerateMeshDistanceField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LTFunctions_eventGetGenerateMeshDistanceField_Parms), &Z_Construct_UFunction_ULTFunctions_GetGenerateMeshDistanceField_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULTFunctions_GetGenerateMeshDistanceField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_GetGenerateMeshDistanceField_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_GetGenerateMeshDistanceField_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULTFunctions_GetGenerateMeshDistanceField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULTFunctions, nullptr, "GetGenerateMeshDistanceField", nullptr, nullptr, Z_Construct_UFunction_ULTFunctions_GetGenerateMeshDistanceField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_GetGenerateMeshDistanceField_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULTFunctions_GetGenerateMeshDistanceField_Statics::LTFunctions_eventGetGenerateMeshDistanceField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_GetGenerateMeshDistanceField_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULTFunctions_GetGenerateMeshDistanceField_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULTFunctions_GetGenerateMeshDistanceField_Statics::LTFunctions_eventGetGenerateMeshDistanceField_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULTFunctions_GetGenerateMeshDistanceField()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULTFunctions_GetGenerateMeshDistanceField_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULTFunctions::execGetGenerateMeshDistanceField)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=ULTFunctions::GetGenerateMeshDistanceField();
	P_NATIVE_END;
}
// End Class ULTFunctions Function GetGenerateMeshDistanceField

// Begin Class ULTFunctions Function GetHDRINames
struct Z_Construct_UFunction_ULTFunctions_GetHDRINames_Statics
{
	struct FTopLevelAssetPath
	{
		FName PackageName;
		FName AssetName;
	};

	struct LTFunctions_eventGetHDRINames_Parms
	{
		TArray<FAssetData> InTextures;
		TArray<FName> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Editor Tools" },
		{ "ModuleRelativePath", "Public/Library/LTFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InTextures_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InTextures_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InTextures;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULTFunctions_GetHDRINames_Statics::NewProp_InTextures_Inner = { "InTextures", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULTFunctions_GetHDRINames_Statics::NewProp_InTextures = { "InTextures", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LTFunctions_eventGetHDRINames_Parms, InTextures), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InTextures_MetaData), NewProp_InTextures_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULTFunctions_GetHDRINames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULTFunctions_GetHDRINames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LTFunctions_eventGetHDRINames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULTFunctions_GetHDRINames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_GetHDRINames_Statics::NewProp_InTextures_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_GetHDRINames_Statics::NewProp_InTextures,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_GetHDRINames_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_GetHDRINames_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_GetHDRINames_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULTFunctions_GetHDRINames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULTFunctions, nullptr, "GetHDRINames", nullptr, nullptr, Z_Construct_UFunction_ULTFunctions_GetHDRINames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_GetHDRINames_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULTFunctions_GetHDRINames_Statics::LTFunctions_eventGetHDRINames_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_GetHDRINames_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULTFunctions_GetHDRINames_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULTFunctions_GetHDRINames_Statics::LTFunctions_eventGetHDRINames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULTFunctions_GetHDRINames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULTFunctions_GetHDRINames_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULTFunctions::execGetHDRINames)
{
	P_GET_TARRAY_REF(FAssetData,Z_Param_Out_InTextures);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FName>*)Z_Param__Result=ULTFunctions::GetHDRINames(Z_Param_Out_InTextures);
	P_NATIVE_END;
}
// End Class ULTFunctions Function GetHDRINames

// Begin Class ULTFunctions Function GetHDRIVolumeInTheLevel
struct Z_Construct_UFunction_ULTFunctions_GetHDRIVolumeInTheLevel_Statics
{
	struct LTFunctions_eventGetHDRIVolumeInTheLevel_Parms
	{
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LightingTool|Lightmap" },
		{ "ModuleRelativePath", "Public/Library/LTFunctions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULTFunctions_GetHDRIVolumeInTheLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LTFunctions_eventGetHDRIVolumeInTheLevel_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULTFunctions_GetHDRIVolumeInTheLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_GetHDRIVolumeInTheLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_GetHDRIVolumeInTheLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULTFunctions_GetHDRIVolumeInTheLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULTFunctions, nullptr, "GetHDRIVolumeInTheLevel", nullptr, nullptr, Z_Construct_UFunction_ULTFunctions_GetHDRIVolumeInTheLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_GetHDRIVolumeInTheLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULTFunctions_GetHDRIVolumeInTheLevel_Statics::LTFunctions_eventGetHDRIVolumeInTheLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_GetHDRIVolumeInTheLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULTFunctions_GetHDRIVolumeInTheLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULTFunctions_GetHDRIVolumeInTheLevel_Statics::LTFunctions_eventGetHDRIVolumeInTheLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULTFunctions_GetHDRIVolumeInTheLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULTFunctions_GetHDRIVolumeInTheLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULTFunctions::execGetHDRIVolumeInTheLevel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=ULTFunctions::GetHDRIVolumeInTheLevel();
	P_NATIVE_END;
}
// End Class ULTFunctions Function GetHDRIVolumeInTheLevel

// Begin Class ULTFunctions Function GetIdealLightmapDensity
struct Z_Construct_UFunction_ULTFunctions_GetIdealLightmapDensity_Statics
{
	struct LTFunctions_eventGetIdealLightmapDensity_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LightingTool|Lightmap" },
		{ "ModuleRelativePath", "Public/Library/LTFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULTFunctions_GetIdealLightmapDensity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LTFunctions_eventGetIdealLightmapDensity_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULTFunctions_GetIdealLightmapDensity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_GetIdealLightmapDensity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_GetIdealLightmapDensity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULTFunctions_GetIdealLightmapDensity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULTFunctions, nullptr, "GetIdealLightmapDensity", nullptr, nullptr, Z_Construct_UFunction_ULTFunctions_GetIdealLightmapDensity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_GetIdealLightmapDensity_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULTFunctions_GetIdealLightmapDensity_Statics::LTFunctions_eventGetIdealLightmapDensity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_GetIdealLightmapDensity_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULTFunctions_GetIdealLightmapDensity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULTFunctions_GetIdealLightmapDensity_Statics::LTFunctions_eventGetIdealLightmapDensity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULTFunctions_GetIdealLightmapDensity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULTFunctions_GetIdealLightmapDensity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULTFunctions::execGetIdealLightmapDensity)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=ULTFunctions::GetIdealLightmapDensity();
	P_NATIVE_END;
}
// End Class ULTFunctions Function GetIdealLightmapDensity

// Begin Class ULTFunctions Function GetLightmapCoordinateIndex
struct Z_Construct_UFunction_ULTFunctions_GetLightmapCoordinateIndex_Statics
{
	struct LTFunctions_eventGetLightmapCoordinateIndex_Parms
	{
		FName InObjectPath;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LightingTool|Lightmap" },
		{ "ModuleRelativePath", "Public/Library/LTFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InObjectPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InObjectPath;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULTFunctions_GetLightmapCoordinateIndex_Statics::NewProp_InObjectPath = { "InObjectPath", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LTFunctions_eventGetLightmapCoordinateIndex_Parms, InObjectPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InObjectPath_MetaData), NewProp_InObjectPath_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULTFunctions_GetLightmapCoordinateIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LTFunctions_eventGetLightmapCoordinateIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULTFunctions_GetLightmapCoordinateIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_GetLightmapCoordinateIndex_Statics::NewProp_InObjectPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_GetLightmapCoordinateIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_GetLightmapCoordinateIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULTFunctions_GetLightmapCoordinateIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULTFunctions, nullptr, "GetLightmapCoordinateIndex", nullptr, nullptr, Z_Construct_UFunction_ULTFunctions_GetLightmapCoordinateIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_GetLightmapCoordinateIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULTFunctions_GetLightmapCoordinateIndex_Statics::LTFunctions_eventGetLightmapCoordinateIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_GetLightmapCoordinateIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULTFunctions_GetLightmapCoordinateIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULTFunctions_GetLightmapCoordinateIndex_Statics::LTFunctions_eventGetLightmapCoordinateIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULTFunctions_GetLightmapCoordinateIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULTFunctions_GetLightmapCoordinateIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULTFunctions::execGetLightmapCoordinateIndex)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InObjectPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=ULTFunctions::GetLightmapCoordinateIndex(Z_Param_Out_InObjectPath);
	P_NATIVE_END;
}
// End Class ULTFunctions Function GetLightmapCoordinateIndex

// Begin Class ULTFunctions Function GetLocationOnViewport
struct Z_Construct_UFunction_ULTFunctions_GetLocationOnViewport_Statics
{
	struct LTFunctions_eventGetLocationOnViewport_Parms
	{
		float DistanceToCamera;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Editor Tools" },
		{ "CPP_Default_DistanceToCamera", "500.000000" },
		{ "ModuleRelativePath", "Public/Library/LTFunctions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceToCamera;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULTFunctions_GetLocationOnViewport_Statics::NewProp_DistanceToCamera = { "DistanceToCamera", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LTFunctions_eventGetLocationOnViewport_Parms, DistanceToCamera), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULTFunctions_GetLocationOnViewport_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LTFunctions_eventGetLocationOnViewport_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULTFunctions_GetLocationOnViewport_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_GetLocationOnViewport_Statics::NewProp_DistanceToCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_GetLocationOnViewport_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_GetLocationOnViewport_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULTFunctions_GetLocationOnViewport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULTFunctions, nullptr, "GetLocationOnViewport", nullptr, nullptr, Z_Construct_UFunction_ULTFunctions_GetLocationOnViewport_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_GetLocationOnViewport_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULTFunctions_GetLocationOnViewport_Statics::LTFunctions_eventGetLocationOnViewport_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_GetLocationOnViewport_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULTFunctions_GetLocationOnViewport_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULTFunctions_GetLocationOnViewport_Statics::LTFunctions_eventGetLocationOnViewport_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULTFunctions_GetLocationOnViewport()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULTFunctions_GetLocationOnViewport_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULTFunctions::execGetLocationOnViewport)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DistanceToCamera);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=ULTFunctions::GetLocationOnViewport(Z_Param_DistanceToCamera);
	P_NATIVE_END;
}
// End Class ULTFunctions Function GetLocationOnViewport

// Begin Class ULTFunctions Function GetMaxLightmapDensity
struct Z_Construct_UFunction_ULTFunctions_GetMaxLightmapDensity_Statics
{
	struct LTFunctions_eventGetMaxLightmapDensity_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LightingTool|Lightmap" },
		{ "ModuleRelativePath", "Public/Library/LTFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULTFunctions_GetMaxLightmapDensity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LTFunctions_eventGetMaxLightmapDensity_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULTFunctions_GetMaxLightmapDensity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_GetMaxLightmapDensity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_GetMaxLightmapDensity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULTFunctions_GetMaxLightmapDensity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULTFunctions, nullptr, "GetMaxLightmapDensity", nullptr, nullptr, Z_Construct_UFunction_ULTFunctions_GetMaxLightmapDensity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_GetMaxLightmapDensity_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULTFunctions_GetMaxLightmapDensity_Statics::LTFunctions_eventGetMaxLightmapDensity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_GetMaxLightmapDensity_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULTFunctions_GetMaxLightmapDensity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULTFunctions_GetMaxLightmapDensity_Statics::LTFunctions_eventGetMaxLightmapDensity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULTFunctions_GetMaxLightmapDensity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULTFunctions_GetMaxLightmapDensity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULTFunctions::execGetMaxLightmapDensity)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=ULTFunctions::GetMaxLightmapDensity();
	P_NATIVE_END;
}
// End Class ULTFunctions Function GetMaxLightmapDensity

// Begin Class ULTFunctions Function GetReflectionMethod
struct Z_Construct_UFunction_ULTFunctions_GetReflectionMethod_Statics
{
	struct LTFunctions_eventGetReflectionMethod_Parms
	{
		TEnumAsByte<EReflectionMethod::Type> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lighting Tool" },
		{ "ModuleRelativePath", "Public/Library/LTFunctions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULTFunctions_GetReflectionMethod_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LTFunctions_eventGetReflectionMethod_Parms, ReturnValue), Z_Construct_UEnum_Engine_EReflectionMethod, METADATA_PARAMS(0, nullptr) }; // 569687725
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULTFunctions_GetReflectionMethod_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_GetReflectionMethod_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_GetReflectionMethod_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULTFunctions_GetReflectionMethod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULTFunctions, nullptr, "GetReflectionMethod", nullptr, nullptr, Z_Construct_UFunction_ULTFunctions_GetReflectionMethod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_GetReflectionMethod_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULTFunctions_GetReflectionMethod_Statics::LTFunctions_eventGetReflectionMethod_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_GetReflectionMethod_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULTFunctions_GetReflectionMethod_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULTFunctions_GetReflectionMethod_Statics::LTFunctions_eventGetReflectionMethod_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULTFunctions_GetReflectionMethod()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULTFunctions_GetReflectionMethod_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULTFunctions::execGetReflectionMethod)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EReflectionMethod::Type>*)Z_Param__Result=ULTFunctions::GetReflectionMethod();
	P_NATIVE_END;
}
// End Class ULTFunctions Function GetReflectionMethod

// Begin Class ULTFunctions Function GetRidOfHDRISuffix
struct Z_Construct_UFunction_ULTFunctions_GetRidOfHDRISuffix_Statics
{
	struct LTFunctions_eventGetRidOfHDRISuffix_Parms
	{
		FName InHDRIName;
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Editor Tools" },
		{ "ModuleRelativePath", "Public/Library/LTFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InHDRIName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InHDRIName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULTFunctions_GetRidOfHDRISuffix_Statics::NewProp_InHDRIName = { "InHDRIName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LTFunctions_eventGetRidOfHDRISuffix_Parms, InHDRIName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InHDRIName_MetaData), NewProp_InHDRIName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULTFunctions_GetRidOfHDRISuffix_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LTFunctions_eventGetRidOfHDRISuffix_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULTFunctions_GetRidOfHDRISuffix_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_GetRidOfHDRISuffix_Statics::NewProp_InHDRIName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_GetRidOfHDRISuffix_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_GetRidOfHDRISuffix_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULTFunctions_GetRidOfHDRISuffix_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULTFunctions, nullptr, "GetRidOfHDRISuffix", nullptr, nullptr, Z_Construct_UFunction_ULTFunctions_GetRidOfHDRISuffix_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_GetRidOfHDRISuffix_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULTFunctions_GetRidOfHDRISuffix_Statics::LTFunctions_eventGetRidOfHDRISuffix_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_GetRidOfHDRISuffix_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULTFunctions_GetRidOfHDRISuffix_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULTFunctions_GetRidOfHDRISuffix_Statics::LTFunctions_eventGetRidOfHDRISuffix_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULTFunctions_GetRidOfHDRISuffix()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULTFunctions_GetRidOfHDRISuffix_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULTFunctions::execGetRidOfHDRISuffix)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InHDRIName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=ULTFunctions::GetRidOfHDRISuffix(Z_Param_Out_InHDRIName);
	P_NATIVE_END;
}
// End Class ULTFunctions Function GetRidOfHDRISuffix

// Begin Class ULTFunctions Function GetRidOfTextureSuffix
struct Z_Construct_UFunction_ULTFunctions_GetRidOfTextureSuffix_Statics
{
	struct LTFunctions_eventGetRidOfTextureSuffix_Parms
	{
		FName InTextureName;
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Light Functions" },
		{ "ModuleRelativePath", "Public/Library/LTFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InTextureName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InTextureName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULTFunctions_GetRidOfTextureSuffix_Statics::NewProp_InTextureName = { "InTextureName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LTFunctions_eventGetRidOfTextureSuffix_Parms, InTextureName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InTextureName_MetaData), NewProp_InTextureName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULTFunctions_GetRidOfTextureSuffix_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LTFunctions_eventGetRidOfTextureSuffix_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULTFunctions_GetRidOfTextureSuffix_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_GetRidOfTextureSuffix_Statics::NewProp_InTextureName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_GetRidOfTextureSuffix_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_GetRidOfTextureSuffix_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULTFunctions_GetRidOfTextureSuffix_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULTFunctions, nullptr, "GetRidOfTextureSuffix", nullptr, nullptr, Z_Construct_UFunction_ULTFunctions_GetRidOfTextureSuffix_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_GetRidOfTextureSuffix_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULTFunctions_GetRidOfTextureSuffix_Statics::LTFunctions_eventGetRidOfTextureSuffix_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_GetRidOfTextureSuffix_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULTFunctions_GetRidOfTextureSuffix_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULTFunctions_GetRidOfTextureSuffix_Statics::LTFunctions_eventGetRidOfTextureSuffix_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULTFunctions_GetRidOfTextureSuffix()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULTFunctions_GetRidOfTextureSuffix_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULTFunctions::execGetRidOfTextureSuffix)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InTextureName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=ULTFunctions::GetRidOfTextureSuffix(Z_Param_Out_InTextureName);
	P_NATIVE_END;
}
// End Class ULTFunctions Function GetRidOfTextureSuffix

// Begin Class ULTFunctions Function GetShadowMapMethod
struct Z_Construct_UFunction_ULTFunctions_GetShadowMapMethod_Statics
{
	struct LTFunctions_eventGetShadowMapMethod_Parms
	{
		TEnumAsByte<EShadowMapMethod::Type> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lighting Tool" },
		{ "ModuleRelativePath", "Public/Library/LTFunctions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULTFunctions_GetShadowMapMethod_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LTFunctions_eventGetShadowMapMethod_Parms, ReturnValue), Z_Construct_UEnum_Engine_EShadowMapMethod, METADATA_PARAMS(0, nullptr) }; // 422023146
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULTFunctions_GetShadowMapMethod_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_GetShadowMapMethod_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_GetShadowMapMethod_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULTFunctions_GetShadowMapMethod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULTFunctions, nullptr, "GetShadowMapMethod", nullptr, nullptr, Z_Construct_UFunction_ULTFunctions_GetShadowMapMethod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_GetShadowMapMethod_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULTFunctions_GetShadowMapMethod_Statics::LTFunctions_eventGetShadowMapMethod_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_GetShadowMapMethod_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULTFunctions_GetShadowMapMethod_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULTFunctions_GetShadowMapMethod_Statics::LTFunctions_eventGetShadowMapMethod_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULTFunctions_GetShadowMapMethod()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULTFunctions_GetShadowMapMethod_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULTFunctions::execGetShadowMapMethod)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EShadowMapMethod::Type>*)Z_Param__Result=ULTFunctions::GetShadowMapMethod();
	P_NATIVE_END;
}
// End Class ULTFunctions Function GetShadowMapMethod

// Begin Class ULTFunctions Function GetSoftwareRayTracingMode
struct Z_Construct_UFunction_ULTFunctions_GetSoftwareRayTracingMode_Statics
{
	struct LTFunctions_eventGetSoftwareRayTracingMode_Parms
	{
		TEnumAsByte<ELumenSoftwareTracingMode::Type> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lighting Tool" },
		{ "ModuleRelativePath", "Public/Library/LTFunctions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULTFunctions_GetSoftwareRayTracingMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LTFunctions_eventGetSoftwareRayTracingMode_Parms, ReturnValue), Z_Construct_UEnum_Engine_ELumenSoftwareTracingMode, METADATA_PARAMS(0, nullptr) }; // 2919508242
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULTFunctions_GetSoftwareRayTracingMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_GetSoftwareRayTracingMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_GetSoftwareRayTracingMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULTFunctions_GetSoftwareRayTracingMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULTFunctions, nullptr, "GetSoftwareRayTracingMode", nullptr, nullptr, Z_Construct_UFunction_ULTFunctions_GetSoftwareRayTracingMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_GetSoftwareRayTracingMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULTFunctions_GetSoftwareRayTracingMode_Statics::LTFunctions_eventGetSoftwareRayTracingMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_GetSoftwareRayTracingMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULTFunctions_GetSoftwareRayTracingMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULTFunctions_GetSoftwareRayTracingMode_Statics::LTFunctions_eventGetSoftwareRayTracingMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULTFunctions_GetSoftwareRayTracingMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULTFunctions_GetSoftwareRayTracingMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULTFunctions::execGetSoftwareRayTracingMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<ELumenSoftwareTracingMode::Type>*)Z_Param__Result=ULTFunctions::GetSoftwareRayTracingMode();
	P_NATIVE_END;
}
// End Class ULTFunctions Function GetSoftwareRayTracingMode

// Begin Class ULTFunctions Function GetTextureNames
struct Z_Construct_UFunction_ULTFunctions_GetTextureNames_Statics
{
	struct FTopLevelAssetPath
	{
		FName PackageName;
		FName AssetName;
	};

	struct LTFunctions_eventGetTextureNames_Parms
	{
		TArray<FAssetData> InTextures;
		TArray<FName> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Light Functions" },
		{ "ModuleRelativePath", "Public/Library/LTFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InTextures_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InTextures_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InTextures;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULTFunctions_GetTextureNames_Statics::NewProp_InTextures_Inner = { "InTextures", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULTFunctions_GetTextureNames_Statics::NewProp_InTextures = { "InTextures", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LTFunctions_eventGetTextureNames_Parms, InTextures), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InTextures_MetaData), NewProp_InTextures_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULTFunctions_GetTextureNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULTFunctions_GetTextureNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LTFunctions_eventGetTextureNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULTFunctions_GetTextureNames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_GetTextureNames_Statics::NewProp_InTextures_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_GetTextureNames_Statics::NewProp_InTextures,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_GetTextureNames_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_GetTextureNames_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_GetTextureNames_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULTFunctions_GetTextureNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULTFunctions, nullptr, "GetTextureNames", nullptr, nullptr, Z_Construct_UFunction_ULTFunctions_GetTextureNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_GetTextureNames_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULTFunctions_GetTextureNames_Statics::LTFunctions_eventGetTextureNames_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_GetTextureNames_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULTFunctions_GetTextureNames_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULTFunctions_GetTextureNames_Statics::LTFunctions_eventGetTextureNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULTFunctions_GetTextureNames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULTFunctions_GetTextureNames_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULTFunctions::execGetTextureNames)
{
	P_GET_TARRAY_REF(FAssetData,Z_Param_Out_InTextures);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FName>*)Z_Param__Result=ULTFunctions::GetTextureNames(Z_Param_Out_InTextures);
	P_NATIVE_END;
}
// End Class ULTFunctions Function GetTextureNames

// Begin Class ULTFunctions Function GetUseHardwareRayTracingWhenAvailable
struct Z_Construct_UFunction_ULTFunctions_GetUseHardwareRayTracingWhenAvailable_Statics
{
	struct LTFunctions_eventGetUseHardwareRayTracingWhenAvailable_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lighting Tool" },
		{ "ModuleRelativePath", "Public/Library/LTFunctions.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ULTFunctions_GetUseHardwareRayTracingWhenAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LTFunctions_eventGetUseHardwareRayTracingWhenAvailable_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULTFunctions_GetUseHardwareRayTracingWhenAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LTFunctions_eventGetUseHardwareRayTracingWhenAvailable_Parms), &Z_Construct_UFunction_ULTFunctions_GetUseHardwareRayTracingWhenAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULTFunctions_GetUseHardwareRayTracingWhenAvailable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_GetUseHardwareRayTracingWhenAvailable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_GetUseHardwareRayTracingWhenAvailable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULTFunctions_GetUseHardwareRayTracingWhenAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULTFunctions, nullptr, "GetUseHardwareRayTracingWhenAvailable", nullptr, nullptr, Z_Construct_UFunction_ULTFunctions_GetUseHardwareRayTracingWhenAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_GetUseHardwareRayTracingWhenAvailable_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULTFunctions_GetUseHardwareRayTracingWhenAvailable_Statics::LTFunctions_eventGetUseHardwareRayTracingWhenAvailable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_GetUseHardwareRayTracingWhenAvailable_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULTFunctions_GetUseHardwareRayTracingWhenAvailable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULTFunctions_GetUseHardwareRayTracingWhenAvailable_Statics::LTFunctions_eventGetUseHardwareRayTracingWhenAvailable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULTFunctions_GetUseHardwareRayTracingWhenAvailable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULTFunctions_GetUseHardwareRayTracingWhenAvailable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULTFunctions::execGetUseHardwareRayTracingWhenAvailable)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=ULTFunctions::GetUseHardwareRayTracingWhenAvailable();
	P_NATIVE_END;
}
// End Class ULTFunctions Function GetUseHardwareRayTracingWhenAvailable

// Begin Class ULTFunctions Function GetViewMode
struct Z_Construct_UFunction_ULTFunctions_GetViewMode_Statics
{
	struct LTFunctions_eventGetViewMode_Parms
	{
		TEnumAsByte<EViewModeIndex> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LightingTool|Lightmap" },
		{ "ModuleRelativePath", "Public/Library/LTFunctions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULTFunctions_GetViewMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LTFunctions_eventGetViewMode_Parms, ReturnValue), Z_Construct_UEnum_Engine_EViewModeIndex, METADATA_PARAMS(0, nullptr) }; // 2782198090
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULTFunctions_GetViewMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_GetViewMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_GetViewMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULTFunctions_GetViewMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULTFunctions, nullptr, "GetViewMode", nullptr, nullptr, Z_Construct_UFunction_ULTFunctions_GetViewMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_GetViewMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULTFunctions_GetViewMode_Statics::LTFunctions_eventGetViewMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_GetViewMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULTFunctions_GetViewMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULTFunctions_GetViewMode_Statics::LTFunctions_eventGetViewMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULTFunctions_GetViewMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULTFunctions_GetViewMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULTFunctions::execGetViewMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EViewModeIndex>*)Z_Param__Result=ULTFunctions::GetViewMode();
	P_NATIVE_END;
}
// End Class ULTFunctions Function GetViewMode

// Begin Class ULTFunctions Function GoToWorldOriginWithOffset
struct Z_Construct_UFunction_ULTFunctions_GoToWorldOriginWithOffset_Statics
{
	struct LTFunctions_eventGoToWorldOriginWithOffset_Parms
	{
		FVector Offset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Editor Tools" },
		{ "ModuleRelativePath", "Public/Library/LTFunctions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULTFunctions_GoToWorldOriginWithOffset_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LTFunctions_eventGoToWorldOriginWithOffset_Parms, Offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULTFunctions_GoToWorldOriginWithOffset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_GoToWorldOriginWithOffset_Statics::NewProp_Offset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_GoToWorldOriginWithOffset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULTFunctions_GoToWorldOriginWithOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULTFunctions, nullptr, "GoToWorldOriginWithOffset", nullptr, nullptr, Z_Construct_UFunction_ULTFunctions_GoToWorldOriginWithOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_GoToWorldOriginWithOffset_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULTFunctions_GoToWorldOriginWithOffset_Statics::LTFunctions_eventGoToWorldOriginWithOffset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_GoToWorldOriginWithOffset_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULTFunctions_GoToWorldOriginWithOffset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULTFunctions_GoToWorldOriginWithOffset_Statics::LTFunctions_eventGoToWorldOriginWithOffset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULTFunctions_GoToWorldOriginWithOffset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULTFunctions_GoToWorldOriginWithOffset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULTFunctions::execGoToWorldOriginWithOffset)
{
	P_GET_STRUCT(FVector,Z_Param_Offset);
	P_FINISH;
	P_NATIVE_BEGIN;
	ULTFunctions::GoToWorldOriginWithOffset(Z_Param_Offset);
	P_NATIVE_END;
}
// End Class ULTFunctions Function GoToWorldOriginWithOffset

// Begin Class ULTFunctions Function IsThereAnySelectedSMAsset
struct Z_Construct_UFunction_ULTFunctions_IsThereAnySelectedSMAsset_Statics
{
	struct LTFunctions_eventIsThereAnySelectedSMAsset_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LightingTool|Lightmap" },
		{ "ModuleRelativePath", "Public/Library/LTFunctions.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ULTFunctions_IsThereAnySelectedSMAsset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LTFunctions_eventIsThereAnySelectedSMAsset_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULTFunctions_IsThereAnySelectedSMAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LTFunctions_eventIsThereAnySelectedSMAsset_Parms), &Z_Construct_UFunction_ULTFunctions_IsThereAnySelectedSMAsset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULTFunctions_IsThereAnySelectedSMAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_IsThereAnySelectedSMAsset_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_IsThereAnySelectedSMAsset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULTFunctions_IsThereAnySelectedSMAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULTFunctions, nullptr, "IsThereAnySelectedSMAsset", nullptr, nullptr, Z_Construct_UFunction_ULTFunctions_IsThereAnySelectedSMAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_IsThereAnySelectedSMAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULTFunctions_IsThereAnySelectedSMAsset_Statics::LTFunctions_eventIsThereAnySelectedSMAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_IsThereAnySelectedSMAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULTFunctions_IsThereAnySelectedSMAsset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULTFunctions_IsThereAnySelectedSMAsset_Statics::LTFunctions_eventIsThereAnySelectedSMAsset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULTFunctions_IsThereAnySelectedSMAsset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULTFunctions_IsThereAnySelectedSMAsset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULTFunctions::execIsThereAnySelectedSMAsset)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=ULTFunctions::IsThereAnySelectedSMAsset();
	P_NATIVE_END;
}
// End Class ULTFunctions Function IsThereAnySelectedSMAsset

// Begin Class ULTFunctions Function ReRunConstructionScriptOfActor
struct Z_Construct_UFunction_ULTFunctions_ReRunConstructionScriptOfActor_Statics
{
	struct LTFunctions_eventReRunConstructionScriptOfActor_Parms
	{
		AActor* InActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Editor Tools" },
		{ "ModuleRelativePath", "Public/Library/LTFunctions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULTFunctions_ReRunConstructionScriptOfActor_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LTFunctions_eventReRunConstructionScriptOfActor_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULTFunctions_ReRunConstructionScriptOfActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_ReRunConstructionScriptOfActor_Statics::NewProp_InActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_ReRunConstructionScriptOfActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULTFunctions_ReRunConstructionScriptOfActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULTFunctions, nullptr, "ReRunConstructionScriptOfActor", nullptr, nullptr, Z_Construct_UFunction_ULTFunctions_ReRunConstructionScriptOfActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_ReRunConstructionScriptOfActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULTFunctions_ReRunConstructionScriptOfActor_Statics::LTFunctions_eventReRunConstructionScriptOfActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_ReRunConstructionScriptOfActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULTFunctions_ReRunConstructionScriptOfActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULTFunctions_ReRunConstructionScriptOfActor_Statics::LTFunctions_eventReRunConstructionScriptOfActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULTFunctions_ReRunConstructionScriptOfActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULTFunctions_ReRunConstructionScriptOfActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULTFunctions::execReRunConstructionScriptOfActor)
{
	P_GET_OBJECT(AActor,Z_Param_InActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	ULTFunctions::ReRunConstructionScriptOfActor(Z_Param_InActor);
	P_NATIVE_END;
}
// End Class ULTFunctions Function ReRunConstructionScriptOfActor

// Begin Class ULTFunctions Function SaveSelectedAssets
struct Z_Construct_UFunction_ULTFunctions_SaveSelectedAssets_Statics
{
	struct LTFunctions_eventSaveSelectedAssets_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LightingTool|Lightmap" },
		{ "ModuleRelativePath", "Public/Library/LTFunctions.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ULTFunctions_SaveSelectedAssets_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LTFunctions_eventSaveSelectedAssets_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULTFunctions_SaveSelectedAssets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LTFunctions_eventSaveSelectedAssets_Parms), &Z_Construct_UFunction_ULTFunctions_SaveSelectedAssets_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULTFunctions_SaveSelectedAssets_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_SaveSelectedAssets_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_SaveSelectedAssets_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULTFunctions_SaveSelectedAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULTFunctions, nullptr, "SaveSelectedAssets", nullptr, nullptr, Z_Construct_UFunction_ULTFunctions_SaveSelectedAssets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_SaveSelectedAssets_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULTFunctions_SaveSelectedAssets_Statics::LTFunctions_eventSaveSelectedAssets_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_SaveSelectedAssets_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULTFunctions_SaveSelectedAssets_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULTFunctions_SaveSelectedAssets_Statics::LTFunctions_eventSaveSelectedAssets_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULTFunctions_SaveSelectedAssets()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULTFunctions_SaveSelectedAssets_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULTFunctions::execSaveSelectedAssets)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=ULTFunctions::SaveSelectedAssets();
	P_NATIVE_END;
}
// End Class ULTFunctions Function SaveSelectedAssets

// Begin Class ULTFunctions Function SetIdealLightmapDensity
struct Z_Construct_UFunction_ULTFunctions_SetIdealLightmapDensity_Statics
{
	struct LTFunctions_eventSetIdealLightmapDensity_Parms
	{
		float NewIdealDensity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LightingTool|Lightmap" },
		{ "ModuleRelativePath", "Public/Library/LTFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewIdealDensity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewIdealDensity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULTFunctions_SetIdealLightmapDensity_Statics::NewProp_NewIdealDensity = { "NewIdealDensity", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LTFunctions_eventSetIdealLightmapDensity_Parms, NewIdealDensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewIdealDensity_MetaData), NewProp_NewIdealDensity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULTFunctions_SetIdealLightmapDensity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_SetIdealLightmapDensity_Statics::NewProp_NewIdealDensity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_SetIdealLightmapDensity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULTFunctions_SetIdealLightmapDensity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULTFunctions, nullptr, "SetIdealLightmapDensity", nullptr, nullptr, Z_Construct_UFunction_ULTFunctions_SetIdealLightmapDensity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_SetIdealLightmapDensity_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULTFunctions_SetIdealLightmapDensity_Statics::LTFunctions_eventSetIdealLightmapDensity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_SetIdealLightmapDensity_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULTFunctions_SetIdealLightmapDensity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULTFunctions_SetIdealLightmapDensity_Statics::LTFunctions_eventSetIdealLightmapDensity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULTFunctions_SetIdealLightmapDensity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULTFunctions_SetIdealLightmapDensity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULTFunctions::execSetIdealLightmapDensity)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_NewIdealDensity);
	P_FINISH;
	P_NATIVE_BEGIN;
	ULTFunctions::SetIdealLightmapDensity(Z_Param_Out_NewIdealDensity);
	P_NATIVE_END;
}
// End Class ULTFunctions Function SetIdealLightmapDensity

// Begin Class ULTFunctions Function SetMaxLightmapDensity
struct Z_Construct_UFunction_ULTFunctions_SetMaxLightmapDensity_Statics
{
	struct LTFunctions_eventSetMaxLightmapDensity_Parms
	{
		float NewMaxDensity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LightingTool|Lightmap" },
		{ "ModuleRelativePath", "Public/Library/LTFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewMaxDensity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewMaxDensity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULTFunctions_SetMaxLightmapDensity_Statics::NewProp_NewMaxDensity = { "NewMaxDensity", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LTFunctions_eventSetMaxLightmapDensity_Parms, NewMaxDensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewMaxDensity_MetaData), NewProp_NewMaxDensity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULTFunctions_SetMaxLightmapDensity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_SetMaxLightmapDensity_Statics::NewProp_NewMaxDensity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_SetMaxLightmapDensity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULTFunctions_SetMaxLightmapDensity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULTFunctions, nullptr, "SetMaxLightmapDensity", nullptr, nullptr, Z_Construct_UFunction_ULTFunctions_SetMaxLightmapDensity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_SetMaxLightmapDensity_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULTFunctions_SetMaxLightmapDensity_Statics::LTFunctions_eventSetMaxLightmapDensity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_SetMaxLightmapDensity_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULTFunctions_SetMaxLightmapDensity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULTFunctions_SetMaxLightmapDensity_Statics::LTFunctions_eventSetMaxLightmapDensity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULTFunctions_SetMaxLightmapDensity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULTFunctions_SetMaxLightmapDensity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULTFunctions::execSetMaxLightmapDensity)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_NewMaxDensity);
	P_FINISH;
	P_NATIVE_BEGIN;
	ULTFunctions::SetMaxLightmapDensity(Z_Param_Out_NewMaxDensity);
	P_NATIVE_END;
}
// End Class ULTFunctions Function SetMaxLightmapDensity

// Begin Class ULTFunctions Function ShowNotifyToUser
struct Z_Construct_UFunction_ULTFunctions_ShowNotifyToUser_Statics
{
	struct LTFunctions_eventShowNotifyToUser_Parms
	{
		FString InMessage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LightingTool|Lightmap" },
		{ "ModuleRelativePath", "Public/Library/LTFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InMessage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULTFunctions_ShowNotifyToUser_Statics::NewProp_InMessage = { "InMessage", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LTFunctions_eventShowNotifyToUser_Parms, InMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InMessage_MetaData), NewProp_InMessage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULTFunctions_ShowNotifyToUser_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_ShowNotifyToUser_Statics::NewProp_InMessage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_ShowNotifyToUser_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULTFunctions_ShowNotifyToUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULTFunctions, nullptr, "ShowNotifyToUser", nullptr, nullptr, Z_Construct_UFunction_ULTFunctions_ShowNotifyToUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_ShowNotifyToUser_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULTFunctions_ShowNotifyToUser_Statics::LTFunctions_eventShowNotifyToUser_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_ShowNotifyToUser_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULTFunctions_ShowNotifyToUser_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULTFunctions_ShowNotifyToUser_Statics::LTFunctions_eventShowNotifyToUser_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULTFunctions_ShowNotifyToUser()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULTFunctions_ShowNotifyToUser_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULTFunctions::execShowNotifyToUser)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InMessage);
	P_FINISH;
	P_NATIVE_BEGIN;
	ULTFunctions::ShowNotifyToUser(Z_Param_InMessage);
	P_NATIVE_END;
}
// End Class ULTFunctions Function ShowNotifyToUser

// Begin Class ULTFunctions Function SpawnAndGetHDRIVolume
struct Z_Construct_UFunction_ULTFunctions_SpawnAndGetHDRIVolume_Statics
{
	struct LTFunctions_eventSpawnAndGetHDRIVolume_Parms
	{
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LightingTool|Lightmap" },
		{ "ModuleRelativePath", "Public/Library/LTFunctions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULTFunctions_SpawnAndGetHDRIVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LTFunctions_eventSpawnAndGetHDRIVolume_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULTFunctions_SpawnAndGetHDRIVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_SpawnAndGetHDRIVolume_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_SpawnAndGetHDRIVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULTFunctions_SpawnAndGetHDRIVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULTFunctions, nullptr, "SpawnAndGetHDRIVolume", nullptr, nullptr, Z_Construct_UFunction_ULTFunctions_SpawnAndGetHDRIVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_SpawnAndGetHDRIVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULTFunctions_SpawnAndGetHDRIVolume_Statics::LTFunctions_eventSpawnAndGetHDRIVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_SpawnAndGetHDRIVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULTFunctions_SpawnAndGetHDRIVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULTFunctions_SpawnAndGetHDRIVolume_Statics::LTFunctions_eventSpawnAndGetHDRIVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULTFunctions_SpawnAndGetHDRIVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULTFunctions_SpawnAndGetHDRIVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULTFunctions::execSpawnAndGetHDRIVolume)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=ULTFunctions::SpawnAndGetHDRIVolume();
	P_NATIVE_END;
}
// End Class ULTFunctions Function SpawnAndGetHDRIVolume

// Begin Class ULTFunctions Function SpawnOrGetExistingPostProcessVolume
struct Z_Construct_UFunction_ULTFunctions_SpawnOrGetExistingPostProcessVolume_Statics
{
	struct LTFunctions_eventSpawnOrGetExistingPostProcessVolume_Parms
	{
		APostProcessVolume* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LightingTool|Lightmap" },
		{ "ModuleRelativePath", "Public/Library/LTFunctions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULTFunctions_SpawnOrGetExistingPostProcessVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LTFunctions_eventSpawnOrGetExistingPostProcessVolume_Parms, ReturnValue), Z_Construct_UClass_APostProcessVolume_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULTFunctions_SpawnOrGetExistingPostProcessVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTFunctions_SpawnOrGetExistingPostProcessVolume_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_SpawnOrGetExistingPostProcessVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULTFunctions_SpawnOrGetExistingPostProcessVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULTFunctions, nullptr, "SpawnOrGetExistingPostProcessVolume", nullptr, nullptr, Z_Construct_UFunction_ULTFunctions_SpawnOrGetExistingPostProcessVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_SpawnOrGetExistingPostProcessVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULTFunctions_SpawnOrGetExistingPostProcessVolume_Statics::LTFunctions_eventSpawnOrGetExistingPostProcessVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTFunctions_SpawnOrGetExistingPostProcessVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULTFunctions_SpawnOrGetExistingPostProcessVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULTFunctions_SpawnOrGetExistingPostProcessVolume_Statics::LTFunctions_eventSpawnOrGetExistingPostProcessVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULTFunctions_SpawnOrGetExistingPostProcessVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULTFunctions_SpawnOrGetExistingPostProcessVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULTFunctions::execSpawnOrGetExistingPostProcessVolume)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(APostProcessVolume**)Z_Param__Result=ULTFunctions::SpawnOrGetExistingPostProcessVolume();
	P_NATIVE_END;
}
// End Class ULTFunctions Function SpawnOrGetExistingPostProcessVolume

// Begin Class ULTFunctions
void ULTFunctions::StaticRegisterNativesULTFunctions()
{
	UClass* Class = ULTFunctions::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AdjustDensityWithEase", &ULTFunctions::execAdjustDensityWithEase },
		{ "ApplyLightRenderPresetData", &ULTFunctions::execApplyLightRenderPresetData },
		{ "CalculateDensityAndResolution", &ULTFunctions::execCalculateDensityAndResolution },
		{ "CalculateDesiredLightmapResolution", &ULTFunctions::execCalculateDesiredLightmapResolution },
		{ "ChangeDefaultRHI", &ULTFunctions::execChangeDefaultRHI },
		{ "ChangeDynamicGlobalIlluminationMethod", &ULTFunctions::execChangeDynamicGlobalIlluminationMethod },
		{ "ChangeEnablePathTracing", &ULTFunctions::execChangeEnablePathTracing },
		{ "ChangeEnableRayTracing", &ULTFunctions::execChangeEnableRayTracing },
		{ "ChangeGenerateMeshDistanceField", &ULTFunctions::execChangeGenerateMeshDistanceField },
		{ "ChangeLightmapCoordinateIndex", &ULTFunctions::execChangeLightmapCoordinateIndex },
		{ "ChangeLightmapResolution", &ULTFunctions::execChangeLightmapResolution },
		{ "ChangeLightsBrightness", &ULTFunctions::execChangeLightsBrightness },
		{ "ChangeLightsColor", &ULTFunctions::execChangeLightsColor },
		{ "ChangeLightsFunction", &ULTFunctions::execChangeLightsFunction },
		{ "ChangeLightsVisibility", &ULTFunctions::execChangeLightsVisibility },
		{ "ChangePathTracingViewMode", &ULTFunctions::execChangePathTracingViewMode },
		{ "ChangeReflectionMethod", &ULTFunctions::execChangeReflectionMethod },
		{ "ChangeShadowMapMethod", &ULTFunctions::execChangeShadowMapMethod },
		{ "ChangeSoftwareRayTracingMode", &ULTFunctions::execChangeSoftwareRayTracingMode },
		{ "ChangeUseHardwareRayTracingWhenAvailable", &ULTFunctions::execChangeUseHardwareRayTracingWhenAvailable },
		{ "ChangeViewMode", &ULTFunctions::execChangeViewMode },
		{ "CopyLightComponentProperties", &ULTFunctions::execCopyLightComponentProperties },
		{ "CreateEasingFuncNameArray", &ULTFunctions::execCreateEasingFuncNameArray },
		{ "DoesToolHDRIActorExist", &ULTFunctions::execDoesToolHDRIActorExist },
		{ "EnablePathTracingProgress", &ULTFunctions::execEnablePathTracingProgress },
		{ "FindAndGetHDRIFromList", &ULTFunctions::execFindAndGetHDRIFromList },
		{ "FindAndGetIESTextureFromList", &ULTFunctions::execFindAndGetIESTextureFromList },
		{ "FindAndGetTextureFromList", &ULTFunctions::execFindAndGetTextureFromList },
		{ "GenerateThumbnailForAsset", &ULTFunctions::execGenerateThumbnailForAsset },
		{ "GetAllHDRIsInPath", &ULTFunctions::execGetAllHDRIsInPath },
		{ "GetAllIESTexturesInPath", &ULTFunctions::execGetAllIESTexturesInPath },
		{ "GetAllTexturesInPath", &ULTFunctions::execGetAllTexturesInPath },
		{ "GetColorOfTheDensity", &ULTFunctions::execGetColorOfTheDensity },
		{ "GetDefaultRHI", &ULTFunctions::execGetDefaultRHI },
		{ "GetDynamicGlobalIlluminationMethod", &ULTFunctions::execGetDynamicGlobalIlluminationMethod },
		{ "GetEasingFuncValueFromIndex", &ULTFunctions::execGetEasingFuncValueFromIndex },
		{ "GetEasingFuncValueFromName", &ULTFunctions::execGetEasingFuncValueFromName },
		{ "GetEditorWorld", &ULTFunctions::execGetEditorWorld },
		{ "GetEnablePathTracing", &ULTFunctions::execGetEnablePathTracing },
		{ "GetEnableRayTracing", &ULTFunctions::execGetEnableRayTracing },
		{ "GetGenerateMeshDistanceField", &ULTFunctions::execGetGenerateMeshDistanceField },
		{ "GetHDRINames", &ULTFunctions::execGetHDRINames },
		{ "GetHDRIVolumeInTheLevel", &ULTFunctions::execGetHDRIVolumeInTheLevel },
		{ "GetIdealLightmapDensity", &ULTFunctions::execGetIdealLightmapDensity },
		{ "GetLightmapCoordinateIndex", &ULTFunctions::execGetLightmapCoordinateIndex },
		{ "GetLocationOnViewport", &ULTFunctions::execGetLocationOnViewport },
		{ "GetMaxLightmapDensity", &ULTFunctions::execGetMaxLightmapDensity },
		{ "GetReflectionMethod", &ULTFunctions::execGetReflectionMethod },
		{ "GetRidOfHDRISuffix", &ULTFunctions::execGetRidOfHDRISuffix },
		{ "GetRidOfTextureSuffix", &ULTFunctions::execGetRidOfTextureSuffix },
		{ "GetShadowMapMethod", &ULTFunctions::execGetShadowMapMethod },
		{ "GetSoftwareRayTracingMode", &ULTFunctions::execGetSoftwareRayTracingMode },
		{ "GetTextureNames", &ULTFunctions::execGetTextureNames },
		{ "GetUseHardwareRayTracingWhenAvailable", &ULTFunctions::execGetUseHardwareRayTracingWhenAvailable },
		{ "GetViewMode", &ULTFunctions::execGetViewMode },
		{ "GoToWorldOriginWithOffset", &ULTFunctions::execGoToWorldOriginWithOffset },
		{ "IsThereAnySelectedSMAsset", &ULTFunctions::execIsThereAnySelectedSMAsset },
		{ "ReRunConstructionScriptOfActor", &ULTFunctions::execReRunConstructionScriptOfActor },
		{ "SaveSelectedAssets", &ULTFunctions::execSaveSelectedAssets },
		{ "SetIdealLightmapDensity", &ULTFunctions::execSetIdealLightmapDensity },
		{ "SetMaxLightmapDensity", &ULTFunctions::execSetMaxLightmapDensity },
		{ "ShowNotifyToUser", &ULTFunctions::execShowNotifyToUser },
		{ "SpawnAndGetHDRIVolume", &ULTFunctions::execSpawnAndGetHDRIVolume },
		{ "SpawnOrGetExistingPostProcessVolume", &ULTFunctions::execSpawnOrGetExistingPostProcessVolume },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULTFunctions);
UClass* Z_Construct_UClass_ULTFunctions_NoRegister()
{
	return ULTFunctions::StaticClass();
}
struct Z_Construct_UClass_ULTFunctions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Library/LTFunctions.h" },
		{ "ModuleRelativePath", "Public/Library/LTFunctions.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULTFunctions_AdjustDensityWithEase, "AdjustDensityWithEase" }, // 338319230
		{ &Z_Construct_UFunction_ULTFunctions_ApplyLightRenderPresetData, "ApplyLightRenderPresetData" }, // 3875593923
		{ &Z_Construct_UFunction_ULTFunctions_CalculateDensityAndResolution, "CalculateDensityAndResolution" }, // 35511264
		{ &Z_Construct_UFunction_ULTFunctions_CalculateDesiredLightmapResolution, "CalculateDesiredLightmapResolution" }, // 295343700
		{ &Z_Construct_UFunction_ULTFunctions_ChangeDefaultRHI, "ChangeDefaultRHI" }, // 4238906912
		{ &Z_Construct_UFunction_ULTFunctions_ChangeDynamicGlobalIlluminationMethod, "ChangeDynamicGlobalIlluminationMethod" }, // 3749585943
		{ &Z_Construct_UFunction_ULTFunctions_ChangeEnablePathTracing, "ChangeEnablePathTracing" }, // 480590408
		{ &Z_Construct_UFunction_ULTFunctions_ChangeEnableRayTracing, "ChangeEnableRayTracing" }, // 3800664271
		{ &Z_Construct_UFunction_ULTFunctions_ChangeGenerateMeshDistanceField, "ChangeGenerateMeshDistanceField" }, // 3791845909
		{ &Z_Construct_UFunction_ULTFunctions_ChangeLightmapCoordinateIndex, "ChangeLightmapCoordinateIndex" }, // 29786330
		{ &Z_Construct_UFunction_ULTFunctions_ChangeLightmapResolution, "ChangeLightmapResolution" }, // 182968014
		{ &Z_Construct_UFunction_ULTFunctions_ChangeLightsBrightness, "ChangeLightsBrightness" }, // 3308944121
		{ &Z_Construct_UFunction_ULTFunctions_ChangeLightsColor, "ChangeLightsColor" }, // 2547815750
		{ &Z_Construct_UFunction_ULTFunctions_ChangeLightsFunction, "ChangeLightsFunction" }, // 716509342
		{ &Z_Construct_UFunction_ULTFunctions_ChangeLightsVisibility, "ChangeLightsVisibility" }, // 1722331864
		{ &Z_Construct_UFunction_ULTFunctions_ChangePathTracingViewMode, "ChangePathTracingViewMode" }, // 1655442223
		{ &Z_Construct_UFunction_ULTFunctions_ChangeReflectionMethod, "ChangeReflectionMethod" }, // 3152807344
		{ &Z_Construct_UFunction_ULTFunctions_ChangeShadowMapMethod, "ChangeShadowMapMethod" }, // 3693245788
		{ &Z_Construct_UFunction_ULTFunctions_ChangeSoftwareRayTracingMode, "ChangeSoftwareRayTracingMode" }, // 2608567255
		{ &Z_Construct_UFunction_ULTFunctions_ChangeUseHardwareRayTracingWhenAvailable, "ChangeUseHardwareRayTracingWhenAvailable" }, // 367687762
		{ &Z_Construct_UFunction_ULTFunctions_ChangeViewMode, "ChangeViewMode" }, // 2371904442
		{ &Z_Construct_UFunction_ULTFunctions_CopyLightComponentProperties, "CopyLightComponentProperties" }, // 3340466975
		{ &Z_Construct_UFunction_ULTFunctions_CreateEasingFuncNameArray, "CreateEasingFuncNameArray" }, // 755367343
		{ &Z_Construct_UFunction_ULTFunctions_DoesToolHDRIActorExist, "DoesToolHDRIActorExist" }, // 3348681372
		{ &Z_Construct_UFunction_ULTFunctions_EnablePathTracingProgress, "EnablePathTracingProgress" }, // 677711226
		{ &Z_Construct_UFunction_ULTFunctions_FindAndGetHDRIFromList, "FindAndGetHDRIFromList" }, // 2238016134
		{ &Z_Construct_UFunction_ULTFunctions_FindAndGetIESTextureFromList, "FindAndGetIESTextureFromList" }, // 1249245818
		{ &Z_Construct_UFunction_ULTFunctions_FindAndGetTextureFromList, "FindAndGetTextureFromList" }, // 3525750224
		{ &Z_Construct_UFunction_ULTFunctions_GenerateThumbnailForAsset, "GenerateThumbnailForAsset" }, // 771358845
		{ &Z_Construct_UFunction_ULTFunctions_GetAllHDRIsInPath, "GetAllHDRIsInPath" }, // 2510488666
		{ &Z_Construct_UFunction_ULTFunctions_GetAllIESTexturesInPath, "GetAllIESTexturesInPath" }, // 168362278
		{ &Z_Construct_UFunction_ULTFunctions_GetAllTexturesInPath, "GetAllTexturesInPath" }, // 1142343350
		{ &Z_Construct_UFunction_ULTFunctions_GetColorOfTheDensity, "GetColorOfTheDensity" }, // 2888090493
		{ &Z_Construct_UFunction_ULTFunctions_GetDefaultRHI, "GetDefaultRHI" }, // 3719869936
		{ &Z_Construct_UFunction_ULTFunctions_GetDynamicGlobalIlluminationMethod, "GetDynamicGlobalIlluminationMethod" }, // 505296651
		{ &Z_Construct_UFunction_ULTFunctions_GetEasingFuncValueFromIndex, "GetEasingFuncValueFromIndex" }, // 591900512
		{ &Z_Construct_UFunction_ULTFunctions_GetEasingFuncValueFromName, "GetEasingFuncValueFromName" }, // 1548992611
		{ &Z_Construct_UFunction_ULTFunctions_GetEditorWorld, "GetEditorWorld" }, // 3835173798
		{ &Z_Construct_UFunction_ULTFunctions_GetEnablePathTracing, "GetEnablePathTracing" }, // 3905831382
		{ &Z_Construct_UFunction_ULTFunctions_GetEnableRayTracing, "GetEnableRayTracing" }, // 1457705564
		{ &Z_Construct_UFunction_ULTFunctions_GetGenerateMeshDistanceField, "GetGenerateMeshDistanceField" }, // 882865294
		{ &Z_Construct_UFunction_ULTFunctions_GetHDRINames, "GetHDRINames" }, // 2155936077
		{ &Z_Construct_UFunction_ULTFunctions_GetHDRIVolumeInTheLevel, "GetHDRIVolumeInTheLevel" }, // 1067128376
		{ &Z_Construct_UFunction_ULTFunctions_GetIdealLightmapDensity, "GetIdealLightmapDensity" }, // 376398230
		{ &Z_Construct_UFunction_ULTFunctions_GetLightmapCoordinateIndex, "GetLightmapCoordinateIndex" }, // 3356601745
		{ &Z_Construct_UFunction_ULTFunctions_GetLocationOnViewport, "GetLocationOnViewport" }, // 2787450940
		{ &Z_Construct_UFunction_ULTFunctions_GetMaxLightmapDensity, "GetMaxLightmapDensity" }, // 2362660057
		{ &Z_Construct_UFunction_ULTFunctions_GetReflectionMethod, "GetReflectionMethod" }, // 3154835036
		{ &Z_Construct_UFunction_ULTFunctions_GetRidOfHDRISuffix, "GetRidOfHDRISuffix" }, // 3787411242
		{ &Z_Construct_UFunction_ULTFunctions_GetRidOfTextureSuffix, "GetRidOfTextureSuffix" }, // 359208216
		{ &Z_Construct_UFunction_ULTFunctions_GetShadowMapMethod, "GetShadowMapMethod" }, // 562636152
		{ &Z_Construct_UFunction_ULTFunctions_GetSoftwareRayTracingMode, "GetSoftwareRayTracingMode" }, // 1423393389
		{ &Z_Construct_UFunction_ULTFunctions_GetTextureNames, "GetTextureNames" }, // 4172614251
		{ &Z_Construct_UFunction_ULTFunctions_GetUseHardwareRayTracingWhenAvailable, "GetUseHardwareRayTracingWhenAvailable" }, // 3004401408
		{ &Z_Construct_UFunction_ULTFunctions_GetViewMode, "GetViewMode" }, // 2153034481
		{ &Z_Construct_UFunction_ULTFunctions_GoToWorldOriginWithOffset, "GoToWorldOriginWithOffset" }, // 4091721324
		{ &Z_Construct_UFunction_ULTFunctions_IsThereAnySelectedSMAsset, "IsThereAnySelectedSMAsset" }, // 3318645543
		{ &Z_Construct_UFunction_ULTFunctions_ReRunConstructionScriptOfActor, "ReRunConstructionScriptOfActor" }, // 4152468920
		{ &Z_Construct_UFunction_ULTFunctions_SaveSelectedAssets, "SaveSelectedAssets" }, // 782683397
		{ &Z_Construct_UFunction_ULTFunctions_SetIdealLightmapDensity, "SetIdealLightmapDensity" }, // 48966239
		{ &Z_Construct_UFunction_ULTFunctions_SetMaxLightmapDensity, "SetMaxLightmapDensity" }, // 567639986
		{ &Z_Construct_UFunction_ULTFunctions_ShowNotifyToUser, "ShowNotifyToUser" }, // 1189204919
		{ &Z_Construct_UFunction_ULTFunctions_SpawnAndGetHDRIVolume, "SpawnAndGetHDRIVolume" }, // 1092181768
		{ &Z_Construct_UFunction_ULTFunctions_SpawnOrGetExistingPostProcessVolume, "SpawnOrGetExistingPostProcessVolume" }, // 2483052296
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULTFunctions>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULTFunctions_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_LightingTool,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULTFunctions_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULTFunctions_Statics::ClassParams = {
	&ULTFunctions::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULTFunctions_Statics::Class_MetaDataParams), Z_Construct_UClass_ULTFunctions_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULTFunctions()
{
	if (!Z_Registration_Info_UClass_ULTFunctions.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULTFunctions.OuterSingleton, Z_Construct_UClass_ULTFunctions_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULTFunctions.OuterSingleton;
}
template<> LIGHTINGTOOL_API UClass* StaticClass<ULTFunctions>()
{
	return ULTFunctions::StaticClass();
}
ULTFunctions::ULTFunctions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULTFunctions);
ULTFunctions::~ULTFunctions() {}
// End Class ULTFunctions

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_Library_LTFunctions_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULTFunctions, ULTFunctions::StaticClass, TEXT("ULTFunctions"), &Z_Registration_Info_UClass_ULTFunctions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULTFunctions), 113565968U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_Library_LTFunctions_h_625167356(TEXT("/Script/LightingTool"),
	Z_CompiledInDeferFile_FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_Library_LTFunctions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_Library_LTFunctions_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
