// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoSplineEditor/Public/UI/ASSplineSlot.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeASSplineSlot() {}

// Begin Cross Module References
AUTOSPLINEEDITOR_API UClass* Z_Construct_UClass_UASSplineSlot();
AUTOSPLINEEDITOR_API UClass* Z_Construct_UClass_UASSplineSlot_NoRegister();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ETextCommit();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UCheckBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UEditableTextBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_AutoSplineEditor();
// End Cross Module References

// Begin Class UASSplineSlot Function RenameBtnPressed
struct Z_Construct_UFunction_UASSplineSlot_RenameBtnPressed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ASSplineSlot.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UASSplineSlot_RenameBtnPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UASSplineSlot, nullptr, "RenameBtnPressed", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UASSplineSlot_RenameBtnPressed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UASSplineSlot_RenameBtnPressed_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UASSplineSlot_RenameBtnPressed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UASSplineSlot_RenameBtnPressed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UASSplineSlot::execRenameBtnPressed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RenameBtnPressed();
	P_NATIVE_END;
}
// End Class UASSplineSlot Function RenameBtnPressed

// Begin Class UASSplineSlot Function SeeSplineBtnPressed
struct Z_Construct_UFunction_UASSplineSlot_SeeSplineBtnPressed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ASSplineSlot.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UASSplineSlot_SeeSplineBtnPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UASSplineSlot, nullptr, "SeeSplineBtnPressed", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UASSplineSlot_SeeSplineBtnPressed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UASSplineSlot_SeeSplineBtnPressed_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UASSplineSlot_SeeSplineBtnPressed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UASSplineSlot_SeeSplineBtnPressed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UASSplineSlot::execSeeSplineBtnPressed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SeeSplineBtnPressed();
	P_NATIVE_END;
}
// End Class UASSplineSlot Function SeeSplineBtnPressed

// Begin Class UASSplineSlot Function SelectionCheckboxChanged
struct Z_Construct_UFunction_UASSplineSlot_SelectionCheckboxChanged_Statics
{
	struct ASSplineSlot_eventSelectionCheckboxChanged_Parms
	{
		bool InNewState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ASSplineSlot.h" },
	};
#endif // WITH_METADATA
	static void NewProp_InNewState_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InNewState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UASSplineSlot_SelectionCheckboxChanged_Statics::NewProp_InNewState_SetBit(void* Obj)
{
	((ASSplineSlot_eventSelectionCheckboxChanged_Parms*)Obj)->InNewState = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UASSplineSlot_SelectionCheckboxChanged_Statics::NewProp_InNewState = { "InNewState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASSplineSlot_eventSelectionCheckboxChanged_Parms), &Z_Construct_UFunction_UASSplineSlot_SelectionCheckboxChanged_Statics::NewProp_InNewState_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UASSplineSlot_SelectionCheckboxChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UASSplineSlot_SelectionCheckboxChanged_Statics::NewProp_InNewState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UASSplineSlot_SelectionCheckboxChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UASSplineSlot_SelectionCheckboxChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UASSplineSlot, nullptr, "SelectionCheckboxChanged", nullptr, nullptr, Z_Construct_UFunction_UASSplineSlot_SelectionCheckboxChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UASSplineSlot_SelectionCheckboxChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UASSplineSlot_SelectionCheckboxChanged_Statics::ASSplineSlot_eventSelectionCheckboxChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UASSplineSlot_SelectionCheckboxChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UASSplineSlot_SelectionCheckboxChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UASSplineSlot_SelectionCheckboxChanged_Statics::ASSplineSlot_eventSelectionCheckboxChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UASSplineSlot_SelectionCheckboxChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UASSplineSlot_SelectionCheckboxChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UASSplineSlot::execSelectionCheckboxChanged)
{
	P_GET_UBOOL(Z_Param_InNewState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SelectionCheckboxChanged(Z_Param_InNewState);
	P_NATIVE_END;
}
// End Class UASSplineSlot Function SelectionCheckboxChanged

// Begin Class UASSplineSlot Function SplineNameTextBoxCommitted
struct Z_Construct_UFunction_UASSplineSlot_SplineNameTextBoxCommitted_Statics
{
	struct ASSplineSlot_eventSplineNameTextBoxCommitted_Parms
	{
		FText InText;
		TEnumAsByte<ETextCommit::Type> InCommitMethod;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ASSplineSlot.h" },
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
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UASSplineSlot_SplineNameTextBoxCommitted_Statics::NewProp_InText = { "InText", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASSplineSlot_eventSplineNameTextBoxCommitted_Parms, InText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InText_MetaData), NewProp_InText_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UASSplineSlot_SplineNameTextBoxCommitted_Statics::NewProp_InCommitMethod = { "InCommitMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASSplineSlot_eventSplineNameTextBoxCommitted_Parms, InCommitMethod), Z_Construct_UEnum_SlateCore_ETextCommit, METADATA_PARAMS(0, nullptr) }; // 1817921380
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UASSplineSlot_SplineNameTextBoxCommitted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UASSplineSlot_SplineNameTextBoxCommitted_Statics::NewProp_InText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UASSplineSlot_SplineNameTextBoxCommitted_Statics::NewProp_InCommitMethod,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UASSplineSlot_SplineNameTextBoxCommitted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UASSplineSlot_SplineNameTextBoxCommitted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UASSplineSlot, nullptr, "SplineNameTextBoxCommitted", nullptr, nullptr, Z_Construct_UFunction_UASSplineSlot_SplineNameTextBoxCommitted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UASSplineSlot_SplineNameTextBoxCommitted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UASSplineSlot_SplineNameTextBoxCommitted_Statics::ASSplineSlot_eventSplineNameTextBoxCommitted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UASSplineSlot_SplineNameTextBoxCommitted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UASSplineSlot_SplineNameTextBoxCommitted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UASSplineSlot_SplineNameTextBoxCommitted_Statics::ASSplineSlot_eventSplineNameTextBoxCommitted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UASSplineSlot_SplineNameTextBoxCommitted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UASSplineSlot_SplineNameTextBoxCommitted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UASSplineSlot::execSplineNameTextBoxCommitted)
{
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_InText);
	P_GET_PROPERTY(FByteProperty,Z_Param_InCommitMethod);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SplineNameTextBoxCommitted(Z_Param_Out_InText,ETextCommit::Type(Z_Param_InCommitMethod));
	P_NATIVE_END;
}
// End Class UASSplineSlot Function SplineNameTextBoxCommitted

// Begin Class UASSplineSlot
void UASSplineSlot::StaticRegisterNativesUASSplineSlot()
{
	UClass* Class = UASSplineSlot::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RenameBtnPressed", &UASSplineSlot::execRenameBtnPressed },
		{ "SeeSplineBtnPressed", &UASSplineSlot::execSeeSplineBtnPressed },
		{ "SelectionCheckboxChanged", &UASSplineSlot::execSelectionCheckboxChanged },
		{ "SplineNameTextBoxCommitted", &UASSplineSlot::execSplineNameTextBoxCommitted },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UASSplineSlot);
UClass* Z_Construct_UClass_UASSplineSlot_NoRegister()
{
	return UASSplineSlot::StaticClass();
}
struct Z_Construct_UClass_UASSplineSlot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/ASSplineSlot.h" },
		{ "ModuleRelativePath", "Public/UI/ASSplineSlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplineObjectName_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/ASSplineSlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplineObjectLabel_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/ASSplineSlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplineNameTextBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ASSplineSlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SeeSplineBtn_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ASSplineSlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenameBtn_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ASSplineSlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectionCheckbox_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ASSplineSlot.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SplineObjectName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SplineObjectLabel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SplineNameTextBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SeeSplineBtn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RenameBtn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectionCheckbox;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UASSplineSlot_RenameBtnPressed, "RenameBtnPressed" }, // 2861793552
		{ &Z_Construct_UFunction_UASSplineSlot_SeeSplineBtnPressed, "SeeSplineBtnPressed" }, // 3403185490
		{ &Z_Construct_UFunction_UASSplineSlot_SelectionCheckboxChanged, "SelectionCheckboxChanged" }, // 2102856462
		{ &Z_Construct_UFunction_UASSplineSlot_SplineNameTextBoxCommitted, "SplineNameTextBoxCommitted" }, // 2872189253
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UASSplineSlot>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UASSplineSlot_Statics::NewProp_SplineObjectName = { "SplineObjectName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UASSplineSlot, SplineObjectName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplineObjectName_MetaData), NewProp_SplineObjectName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UASSplineSlot_Statics::NewProp_SplineObjectLabel = { "SplineObjectLabel", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UASSplineSlot, SplineObjectLabel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplineObjectLabel_MetaData), NewProp_SplineObjectLabel_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UASSplineSlot_Statics::NewProp_SplineNameTextBox = { "SplineNameTextBox", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UASSplineSlot, SplineNameTextBox), Z_Construct_UClass_UEditableTextBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplineNameTextBox_MetaData), NewProp_SplineNameTextBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UASSplineSlot_Statics::NewProp_SeeSplineBtn = { "SeeSplineBtn", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UASSplineSlot, SeeSplineBtn), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SeeSplineBtn_MetaData), NewProp_SeeSplineBtn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UASSplineSlot_Statics::NewProp_RenameBtn = { "RenameBtn", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UASSplineSlot, RenameBtn), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenameBtn_MetaData), NewProp_RenameBtn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UASSplineSlot_Statics::NewProp_SelectionCheckbox = { "SelectionCheckbox", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UASSplineSlot, SelectionCheckbox), Z_Construct_UClass_UCheckBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectionCheckbox_MetaData), NewProp_SelectionCheckbox_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UASSplineSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UASSplineSlot_Statics::NewProp_SplineObjectName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UASSplineSlot_Statics::NewProp_SplineObjectLabel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UASSplineSlot_Statics::NewProp_SplineNameTextBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UASSplineSlot_Statics::NewProp_SeeSplineBtn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UASSplineSlot_Statics::NewProp_RenameBtn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UASSplineSlot_Statics::NewProp_SelectionCheckbox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UASSplineSlot_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UASSplineSlot_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_AutoSplineEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UASSplineSlot_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UASSplineSlot_Statics::ClassParams = {
	&UASSplineSlot::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UASSplineSlot_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UASSplineSlot_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UASSplineSlot_Statics::Class_MetaDataParams), Z_Construct_UClass_UASSplineSlot_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UASSplineSlot()
{
	if (!Z_Registration_Info_UClass_UASSplineSlot.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UASSplineSlot.OuterSingleton, Z_Construct_UClass_UASSplineSlot_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UASSplineSlot.OuterSingleton;
}
template<> AUTOSPLINEEDITOR_API UClass* StaticClass<UASSplineSlot>()
{
	return UASSplineSlot::StaticClass();
}
UASSplineSlot::UASSplineSlot(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UASSplineSlot);
UASSplineSlot::~UASSplineSlot() {}
// End Class UASSplineSlot

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_AutoSplineEditor_Public_UI_ASSplineSlot_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UASSplineSlot, UASSplineSlot::StaticClass, TEXT("UASSplineSlot"), &Z_Registration_Info_UClass_UASSplineSlot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UASSplineSlot), 402237016U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_AutoSplineEditor_Public_UI_ASSplineSlot_h_760311530(TEXT("/Script/AutoSplineEditor"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_AutoSplineEditor_Public_UI_ASSplineSlot_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_AutoSplineEditor_Public_UI_ASSplineSlot_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
