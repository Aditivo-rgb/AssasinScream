// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LightingTool/Public/Data/LTLightSpecObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLTLightSpecObject() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
LIGHTINGTOOL_API UClass* Z_Construct_UClass_ULTLightSpecObject();
LIGHTINGTOOL_API UClass* Z_Construct_UClass_ULTLightSpecObject_NoRegister();
LIGHTINGTOOL_API UEnum* Z_Construct_UEnum_LightingTool_ELTLightType();
UPackage* Z_Construct_UPackage__Script_LightingTool();
// End Cross Module References

// Begin Class ULTLightSpecObject Function GetUserIESProfilePath
struct Z_Construct_UFunction_ULTLightSpecObject_GetUserIESProfilePath_Statics
{
	struct LTLightSpecObject_eventGetUserIESProfilePath_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lighting Tool" },
		{ "ModuleRelativePath", "Public/Data/LTLightSpecObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULTLightSpecObject_GetUserIESProfilePath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LTLightSpecObject_eventGetUserIESProfilePath_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULTLightSpecObject_GetUserIESProfilePath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTLightSpecObject_GetUserIESProfilePath_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTLightSpecObject_GetUserIESProfilePath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULTLightSpecObject_GetUserIESProfilePath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULTLightSpecObject, nullptr, "GetUserIESProfilePath", nullptr, nullptr, Z_Construct_UFunction_ULTLightSpecObject_GetUserIESProfilePath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULTLightSpecObject_GetUserIESProfilePath_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULTLightSpecObject_GetUserIESProfilePath_Statics::LTLightSpecObject_eventGetUserIESProfilePath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTLightSpecObject_GetUserIESProfilePath_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULTLightSpecObject_GetUserIESProfilePath_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULTLightSpecObject_GetUserIESProfilePath_Statics::LTLightSpecObject_eventGetUserIESProfilePath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULTLightSpecObject_GetUserIESProfilePath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULTLightSpecObject_GetUserIESProfilePath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULTLightSpecObject::execGetUserIESProfilePath)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetUserIESProfilePath();
	P_NATIVE_END;
}
// End Class ULTLightSpecObject Function GetUserIESProfilePath

// Begin Class ULTLightSpecObject Function GetUserMaskPath
struct Z_Construct_UFunction_ULTLightSpecObject_GetUserMaskPath_Statics
{
	struct LTLightSpecObject_eventGetUserMaskPath_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lighting Tool" },
		{ "Comment", "/*** Getters and Setters ***/" },
		{ "ModuleRelativePath", "Public/Data/LTLightSpecObject.h" },
		{ "ToolTip", "Getters and Setters **" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULTLightSpecObject_GetUserMaskPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LTLightSpecObject_eventGetUserMaskPath_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULTLightSpecObject_GetUserMaskPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTLightSpecObject_GetUserMaskPath_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTLightSpecObject_GetUserMaskPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULTLightSpecObject_GetUserMaskPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULTLightSpecObject, nullptr, "GetUserMaskPath", nullptr, nullptr, Z_Construct_UFunction_ULTLightSpecObject_GetUserMaskPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULTLightSpecObject_GetUserMaskPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULTLightSpecObject_GetUserMaskPath_Statics::LTLightSpecObject_eventGetUserMaskPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTLightSpecObject_GetUserMaskPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULTLightSpecObject_GetUserMaskPath_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULTLightSpecObject_GetUserMaskPath_Statics::LTLightSpecObject_eventGetUserMaskPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULTLightSpecObject_GetUserMaskPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULTLightSpecObject_GetUserMaskPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULTLightSpecObject::execGetUserMaskPath)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetUserMaskPath();
	P_NATIVE_END;
}
// End Class ULTLightSpecObject Function GetUserMaskPath

// Begin Class ULTLightSpecObject Function LoadLightSpecData
struct Z_Construct_UFunction_ULTLightSpecObject_LoadLightSpecData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lighting Tool" },
		{ "ModuleRelativePath", "Public/Data/LTLightSpecObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULTLightSpecObject_LoadLightSpecData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULTLightSpecObject, nullptr, "LoadLightSpecData", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTLightSpecObject_LoadLightSpecData_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULTLightSpecObject_LoadLightSpecData_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ULTLightSpecObject_LoadLightSpecData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULTLightSpecObject_LoadLightSpecData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULTLightSpecObject::execLoadLightSpecData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoadLightSpecData();
	P_NATIVE_END;
}
// End Class ULTLightSpecObject Function LoadLightSpecData

// Begin Class ULTLightSpecObject Function SaveLightSpecData
struct Z_Construct_UFunction_ULTLightSpecObject_SaveLightSpecData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lighting Tool" },
		{ "Comment", "/*** Save and Load Data ***/" },
		{ "ModuleRelativePath", "Public/Data/LTLightSpecObject.h" },
		{ "ToolTip", "Save and Load Data **" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULTLightSpecObject_SaveLightSpecData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULTLightSpecObject, nullptr, "SaveLightSpecData", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTLightSpecObject_SaveLightSpecData_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULTLightSpecObject_SaveLightSpecData_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ULTLightSpecObject_SaveLightSpecData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULTLightSpecObject_SaveLightSpecData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULTLightSpecObject::execSaveLightSpecData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SaveLightSpecData();
	P_NATIVE_END;
}
// End Class ULTLightSpecObject Function SaveLightSpecData

// Begin Class ULTLightSpecObject Function SetUserIESProfilePath
struct Z_Construct_UFunction_ULTLightSpecObject_SetUserIESProfilePath_Statics
{
	struct LTLightSpecObject_eventSetUserIESProfilePath_Parms
	{
		FString InPath;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lighting Tool" },
		{ "ModuleRelativePath", "Public/Data/LTLightSpecObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InPath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULTLightSpecObject_SetUserIESProfilePath_Statics::NewProp_InPath = { "InPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LTLightSpecObject_eventSetUserIESProfilePath_Parms, InPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPath_MetaData), NewProp_InPath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULTLightSpecObject_SetUserIESProfilePath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTLightSpecObject_SetUserIESProfilePath_Statics::NewProp_InPath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTLightSpecObject_SetUserIESProfilePath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULTLightSpecObject_SetUserIESProfilePath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULTLightSpecObject, nullptr, "SetUserIESProfilePath", nullptr, nullptr, Z_Construct_UFunction_ULTLightSpecObject_SetUserIESProfilePath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULTLightSpecObject_SetUserIESProfilePath_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULTLightSpecObject_SetUserIESProfilePath_Statics::LTLightSpecObject_eventSetUserIESProfilePath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTLightSpecObject_SetUserIESProfilePath_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULTLightSpecObject_SetUserIESProfilePath_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULTLightSpecObject_SetUserIESProfilePath_Statics::LTLightSpecObject_eventSetUserIESProfilePath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULTLightSpecObject_SetUserIESProfilePath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULTLightSpecObject_SetUserIESProfilePath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULTLightSpecObject::execSetUserIESProfilePath)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetUserIESProfilePath(Z_Param_InPath);
	P_NATIVE_END;
}
// End Class ULTLightSpecObject Function SetUserIESProfilePath

// Begin Class ULTLightSpecObject Function SetUserMaskPath
struct Z_Construct_UFunction_ULTLightSpecObject_SetUserMaskPath_Statics
{
	struct LTLightSpecObject_eventSetUserMaskPath_Parms
	{
		FString InPath;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lighting Tool" },
		{ "ModuleRelativePath", "Public/Data/LTLightSpecObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InPath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULTLightSpecObject_SetUserMaskPath_Statics::NewProp_InPath = { "InPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LTLightSpecObject_eventSetUserMaskPath_Parms, InPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPath_MetaData), NewProp_InPath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULTLightSpecObject_SetUserMaskPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTLightSpecObject_SetUserMaskPath_Statics::NewProp_InPath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTLightSpecObject_SetUserMaskPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULTLightSpecObject_SetUserMaskPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULTLightSpecObject, nullptr, "SetUserMaskPath", nullptr, nullptr, Z_Construct_UFunction_ULTLightSpecObject_SetUserMaskPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULTLightSpecObject_SetUserMaskPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULTLightSpecObject_SetUserMaskPath_Statics::LTLightSpecObject_eventSetUserMaskPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTLightSpecObject_SetUserMaskPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULTLightSpecObject_SetUserMaskPath_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULTLightSpecObject_SetUserMaskPath_Statics::LTLightSpecObject_eventSetUserMaskPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULTLightSpecObject_SetUserMaskPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULTLightSpecObject_SetUserMaskPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULTLightSpecObject::execSetUserMaskPath)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetUserMaskPath(Z_Param_InPath);
	P_NATIVE_END;
}
// End Class ULTLightSpecObject Function SetUserMaskPath

// Begin Class ULTLightSpecObject
void ULTLightSpecObject::StaticRegisterNativesULTLightSpecObject()
{
	UClass* Class = ULTLightSpecObject::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetUserIESProfilePath", &ULTLightSpecObject::execGetUserIESProfilePath },
		{ "GetUserMaskPath", &ULTLightSpecObject::execGetUserMaskPath },
		{ "LoadLightSpecData", &ULTLightSpecObject::execLoadLightSpecData },
		{ "SaveLightSpecData", &ULTLightSpecObject::execSaveLightSpecData },
		{ "SetUserIESProfilePath", &ULTLightSpecObject::execSetUserIESProfilePath },
		{ "SetUserMaskPath", &ULTLightSpecObject::execSetUserMaskPath },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULTLightSpecObject);
UClass* Z_Construct_UClass_ULTLightSpecObject_NoRegister()
{
	return ULTLightSpecObject::StaticClass();
}
struct Z_Construct_UClass_ULTLightSpecObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Data/LTLightSpecObject.h" },
		{ "ModuleRelativePath", "Public/Data/LTLightSpecObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnable_MetaData[] = {
		{ "Category", "Light Settings" },
		{ "DisplayName", "Enable" },
		{ "ModuleRelativePath", "Public/Data/LTLightSpecObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Brightness_MetaData[] = {
		{ "Category", "Light Settings" },
		{ "ModuleRelativePath", "Public/Data/LTLightSpecObject.h" },
		{ "UIMax", "160" },
		{ "UIMin", "0" },
		{ "Units", "cd" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "Category", "Light Settings" },
		{ "ModuleRelativePath", "Public/Data/LTLightSpecObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FunctionType_MetaData[] = {
		{ "Category", "Light Settings" },
		{ "ModuleRelativePath", "Public/Data/LTLightSpecObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[] = {
		{ "Category", "Light Function" },
		{ "EditCondition", "FunctionType != ELTLightType::None && FunctionType != ELTLightType::Standard" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Data/LTLightSpecObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomInitialOffset_MetaData[] = {
		{ "Category", "Light Function" },
		{ "EditCondition", "FunctionType != ELTLightType::None && FunctionType != ELTLightType::Standard" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Data/LTLightSpecObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseSeed_MetaData[] = {
		{ "Category", "Light Function" },
		{ "EditCondition", "FunctionType != ELTLightType::None && FunctionType != ELTLightType::Standard && RandomInitialOffset" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Data/LTLightSpecObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Seed_MetaData[] = {
		{ "Category", "Light Function" },
		{ "EditCondition", "FunctionType != ELTLightType::None && FunctionType != ELTLightType::Standard && RandomInitialOffset && UseSeed" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Data/LTLightSpecObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserMaskPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/LTLightSpecObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserIESProfilePath_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/LTLightSpecObject.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Brightness;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FunctionType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FunctionType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
	static void NewProp_RandomInitialOffset_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_RandomInitialOffset;
	static void NewProp_UseSeed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseSeed;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Seed;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserMaskPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserIESProfilePath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULTLightSpecObject_GetUserIESProfilePath, "GetUserIESProfilePath" }, // 1278385876
		{ &Z_Construct_UFunction_ULTLightSpecObject_GetUserMaskPath, "GetUserMaskPath" }, // 317810992
		{ &Z_Construct_UFunction_ULTLightSpecObject_LoadLightSpecData, "LoadLightSpecData" }, // 1900820212
		{ &Z_Construct_UFunction_ULTLightSpecObject_SaveLightSpecData, "SaveLightSpecData" }, // 1398883752
		{ &Z_Construct_UFunction_ULTLightSpecObject_SetUserIESProfilePath, "SetUserIESProfilePath" }, // 3397849444
		{ &Z_Construct_UFunction_ULTLightSpecObject_SetUserMaskPath, "SetUserMaskPath" }, // 2349776710
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULTLightSpecObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_ULTLightSpecObject_Statics::NewProp_bEnable_SetBit(void* Obj)
{
	((ULTLightSpecObject*)Obj)->bEnable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULTLightSpecObject_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULTLightSpecObject), &Z_Construct_UClass_ULTLightSpecObject_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnable_MetaData), NewProp_bEnable_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULTLightSpecObject_Statics::NewProp_Brightness = { "Brightness", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULTLightSpecObject, Brightness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Brightness_MetaData), NewProp_Brightness_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULTLightSpecObject_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULTLightSpecObject, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULTLightSpecObject_Statics::NewProp_FunctionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULTLightSpecObject_Statics::NewProp_FunctionType = { "FunctionType", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULTLightSpecObject, FunctionType), Z_Construct_UEnum_LightingTool_ELTLightType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FunctionType_MetaData), NewProp_FunctionType_MetaData) }; // 613157306
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULTLightSpecObject_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULTLightSpecObject, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Speed_MetaData), NewProp_Speed_MetaData) };
void Z_Construct_UClass_ULTLightSpecObject_Statics::NewProp_RandomInitialOffset_SetBit(void* Obj)
{
	((ULTLightSpecObject*)Obj)->RandomInitialOffset = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULTLightSpecObject_Statics::NewProp_RandomInitialOffset = { "RandomInitialOffset", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULTLightSpecObject), &Z_Construct_UClass_ULTLightSpecObject_Statics::NewProp_RandomInitialOffset_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomInitialOffset_MetaData), NewProp_RandomInitialOffset_MetaData) };
void Z_Construct_UClass_ULTLightSpecObject_Statics::NewProp_UseSeed_SetBit(void* Obj)
{
	((ULTLightSpecObject*)Obj)->UseSeed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULTLightSpecObject_Statics::NewProp_UseSeed = { "UseSeed", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULTLightSpecObject), &Z_Construct_UClass_ULTLightSpecObject_Statics::NewProp_UseSeed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseSeed_MetaData), NewProp_UseSeed_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULTLightSpecObject_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULTLightSpecObject, Seed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Seed_MetaData), NewProp_Seed_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULTLightSpecObject_Statics::NewProp_UserMaskPath = { "UserMaskPath", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULTLightSpecObject, UserMaskPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserMaskPath_MetaData), NewProp_UserMaskPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULTLightSpecObject_Statics::NewProp_UserIESProfilePath = { "UserIESProfilePath", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULTLightSpecObject, UserIESProfilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserIESProfilePath_MetaData), NewProp_UserIESProfilePath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULTLightSpecObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULTLightSpecObject_Statics::NewProp_bEnable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULTLightSpecObject_Statics::NewProp_Brightness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULTLightSpecObject_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULTLightSpecObject_Statics::NewProp_FunctionType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULTLightSpecObject_Statics::NewProp_FunctionType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULTLightSpecObject_Statics::NewProp_Speed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULTLightSpecObject_Statics::NewProp_RandomInitialOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULTLightSpecObject_Statics::NewProp_UseSeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULTLightSpecObject_Statics::NewProp_Seed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULTLightSpecObject_Statics::NewProp_UserMaskPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULTLightSpecObject_Statics::NewProp_UserIESProfilePath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULTLightSpecObject_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULTLightSpecObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_LightingTool,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULTLightSpecObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULTLightSpecObject_Statics::ClassParams = {
	&ULTLightSpecObject::StaticClass,
	"LightsToolData",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULTLightSpecObject_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULTLightSpecObject_Statics::PropPointers),
	0,
	0x001000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULTLightSpecObject_Statics::Class_MetaDataParams), Z_Construct_UClass_ULTLightSpecObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULTLightSpecObject()
{
	if (!Z_Registration_Info_UClass_ULTLightSpecObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULTLightSpecObject.OuterSingleton, Z_Construct_UClass_ULTLightSpecObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULTLightSpecObject.OuterSingleton;
}
template<> LIGHTINGTOOL_API UClass* StaticClass<ULTLightSpecObject>()
{
	return ULTLightSpecObject::StaticClass();
}
ULTLightSpecObject::ULTLightSpecObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULTLightSpecObject);
ULTLightSpecObject::~ULTLightSpecObject() {}
// End Class ULTLightSpecObject

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_Data_LTLightSpecObject_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULTLightSpecObject, ULTLightSpecObject::StaticClass, TEXT("ULTLightSpecObject"), &Z_Registration_Info_UClass_ULTLightSpecObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULTLightSpecObject), 366465448U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_Data_LTLightSpecObject_h_2916320935(TEXT("/Script/LightingTool"),
	Z_CompiledInDeferFile_FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_Data_LTLightSpecObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_Data_LTLightSpecObject_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
