// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LightingTool/Public/Data/LTToolSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLTToolSubsystem() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
EDITORSUBSYSTEM_API UClass* Z_Construct_UClass_UEditorSubsystem();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
LIGHTINGTOOL_API UClass* Z_Construct_UClass_ULTToolData_NoRegister();
LIGHTINGTOOL_API UClass* Z_Construct_UClass_ULTToolSubsystem();
LIGHTINGTOOL_API UClass* Z_Construct_UClass_ULTToolSubsystem_NoRegister();
LIGHTINGTOOL_API UEnum* Z_Construct_UEnum_LightingTool_ELTLightingToolType();
LIGHTINGTOOL_API UFunction* Z_Construct_UDelegateFunction_LightingTool_ObjectSelectionChangedSignature__DelegateSignature();
LIGHTINGTOOL_API UFunction* Z_Construct_UDelegateFunction_LightingTool_OnActorDroppedSignature__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_LightingTool();
// End Cross Module References

// Begin Delegate FObjectSelectionChangedSignature
struct Z_Construct_UDelegateFunction_LightingTool_ObjectSelectionChangedSignature__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Data/LTToolSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LightingTool_ObjectSelectionChangedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LightingTool, nullptr, "ObjectSelectionChangedSignature__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LightingTool_ObjectSelectionChangedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LightingTool_ObjectSelectionChangedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_LightingTool_ObjectSelectionChangedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LightingTool_ObjectSelectionChangedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FObjectSelectionChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& ObjectSelectionChangedSignature)
{
	ObjectSelectionChangedSignature.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FObjectSelectionChangedSignature

// Begin Delegate FOnActorDroppedSignature
struct Z_Construct_UDelegateFunction_LightingTool_OnActorDroppedSignature__DelegateSignature_Statics
{
	struct _Script_LightingTool_eventOnActorDroppedSignature_Parms
	{
		AActor* OutActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Data/LTToolSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_LightingTool_OnActorDroppedSignature__DelegateSignature_Statics::NewProp_OutActor = { "OutActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LightingTool_eventOnActorDroppedSignature_Parms, OutActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LightingTool_OnActorDroppedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LightingTool_OnActorDroppedSignature__DelegateSignature_Statics::NewProp_OutActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LightingTool_OnActorDroppedSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LightingTool_OnActorDroppedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LightingTool, nullptr, "OnActorDroppedSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LightingTool_OnActorDroppedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LightingTool_OnActorDroppedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LightingTool_OnActorDroppedSignature__DelegateSignature_Statics::_Script_LightingTool_eventOnActorDroppedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LightingTool_OnActorDroppedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LightingTool_OnActorDroppedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_LightingTool_OnActorDroppedSignature__DelegateSignature_Statics::_Script_LightingTool_eventOnActorDroppedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_LightingTool_OnActorDroppedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LightingTool_OnActorDroppedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnActorDroppedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnActorDroppedSignature, AActor* OutActor)
{
	struct _Script_LightingTool_eventOnActorDroppedSignature_Parms
	{
		AActor* OutActor;
	};
	_Script_LightingTool_eventOnActorDroppedSignature_Parms Parms;
	Parms.OutActor=OutActor;
	OnActorDroppedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnActorDroppedSignature

// Begin Class ULTToolSubsystem Function AddLightByDrag
struct Z_Construct_UFunction_ULTToolSubsystem_AddLightByDrag_Statics
{
	struct LTToolSubsystem_eventAddLightByDrag_Parms
	{
		TSubclassOf<AActor> InLightClass;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LightingTool|Lightmap" },
		{ "ModuleRelativePath", "Public/Data/LTToolSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_InLightClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULTToolSubsystem_AddLightByDrag_Statics::NewProp_InLightClass = { "InLightClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LTToolSubsystem_eventAddLightByDrag_Parms, InLightClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULTToolSubsystem_AddLightByDrag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTToolSubsystem_AddLightByDrag_Statics::NewProp_InLightClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTToolSubsystem_AddLightByDrag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULTToolSubsystem_AddLightByDrag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULTToolSubsystem, nullptr, "AddLightByDrag", nullptr, nullptr, Z_Construct_UFunction_ULTToolSubsystem_AddLightByDrag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULTToolSubsystem_AddLightByDrag_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULTToolSubsystem_AddLightByDrag_Statics::LTToolSubsystem_eventAddLightByDrag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTToolSubsystem_AddLightByDrag_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULTToolSubsystem_AddLightByDrag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULTToolSubsystem_AddLightByDrag_Statics::LTToolSubsystem_eventAddLightByDrag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULTToolSubsystem_AddLightByDrag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULTToolSubsystem_AddLightByDrag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULTToolSubsystem::execAddLightByDrag)
{
	P_GET_OBJECT(UClass,Z_Param_InLightClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddLightByDrag(Z_Param_InLightClass);
	P_NATIVE_END;
}
// End Class ULTToolSubsystem Function AddLightByDrag

// Begin Class ULTToolSubsystem Function AddLightmapVolumeManually
struct Z_Construct_UFunction_ULTToolSubsystem_AddLightmapVolumeManually_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LightingTool|Lightmap" },
		{ "ModuleRelativePath", "Public/Data/LTToolSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULTToolSubsystem_AddLightmapVolumeManually_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULTToolSubsystem, nullptr, "AddLightmapVolumeManually", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTToolSubsystem_AddLightmapVolumeManually_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULTToolSubsystem_AddLightmapVolumeManually_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ULTToolSubsystem_AddLightmapVolumeManually()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULTToolSubsystem_AddLightmapVolumeManually_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULTToolSubsystem::execAddLightmapVolumeManually)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddLightmapVolumeManually();
	P_NATIVE_END;
}
// End Class ULTToolSubsystem Function AddLightmapVolumeManually

// Begin Class ULTToolSubsystem Function DisableAllResolutionOverrides
struct Z_Construct_UFunction_ULTToolSubsystem_DisableAllResolutionOverrides_Statics
{
	struct LTToolSubsystem_eventDisableAllResolutionOverrides_Parms
	{
		bool bIsInInfiniteMode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LightingTool|Lightmap" },
		{ "ModuleRelativePath", "Public/Data/LTToolSubsystem.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsInInfiniteMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInInfiniteMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ULTToolSubsystem_DisableAllResolutionOverrides_Statics::NewProp_bIsInInfiniteMode_SetBit(void* Obj)
{
	((LTToolSubsystem_eventDisableAllResolutionOverrides_Parms*)Obj)->bIsInInfiniteMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULTToolSubsystem_DisableAllResolutionOverrides_Statics::NewProp_bIsInInfiniteMode = { "bIsInInfiniteMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LTToolSubsystem_eventDisableAllResolutionOverrides_Parms), &Z_Construct_UFunction_ULTToolSubsystem_DisableAllResolutionOverrides_Statics::NewProp_bIsInInfiniteMode_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULTToolSubsystem_DisableAllResolutionOverrides_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTToolSubsystem_DisableAllResolutionOverrides_Statics::NewProp_bIsInInfiniteMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTToolSubsystem_DisableAllResolutionOverrides_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULTToolSubsystem_DisableAllResolutionOverrides_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULTToolSubsystem, nullptr, "DisableAllResolutionOverrides", nullptr, nullptr, Z_Construct_UFunction_ULTToolSubsystem_DisableAllResolutionOverrides_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULTToolSubsystem_DisableAllResolutionOverrides_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULTToolSubsystem_DisableAllResolutionOverrides_Statics::LTToolSubsystem_eventDisableAllResolutionOverrides_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTToolSubsystem_DisableAllResolutionOverrides_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULTToolSubsystem_DisableAllResolutionOverrides_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULTToolSubsystem_DisableAllResolutionOverrides_Statics::LTToolSubsystem_eventDisableAllResolutionOverrides_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULTToolSubsystem_DisableAllResolutionOverrides()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULTToolSubsystem_DisableAllResolutionOverrides_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULTToolSubsystem::execDisableAllResolutionOverrides)
{
	P_GET_UBOOL(Z_Param_bIsInInfiniteMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DisableAllResolutionOverrides(Z_Param_bIsInInfiniteMode);
	P_NATIVE_END;
}
// End Class ULTToolSubsystem Function DisableAllResolutionOverrides

// Begin Class ULTToolSubsystem Function GenerateLightmapResolutions
struct Z_Construct_UFunction_ULTToolSubsystem_GenerateLightmapResolutions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LightingTool|Lightmap" },
		{ "ModuleRelativePath", "Public/Data/LTToolSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULTToolSubsystem_GenerateLightmapResolutions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULTToolSubsystem, nullptr, "GenerateLightmapResolutions", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTToolSubsystem_GenerateLightmapResolutions_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULTToolSubsystem_GenerateLightmapResolutions_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ULTToolSubsystem_GenerateLightmapResolutions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULTToolSubsystem_GenerateLightmapResolutions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULTToolSubsystem::execGenerateLightmapResolutions)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GenerateLightmapResolutions();
	P_NATIVE_END;
}
// End Class ULTToolSubsystem Function GenerateLightmapResolutions

// Begin Class ULTToolSubsystem Function GenerateLightmapResolutionsForAssets
struct Z_Construct_UFunction_ULTToolSubsystem_GenerateLightmapResolutionsForAssets_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LightingTool|Lightmap" },
		{ "ModuleRelativePath", "Public/Data/LTToolSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULTToolSubsystem_GenerateLightmapResolutionsForAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULTToolSubsystem, nullptr, "GenerateLightmapResolutionsForAssets", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTToolSubsystem_GenerateLightmapResolutionsForAssets_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULTToolSubsystem_GenerateLightmapResolutionsForAssets_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ULTToolSubsystem_GenerateLightmapResolutionsForAssets()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULTToolSubsystem_GenerateLightmapResolutionsForAssets_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULTToolSubsystem::execGenerateLightmapResolutionsForAssets)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GenerateLightmapResolutionsForAssets();
	P_NATIVE_END;
}
// End Class ULTToolSubsystem Function GenerateLightmapResolutionsForAssets

// Begin Class ULTToolSubsystem Function GetLightingToolData
struct Z_Construct_UFunction_ULTToolSubsystem_GetLightingToolData_Statics
{
	struct LTToolSubsystem_eventGetLightingToolData_Parms
	{
		ULTToolData* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/Data/LTToolSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULTToolSubsystem_GetLightingToolData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LTToolSubsystem_eventGetLightingToolData_Parms, ReturnValue), Z_Construct_UClass_ULTToolData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULTToolSubsystem_GetLightingToolData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTToolSubsystem_GetLightingToolData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTToolSubsystem_GetLightingToolData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULTToolSubsystem_GetLightingToolData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULTToolSubsystem, nullptr, "GetLightingToolData", nullptr, nullptr, Z_Construct_UFunction_ULTToolSubsystem_GetLightingToolData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULTToolSubsystem_GetLightingToolData_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULTToolSubsystem_GetLightingToolData_Statics::LTToolSubsystem_eventGetLightingToolData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTToolSubsystem_GetLightingToolData_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULTToolSubsystem_GetLightingToolData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULTToolSubsystem_GetLightingToolData_Statics::LTToolSubsystem_eventGetLightingToolData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULTToolSubsystem_GetLightingToolData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULTToolSubsystem_GetLightingToolData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULTToolSubsystem::execGetLightingToolData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ULTToolData**)Z_Param__Result=P_THIS->GetLightingToolData();
	P_NATIVE_END;
}
// End Class ULTToolSubsystem Function GetLightingToolData

// Begin Class ULTToolSubsystem Function OnDropEventOccured
struct Z_Construct_UFunction_ULTToolSubsystem_OnDropEventOccured_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Data/LTToolSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULTToolSubsystem_OnDropEventOccured_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULTToolSubsystem, nullptr, "OnDropEventOccured", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTToolSubsystem_OnDropEventOccured_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULTToolSubsystem_OnDropEventOccured_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ULTToolSubsystem_OnDropEventOccured()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULTToolSubsystem_OnDropEventOccured_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULTToolSubsystem::execOnDropEventOccured)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDropEventOccured();
	P_NATIVE_END;
}
// End Class ULTToolSubsystem Function OnDropEventOccured

// Begin Class ULTToolSubsystem Function OverrideLightmapCoordinateIndex
struct Z_Construct_UFunction_ULTToolSubsystem_OverrideLightmapCoordinateIndex_Statics
{
	struct LTToolSubsystem_eventOverrideLightmapCoordinateIndex_Parms
	{
		int32 InIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LightingTool|Lightmap" },
		{ "ModuleRelativePath", "Public/Data/LTToolSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULTToolSubsystem_OverrideLightmapCoordinateIndex_Statics::NewProp_InIndex = { "InIndex", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LTToolSubsystem_eventOverrideLightmapCoordinateIndex_Parms, InIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InIndex_MetaData), NewProp_InIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULTToolSubsystem_OverrideLightmapCoordinateIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTToolSubsystem_OverrideLightmapCoordinateIndex_Statics::NewProp_InIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTToolSubsystem_OverrideLightmapCoordinateIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULTToolSubsystem_OverrideLightmapCoordinateIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULTToolSubsystem, nullptr, "OverrideLightmapCoordinateIndex", nullptr, nullptr, Z_Construct_UFunction_ULTToolSubsystem_OverrideLightmapCoordinateIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULTToolSubsystem_OverrideLightmapCoordinateIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULTToolSubsystem_OverrideLightmapCoordinateIndex_Statics::LTToolSubsystem_eventOverrideLightmapCoordinateIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTToolSubsystem_OverrideLightmapCoordinateIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULTToolSubsystem_OverrideLightmapCoordinateIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULTToolSubsystem_OverrideLightmapCoordinateIndex_Statics::LTToolSubsystem_eventOverrideLightmapCoordinateIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULTToolSubsystem_OverrideLightmapCoordinateIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULTToolSubsystem_OverrideLightmapCoordinateIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULTToolSubsystem::execOverrideLightmapCoordinateIndex)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_InIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OverrideLightmapCoordinateIndex(Z_Param_Out_InIndex);
	P_NATIVE_END;
}
// End Class ULTToolSubsystem Function OverrideLightmapCoordinateIndex

// Begin Class ULTToolSubsystem Function ResizeToolWindow
struct Z_Construct_UFunction_ULTToolSubsystem_ResizeToolWindow_Statics
{
	struct LTToolSubsystem_eventResizeToolWindow_Parms
	{
		ELTLightingToolType ToolType;
		FVector2D NewSize;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LightingTool|Lightmap" },
		{ "ModuleRelativePath", "Public/Data/LTToolSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewSize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ToolType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ToolType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULTToolSubsystem_ResizeToolWindow_Statics::NewProp_ToolType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULTToolSubsystem_ResizeToolWindow_Statics::NewProp_ToolType = { "ToolType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LTToolSubsystem_eventResizeToolWindow_Parms, ToolType), Z_Construct_UEnum_LightingTool_ELTLightingToolType, METADATA_PARAMS(0, nullptr) }; // 4169488727
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULTToolSubsystem_ResizeToolWindow_Statics::NewProp_NewSize = { "NewSize", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LTToolSubsystem_eventResizeToolWindow_Parms, NewSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewSize_MetaData), NewProp_NewSize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULTToolSubsystem_ResizeToolWindow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTToolSubsystem_ResizeToolWindow_Statics::NewProp_ToolType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTToolSubsystem_ResizeToolWindow_Statics::NewProp_ToolType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTToolSubsystem_ResizeToolWindow_Statics::NewProp_NewSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTToolSubsystem_ResizeToolWindow_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULTToolSubsystem_ResizeToolWindow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULTToolSubsystem, nullptr, "ResizeToolWindow", nullptr, nullptr, Z_Construct_UFunction_ULTToolSubsystem_ResizeToolWindow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULTToolSubsystem_ResizeToolWindow_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULTToolSubsystem_ResizeToolWindow_Statics::LTToolSubsystem_eventResizeToolWindow_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTToolSubsystem_ResizeToolWindow_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULTToolSubsystem_ResizeToolWindow_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULTToolSubsystem_ResizeToolWindow_Statics::LTToolSubsystem_eventResizeToolWindow_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULTToolSubsystem_ResizeToolWindow()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULTToolSubsystem_ResizeToolWindow_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULTToolSubsystem::execResizeToolWindow)
{
	P_GET_ENUM(ELTLightingToolType,Z_Param_ToolType);
	P_GET_STRUCT(FVector2D,Z_Param_NewSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResizeToolWindow(ELTLightingToolType(Z_Param_ToolType),Z_Param_NewSize);
	P_NATIVE_END;
}
// End Class ULTToolSubsystem Function ResizeToolWindow

// Begin Class ULTToolSubsystem Function SetupOnActorsDroppedEvent
struct Z_Construct_UFunction_ULTToolSubsystem_SetupOnActorsDroppedEvent_Statics
{
	struct LTToolSubsystem_eventSetupOnActorsDroppedEvent_Parms
	{
		TArray<UObject*> DroppedObjects;
		TArray<AActor*> DroppedActors;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Data/LTToolSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DroppedObjects_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DroppedActors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DroppedObjects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DroppedObjects;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DroppedActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DroppedActors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULTToolSubsystem_SetupOnActorsDroppedEvent_Statics::NewProp_DroppedObjects_Inner = { "DroppedObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULTToolSubsystem_SetupOnActorsDroppedEvent_Statics::NewProp_DroppedObjects = { "DroppedObjects", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LTToolSubsystem_eventSetupOnActorsDroppedEvent_Parms, DroppedObjects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DroppedObjects_MetaData), NewProp_DroppedObjects_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULTToolSubsystem_SetupOnActorsDroppedEvent_Statics::NewProp_DroppedActors_Inner = { "DroppedActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULTToolSubsystem_SetupOnActorsDroppedEvent_Statics::NewProp_DroppedActors = { "DroppedActors", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LTToolSubsystem_eventSetupOnActorsDroppedEvent_Parms, DroppedActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DroppedActors_MetaData), NewProp_DroppedActors_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULTToolSubsystem_SetupOnActorsDroppedEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTToolSubsystem_SetupOnActorsDroppedEvent_Statics::NewProp_DroppedObjects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTToolSubsystem_SetupOnActorsDroppedEvent_Statics::NewProp_DroppedObjects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTToolSubsystem_SetupOnActorsDroppedEvent_Statics::NewProp_DroppedActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTToolSubsystem_SetupOnActorsDroppedEvent_Statics::NewProp_DroppedActors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTToolSubsystem_SetupOnActorsDroppedEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULTToolSubsystem_SetupOnActorsDroppedEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULTToolSubsystem, nullptr, "SetupOnActorsDroppedEvent", nullptr, nullptr, Z_Construct_UFunction_ULTToolSubsystem_SetupOnActorsDroppedEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULTToolSubsystem_SetupOnActorsDroppedEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULTToolSubsystem_SetupOnActorsDroppedEvent_Statics::LTToolSubsystem_eventSetupOnActorsDroppedEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTToolSubsystem_SetupOnActorsDroppedEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULTToolSubsystem_SetupOnActorsDroppedEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULTToolSubsystem_SetupOnActorsDroppedEvent_Statics::LTToolSubsystem_eventSetupOnActorsDroppedEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULTToolSubsystem_SetupOnActorsDroppedEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULTToolSubsystem_SetupOnActorsDroppedEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULTToolSubsystem::execSetupOnActorsDroppedEvent)
{
	P_GET_TARRAY_REF(UObject*,Z_Param_Out_DroppedObjects);
	P_GET_TARRAY_REF(AActor*,Z_Param_Out_DroppedActors);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetupOnActorsDroppedEvent(Z_Param_Out_DroppedObjects,Z_Param_Out_DroppedActors);
	P_NATIVE_END;
}
// End Class ULTToolSubsystem Function SetupOnActorsDroppedEvent

// Begin Class ULTToolSubsystem
void ULTToolSubsystem::StaticRegisterNativesULTToolSubsystem()
{
	UClass* Class = ULTToolSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddLightByDrag", &ULTToolSubsystem::execAddLightByDrag },
		{ "AddLightmapVolumeManually", &ULTToolSubsystem::execAddLightmapVolumeManually },
		{ "DisableAllResolutionOverrides", &ULTToolSubsystem::execDisableAllResolutionOverrides },
		{ "GenerateLightmapResolutions", &ULTToolSubsystem::execGenerateLightmapResolutions },
		{ "GenerateLightmapResolutionsForAssets", &ULTToolSubsystem::execGenerateLightmapResolutionsForAssets },
		{ "GetLightingToolData", &ULTToolSubsystem::execGetLightingToolData },
		{ "OnDropEventOccured", &ULTToolSubsystem::execOnDropEventOccured },
		{ "OverrideLightmapCoordinateIndex", &ULTToolSubsystem::execOverrideLightmapCoordinateIndex },
		{ "ResizeToolWindow", &ULTToolSubsystem::execResizeToolWindow },
		{ "SetupOnActorsDroppedEvent", &ULTToolSubsystem::execSetupOnActorsDroppedEvent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULTToolSubsystem);
UClass* Z_Construct_UClass_ULTToolSubsystem_NoRegister()
{
	return ULTToolSubsystem::StaticClass();
}
struct Z_Construct_UClass_ULTToolSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Data/LTToolSubsystem.h" },
		{ "ModuleRelativePath", "Public/Data/LTToolSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LTToolData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/LTToolSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAssetSelectionChangedSignature_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/LTToolSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnActorSelectionChangedSignature_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/LTToolSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnActorDroppedSignature_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/LTToolSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IncludePluginHDRIs_MetaData[] = {
		{ "Category", "LightingTool|HDRI" },
		{ "ModuleRelativePath", "Public/Data/LTToolSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IncludeProjectHDRIs_MetaData[] = {
		{ "Category", "LightingTool|HDRI" },
		{ "ModuleRelativePath", "Public/Data/LTToolSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LTToolData;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAssetSelectionChangedSignature;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnActorSelectionChangedSignature;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnActorDroppedSignature;
	static void NewProp_IncludePluginHDRIs_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IncludePluginHDRIs;
	static void NewProp_IncludeProjectHDRIs_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IncludeProjectHDRIs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULTToolSubsystem_AddLightByDrag, "AddLightByDrag" }, // 2636347541
		{ &Z_Construct_UFunction_ULTToolSubsystem_AddLightmapVolumeManually, "AddLightmapVolumeManually" }, // 3300480083
		{ &Z_Construct_UFunction_ULTToolSubsystem_DisableAllResolutionOverrides, "DisableAllResolutionOverrides" }, // 3695207333
		{ &Z_Construct_UFunction_ULTToolSubsystem_GenerateLightmapResolutions, "GenerateLightmapResolutions" }, // 2142352813
		{ &Z_Construct_UFunction_ULTToolSubsystem_GenerateLightmapResolutionsForAssets, "GenerateLightmapResolutionsForAssets" }, // 2969080564
		{ &Z_Construct_UFunction_ULTToolSubsystem_GetLightingToolData, "GetLightingToolData" }, // 2606469139
		{ &Z_Construct_UFunction_ULTToolSubsystem_OnDropEventOccured, "OnDropEventOccured" }, // 59683778
		{ &Z_Construct_UFunction_ULTToolSubsystem_OverrideLightmapCoordinateIndex, "OverrideLightmapCoordinateIndex" }, // 3885907878
		{ &Z_Construct_UFunction_ULTToolSubsystem_ResizeToolWindow, "ResizeToolWindow" }, // 251142139
		{ &Z_Construct_UFunction_ULTToolSubsystem_SetupOnActorsDroppedEvent, "SetupOnActorsDroppedEvent" }, // 1616917452
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULTToolSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULTToolSubsystem_Statics::NewProp_LTToolData = { "LTToolData", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULTToolSubsystem, LTToolData), Z_Construct_UClass_ULTToolData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LTToolData_MetaData), NewProp_LTToolData_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULTToolSubsystem_Statics::NewProp_OnAssetSelectionChangedSignature = { "OnAssetSelectionChangedSignature", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULTToolSubsystem, OnAssetSelectionChangedSignature), Z_Construct_UDelegateFunction_LightingTool_ObjectSelectionChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAssetSelectionChangedSignature_MetaData), NewProp_OnAssetSelectionChangedSignature_MetaData) }; // 1578432834
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULTToolSubsystem_Statics::NewProp_OnActorSelectionChangedSignature = { "OnActorSelectionChangedSignature", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULTToolSubsystem, OnActorSelectionChangedSignature), Z_Construct_UDelegateFunction_LightingTool_ObjectSelectionChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnActorSelectionChangedSignature_MetaData), NewProp_OnActorSelectionChangedSignature_MetaData) }; // 1578432834
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULTToolSubsystem_Statics::NewProp_OnActorDroppedSignature = { "OnActorDroppedSignature", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULTToolSubsystem, OnActorDroppedSignature), Z_Construct_UDelegateFunction_LightingTool_OnActorDroppedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnActorDroppedSignature_MetaData), NewProp_OnActorDroppedSignature_MetaData) }; // 3057820213
void Z_Construct_UClass_ULTToolSubsystem_Statics::NewProp_IncludePluginHDRIs_SetBit(void* Obj)
{
	((ULTToolSubsystem*)Obj)->IncludePluginHDRIs = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULTToolSubsystem_Statics::NewProp_IncludePluginHDRIs = { "IncludePluginHDRIs", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULTToolSubsystem), &Z_Construct_UClass_ULTToolSubsystem_Statics::NewProp_IncludePluginHDRIs_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IncludePluginHDRIs_MetaData), NewProp_IncludePluginHDRIs_MetaData) };
void Z_Construct_UClass_ULTToolSubsystem_Statics::NewProp_IncludeProjectHDRIs_SetBit(void* Obj)
{
	((ULTToolSubsystem*)Obj)->IncludeProjectHDRIs = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULTToolSubsystem_Statics::NewProp_IncludeProjectHDRIs = { "IncludeProjectHDRIs", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULTToolSubsystem), &Z_Construct_UClass_ULTToolSubsystem_Statics::NewProp_IncludeProjectHDRIs_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IncludeProjectHDRIs_MetaData), NewProp_IncludeProjectHDRIs_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULTToolSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULTToolSubsystem_Statics::NewProp_LTToolData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULTToolSubsystem_Statics::NewProp_OnAssetSelectionChangedSignature,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULTToolSubsystem_Statics::NewProp_OnActorSelectionChangedSignature,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULTToolSubsystem_Statics::NewProp_OnActorDroppedSignature,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULTToolSubsystem_Statics::NewProp_IncludePluginHDRIs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULTToolSubsystem_Statics::NewProp_IncludeProjectHDRIs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULTToolSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULTToolSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEditorSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_LightingTool,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULTToolSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULTToolSubsystem_Statics::ClassParams = {
	&ULTToolSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULTToolSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULTToolSubsystem_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULTToolSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_ULTToolSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULTToolSubsystem()
{
	if (!Z_Registration_Info_UClass_ULTToolSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULTToolSubsystem.OuterSingleton, Z_Construct_UClass_ULTToolSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULTToolSubsystem.OuterSingleton;
}
template<> LIGHTINGTOOL_API UClass* StaticClass<ULTToolSubsystem>()
{
	return ULTToolSubsystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULTToolSubsystem);
ULTToolSubsystem::~ULTToolSubsystem() {}
// End Class ULTToolSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_Data_LTToolSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULTToolSubsystem, ULTToolSubsystem::StaticClass, TEXT("ULTToolSubsystem"), &Z_Registration_Info_UClass_ULTToolSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULTToolSubsystem), 94627647U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_Data_LTToolSubsystem_h_1530895973(TEXT("/Script/LightingTool"),
	Z_CompiledInDeferFile_FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_Data_LTToolSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_Data_LTToolSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
