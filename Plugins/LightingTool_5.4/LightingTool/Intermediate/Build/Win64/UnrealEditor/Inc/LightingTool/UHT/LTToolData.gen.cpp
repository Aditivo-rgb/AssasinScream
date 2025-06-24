// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LightingTool/Public/Data/LTToolData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLTToolData() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
LIGHTINGTOOL_API UClass* Z_Construct_UClass_ULTToolData();
LIGHTINGTOOL_API UClass* Z_Construct_UClass_ULTToolData_NoRegister();
LIGHTINGTOOL_API UEnum* Z_Construct_UEnum_LightingTool_ELTLightmapPreset();
UPackage* Z_Construct_UPackage__Script_LightingTool();
// End Cross Module References

// Begin Class ULTToolData Function DataParamChanged
struct Z_Construct_UFunction_ULTToolData_DataParamChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Light Functions" },
		{ "Comment", "//Functions\n" },
		{ "ModuleRelativePath", "Public/Data/LTToolData.h" },
		{ "ToolTip", "Functions" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULTToolData_DataParamChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULTToolData, nullptr, "DataParamChanged", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTToolData_DataParamChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULTToolData_DataParamChanged_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ULTToolData_DataParamChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULTToolData_DataParamChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULTToolData::execDataParamChanged)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DataParamChanged();
	P_NATIVE_END;
}
// End Class ULTToolData Function DataParamChanged

// Begin Class ULTToolData Function SetIdealDensity
struct Z_Construct_UFunction_ULTToolData_SetIdealDensity_Statics
{
	struct LTToolData_eventSetIdealDensity_Parms
	{
		float InIdealDensity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Light Functions" },
		{ "ModuleRelativePath", "Public/Data/LTToolData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InIdealDensity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InIdealDensity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULTToolData_SetIdealDensity_Statics::NewProp_InIdealDensity = { "InIdealDensity", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LTToolData_eventSetIdealDensity_Parms, InIdealDensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InIdealDensity_MetaData), NewProp_InIdealDensity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULTToolData_SetIdealDensity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTToolData_SetIdealDensity_Statics::NewProp_InIdealDensity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTToolData_SetIdealDensity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULTToolData_SetIdealDensity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULTToolData, nullptr, "SetIdealDensity", nullptr, nullptr, Z_Construct_UFunction_ULTToolData_SetIdealDensity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULTToolData_SetIdealDensity_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULTToolData_SetIdealDensity_Statics::LTToolData_eventSetIdealDensity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTToolData_SetIdealDensity_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULTToolData_SetIdealDensity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULTToolData_SetIdealDensity_Statics::LTToolData_eventSetIdealDensity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULTToolData_SetIdealDensity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULTToolData_SetIdealDensity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULTToolData::execSetIdealDensity)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_InIdealDensity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetIdealDensity(Z_Param_Out_InIdealDensity);
	P_NATIVE_END;
}
// End Class ULTToolData Function SetIdealDensity

// Begin Class ULTToolData Function SetMaxAllowedDensity
struct Z_Construct_UFunction_ULTToolData_SetMaxAllowedDensity_Statics
{
	struct LTToolData_eventSetMaxAllowedDensity_Parms
	{
		float InMaxAllowedDensity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Light Functions" },
		{ "ModuleRelativePath", "Public/Data/LTToolData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InMaxAllowedDensity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InMaxAllowedDensity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULTToolData_SetMaxAllowedDensity_Statics::NewProp_InMaxAllowedDensity = { "InMaxAllowedDensity", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LTToolData_eventSetMaxAllowedDensity_Parms, InMaxAllowedDensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InMaxAllowedDensity_MetaData), NewProp_InMaxAllowedDensity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULTToolData_SetMaxAllowedDensity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTToolData_SetMaxAllowedDensity_Statics::NewProp_InMaxAllowedDensity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTToolData_SetMaxAllowedDensity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULTToolData_SetMaxAllowedDensity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULTToolData, nullptr, "SetMaxAllowedDensity", nullptr, nullptr, Z_Construct_UFunction_ULTToolData_SetMaxAllowedDensity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULTToolData_SetMaxAllowedDensity_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULTToolData_SetMaxAllowedDensity_Statics::LTToolData_eventSetMaxAllowedDensity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTToolData_SetMaxAllowedDensity_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULTToolData_SetMaxAllowedDensity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULTToolData_SetMaxAllowedDensity_Statics::LTToolData_eventSetMaxAllowedDensity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULTToolData_SetMaxAllowedDensity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULTToolData_SetMaxAllowedDensity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULTToolData::execSetMaxAllowedDensity)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_InMaxAllowedDensity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMaxAllowedDensity(Z_Param_Out_InMaxAllowedDensity);
	P_NATIVE_END;
}
// End Class ULTToolData Function SetMaxAllowedDensity

// Begin Class ULTToolData Function SetMaxAllowedResolution
struct Z_Construct_UFunction_ULTToolData_SetMaxAllowedResolution_Statics
{
	struct LTToolData_eventSetMaxAllowedResolution_Parms
	{
		int32 InMaxAllowedResolution;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Light Functions" },
		{ "ModuleRelativePath", "Public/Data/LTToolData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InMaxAllowedResolution_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InMaxAllowedResolution;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULTToolData_SetMaxAllowedResolution_Statics::NewProp_InMaxAllowedResolution = { "InMaxAllowedResolution", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LTToolData_eventSetMaxAllowedResolution_Parms, InMaxAllowedResolution), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InMaxAllowedResolution_MetaData), NewProp_InMaxAllowedResolution_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULTToolData_SetMaxAllowedResolution_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTToolData_SetMaxAllowedResolution_Statics::NewProp_InMaxAllowedResolution,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTToolData_SetMaxAllowedResolution_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULTToolData_SetMaxAllowedResolution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULTToolData, nullptr, "SetMaxAllowedResolution", nullptr, nullptr, Z_Construct_UFunction_ULTToolData_SetMaxAllowedResolution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULTToolData_SetMaxAllowedResolution_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULTToolData_SetMaxAllowedResolution_Statics::LTToolData_eventSetMaxAllowedResolution_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTToolData_SetMaxAllowedResolution_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULTToolData_SetMaxAllowedResolution_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULTToolData_SetMaxAllowedResolution_Statics::LTToolData_eventSetMaxAllowedResolution_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULTToolData_SetMaxAllowedResolution()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULTToolData_SetMaxAllowedResolution_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULTToolData::execSetMaxAllowedResolution)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_InMaxAllowedResolution);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMaxAllowedResolution(Z_Param_Out_InMaxAllowedResolution);
	P_NATIVE_END;
}
// End Class ULTToolData Function SetMaxAllowedResolution

// Begin Class ULTToolData Function ToggleAndGetListViewExpandStatus
struct Z_Construct_UFunction_ULTToolData_ToggleAndGetListViewExpandStatus_Statics
{
	struct LTToolData_eventToggleAndGetListViewExpandStatus_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Light Functions" },
		{ "Comment", "//Functions\n" },
		{ "ModuleRelativePath", "Public/Data/LTToolData.h" },
		{ "ToolTip", "Functions" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ULTToolData_ToggleAndGetListViewExpandStatus_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LTToolData_eventToggleAndGetListViewExpandStatus_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULTToolData_ToggleAndGetListViewExpandStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LTToolData_eventToggleAndGetListViewExpandStatus_Parms), &Z_Construct_UFunction_ULTToolData_ToggleAndGetListViewExpandStatus_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULTToolData_ToggleAndGetListViewExpandStatus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTToolData_ToggleAndGetListViewExpandStatus_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTToolData_ToggleAndGetListViewExpandStatus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULTToolData_ToggleAndGetListViewExpandStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULTToolData, nullptr, "ToggleAndGetListViewExpandStatus", nullptr, nullptr, Z_Construct_UFunction_ULTToolData_ToggleAndGetListViewExpandStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULTToolData_ToggleAndGetListViewExpandStatus_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULTToolData_ToggleAndGetListViewExpandStatus_Statics::LTToolData_eventToggleAndGetListViewExpandStatus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTToolData_ToggleAndGetListViewExpandStatus_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULTToolData_ToggleAndGetListViewExpandStatus_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULTToolData_ToggleAndGetListViewExpandStatus_Statics::LTToolData_eventToggleAndGetListViewExpandStatus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULTToolData_ToggleAndGetListViewExpandStatus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULTToolData_ToggleAndGetListViewExpandStatus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULTToolData::execToggleAndGetListViewExpandStatus)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ToggleAndGetListViewExpandStatus();
	P_NATIVE_END;
}
// End Class ULTToolData Function ToggleAndGetListViewExpandStatus

// Begin Class ULTToolData
void ULTToolData::StaticRegisterNativesULTToolData()
{
	UClass* Class = ULTToolData::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DataParamChanged", &ULTToolData::execDataParamChanged },
		{ "SetIdealDensity", &ULTToolData::execSetIdealDensity },
		{ "SetMaxAllowedDensity", &ULTToolData::execSetMaxAllowedDensity },
		{ "SetMaxAllowedResolution", &ULTToolData::execSetMaxAllowedResolution },
		{ "ToggleAndGetListViewExpandStatus", &ULTToolData::execToggleAndGetListViewExpandStatus },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULTToolData);
UClass* Z_Construct_UClass_ULTToolData_NoRegister()
{
	return ULTToolData::StaticClass();
}
struct Z_Construct_UClass_ULTToolData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Data/LTToolData.h" },
		{ "ModuleRelativePath", "Public/Data/LTToolData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsInSceneMode_MetaData[] = {
		{ "Category", "Lighting Tool" },
		{ "ModuleRelativePath", "Public/Data/LTToolData.h" },
		{ "NoResetToDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IdealLightMapDensity_MetaData[] = {
		{ "Category", "Lighting Tool" },
		{ "ClampMax", "100.000000" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/Data/LTToolData.h" },
		{ "NoResetToDefault", "" },
		{ "UIMax", "100.000000" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxLightMapDensity_MetaData[] = {
		{ "Category", "Lighting Tool" },
		{ "ClampMax", "100.010002" },
		{ "ClampMin", "0.010000" },
		{ "ModuleRelativePath", "Public/Data/LTToolData.h" },
		{ "NoResetToDefault", "" },
		{ "UIMax", "100.010002" },
		{ "UIMin", "0.010000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsAutoLightmapEnabled_MetaData[] = {
		{ "Category", "Lighting Tool" },
		{ "ModuleRelativePath", "Public/Data/LTToolData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastLightmapDensity_MetaData[] = {
		{ "Category", "Lighting Tool" },
		{ "ModuleRelativePath", "Public/Data/LTToolData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightmapPreset_MetaData[] = {
		{ "Category", "Lighting Tool" },
		{ "ModuleRelativePath", "Public/Data/LTToolData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InfiniteExtent_MetaData[] = {
		{ "Category", "Lighting Tool" },
		{ "ModuleRelativePath", "Public/Data/LTToolData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GradientDensity_MetaData[] = {
		{ "Category", "Lighting Tool" },
		{ "ModuleRelativePath", "Public/Data/LTToolData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DensityType_MetaData[] = {
		{ "Category", "Lighting Tool" },
		{ "ModuleRelativePath", "Public/Data/LTToolData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxAllowedResolution_MetaData[] = {
		{ "Category", "Lighting Tool" },
		{ "ClampMax", "4096" },
		{ "ClampMin", "4" },
		{ "ModuleRelativePath", "Public/Data/LTToolData.h" },
		{ "NoResetToDefault", "" },
		{ "UIMax", "4096" },
		{ "UIMin", "4" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsListViewExpanded_MetaData[] = {
		{ "Category", "Lighting Tool" },
		{ "ModuleRelativePath", "Public/Data/LTToolData.h" },
		{ "NoResetToDefault", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsInSceneMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInSceneMode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_IdealLightMapDensity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxLightMapDensity;
	static void NewProp_IsAutoLightmapEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsAutoLightmapEnabled;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LastLightmapDensity;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LightmapPreset_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LightmapPreset;
	static void NewProp_InfiniteExtent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InfiniteExtent;
	static void NewProp_GradientDensity_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_GradientDensity;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DensityType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxAllowedResolution;
	static void NewProp_bIsListViewExpanded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsListViewExpanded;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULTToolData_DataParamChanged, "DataParamChanged" }, // 2610341286
		{ &Z_Construct_UFunction_ULTToolData_SetIdealDensity, "SetIdealDensity" }, // 3761248871
		{ &Z_Construct_UFunction_ULTToolData_SetMaxAllowedDensity, "SetMaxAllowedDensity" }, // 2809771051
		{ &Z_Construct_UFunction_ULTToolData_SetMaxAllowedResolution, "SetMaxAllowedResolution" }, // 4273042953
		{ &Z_Construct_UFunction_ULTToolData_ToggleAndGetListViewExpandStatus, "ToggleAndGetListViewExpandStatus" }, // 2786980276
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULTToolData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_ULTToolData_Statics::NewProp_bIsInSceneMode_SetBit(void* Obj)
{
	((ULTToolData*)Obj)->bIsInSceneMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULTToolData_Statics::NewProp_bIsInSceneMode = { "bIsInSceneMode", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULTToolData), &Z_Construct_UClass_ULTToolData_Statics::NewProp_bIsInSceneMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsInSceneMode_MetaData), NewProp_bIsInSceneMode_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULTToolData_Statics::NewProp_IdealLightMapDensity = { "IdealLightMapDensity", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULTToolData, IdealLightMapDensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IdealLightMapDensity_MetaData), NewProp_IdealLightMapDensity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULTToolData_Statics::NewProp_MaxLightMapDensity = { "MaxLightMapDensity", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULTToolData, MaxLightMapDensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxLightMapDensity_MetaData), NewProp_MaxLightMapDensity_MetaData) };
void Z_Construct_UClass_ULTToolData_Statics::NewProp_IsAutoLightmapEnabled_SetBit(void* Obj)
{
	((ULTToolData*)Obj)->IsAutoLightmapEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULTToolData_Statics::NewProp_IsAutoLightmapEnabled = { "IsAutoLightmapEnabled", nullptr, (EPropertyFlags)0x0010000000004004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULTToolData), &Z_Construct_UClass_ULTToolData_Statics::NewProp_IsAutoLightmapEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsAutoLightmapEnabled_MetaData), NewProp_IsAutoLightmapEnabled_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULTToolData_Statics::NewProp_LastLightmapDensity = { "LastLightmapDensity", nullptr, (EPropertyFlags)0x0010000000004004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULTToolData, LastLightmapDensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastLightmapDensity_MetaData), NewProp_LastLightmapDensity_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULTToolData_Statics::NewProp_LightmapPreset_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULTToolData_Statics::NewProp_LightmapPreset = { "LightmapPreset", nullptr, (EPropertyFlags)0x0010000000004004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULTToolData, LightmapPreset), Z_Construct_UEnum_LightingTool_ELTLightmapPreset, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightmapPreset_MetaData), NewProp_LightmapPreset_MetaData) }; // 2643897577
void Z_Construct_UClass_ULTToolData_Statics::NewProp_InfiniteExtent_SetBit(void* Obj)
{
	((ULTToolData*)Obj)->InfiniteExtent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULTToolData_Statics::NewProp_InfiniteExtent = { "InfiniteExtent", nullptr, (EPropertyFlags)0x0010000000004004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULTToolData), &Z_Construct_UClass_ULTToolData_Statics::NewProp_InfiniteExtent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InfiniteExtent_MetaData), NewProp_InfiniteExtent_MetaData) };
void Z_Construct_UClass_ULTToolData_Statics::NewProp_GradientDensity_SetBit(void* Obj)
{
	((ULTToolData*)Obj)->GradientDensity = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULTToolData_Statics::NewProp_GradientDensity = { "GradientDensity", nullptr, (EPropertyFlags)0x0010000000004004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULTToolData), &Z_Construct_UClass_ULTToolData_Statics::NewProp_GradientDensity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GradientDensity_MetaData), NewProp_GradientDensity_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ULTToolData_Statics::NewProp_DensityType = { "DensityType", nullptr, (EPropertyFlags)0x0010000000004004, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULTToolData, DensityType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DensityType_MetaData), NewProp_DensityType_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULTToolData_Statics::NewProp_MaxAllowedResolution = { "MaxAllowedResolution", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULTToolData, MaxAllowedResolution), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxAllowedResolution_MetaData), NewProp_MaxAllowedResolution_MetaData) };
void Z_Construct_UClass_ULTToolData_Statics::NewProp_bIsListViewExpanded_SetBit(void* Obj)
{
	((ULTToolData*)Obj)->bIsListViewExpanded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULTToolData_Statics::NewProp_bIsListViewExpanded = { "bIsListViewExpanded", nullptr, (EPropertyFlags)0x0010000000004004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULTToolData), &Z_Construct_UClass_ULTToolData_Statics::NewProp_bIsListViewExpanded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsListViewExpanded_MetaData), NewProp_bIsListViewExpanded_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULTToolData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULTToolData_Statics::NewProp_bIsInSceneMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULTToolData_Statics::NewProp_IdealLightMapDensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULTToolData_Statics::NewProp_MaxLightMapDensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULTToolData_Statics::NewProp_IsAutoLightmapEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULTToolData_Statics::NewProp_LastLightmapDensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULTToolData_Statics::NewProp_LightmapPreset_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULTToolData_Statics::NewProp_LightmapPreset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULTToolData_Statics::NewProp_InfiniteExtent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULTToolData_Statics::NewProp_GradientDensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULTToolData_Statics::NewProp_DensityType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULTToolData_Statics::NewProp_MaxAllowedResolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULTToolData_Statics::NewProp_bIsListViewExpanded,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULTToolData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULTToolData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_LightingTool,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULTToolData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULTToolData_Statics::ClassParams = {
	&ULTToolData::StaticClass,
	"LightMapToolSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULTToolData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULTToolData_Statics::PropPointers),
	0,
	0x001000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULTToolData_Statics::Class_MetaDataParams), Z_Construct_UClass_ULTToolData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULTToolData()
{
	if (!Z_Registration_Info_UClass_ULTToolData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULTToolData.OuterSingleton, Z_Construct_UClass_ULTToolData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULTToolData.OuterSingleton;
}
template<> LIGHTINGTOOL_API UClass* StaticClass<ULTToolData>()
{
	return ULTToolData::StaticClass();
}
ULTToolData::ULTToolData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULTToolData);
ULTToolData::~ULTToolData() {}
// End Class ULTToolData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_Data_LTToolData_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULTToolData, ULTToolData::StaticClass, TEXT("ULTToolData"), &Z_Registration_Info_UClass_ULTToolData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULTToolData), 49465457U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_Data_LTToolData_h_2043495091(TEXT("/Script/LightingTool"),
	Z_CompiledInDeferFile_FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_Data_LTToolData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_Data_LTToolData_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
