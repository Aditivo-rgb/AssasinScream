// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObjectDistribution/Public/UI/ODToolWindow.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeODToolWindow() {}

// Begin Cross Module References
BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityWidget();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
OBJECTDISTRIBUTION_API UClass* Z_Construct_UClass_AODSpawnCenter_NoRegister();
OBJECTDISTRIBUTION_API UClass* Z_Construct_UClass_UODDistributionBase_NoRegister();
OBJECTDISTRIBUTION_API UClass* Z_Construct_UClass_UODObjectSlot_NoRegister();
OBJECTDISTRIBUTION_API UClass* Z_Construct_UClass_UODPaletteSlate_NoRegister();
OBJECTDISTRIBUTION_API UClass* Z_Construct_UClass_UODPresetObject_NoRegister();
OBJECTDISTRIBUTION_API UClass* Z_Construct_UClass_UODSimulationWidget_NoRegister();
OBJECTDISTRIBUTION_API UClass* Z_Construct_UClass_UODToolWindow();
OBJECTDISTRIBUTION_API UClass* Z_Construct_UClass_UODToolWindow_NoRegister();
OBJECTDISTRIBUTION_API UFunction* Z_Construct_UDelegateFunction_ObjectDistribution_OnLevelActorDeletedNativeSignature__DelegateSignature();
SCRIPTABLEEDITORWIDGETS_API UClass* Z_Construct_UClass_UDetailsView_NoRegister();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ETextCommit();
UMG_API UClass* Z_Construct_UClass_UBorder_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UEditableTextBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UPanelWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_ObjectDistribution();
// End Cross Module References

// Begin Delegate FOnLevelActorDeletedNativeSignature
struct Z_Construct_UDelegateFunction_ObjectDistribution_OnLevelActorDeletedNativeSignature__DelegateSignature_Statics
{
	struct _Script_ObjectDistribution_eventOnLevelActorDeletedNativeSignature_Parms
	{
		AActor* Actor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ODToolWindow.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ObjectDistribution_OnLevelActorDeletedNativeSignature__DelegateSignature_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ObjectDistribution_eventOnLevelActorDeletedNativeSignature_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ObjectDistribution_OnLevelActorDeletedNativeSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ObjectDistribution_OnLevelActorDeletedNativeSignature__DelegateSignature_Statics::NewProp_Actor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ObjectDistribution_OnLevelActorDeletedNativeSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ObjectDistribution_OnLevelActorDeletedNativeSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ObjectDistribution, nullptr, "OnLevelActorDeletedNativeSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ObjectDistribution_OnLevelActorDeletedNativeSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ObjectDistribution_OnLevelActorDeletedNativeSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ObjectDistribution_OnLevelActorDeletedNativeSignature__DelegateSignature_Statics::_Script_ObjectDistribution_eventOnLevelActorDeletedNativeSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ObjectDistribution_OnLevelActorDeletedNativeSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ObjectDistribution_OnLevelActorDeletedNativeSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_ObjectDistribution_OnLevelActorDeletedNativeSignature__DelegateSignature_Statics::_Script_ObjectDistribution_eventOnLevelActorDeletedNativeSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ObjectDistribution_OnLevelActorDeletedNativeSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ObjectDistribution_OnLevelActorDeletedNativeSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnLevelActorDeletedNativeSignature_DelegateWrapper(const FMulticastScriptDelegate& OnLevelActorDeletedNativeSignature, AActor* Actor)
{
	struct _Script_ObjectDistribution_eventOnLevelActorDeletedNativeSignature_Parms
	{
		AActor* Actor;
	};
	_Script_ObjectDistribution_eventOnLevelActorDeletedNativeSignature_Parms Parms;
	Parms.Actor=Actor;
	OnLevelActorDeletedNativeSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnLevelActorDeletedNativeSignature

// Begin Class UODToolWindow Function AddNewPresetBtnPressed
struct Z_Construct_UFunction_UODToolWindow_AddNewPresetBtnPressed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ODToolWindow.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UODToolWindow_AddNewPresetBtnPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UODToolWindow, nullptr, "AddNewPresetBtnPressed", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UODToolWindow_AddNewPresetBtnPressed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UODToolWindow_AddNewPresetBtnPressed_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UODToolWindow_AddNewPresetBtnPressed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UODToolWindow_AddNewPresetBtnPressed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UODToolWindow::execAddNewPresetBtnPressed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddNewPresetBtnPressed();
	P_NATIVE_END;
}
// End Class UODToolWindow Function AddNewPresetBtnPressed

// Begin Class UODToolWindow Function AddSelectedAssetsBtnPressed
struct Z_Construct_UFunction_UODToolWindow_AddSelectedAssetsBtnPressed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ODToolWindow.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UODToolWindow_AddSelectedAssetsBtnPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UODToolWindow, nullptr, "AddSelectedAssetsBtnPressed", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UODToolWindow_AddSelectedAssetsBtnPressed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UODToolWindow_AddSelectedAssetsBtnPressed_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UODToolWindow_AddSelectedAssetsBtnPressed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UODToolWindow_AddSelectedAssetsBtnPressed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UODToolWindow::execAddSelectedAssetsBtnPressed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddSelectedAssetsBtnPressed();
	P_NATIVE_END;
}
// End Class UODToolWindow Function AddSelectedAssetsBtnPressed

// Begin Class UODToolWindow Function FinishBtnPressed
struct Z_Construct_UFunction_UODToolWindow_FinishBtnPressed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ODToolWindow.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UODToolWindow_FinishBtnPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UODToolWindow, nullptr, "FinishBtnPressed", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UODToolWindow_FinishBtnPressed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UODToolWindow_FinishBtnPressed_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UODToolWindow_FinishBtnPressed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UODToolWindow_FinishBtnPressed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UODToolWindow::execFinishBtnPressed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FinishBtnPressed();
	P_NATIVE_END;
}
// End Class UODToolWindow Function FinishBtnPressed

// Begin Class UODToolWindow Function OnAddAssetsTextCommitted
struct Z_Construct_UFunction_UODToolWindow_OnAddAssetsTextCommitted_Statics
{
	struct ODToolWindow_eventOnAddAssetsTextCommitted_Parms
	{
		FText InText;
		TEnumAsByte<ETextCommit::Type> InCommitMethod;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ODToolWindow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_InText;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InCommitMethod;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UODToolWindow_OnAddAssetsTextCommitted_Statics::NewProp_InText = { "InText", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ODToolWindow_eventOnAddAssetsTextCommitted_Parms, InText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InText_MetaData), NewProp_InText_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UODToolWindow_OnAddAssetsTextCommitted_Statics::NewProp_InCommitMethod = { "InCommitMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ODToolWindow_eventOnAddAssetsTextCommitted_Parms, InCommitMethod), Z_Construct_UEnum_SlateCore_ETextCommit, METADATA_PARAMS(0, nullptr) }; // 1817921380
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UODToolWindow_OnAddAssetsTextCommitted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UODToolWindow_OnAddAssetsTextCommitted_Statics::NewProp_InText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UODToolWindow_OnAddAssetsTextCommitted_Statics::NewProp_InCommitMethod,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UODToolWindow_OnAddAssetsTextCommitted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UODToolWindow_OnAddAssetsTextCommitted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UODToolWindow, nullptr, "OnAddAssetsTextCommitted", nullptr, nullptr, Z_Construct_UFunction_UODToolWindow_OnAddAssetsTextCommitted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UODToolWindow_OnAddAssetsTextCommitted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UODToolWindow_OnAddAssetsTextCommitted_Statics::ODToolWindow_eventOnAddAssetsTextCommitted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UODToolWindow_OnAddAssetsTextCommitted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UODToolWindow_OnAddAssetsTextCommitted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UODToolWindow_OnAddAssetsTextCommitted_Statics::ODToolWindow_eventOnAddAssetsTextCommitted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UODToolWindow_OnAddAssetsTextCommitted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UODToolWindow_OnAddAssetsTextCommitted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UODToolWindow::execOnAddAssetsTextCommitted)
{
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_InText);
	P_GET_PROPERTY(FByteProperty,Z_Param_InCommitMethod);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnAddAssetsTextCommitted(Z_Param_Out_InText,ETextCommit::Type(Z_Param_InCommitMethod));
	P_NATIVE_END;
}
// End Class UODToolWindow Function OnAddAssetsTextCommitted

// Begin Class UODToolWindow Function OnNewPresetTextCommitted
struct Z_Construct_UFunction_UODToolWindow_OnNewPresetTextCommitted_Statics
{
	struct ODToolWindow_eventOnNewPresetTextCommitted_Parms
	{
		FText InText;
		TEnumAsByte<ETextCommit::Type> InCommitMethod;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ODToolWindow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_InText;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InCommitMethod;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UODToolWindow_OnNewPresetTextCommitted_Statics::NewProp_InText = { "InText", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ODToolWindow_eventOnNewPresetTextCommitted_Parms, InText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InText_MetaData), NewProp_InText_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UODToolWindow_OnNewPresetTextCommitted_Statics::NewProp_InCommitMethod = { "InCommitMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ODToolWindow_eventOnNewPresetTextCommitted_Parms, InCommitMethod), Z_Construct_UEnum_SlateCore_ETextCommit, METADATA_PARAMS(0, nullptr) }; // 1817921380
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UODToolWindow_OnNewPresetTextCommitted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UODToolWindow_OnNewPresetTextCommitted_Statics::NewProp_InText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UODToolWindow_OnNewPresetTextCommitted_Statics::NewProp_InCommitMethod,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UODToolWindow_OnNewPresetTextCommitted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UODToolWindow_OnNewPresetTextCommitted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UODToolWindow, nullptr, "OnNewPresetTextCommitted", nullptr, nullptr, Z_Construct_UFunction_UODToolWindow_OnNewPresetTextCommitted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UODToolWindow_OnNewPresetTextCommitted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UODToolWindow_OnNewPresetTextCommitted_Statics::ODToolWindow_eventOnNewPresetTextCommitted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UODToolWindow_OnNewPresetTextCommitted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UODToolWindow_OnNewPresetTextCommitted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UODToolWindow_OnNewPresetTextCommitted_Statics::ODToolWindow_eventOnNewPresetTextCommitted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UODToolWindow_OnNewPresetTextCommitted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UODToolWindow_OnNewPresetTextCommitted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UODToolWindow::execOnNewPresetTextCommitted)
{
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_InText);
	P_GET_PROPERTY(FByteProperty,Z_Param_InCommitMethod);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnNewPresetTextCommitted(Z_Param_Out_InText,ETextCommit::Type(Z_Param_InCommitMethod));
	P_NATIVE_END;
}
// End Class UODToolWindow Function OnNewPresetTextCommitted

// Begin Class UODToolWindow Function OnObjectSlotPressed
struct Z_Construct_UFunction_UODToolWindow_OnObjectSlotPressed_Statics
{
	struct ODToolWindow_eventOnObjectSlotPressed_Parms
	{
		bool InFormalSelectionState;
		int32 InSlotIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ODToolWindow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InFormalSelectionState_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSlotIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_InFormalSelectionState_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InFormalSelectionState;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InSlotIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UODToolWindow_OnObjectSlotPressed_Statics::NewProp_InFormalSelectionState_SetBit(void* Obj)
{
	((ODToolWindow_eventOnObjectSlotPressed_Parms*)Obj)->InFormalSelectionState = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UODToolWindow_OnObjectSlotPressed_Statics::NewProp_InFormalSelectionState = { "InFormalSelectionState", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ODToolWindow_eventOnObjectSlotPressed_Parms), &Z_Construct_UFunction_UODToolWindow_OnObjectSlotPressed_Statics::NewProp_InFormalSelectionState_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InFormalSelectionState_MetaData), NewProp_InFormalSelectionState_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UODToolWindow_OnObjectSlotPressed_Statics::NewProp_InSlotIndex = { "InSlotIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ODToolWindow_eventOnObjectSlotPressed_Parms, InSlotIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSlotIndex_MetaData), NewProp_InSlotIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UODToolWindow_OnObjectSlotPressed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UODToolWindow_OnObjectSlotPressed_Statics::NewProp_InFormalSelectionState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UODToolWindow_OnObjectSlotPressed_Statics::NewProp_InSlotIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UODToolWindow_OnObjectSlotPressed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UODToolWindow_OnObjectSlotPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UODToolWindow, nullptr, "OnObjectSlotPressed", nullptr, nullptr, Z_Construct_UFunction_UODToolWindow_OnObjectSlotPressed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UODToolWindow_OnObjectSlotPressed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UODToolWindow_OnObjectSlotPressed_Statics::ODToolWindow_eventOnObjectSlotPressed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UODToolWindow_OnObjectSlotPressed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UODToolWindow_OnObjectSlotPressed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UODToolWindow_OnObjectSlotPressed_Statics::ODToolWindow_eventOnObjectSlotPressed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UODToolWindow_OnObjectSlotPressed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UODToolWindow_OnObjectSlotPressed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UODToolWindow::execOnObjectSlotPressed)
{
	P_GET_UBOOL(Z_Param_InFormalSelectionState);
	P_GET_PROPERTY(FIntProperty,Z_Param_InSlotIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnObjectSlotPressed(Z_Param_InFormalSelectionState,Z_Param_InSlotIndex);
	P_NATIVE_END;
}
// End Class UODToolWindow Function OnObjectSlotPressed

// Begin Class UODToolWindow Function OnPresetLoaded
struct Z_Construct_UFunction_UODToolWindow_OnPresetLoaded_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "//Palette\n" },
		{ "ModuleRelativePath", "Public/UI/ODToolWindow.h" },
		{ "ToolTip", "Palette" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UODToolWindow_OnPresetLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UODToolWindow, nullptr, "OnPresetLoaded", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UODToolWindow_OnPresetLoaded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UODToolWindow_OnPresetLoaded_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UODToolWindow_OnPresetLoaded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UODToolWindow_OnPresetLoaded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UODToolWindow::execOnPresetLoaded)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPresetLoaded();
	P_NATIVE_END;
}
// End Class UODToolWindow Function OnPresetLoaded

// Begin Class UODToolWindow Function OnRenamePresetTextCommitted
struct Z_Construct_UFunction_UODToolWindow_OnRenamePresetTextCommitted_Statics
{
	struct ODToolWindow_eventOnRenamePresetTextCommitted_Parms
	{
		FText InText;
		TEnumAsByte<ETextCommit::Type> InCommitMethod;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ODToolWindow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_InText;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InCommitMethod;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UODToolWindow_OnRenamePresetTextCommitted_Statics::NewProp_InText = { "InText", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ODToolWindow_eventOnRenamePresetTextCommitted_Parms, InText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InText_MetaData), NewProp_InText_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UODToolWindow_OnRenamePresetTextCommitted_Statics::NewProp_InCommitMethod = { "InCommitMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ODToolWindow_eventOnRenamePresetTextCommitted_Parms, InCommitMethod), Z_Construct_UEnum_SlateCore_ETextCommit, METADATA_PARAMS(0, nullptr) }; // 1817921380
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UODToolWindow_OnRenamePresetTextCommitted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UODToolWindow_OnRenamePresetTextCommitted_Statics::NewProp_InText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UODToolWindow_OnRenamePresetTextCommitted_Statics::NewProp_InCommitMethod,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UODToolWindow_OnRenamePresetTextCommitted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UODToolWindow_OnRenamePresetTextCommitted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UODToolWindow, nullptr, "OnRenamePresetTextCommitted", nullptr, nullptr, Z_Construct_UFunction_UODToolWindow_OnRenamePresetTextCommitted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UODToolWindow_OnRenamePresetTextCommitted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UODToolWindow_OnRenamePresetTextCommitted_Statics::ODToolWindow_eventOnRenamePresetTextCommitted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UODToolWindow_OnRenamePresetTextCommitted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UODToolWindow_OnRenamePresetTextCommitted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UODToolWindow_OnRenamePresetTextCommitted_Statics::ODToolWindow_eventOnRenamePresetTextCommitted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UODToolWindow_OnRenamePresetTextCommitted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UODToolWindow_OnRenamePresetTextCommitted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UODToolWindow::execOnRenamePresetTextCommitted)
{
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_InText);
	P_GET_PROPERTY(FByteProperty,Z_Param_InCommitMethod);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRenamePresetTextCommitted(Z_Param_Out_InText,ETextCommit::Type(Z_Param_InCommitMethod));
	P_NATIVE_END;
}
// End Class UODToolWindow Function OnRenamePresetTextCommitted

// Begin Class UODToolWindow Function OnSaveAsTextCommitted
struct Z_Construct_UFunction_UODToolWindow_OnSaveAsTextCommitted_Statics
{
	struct ODToolWindow_eventOnSaveAsTextCommitted_Parms
	{
		FText InText;
		TEnumAsByte<ETextCommit::Type> InCommitMethod;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ODToolWindow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_InText;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InCommitMethod;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UODToolWindow_OnSaveAsTextCommitted_Statics::NewProp_InText = { "InText", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ODToolWindow_eventOnSaveAsTextCommitted_Parms, InText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InText_MetaData), NewProp_InText_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UODToolWindow_OnSaveAsTextCommitted_Statics::NewProp_InCommitMethod = { "InCommitMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ODToolWindow_eventOnSaveAsTextCommitted_Parms, InCommitMethod), Z_Construct_UEnum_SlateCore_ETextCommit, METADATA_PARAMS(0, nullptr) }; // 1817921380
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UODToolWindow_OnSaveAsTextCommitted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UODToolWindow_OnSaveAsTextCommitted_Statics::NewProp_InText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UODToolWindow_OnSaveAsTextCommitted_Statics::NewProp_InCommitMethod,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UODToolWindow_OnSaveAsTextCommitted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UODToolWindow_OnSaveAsTextCommitted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UODToolWindow, nullptr, "OnSaveAsTextCommitted", nullptr, nullptr, Z_Construct_UFunction_UODToolWindow_OnSaveAsTextCommitted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UODToolWindow_OnSaveAsTextCommitted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UODToolWindow_OnSaveAsTextCommitted_Statics::ODToolWindow_eventOnSaveAsTextCommitted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UODToolWindow_OnSaveAsTextCommitted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UODToolWindow_OnSaveAsTextCommitted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UODToolWindow_OnSaveAsTextCommitted_Statics::ODToolWindow_eventOnSaveAsTextCommitted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UODToolWindow_OnSaveAsTextCommitted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UODToolWindow_OnSaveAsTextCommitted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UODToolWindow::execOnSaveAsTextCommitted)
{
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_InText);
	P_GET_PROPERTY(FByteProperty,Z_Param_InCommitMethod);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSaveAsTextCommitted(Z_Param_Out_InText,ETextCommit::Type(Z_Param_InCommitMethod));
	P_NATIVE_END;
}
// End Class UODToolWindow Function OnSaveAsTextCommitted

// Begin Class UODToolWindow Function PaletteBackgroundBtnPressed
struct Z_Construct_UFunction_UODToolWindow_PaletteBackgroundBtnPressed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ODToolWindow.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UODToolWindow_PaletteBackgroundBtnPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UODToolWindow, nullptr, "PaletteBackgroundBtnPressed", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UODToolWindow_PaletteBackgroundBtnPressed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UODToolWindow_PaletteBackgroundBtnPressed_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UODToolWindow_PaletteBackgroundBtnPressed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UODToolWindow_PaletteBackgroundBtnPressed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UODToolWindow::execPaletteBackgroundBtnPressed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PaletteBackgroundBtnPressed();
	P_NATIVE_END;
}
// End Class UODToolWindow Function PaletteBackgroundBtnPressed

// Begin Class UODToolWindow Function RebuildPalette
struct Z_Construct_UFunction_UODToolWindow_RebuildPalette_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ODToolWindow.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UODToolWindow_RebuildPalette_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UODToolWindow, nullptr, "RebuildPalette", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UODToolWindow_RebuildPalette_Statics::Function_MetaDataParams), Z_Construct_UFunction_UODToolWindow_RebuildPalette_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UODToolWindow_RebuildPalette()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UODToolWindow_RebuildPalette_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UODToolWindow::execRebuildPalette)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RebuildPalette();
	P_NATIVE_END;
}
// End Class UODToolWindow Function RebuildPalette

// Begin Class UODToolWindow Function RemovePresetBtnPressed
struct Z_Construct_UFunction_UODToolWindow_RemovePresetBtnPressed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ODToolWindow.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UODToolWindow_RemovePresetBtnPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UODToolWindow, nullptr, "RemovePresetBtnPressed", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UODToolWindow_RemovePresetBtnPressed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UODToolWindow_RemovePresetBtnPressed_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UODToolWindow_RemovePresetBtnPressed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UODToolWindow_RemovePresetBtnPressed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UODToolWindow::execRemovePresetBtnPressed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemovePresetBtnPressed();
	P_NATIVE_END;
}
// End Class UODToolWindow Function RemovePresetBtnPressed

// Begin Class UODToolWindow Function RenamePresetBtnPressed
struct Z_Construct_UFunction_UODToolWindow_RenamePresetBtnPressed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ODToolWindow.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UODToolWindow_RenamePresetBtnPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UODToolWindow, nullptr, "RenamePresetBtnPressed", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UODToolWindow_RenamePresetBtnPressed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UODToolWindow_RenamePresetBtnPressed_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UODToolWindow_RenamePresetBtnPressed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UODToolWindow_RenamePresetBtnPressed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UODToolWindow::execRenamePresetBtnPressed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RenamePresetBtnPressed();
	P_NATIVE_END;
}
// End Class UODToolWindow Function RenamePresetBtnPressed

// Begin Class UODToolWindow Function SaveAsNewPresetBtnPressed
struct Z_Construct_UFunction_UODToolWindow_SaveAsNewPresetBtnPressed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ODToolWindow.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UODToolWindow_SaveAsNewPresetBtnPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UODToolWindow, nullptr, "SaveAsNewPresetBtnPressed", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UODToolWindow_SaveAsNewPresetBtnPressed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UODToolWindow_SaveAsNewPresetBtnPressed_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UODToolWindow_SaveAsNewPresetBtnPressed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UODToolWindow_SaveAsNewPresetBtnPressed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UODToolWindow::execSaveAsNewPresetBtnPressed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SaveAsNewPresetBtnPressed();
	P_NATIVE_END;
}
// End Class UODToolWindow Function SaveAsNewPresetBtnPressed

// Begin Class UODToolWindow Function SavePresetBtnPressed
struct Z_Construct_UFunction_UODToolWindow_SavePresetBtnPressed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ODToolWindow.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UODToolWindow_SavePresetBtnPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UODToolWindow, nullptr, "SavePresetBtnPressed", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UODToolWindow_SavePresetBtnPressed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UODToolWindow_SavePresetBtnPressed_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UODToolWindow_SavePresetBtnPressed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UODToolWindow_SavePresetBtnPressed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UODToolWindow::execSavePresetBtnPressed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SavePresetBtnPressed();
	P_NATIVE_END;
}
// End Class UODToolWindow Function SavePresetBtnPressed

// Begin Class UODToolWindow
void UODToolWindow::StaticRegisterNativesUODToolWindow()
{
	UClass* Class = UODToolWindow::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddNewPresetBtnPressed", &UODToolWindow::execAddNewPresetBtnPressed },
		{ "AddSelectedAssetsBtnPressed", &UODToolWindow::execAddSelectedAssetsBtnPressed },
		{ "FinishBtnPressed", &UODToolWindow::execFinishBtnPressed },
		{ "OnAddAssetsTextCommitted", &UODToolWindow::execOnAddAssetsTextCommitted },
		{ "OnNewPresetTextCommitted", &UODToolWindow::execOnNewPresetTextCommitted },
		{ "OnObjectSlotPressed", &UODToolWindow::execOnObjectSlotPressed },
		{ "OnPresetLoaded", &UODToolWindow::execOnPresetLoaded },
		{ "OnRenamePresetTextCommitted", &UODToolWindow::execOnRenamePresetTextCommitted },
		{ "OnSaveAsTextCommitted", &UODToolWindow::execOnSaveAsTextCommitted },
		{ "PaletteBackgroundBtnPressed", &UODToolWindow::execPaletteBackgroundBtnPressed },
		{ "RebuildPalette", &UODToolWindow::execRebuildPalette },
		{ "RemovePresetBtnPressed", &UODToolWindow::execRemovePresetBtnPressed },
		{ "RenamePresetBtnPressed", &UODToolWindow::execRenamePresetBtnPressed },
		{ "SaveAsNewPresetBtnPressed", &UODToolWindow::execSaveAsNewPresetBtnPressed },
		{ "SavePresetBtnPressed", &UODToolWindow::execSavePresetBtnPressed },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UODToolWindow);
UClass* Z_Construct_UClass_UODToolWindow_NoRegister()
{
	return UODToolWindow::StaticClass();
}
struct Z_Construct_UClass_UODToolWindow_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/ODToolWindow.h" },
		{ "ModuleRelativePath", "Public/UI/ODToolWindow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsToolDestroying_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/ODToolWindow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTraceForVelocity_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/ODToolWindow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastSpawnCenterLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/ODToolWindow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnCenterVelocity_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/ODToolWindow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTraceForRotationDiff_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/ODToolWindow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastSpawnCenterRotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/ODToolWindow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnCenterRotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/ODToolWindow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropDistributionBase_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/ODToolWindow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PresetObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/ODToolWindow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PresetDetails_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ODToolWindow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PresetSettingsBorder_MetaData[] = {
		{ "BindWidget", "" },
		{ "Comment", "/*UPROPERTY(meta = (BindWidget))\n\x09TObjectPtr<UDetailsView> PropDistributionDetails;*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ODToolWindow.h" },
		{ "ToolTip", "UPROPERTY(meta = (BindWidget))\n       TObjectPtr<UDetailsView> PropDistributionDetails;" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TitleBorder_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ODToolWindow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PaletteSlate_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ODToolWindow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FinishBtn_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Comment", "/*UPROPERTY(meta = (BindWidgetOptional))\n\x09TObjectPtr<UButton> PaletteBackgroundBtn;*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ODToolWindow.h" },
		{ "ToolTip", "UPROPERTY(meta = (BindWidgetOptional))\n       TObjectPtr<UButton> PaletteBackgroundBtn;" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SimulationBorder_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ODToolWindow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SimulationWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ODToolWindow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnCenterRef_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/ODToolWindow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnLevelActorDeletedNative_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/ODToolWindow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AddNewPresetBtn_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ODToolWindow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AddSelectedAssetsBtn_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ODToolWindow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewPresetText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ODToolWindow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AddAssetsText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ODToolWindow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenamePresetBtn_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ODToolWindow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenamePresetText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ODToolWindow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemovePresetBtn_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ODToolWindow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SavePresetBtn_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ODToolWindow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveAsNewPresetBtn_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ODToolWindow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveAsText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ODToolWindow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectSlots_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ODToolWindow.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsToolDestroying_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsToolDestroying;
	static void NewProp_bTraceForVelocity_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTraceForVelocity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastSpawnCenterLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnCenterVelocity;
	static void NewProp_bTraceForRotationDiff_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTraceForRotationDiff;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastSpawnCenterRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnCenterRotation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PropDistributionBase;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PresetObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PresetDetails;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PresetSettingsBorder;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TitleBorder;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PaletteSlate;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FinishBtn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SimulationBorder;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SimulationWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnCenterRef;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLevelActorDeletedNative;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AddNewPresetBtn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AddSelectedAssetsBtn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewPresetText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AddAssetsText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RenamePresetBtn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RenamePresetText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RemovePresetBtn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SavePresetBtn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SaveAsNewPresetBtn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SaveAsText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ObjectSlots_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ObjectSlots;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UODToolWindow_AddNewPresetBtnPressed, "AddNewPresetBtnPressed" }, // 1751453645
		{ &Z_Construct_UFunction_UODToolWindow_AddSelectedAssetsBtnPressed, "AddSelectedAssetsBtnPressed" }, // 714556480
		{ &Z_Construct_UFunction_UODToolWindow_FinishBtnPressed, "FinishBtnPressed" }, // 568400240
		{ &Z_Construct_UFunction_UODToolWindow_OnAddAssetsTextCommitted, "OnAddAssetsTextCommitted" }, // 710083665
		{ &Z_Construct_UFunction_UODToolWindow_OnNewPresetTextCommitted, "OnNewPresetTextCommitted" }, // 3593926446
		{ &Z_Construct_UFunction_UODToolWindow_OnObjectSlotPressed, "OnObjectSlotPressed" }, // 2417616574
		{ &Z_Construct_UFunction_UODToolWindow_OnPresetLoaded, "OnPresetLoaded" }, // 2582885609
		{ &Z_Construct_UFunction_UODToolWindow_OnRenamePresetTextCommitted, "OnRenamePresetTextCommitted" }, // 927238463
		{ &Z_Construct_UFunction_UODToolWindow_OnSaveAsTextCommitted, "OnSaveAsTextCommitted" }, // 123722300
		{ &Z_Construct_UFunction_UODToolWindow_PaletteBackgroundBtnPressed, "PaletteBackgroundBtnPressed" }, // 1313851094
		{ &Z_Construct_UFunction_UODToolWindow_RebuildPalette, "RebuildPalette" }, // 2923542031
		{ &Z_Construct_UFunction_UODToolWindow_RemovePresetBtnPressed, "RemovePresetBtnPressed" }, // 3527338885
		{ &Z_Construct_UFunction_UODToolWindow_RenamePresetBtnPressed, "RenamePresetBtnPressed" }, // 466980847
		{ &Z_Construct_UFunction_UODToolWindow_SaveAsNewPresetBtnPressed, "SaveAsNewPresetBtnPressed" }, // 778816905
		{ &Z_Construct_UFunction_UODToolWindow_SavePresetBtnPressed, "SavePresetBtnPressed" }, // 3732793306
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UODToolWindow>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UODToolWindow_Statics::NewProp_bIsToolDestroying_SetBit(void* Obj)
{
	((UODToolWindow*)Obj)->bIsToolDestroying = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UODToolWindow_Statics::NewProp_bIsToolDestroying = { "bIsToolDestroying", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UODToolWindow), &Z_Construct_UClass_UODToolWindow_Statics::NewProp_bIsToolDestroying_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsToolDestroying_MetaData), NewProp_bIsToolDestroying_MetaData) };
void Z_Construct_UClass_UODToolWindow_Statics::NewProp_bTraceForVelocity_SetBit(void* Obj)
{
	((UODToolWindow*)Obj)->bTraceForVelocity = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UODToolWindow_Statics::NewProp_bTraceForVelocity = { "bTraceForVelocity", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UODToolWindow), &Z_Construct_UClass_UODToolWindow_Statics::NewProp_bTraceForVelocity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTraceForVelocity_MetaData), NewProp_bTraceForVelocity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UODToolWindow_Statics::NewProp_LastSpawnCenterLocation = { "LastSpawnCenterLocation", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UODToolWindow, LastSpawnCenterLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastSpawnCenterLocation_MetaData), NewProp_LastSpawnCenterLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UODToolWindow_Statics::NewProp_SpawnCenterVelocity = { "SpawnCenterVelocity", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UODToolWindow, SpawnCenterVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnCenterVelocity_MetaData), NewProp_SpawnCenterVelocity_MetaData) };
void Z_Construct_UClass_UODToolWindow_Statics::NewProp_bTraceForRotationDiff_SetBit(void* Obj)
{
	((UODToolWindow*)Obj)->bTraceForRotationDiff = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UODToolWindow_Statics::NewProp_bTraceForRotationDiff = { "bTraceForRotationDiff", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UODToolWindow), &Z_Construct_UClass_UODToolWindow_Statics::NewProp_bTraceForRotationDiff_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTraceForRotationDiff_MetaData), NewProp_bTraceForRotationDiff_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UODToolWindow_Statics::NewProp_LastSpawnCenterRotation = { "LastSpawnCenterRotation", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UODToolWindow, LastSpawnCenterRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastSpawnCenterRotation_MetaData), NewProp_LastSpawnCenterRotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UODToolWindow_Statics::NewProp_SpawnCenterRotation = { "SpawnCenterRotation", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UODToolWindow, SpawnCenterRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnCenterRotation_MetaData), NewProp_SpawnCenterRotation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UODToolWindow_Statics::NewProp_PropDistributionBase = { "PropDistributionBase", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UODToolWindow, PropDistributionBase), Z_Construct_UClass_UODDistributionBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropDistributionBase_MetaData), NewProp_PropDistributionBase_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UODToolWindow_Statics::NewProp_PresetObject = { "PresetObject", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UODToolWindow, PresetObject), Z_Construct_UClass_UODPresetObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PresetObject_MetaData), NewProp_PresetObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UODToolWindow_Statics::NewProp_PresetDetails = { "PresetDetails", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UODToolWindow, PresetDetails), Z_Construct_UClass_UDetailsView_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PresetDetails_MetaData), NewProp_PresetDetails_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UODToolWindow_Statics::NewProp_PresetSettingsBorder = { "PresetSettingsBorder", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UODToolWindow, PresetSettingsBorder), Z_Construct_UClass_UPanelWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PresetSettingsBorder_MetaData), NewProp_PresetSettingsBorder_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UODToolWindow_Statics::NewProp_TitleBorder = { "TitleBorder", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UODToolWindow, TitleBorder), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TitleBorder_MetaData), NewProp_TitleBorder_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UODToolWindow_Statics::NewProp_PaletteSlate = { "PaletteSlate", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UODToolWindow, PaletteSlate), Z_Construct_UClass_UODPaletteSlate_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PaletteSlate_MetaData), NewProp_PaletteSlate_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UODToolWindow_Statics::NewProp_FinishBtn = { "FinishBtn", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UODToolWindow, FinishBtn), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FinishBtn_MetaData), NewProp_FinishBtn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UODToolWindow_Statics::NewProp_SimulationBorder = { "SimulationBorder", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UODToolWindow, SimulationBorder), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SimulationBorder_MetaData), NewProp_SimulationBorder_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UODToolWindow_Statics::NewProp_SimulationWidget = { "SimulationWidget", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UODToolWindow, SimulationWidget), Z_Construct_UClass_UODSimulationWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SimulationWidget_MetaData), NewProp_SimulationWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UODToolWindow_Statics::NewProp_SpawnCenterRef = { "SpawnCenterRef", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UODToolWindow, SpawnCenterRef), Z_Construct_UClass_AODSpawnCenter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnCenterRef_MetaData), NewProp_SpawnCenterRef_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UODToolWindow_Statics::NewProp_OnLevelActorDeletedNative = { "OnLevelActorDeletedNative", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UODToolWindow, OnLevelActorDeletedNative), Z_Construct_UDelegateFunction_ObjectDistribution_OnLevelActorDeletedNativeSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnLevelActorDeletedNative_MetaData), NewProp_OnLevelActorDeletedNative_MetaData) }; // 2163949514
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UODToolWindow_Statics::NewProp_AddNewPresetBtn = { "AddNewPresetBtn", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UODToolWindow, AddNewPresetBtn), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AddNewPresetBtn_MetaData), NewProp_AddNewPresetBtn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UODToolWindow_Statics::NewProp_AddSelectedAssetsBtn = { "AddSelectedAssetsBtn", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UODToolWindow, AddSelectedAssetsBtn), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AddSelectedAssetsBtn_MetaData), NewProp_AddSelectedAssetsBtn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UODToolWindow_Statics::NewProp_NewPresetText = { "NewPresetText", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UODToolWindow, NewPresetText), Z_Construct_UClass_UEditableTextBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewPresetText_MetaData), NewProp_NewPresetText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UODToolWindow_Statics::NewProp_AddAssetsText = { "AddAssetsText", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UODToolWindow, AddAssetsText), Z_Construct_UClass_UEditableTextBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AddAssetsText_MetaData), NewProp_AddAssetsText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UODToolWindow_Statics::NewProp_RenamePresetBtn = { "RenamePresetBtn", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UODToolWindow, RenamePresetBtn), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenamePresetBtn_MetaData), NewProp_RenamePresetBtn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UODToolWindow_Statics::NewProp_RenamePresetText = { "RenamePresetText", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UODToolWindow, RenamePresetText), Z_Construct_UClass_UEditableTextBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenamePresetText_MetaData), NewProp_RenamePresetText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UODToolWindow_Statics::NewProp_RemovePresetBtn = { "RemovePresetBtn", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UODToolWindow, RemovePresetBtn), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemovePresetBtn_MetaData), NewProp_RemovePresetBtn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UODToolWindow_Statics::NewProp_SavePresetBtn = { "SavePresetBtn", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UODToolWindow, SavePresetBtn), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SavePresetBtn_MetaData), NewProp_SavePresetBtn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UODToolWindow_Statics::NewProp_SaveAsNewPresetBtn = { "SaveAsNewPresetBtn", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UODToolWindow, SaveAsNewPresetBtn), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveAsNewPresetBtn_MetaData), NewProp_SaveAsNewPresetBtn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UODToolWindow_Statics::NewProp_SaveAsText = { "SaveAsText", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UODToolWindow, SaveAsText), Z_Construct_UClass_UEditableTextBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveAsText_MetaData), NewProp_SaveAsText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UODToolWindow_Statics::NewProp_ObjectSlots_Inner = { "ObjectSlots", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UODObjectSlot_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UODToolWindow_Statics::NewProp_ObjectSlots = { "ObjectSlots", nullptr, (EPropertyFlags)0x0144008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UODToolWindow, ObjectSlots), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectSlots_MetaData), NewProp_ObjectSlots_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UODToolWindow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODToolWindow_Statics::NewProp_bIsToolDestroying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODToolWindow_Statics::NewProp_bTraceForVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODToolWindow_Statics::NewProp_LastSpawnCenterLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODToolWindow_Statics::NewProp_SpawnCenterVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODToolWindow_Statics::NewProp_bTraceForRotationDiff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODToolWindow_Statics::NewProp_LastSpawnCenterRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODToolWindow_Statics::NewProp_SpawnCenterRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODToolWindow_Statics::NewProp_PropDistributionBase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODToolWindow_Statics::NewProp_PresetObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODToolWindow_Statics::NewProp_PresetDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODToolWindow_Statics::NewProp_PresetSettingsBorder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODToolWindow_Statics::NewProp_TitleBorder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODToolWindow_Statics::NewProp_PaletteSlate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODToolWindow_Statics::NewProp_FinishBtn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODToolWindow_Statics::NewProp_SimulationBorder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODToolWindow_Statics::NewProp_SimulationWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODToolWindow_Statics::NewProp_SpawnCenterRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODToolWindow_Statics::NewProp_OnLevelActorDeletedNative,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODToolWindow_Statics::NewProp_AddNewPresetBtn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODToolWindow_Statics::NewProp_AddSelectedAssetsBtn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODToolWindow_Statics::NewProp_NewPresetText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODToolWindow_Statics::NewProp_AddAssetsText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODToolWindow_Statics::NewProp_RenamePresetBtn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODToolWindow_Statics::NewProp_RenamePresetText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODToolWindow_Statics::NewProp_RemovePresetBtn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODToolWindow_Statics::NewProp_SavePresetBtn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODToolWindow_Statics::NewProp_SaveAsNewPresetBtn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODToolWindow_Statics::NewProp_SaveAsText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODToolWindow_Statics::NewProp_ObjectSlots_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODToolWindow_Statics::NewProp_ObjectSlots,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UODToolWindow_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UODToolWindow_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEditorUtilityWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ObjectDistribution,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UODToolWindow_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UODToolWindow_Statics::ClassParams = {
	&UODToolWindow::StaticClass,
	"Editor",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UODToolWindow_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UODToolWindow_Statics::PropPointers),
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UODToolWindow_Statics::Class_MetaDataParams), Z_Construct_UClass_UODToolWindow_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UODToolWindow()
{
	if (!Z_Registration_Info_UClass_UODToolWindow.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UODToolWindow.OuterSingleton, Z_Construct_UClass_UODToolWindow_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UODToolWindow.OuterSingleton;
}
template<> OBJECTDISTRIBUTION_API UClass* StaticClass<UODToolWindow>()
{
	return UODToolWindow::StaticClass();
}
UODToolWindow::UODToolWindow(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UODToolWindow);
UODToolWindow::~UODToolWindow() {}
// End Class UODToolWindow

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ObjectDistribution_Source_ObjectDistribution_Public_UI_ODToolWindow_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UODToolWindow, UODToolWindow::StaticClass, TEXT("UODToolWindow"), &Z_Registration_Info_UClass_UODToolWindow, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UODToolWindow), 2020612274U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ObjectDistribution_Source_ObjectDistribution_Public_UI_ODToolWindow_h_2788596552(TEXT("/Script/ObjectDistribution"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_ObjectDistribution_Source_ObjectDistribution_Public_UI_ODToolWindow_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ObjectDistribution_Source_ObjectDistribution_Public_UI_ODToolWindow_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
