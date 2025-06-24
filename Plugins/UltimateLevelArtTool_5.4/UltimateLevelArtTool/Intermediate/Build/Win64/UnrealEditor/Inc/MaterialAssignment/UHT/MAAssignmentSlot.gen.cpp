// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MaterialAssignment/Public/UI/MAAssignmentSlot.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMAAssignmentSlot() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FAssetData();
MATERIALASSIGNMENT_API UClass* Z_Construct_UClass_UMAAssignmentSlot();
MATERIALASSIGNMENT_API UClass* Z_Construct_UClass_UMAAssignmentSlot_NoRegister();
MATERIALASSIGNMENT_API UClass* Z_Construct_UClass_UMAMaterialParamObject_NoRegister();
SCRIPTABLEEDITORWIDGETS_API UClass* Z_Construct_UClass_USinglePropertyView_NoRegister();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ETextCommit();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UEditableTextBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UPanelWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_MaterialAssignment();
// End Cross Module References

// Begin Class UMAAssignmentSlot Function ApplyBtnPressed
struct Z_Construct_UFunction_UMAAssignmentSlot_ApplyBtnPressed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/MAAssignmentSlot.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMAAssignmentSlot_ApplyBtnPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMAAssignmentSlot, nullptr, "ApplyBtnPressed", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMAAssignmentSlot_ApplyBtnPressed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMAAssignmentSlot_ApplyBtnPressed_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMAAssignmentSlot_ApplyBtnPressed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMAAssignmentSlot_ApplyBtnPressed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMAAssignmentSlot::execApplyBtnPressed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyBtnPressed();
	P_NATIVE_END;
}
// End Class UMAAssignmentSlot Function ApplyBtnPressed

// Begin Class UMAAssignmentSlot Function DeleteBtnPressed
struct Z_Construct_UFunction_UMAAssignmentSlot_DeleteBtnPressed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/MAAssignmentSlot.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMAAssignmentSlot_DeleteBtnPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMAAssignmentSlot, nullptr, "DeleteBtnPressed", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMAAssignmentSlot_DeleteBtnPressed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMAAssignmentSlot_DeleteBtnPressed_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMAAssignmentSlot_DeleteBtnPressed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMAAssignmentSlot_DeleteBtnPressed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMAAssignmentSlot::execDeleteBtnPressed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DeleteBtnPressed();
	P_NATIVE_END;
}
// End Class UMAAssignmentSlot Function DeleteBtnPressed

// Begin Class UMAAssignmentSlot Function OnSlotNameTextCommitted
struct Z_Construct_UFunction_UMAAssignmentSlot_OnSlotNameTextCommitted_Statics
{
	struct MAAssignmentSlot_eventOnSlotNameTextCommitted_Parms
	{
		FText Text;
		TEnumAsByte<ETextCommit::Type> CommitMethod;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/MAAssignmentSlot.h" },
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
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMAAssignmentSlot_OnSlotNameTextCommitted_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MAAssignmentSlot_eventOnSlotNameTextCommitted_Parms, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMAAssignmentSlot_OnSlotNameTextCommitted_Statics::NewProp_CommitMethod = { "CommitMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MAAssignmentSlot_eventOnSlotNameTextCommitted_Parms, CommitMethod), Z_Construct_UEnum_SlateCore_ETextCommit, METADATA_PARAMS(0, nullptr) }; // 1817921380
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMAAssignmentSlot_OnSlotNameTextCommitted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMAAssignmentSlot_OnSlotNameTextCommitted_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMAAssignmentSlot_OnSlotNameTextCommitted_Statics::NewProp_CommitMethod,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMAAssignmentSlot_OnSlotNameTextCommitted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMAAssignmentSlot_OnSlotNameTextCommitted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMAAssignmentSlot, nullptr, "OnSlotNameTextCommitted", nullptr, nullptr, Z_Construct_UFunction_UMAAssignmentSlot_OnSlotNameTextCommitted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMAAssignmentSlot_OnSlotNameTextCommitted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMAAssignmentSlot_OnSlotNameTextCommitted_Statics::MAAssignmentSlot_eventOnSlotNameTextCommitted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMAAssignmentSlot_OnSlotNameTextCommitted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMAAssignmentSlot_OnSlotNameTextCommitted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMAAssignmentSlot_OnSlotNameTextCommitted_Statics::MAAssignmentSlot_eventOnSlotNameTextCommitted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMAAssignmentSlot_OnSlotNameTextCommitted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMAAssignmentSlot_OnSlotNameTextCommitted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMAAssignmentSlot::execOnSlotNameTextCommitted)
{
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Text);
	P_GET_PROPERTY(FByteProperty,Z_Param_CommitMethod);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSlotNameTextCommitted(Z_Param_Out_Text,ETextCommit::Type(Z_Param_CommitMethod));
	P_NATIVE_END;
}
// End Class UMAAssignmentSlot Function OnSlotNameTextCommitted

// Begin Class UMAAssignmentSlot Function QuickAssignBtnPressed
struct Z_Construct_UFunction_UMAAssignmentSlot_QuickAssignBtnPressed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/MAAssignmentSlot.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMAAssignmentSlot_QuickAssignBtnPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMAAssignmentSlot, nullptr, "QuickAssignBtnPressed", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMAAssignmentSlot_QuickAssignBtnPressed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMAAssignmentSlot_QuickAssignBtnPressed_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMAAssignmentSlot_QuickAssignBtnPressed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMAAssignmentSlot_QuickAssignBtnPressed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMAAssignmentSlot::execQuickAssignBtnPressed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->QuickAssignBtnPressed();
	P_NATIVE_END;
}
// End Class UMAAssignmentSlot Function QuickAssignBtnPressed

// Begin Class UMAAssignmentSlot
void UMAAssignmentSlot::StaticRegisterNativesUMAAssignmentSlot()
{
	UClass* Class = UMAAssignmentSlot::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ApplyBtnPressed", &UMAAssignmentSlot::execApplyBtnPressed },
		{ "DeleteBtnPressed", &UMAAssignmentSlot::execDeleteBtnPressed },
		{ "OnSlotNameTextCommitted", &UMAAssignmentSlot::execOnSlotNameTextCommitted },
		{ "QuickAssignBtnPressed", &UMAAssignmentSlot::execQuickAssignBtnPressed },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMAAssignmentSlot);
UClass* Z_Construct_UClass_UMAAssignmentSlot_NoRegister()
{
	return UMAAssignmentSlot::StaticClass();
}
struct Z_Construct_UClass_UMAAssignmentSlot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/MAAssignmentSlot.h" },
		{ "ModuleRelativePath", "Public/UI/MAAssignmentSlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SuggestedMaterialData_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/MAAssignmentSlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialParamObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/MAAssignmentSlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CounterText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MAAssignmentSlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MultipleChoiceBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MAAssignmentSlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotRenameText_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MAAssignmentSlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshNameList_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MAAssignmentSlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialPropertyView_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MAAssignmentSlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ApplyBtn_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MAAssignmentSlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuickAssignBtn_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MAAssignmentSlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeleteBtn_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MAAssignmentSlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuickAssignText_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MAAssignmentSlot.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SuggestedMaterialData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialParamObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CounterText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MultipleChoiceBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SlotRenameText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshNameList;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialPropertyView;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ApplyBtn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_QuickAssignBtn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DeleteBtn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_QuickAssignText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMAAssignmentSlot_ApplyBtnPressed, "ApplyBtnPressed" }, // 637174873
		{ &Z_Construct_UFunction_UMAAssignmentSlot_DeleteBtnPressed, "DeleteBtnPressed" }, // 877699639
		{ &Z_Construct_UFunction_UMAAssignmentSlot_OnSlotNameTextCommitted, "OnSlotNameTextCommitted" }, // 572054068
		{ &Z_Construct_UFunction_UMAAssignmentSlot_QuickAssignBtnPressed, "QuickAssignBtnPressed" }, // 3346232166
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMAAssignmentSlot>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMAAssignmentSlot_Statics::NewProp_SuggestedMaterialData = { "SuggestedMaterialData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMAAssignmentSlot, SuggestedMaterialData), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SuggestedMaterialData_MetaData), NewProp_SuggestedMaterialData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMAAssignmentSlot_Statics::NewProp_MaterialParamObject = { "MaterialParamObject", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMAAssignmentSlot, MaterialParamObject), Z_Construct_UClass_UMAMaterialParamObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialParamObject_MetaData), NewProp_MaterialParamObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMAAssignmentSlot_Statics::NewProp_CounterText = { "CounterText", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMAAssignmentSlot, CounterText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CounterText_MetaData), NewProp_CounterText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMAAssignmentSlot_Statics::NewProp_MultipleChoiceBox = { "MultipleChoiceBox", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMAAssignmentSlot, MultipleChoiceBox), Z_Construct_UClass_UPanelWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MultipleChoiceBox_MetaData), NewProp_MultipleChoiceBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMAAssignmentSlot_Statics::NewProp_SlotRenameText = { "SlotRenameText", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMAAssignmentSlot, SlotRenameText), Z_Construct_UClass_UEditableTextBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotRenameText_MetaData), NewProp_SlotRenameText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMAAssignmentSlot_Statics::NewProp_MeshNameList = { "MeshNameList", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMAAssignmentSlot, MeshNameList), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshNameList_MetaData), NewProp_MeshNameList_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMAAssignmentSlot_Statics::NewProp_MaterialPropertyView = { "MaterialPropertyView", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMAAssignmentSlot, MaterialPropertyView), Z_Construct_UClass_USinglePropertyView_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialPropertyView_MetaData), NewProp_MaterialPropertyView_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMAAssignmentSlot_Statics::NewProp_ApplyBtn = { "ApplyBtn", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMAAssignmentSlot, ApplyBtn), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ApplyBtn_MetaData), NewProp_ApplyBtn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMAAssignmentSlot_Statics::NewProp_QuickAssignBtn = { "QuickAssignBtn", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMAAssignmentSlot, QuickAssignBtn), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuickAssignBtn_MetaData), NewProp_QuickAssignBtn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMAAssignmentSlot_Statics::NewProp_DeleteBtn = { "DeleteBtn", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMAAssignmentSlot, DeleteBtn), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeleteBtn_MetaData), NewProp_DeleteBtn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMAAssignmentSlot_Statics::NewProp_QuickAssignText = { "QuickAssignText", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMAAssignmentSlot, QuickAssignText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuickAssignText_MetaData), NewProp_QuickAssignText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMAAssignmentSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMAAssignmentSlot_Statics::NewProp_SuggestedMaterialData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMAAssignmentSlot_Statics::NewProp_MaterialParamObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMAAssignmentSlot_Statics::NewProp_CounterText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMAAssignmentSlot_Statics::NewProp_MultipleChoiceBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMAAssignmentSlot_Statics::NewProp_SlotRenameText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMAAssignmentSlot_Statics::NewProp_MeshNameList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMAAssignmentSlot_Statics::NewProp_MaterialPropertyView,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMAAssignmentSlot_Statics::NewProp_ApplyBtn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMAAssignmentSlot_Statics::NewProp_QuickAssignBtn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMAAssignmentSlot_Statics::NewProp_DeleteBtn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMAAssignmentSlot_Statics::NewProp_QuickAssignText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMAAssignmentSlot_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMAAssignmentSlot_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_MaterialAssignment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMAAssignmentSlot_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMAAssignmentSlot_Statics::ClassParams = {
	&UMAAssignmentSlot::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMAAssignmentSlot_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMAAssignmentSlot_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMAAssignmentSlot_Statics::Class_MetaDataParams), Z_Construct_UClass_UMAAssignmentSlot_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMAAssignmentSlot()
{
	if (!Z_Registration_Info_UClass_UMAAssignmentSlot.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMAAssignmentSlot.OuterSingleton, Z_Construct_UClass_UMAAssignmentSlot_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMAAssignmentSlot.OuterSingleton;
}
template<> MATERIALASSIGNMENT_API UClass* StaticClass<UMAAssignmentSlot>()
{
	return UMAAssignmentSlot::StaticClass();
}
UMAAssignmentSlot::UMAAssignmentSlot(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMAAssignmentSlot);
UMAAssignmentSlot::~UMAAssignmentSlot() {}
// End Class UMAAssignmentSlot

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_MaterialAssignment_Public_UI_MAAssignmentSlot_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMAAssignmentSlot, UMAAssignmentSlot::StaticClass, TEXT("UMAAssignmentSlot"), &Z_Registration_Info_UClass_UMAAssignmentSlot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMAAssignmentSlot), 7074716U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_MaterialAssignment_Public_UI_MAAssignmentSlot_h_1769686731(TEXT("/Script/MaterialAssignment"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_MaterialAssignment_Public_UI_MAAssignmentSlot_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_MaterialAssignment_Public_UI_MAAssignmentSlot_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
