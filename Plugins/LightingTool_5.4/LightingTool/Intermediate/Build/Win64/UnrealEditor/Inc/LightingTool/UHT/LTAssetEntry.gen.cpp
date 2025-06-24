// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LightingTool/Public/UI/LTAssetEntry.h"
#include "LightingTool/Public/Data/LTData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLTAssetEntry() {}

// Begin Cross Module References
LIGHTINGTOOL_API UClass* Z_Construct_UClass_ULTAssetEntry();
LIGHTINGTOOL_API UClass* Z_Construct_UClass_ULTAssetEntry_NoRegister();
LIGHTINGTOOL_API UFunction* Z_Construct_UDelegateFunction_LightingTool_OnAssetViewDataChangedSignature__DelegateSignature();
LIGHTINGTOOL_API UFunction* Z_Construct_UDelegateFunction_LightingTool_OnCoordIndexSubmittedSignature__DelegateSignature();
LIGHTINGTOOL_API UFunction* Z_Construct_UDelegateFunction_LightingTool_OnEntryClickedSignature__DelegateSignature();
LIGHTINGTOOL_API UFunction* Z_Construct_UDelegateFunction_LightingTool_OnListViewAssetSelectionChangedSignature__DelegateSignature();
LIGHTINGTOOL_API UFunction* Z_Construct_UDelegateFunction_LightingTool_OnNewAssetParamSubmittedSignature__DelegateSignature();
LIGHTINGTOOL_API UFunction* Z_Construct_UDelegateFunction_LightingTool_OnResolutionSubmittedSignature__DelegateSignature();
LIGHTINGTOOL_API UScriptStruct* Z_Construct_UScriptStruct_FLTAssetViewData();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_LightingTool();
// End Cross Module References

// Begin Delegate FOnAssetViewDataChangedSignature
struct Z_Construct_UDelegateFunction_LightingTool_OnAssetViewDataChangedSignature__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/LTAssetEntry.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LightingTool_OnAssetViewDataChangedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LightingTool, nullptr, "OnAssetViewDataChangedSignature__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LightingTool_OnAssetViewDataChangedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LightingTool_OnAssetViewDataChangedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_LightingTool_OnAssetViewDataChangedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LightingTool_OnAssetViewDataChangedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAssetViewDataChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnAssetViewDataChangedSignature)
{
	OnAssetViewDataChangedSignature.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnAssetViewDataChangedSignature

// Begin Delegate FOnCoordIndexSubmittedSignature
struct Z_Construct_UDelegateFunction_LightingTool_OnCoordIndexSubmittedSignature__DelegateSignature_Statics
{
	struct _Script_LightingTool_eventOnCoordIndexSubmittedSignature_Parms
	{
		FName InObjectPath;
		int32 InIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/LTAssetEntry.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InObjectPath;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_LightingTool_OnCoordIndexSubmittedSignature__DelegateSignature_Statics::NewProp_InObjectPath = { "InObjectPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LightingTool_eventOnCoordIndexSubmittedSignature_Parms, InObjectPath), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_LightingTool_OnCoordIndexSubmittedSignature__DelegateSignature_Statics::NewProp_InIndex = { "InIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LightingTool_eventOnCoordIndexSubmittedSignature_Parms, InIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LightingTool_OnCoordIndexSubmittedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LightingTool_OnCoordIndexSubmittedSignature__DelegateSignature_Statics::NewProp_InObjectPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LightingTool_OnCoordIndexSubmittedSignature__DelegateSignature_Statics::NewProp_InIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LightingTool_OnCoordIndexSubmittedSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LightingTool_OnCoordIndexSubmittedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LightingTool, nullptr, "OnCoordIndexSubmittedSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LightingTool_OnCoordIndexSubmittedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LightingTool_OnCoordIndexSubmittedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LightingTool_OnCoordIndexSubmittedSignature__DelegateSignature_Statics::_Script_LightingTool_eventOnCoordIndexSubmittedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LightingTool_OnCoordIndexSubmittedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LightingTool_OnCoordIndexSubmittedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_LightingTool_OnCoordIndexSubmittedSignature__DelegateSignature_Statics::_Script_LightingTool_eventOnCoordIndexSubmittedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_LightingTool_OnCoordIndexSubmittedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LightingTool_OnCoordIndexSubmittedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnCoordIndexSubmittedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnCoordIndexSubmittedSignature, FName InObjectPath, int32 InIndex)
{
	struct _Script_LightingTool_eventOnCoordIndexSubmittedSignature_Parms
	{
		FName InObjectPath;
		int32 InIndex;
	};
	_Script_LightingTool_eventOnCoordIndexSubmittedSignature_Parms Parms;
	Parms.InObjectPath=InObjectPath;
	Parms.InIndex=InIndex;
	OnCoordIndexSubmittedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnCoordIndexSubmittedSignature

// Begin Delegate FOnResolutionSubmittedSignature
struct Z_Construct_UDelegateFunction_LightingTool_OnResolutionSubmittedSignature__DelegateSignature_Statics
{
	struct _Script_LightingTool_eventOnResolutionSubmittedSignature_Parms
	{
		FName InObjectPath;
		int32 InResolution;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/LTAssetEntry.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InObjectPath;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InResolution;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_LightingTool_OnResolutionSubmittedSignature__DelegateSignature_Statics::NewProp_InObjectPath = { "InObjectPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LightingTool_eventOnResolutionSubmittedSignature_Parms, InObjectPath), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_LightingTool_OnResolutionSubmittedSignature__DelegateSignature_Statics::NewProp_InResolution = { "InResolution", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LightingTool_eventOnResolutionSubmittedSignature_Parms, InResolution), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LightingTool_OnResolutionSubmittedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LightingTool_OnResolutionSubmittedSignature__DelegateSignature_Statics::NewProp_InObjectPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LightingTool_OnResolutionSubmittedSignature__DelegateSignature_Statics::NewProp_InResolution,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LightingTool_OnResolutionSubmittedSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LightingTool_OnResolutionSubmittedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LightingTool, nullptr, "OnResolutionSubmittedSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LightingTool_OnResolutionSubmittedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LightingTool_OnResolutionSubmittedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LightingTool_OnResolutionSubmittedSignature__DelegateSignature_Statics::_Script_LightingTool_eventOnResolutionSubmittedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LightingTool_OnResolutionSubmittedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LightingTool_OnResolutionSubmittedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_LightingTool_OnResolutionSubmittedSignature__DelegateSignature_Statics::_Script_LightingTool_eventOnResolutionSubmittedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_LightingTool_OnResolutionSubmittedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LightingTool_OnResolutionSubmittedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnResolutionSubmittedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnResolutionSubmittedSignature, FName InObjectPath, int32 InResolution)
{
	struct _Script_LightingTool_eventOnResolutionSubmittedSignature_Parms
	{
		FName InObjectPath;
		int32 InResolution;
	};
	_Script_LightingTool_eventOnResolutionSubmittedSignature_Parms Parms;
	Parms.InObjectPath=InObjectPath;
	Parms.InResolution=InResolution;
	OnResolutionSubmittedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnResolutionSubmittedSignature

// Begin Delegate FOnNewAssetParamSubmittedSignature
struct Z_Construct_UDelegateFunction_LightingTool_OnNewAssetParamSubmittedSignature__DelegateSignature_Statics
{
	struct _Script_LightingTool_eventOnNewAssetParamSubmittedSignature_Parms
	{
		bool IsItForResolution;
		int32 InResolution;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/LTAssetEntry.h" },
	};
#endif // WITH_METADATA
	static void NewProp_IsItForResolution_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsItForResolution;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InResolution;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_LightingTool_OnNewAssetParamSubmittedSignature__DelegateSignature_Statics::NewProp_IsItForResolution_SetBit(void* Obj)
{
	((_Script_LightingTool_eventOnNewAssetParamSubmittedSignature_Parms*)Obj)->IsItForResolution = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_LightingTool_OnNewAssetParamSubmittedSignature__DelegateSignature_Statics::NewProp_IsItForResolution = { "IsItForResolution", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_LightingTool_eventOnNewAssetParamSubmittedSignature_Parms), &Z_Construct_UDelegateFunction_LightingTool_OnNewAssetParamSubmittedSignature__DelegateSignature_Statics::NewProp_IsItForResolution_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_LightingTool_OnNewAssetParamSubmittedSignature__DelegateSignature_Statics::NewProp_InResolution = { "InResolution", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LightingTool_eventOnNewAssetParamSubmittedSignature_Parms, InResolution), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LightingTool_OnNewAssetParamSubmittedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LightingTool_OnNewAssetParamSubmittedSignature__DelegateSignature_Statics::NewProp_IsItForResolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LightingTool_OnNewAssetParamSubmittedSignature__DelegateSignature_Statics::NewProp_InResolution,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LightingTool_OnNewAssetParamSubmittedSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LightingTool_OnNewAssetParamSubmittedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LightingTool, nullptr, "OnNewAssetParamSubmittedSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LightingTool_OnNewAssetParamSubmittedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LightingTool_OnNewAssetParamSubmittedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LightingTool_OnNewAssetParamSubmittedSignature__DelegateSignature_Statics::_Script_LightingTool_eventOnNewAssetParamSubmittedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LightingTool_OnNewAssetParamSubmittedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LightingTool_OnNewAssetParamSubmittedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_LightingTool_OnNewAssetParamSubmittedSignature__DelegateSignature_Statics::_Script_LightingTool_eventOnNewAssetParamSubmittedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_LightingTool_OnNewAssetParamSubmittedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LightingTool_OnNewAssetParamSubmittedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnNewAssetParamSubmittedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnNewAssetParamSubmittedSignature, bool IsItForResolution, int32 InResolution)
{
	struct _Script_LightingTool_eventOnNewAssetParamSubmittedSignature_Parms
	{
		bool IsItForResolution;
		int32 InResolution;
	};
	_Script_LightingTool_eventOnNewAssetParamSubmittedSignature_Parms Parms;
	Parms.IsItForResolution=IsItForResolution ? true : false;
	Parms.InResolution=InResolution;
	OnNewAssetParamSubmittedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnNewAssetParamSubmittedSignature

// Begin Delegate FOnEntryClickedSignature
struct Z_Construct_UDelegateFunction_LightingTool_OnEntryClickedSignature__DelegateSignature_Statics
{
	struct _Script_LightingTool_eventOnEntryClickedSignature_Parms
	{
		int32 EntryIndex;
		bool IsControlDown;
		bool IsShiftDown;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/LTAssetEntry.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_EntryIndex;
	static void NewProp_IsControlDown_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsControlDown;
	static void NewProp_IsShiftDown_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsShiftDown;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_LightingTool_OnEntryClickedSignature__DelegateSignature_Statics::NewProp_EntryIndex = { "EntryIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LightingTool_eventOnEntryClickedSignature_Parms, EntryIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UDelegateFunction_LightingTool_OnEntryClickedSignature__DelegateSignature_Statics::NewProp_IsControlDown_SetBit(void* Obj)
{
	((_Script_LightingTool_eventOnEntryClickedSignature_Parms*)Obj)->IsControlDown = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_LightingTool_OnEntryClickedSignature__DelegateSignature_Statics::NewProp_IsControlDown = { "IsControlDown", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_LightingTool_eventOnEntryClickedSignature_Parms), &Z_Construct_UDelegateFunction_LightingTool_OnEntryClickedSignature__DelegateSignature_Statics::NewProp_IsControlDown_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UDelegateFunction_LightingTool_OnEntryClickedSignature__DelegateSignature_Statics::NewProp_IsShiftDown_SetBit(void* Obj)
{
	((_Script_LightingTool_eventOnEntryClickedSignature_Parms*)Obj)->IsShiftDown = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_LightingTool_OnEntryClickedSignature__DelegateSignature_Statics::NewProp_IsShiftDown = { "IsShiftDown", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_LightingTool_eventOnEntryClickedSignature_Parms), &Z_Construct_UDelegateFunction_LightingTool_OnEntryClickedSignature__DelegateSignature_Statics::NewProp_IsShiftDown_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LightingTool_OnEntryClickedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LightingTool_OnEntryClickedSignature__DelegateSignature_Statics::NewProp_EntryIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LightingTool_OnEntryClickedSignature__DelegateSignature_Statics::NewProp_IsControlDown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LightingTool_OnEntryClickedSignature__DelegateSignature_Statics::NewProp_IsShiftDown,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LightingTool_OnEntryClickedSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LightingTool_OnEntryClickedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LightingTool, nullptr, "OnEntryClickedSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LightingTool_OnEntryClickedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LightingTool_OnEntryClickedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LightingTool_OnEntryClickedSignature__DelegateSignature_Statics::_Script_LightingTool_eventOnEntryClickedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LightingTool_OnEntryClickedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LightingTool_OnEntryClickedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_LightingTool_OnEntryClickedSignature__DelegateSignature_Statics::_Script_LightingTool_eventOnEntryClickedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_LightingTool_OnEntryClickedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LightingTool_OnEntryClickedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnEntryClickedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnEntryClickedSignature, int32 EntryIndex, bool IsControlDown, bool IsShiftDown)
{
	struct _Script_LightingTool_eventOnEntryClickedSignature_Parms
	{
		int32 EntryIndex;
		bool IsControlDown;
		bool IsShiftDown;
	};
	_Script_LightingTool_eventOnEntryClickedSignature_Parms Parms;
	Parms.EntryIndex=EntryIndex;
	Parms.IsControlDown=IsControlDown ? true : false;
	Parms.IsShiftDown=IsShiftDown ? true : false;
	OnEntryClickedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnEntryClickedSignature

// Begin Delegate FOnListViewAssetSelectionChangedSignature
struct Z_Construct_UDelegateFunction_LightingTool_OnListViewAssetSelectionChangedSignature__DelegateSignature_Statics
{
	struct _Script_LightingTool_eventOnListViewAssetSelectionChangedSignature_Parms
	{
		bool NewSelection;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/LTAssetEntry.h" },
	};
#endif // WITH_METADATA
	static void NewProp_NewSelection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NewSelection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_LightingTool_OnListViewAssetSelectionChangedSignature__DelegateSignature_Statics::NewProp_NewSelection_SetBit(void* Obj)
{
	((_Script_LightingTool_eventOnListViewAssetSelectionChangedSignature_Parms*)Obj)->NewSelection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_LightingTool_OnListViewAssetSelectionChangedSignature__DelegateSignature_Statics::NewProp_NewSelection = { "NewSelection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_LightingTool_eventOnListViewAssetSelectionChangedSignature_Parms), &Z_Construct_UDelegateFunction_LightingTool_OnListViewAssetSelectionChangedSignature__DelegateSignature_Statics::NewProp_NewSelection_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LightingTool_OnListViewAssetSelectionChangedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LightingTool_OnListViewAssetSelectionChangedSignature__DelegateSignature_Statics::NewProp_NewSelection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LightingTool_OnListViewAssetSelectionChangedSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LightingTool_OnListViewAssetSelectionChangedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LightingTool, nullptr, "OnListViewAssetSelectionChangedSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LightingTool_OnListViewAssetSelectionChangedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LightingTool_OnListViewAssetSelectionChangedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LightingTool_OnListViewAssetSelectionChangedSignature__DelegateSignature_Statics::_Script_LightingTool_eventOnListViewAssetSelectionChangedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LightingTool_OnListViewAssetSelectionChangedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LightingTool_OnListViewAssetSelectionChangedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_LightingTool_OnListViewAssetSelectionChangedSignature__DelegateSignature_Statics::_Script_LightingTool_eventOnListViewAssetSelectionChangedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_LightingTool_OnListViewAssetSelectionChangedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LightingTool_OnListViewAssetSelectionChangedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnListViewAssetSelectionChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnListViewAssetSelectionChangedSignature, bool NewSelection)
{
	struct _Script_LightingTool_eventOnListViewAssetSelectionChangedSignature_Parms
	{
		bool NewSelection;
	};
	_Script_LightingTool_eventOnListViewAssetSelectionChangedSignature_Parms Parms;
	Parms.NewSelection=NewSelection ? true : false;
	OnListViewAssetSelectionChangedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnListViewAssetSelectionChangedSignature

// Begin Class ULTAssetEntry
void ULTAssetEntry::StaticRegisterNativesULTAssetEntry()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULTAssetEntry);
UClass* Z_Construct_UClass_ULTAssetEntry_NoRegister()
{
	return ULTAssetEntry::StaticClass();
}
struct Z_Construct_UClass_ULTAssetEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/LTAssetEntry.h" },
		{ "ModuleRelativePath", "Public/UI/LTAssetEntry.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetViewData_MetaData[] = {
		{ "Category", "Lighting Tool" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/UI/LTAssetEntry.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAssetViewDataChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/LTAssetEntry.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCoordIndexSubmitted_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/LTAssetEntry.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnResolutionSubmitted_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/LTAssetEntry.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnEntryClicked_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/LTAssetEntry.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnListViewAssetSelectionChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/LTAssetEntry.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnNewAssetParamSubmitted_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/LTAssetEntry.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AssetViewData;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAssetViewDataChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCoordIndexSubmitted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnResolutionSubmitted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEntryClicked;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnListViewAssetSelectionChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnNewAssetParamSubmitted;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULTAssetEntry>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULTAssetEntry_Statics::NewProp_AssetViewData = { "AssetViewData", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULTAssetEntry, AssetViewData), Z_Construct_UScriptStruct_FLTAssetViewData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetViewData_MetaData), NewProp_AssetViewData_MetaData) }; // 1227170021
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULTAssetEntry_Statics::NewProp_OnAssetViewDataChanged = { "OnAssetViewDataChanged", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULTAssetEntry, OnAssetViewDataChanged), Z_Construct_UDelegateFunction_LightingTool_OnAssetViewDataChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAssetViewDataChanged_MetaData), NewProp_OnAssetViewDataChanged_MetaData) }; // 4118244742
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULTAssetEntry_Statics::NewProp_OnCoordIndexSubmitted = { "OnCoordIndexSubmitted", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULTAssetEntry, OnCoordIndexSubmitted), Z_Construct_UDelegateFunction_LightingTool_OnCoordIndexSubmittedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCoordIndexSubmitted_MetaData), NewProp_OnCoordIndexSubmitted_MetaData) }; // 2154200716
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULTAssetEntry_Statics::NewProp_OnResolutionSubmitted = { "OnResolutionSubmitted", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULTAssetEntry, OnResolutionSubmitted), Z_Construct_UDelegateFunction_LightingTool_OnResolutionSubmittedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnResolutionSubmitted_MetaData), NewProp_OnResolutionSubmitted_MetaData) }; // 1989353832
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULTAssetEntry_Statics::NewProp_OnEntryClicked = { "OnEntryClicked", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULTAssetEntry, OnEntryClicked), Z_Construct_UDelegateFunction_LightingTool_OnEntryClickedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnEntryClicked_MetaData), NewProp_OnEntryClicked_MetaData) }; // 907036650
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULTAssetEntry_Statics::NewProp_OnListViewAssetSelectionChanged = { "OnListViewAssetSelectionChanged", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULTAssetEntry, OnListViewAssetSelectionChanged), Z_Construct_UDelegateFunction_LightingTool_OnListViewAssetSelectionChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnListViewAssetSelectionChanged_MetaData), NewProp_OnListViewAssetSelectionChanged_MetaData) }; // 3385978115
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULTAssetEntry_Statics::NewProp_OnNewAssetParamSubmitted = { "OnNewAssetParamSubmitted", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULTAssetEntry, OnNewAssetParamSubmitted), Z_Construct_UDelegateFunction_LightingTool_OnNewAssetParamSubmittedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnNewAssetParamSubmitted_MetaData), NewProp_OnNewAssetParamSubmitted_MetaData) }; // 1381984232
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULTAssetEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULTAssetEntry_Statics::NewProp_AssetViewData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULTAssetEntry_Statics::NewProp_OnAssetViewDataChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULTAssetEntry_Statics::NewProp_OnCoordIndexSubmitted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULTAssetEntry_Statics::NewProp_OnResolutionSubmitted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULTAssetEntry_Statics::NewProp_OnEntryClicked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULTAssetEntry_Statics::NewProp_OnListViewAssetSelectionChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULTAssetEntry_Statics::NewProp_OnNewAssetParamSubmitted,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULTAssetEntry_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULTAssetEntry_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_LightingTool,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULTAssetEntry_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULTAssetEntry_Statics::ClassParams = {
	&ULTAssetEntry::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULTAssetEntry_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULTAssetEntry_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULTAssetEntry_Statics::Class_MetaDataParams), Z_Construct_UClass_ULTAssetEntry_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULTAssetEntry()
{
	if (!Z_Registration_Info_UClass_ULTAssetEntry.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULTAssetEntry.OuterSingleton, Z_Construct_UClass_ULTAssetEntry_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULTAssetEntry.OuterSingleton;
}
template<> LIGHTINGTOOL_API UClass* StaticClass<ULTAssetEntry>()
{
	return ULTAssetEntry::StaticClass();
}
ULTAssetEntry::ULTAssetEntry(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULTAssetEntry);
ULTAssetEntry::~ULTAssetEntry() {}
// End Class ULTAssetEntry

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_UI_LTAssetEntry_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULTAssetEntry, ULTAssetEntry::StaticClass, TEXT("ULTAssetEntry"), &Z_Registration_Info_UClass_ULTAssetEntry, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULTAssetEntry), 2998697579U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_UI_LTAssetEntry_h_1410671633(TEXT("/Script/LightingTool"),
	Z_CompiledInDeferFile_FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_UI_LTAssetEntry_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_UI_LTAssetEntry_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
