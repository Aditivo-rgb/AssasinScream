// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularBuilding/Public/UI/MBTypeWindow.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMBTypeWindow() {}

// Begin Cross Module References
MODULARBUILDING_API UClass* Z_Construct_UClass_UMBAssetBorder_NoRegister();
MODULARBUILDING_API UClass* Z_Construct_UClass_UMBAssetSlot_NoRegister();
MODULARBUILDING_API UClass* Z_Construct_UClass_UMBTypeWindow();
MODULARBUILDING_API UClass* Z_Construct_UClass_UMBTypeWindow_NoRegister();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ETextCommit();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UEditableTextBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UScrollBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_ModularBuilding();
// End Cross Module References

// Begin Class UMBTypeWindow Function DeleteBtnPressed
struct Z_Construct_UFunction_UMBTypeWindow_DeleteBtnPressed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/MBTypeWindow.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMBTypeWindow_DeleteBtnPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMBTypeWindow, nullptr, "DeleteBtnPressed", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBTypeWindow_DeleteBtnPressed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMBTypeWindow_DeleteBtnPressed_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMBTypeWindow_DeleteBtnPressed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMBTypeWindow_DeleteBtnPressed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMBTypeWindow::execDeleteBtnPressed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DeleteBtnPressed();
	P_NATIVE_END;
}
// End Class UMBTypeWindow Function DeleteBtnPressed

// Begin Class UMBTypeWindow Function OnTitleTextBoxCommitted
struct Z_Construct_UFunction_UMBTypeWindow_OnTitleTextBoxCommitted_Statics
{
	struct MBTypeWindow_eventOnTitleTextBoxCommitted_Parms
	{
		FText Text;
		TEnumAsByte<ETextCommit::Type> CommitMethod;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/MBTypeWindow.h" },
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
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMBTypeWindow_OnTitleTextBoxCommitted_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MBTypeWindow_eventOnTitleTextBoxCommitted_Parms, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMBTypeWindow_OnTitleTextBoxCommitted_Statics::NewProp_CommitMethod = { "CommitMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MBTypeWindow_eventOnTitleTextBoxCommitted_Parms, CommitMethod), Z_Construct_UEnum_SlateCore_ETextCommit, METADATA_PARAMS(0, nullptr) }; // 1817921380
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMBTypeWindow_OnTitleTextBoxCommitted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMBTypeWindow_OnTitleTextBoxCommitted_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMBTypeWindow_OnTitleTextBoxCommitted_Statics::NewProp_CommitMethod,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBTypeWindow_OnTitleTextBoxCommitted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMBTypeWindow_OnTitleTextBoxCommitted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMBTypeWindow, nullptr, "OnTitleTextBoxCommitted", nullptr, nullptr, Z_Construct_UFunction_UMBTypeWindow_OnTitleTextBoxCommitted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMBTypeWindow_OnTitleTextBoxCommitted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMBTypeWindow_OnTitleTextBoxCommitted_Statics::MBTypeWindow_eventOnTitleTextBoxCommitted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBTypeWindow_OnTitleTextBoxCommitted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMBTypeWindow_OnTitleTextBoxCommitted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMBTypeWindow_OnTitleTextBoxCommitted_Statics::MBTypeWindow_eventOnTitleTextBoxCommitted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMBTypeWindow_OnTitleTextBoxCommitted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMBTypeWindow_OnTitleTextBoxCommitted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMBTypeWindow::execOnTitleTextBoxCommitted)
{
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Text);
	P_GET_PROPERTY(FByteProperty,Z_Param_CommitMethod);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnTitleTextBoxCommitted(Z_Param_Out_Text,ETextCommit::Type(Z_Param_CommitMethod));
	P_NATIVE_END;
}
// End Class UMBTypeWindow Function OnTitleTextBoxCommitted

// Begin Class UMBTypeWindow Function TypeDownBtnPressed
struct Z_Construct_UFunction_UMBTypeWindow_TypeDownBtnPressed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/MBTypeWindow.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMBTypeWindow_TypeDownBtnPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMBTypeWindow, nullptr, "TypeDownBtnPressed", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBTypeWindow_TypeDownBtnPressed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMBTypeWindow_TypeDownBtnPressed_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMBTypeWindow_TypeDownBtnPressed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMBTypeWindow_TypeDownBtnPressed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMBTypeWindow::execTypeDownBtnPressed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TypeDownBtnPressed();
	P_NATIVE_END;
}
// End Class UMBTypeWindow Function TypeDownBtnPressed

// Begin Class UMBTypeWindow Function TypeUpBtnPressed
struct Z_Construct_UFunction_UMBTypeWindow_TypeUpBtnPressed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/MBTypeWindow.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMBTypeWindow_TypeUpBtnPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMBTypeWindow, nullptr, "TypeUpBtnPressed", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBTypeWindow_TypeUpBtnPressed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMBTypeWindow_TypeUpBtnPressed_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMBTypeWindow_TypeUpBtnPressed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMBTypeWindow_TypeUpBtnPressed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMBTypeWindow::execTypeUpBtnPressed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TypeUpBtnPressed();
	P_NATIVE_END;
}
// End Class UMBTypeWindow Function TypeUpBtnPressed

// Begin Class UMBTypeWindow
void UMBTypeWindow::StaticRegisterNativesUMBTypeWindow()
{
	UClass* Class = UMBTypeWindow::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DeleteBtnPressed", &UMBTypeWindow::execDeleteBtnPressed },
		{ "OnTitleTextBoxCommitted", &UMBTypeWindow::execOnTitleTextBoxCommitted },
		{ "TypeDownBtnPressed", &UMBTypeWindow::execTypeDownBtnPressed },
		{ "TypeUpBtnPressed", &UMBTypeWindow::execTypeUpBtnPressed },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMBTypeWindow);
UClass* Z_Construct_UClass_UMBTypeWindow_NoRegister()
{
	return UMBTypeWindow::StaticClass();
}
struct Z_Construct_UClass_UMBTypeWindow_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/MBTypeWindow.h" },
		{ "ModuleRelativePath", "Public/UI/MBTypeWindow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MenuType_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/MBTypeWindow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AddedSlots_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MBTypeWindow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MBTypeWindow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TitleTextBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MBTypeWindow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetDropBorder_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MBTypeWindow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TypeUpBtn_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MBTypeWindow.h" },
		{ "ToolTip", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TypeDownBtn_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MBTypeWindow.h" },
		{ "ToolTip", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeleteBtn_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MBTypeWindow.h" },
		{ "ToolTip", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_MenuType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AddedSlots_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AddedSlots;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AssetBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TitleTextBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AssetDropBorder;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TypeUpBtn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TypeDownBtn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DeleteBtn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMBTypeWindow_DeleteBtnPressed, "DeleteBtnPressed" }, // 2559652570
		{ &Z_Construct_UFunction_UMBTypeWindow_OnTitleTextBoxCommitted, "OnTitleTextBoxCommitted" }, // 974992770
		{ &Z_Construct_UFunction_UMBTypeWindow_TypeDownBtnPressed, "TypeDownBtnPressed" }, // 571837346
		{ &Z_Construct_UFunction_UMBTypeWindow_TypeUpBtnPressed, "TypeUpBtnPressed" }, // 3811432093
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMBTypeWindow>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMBTypeWindow_Statics::NewProp_MenuType = { "MenuType", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBTypeWindow, MenuType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MenuType_MetaData), NewProp_MenuType_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMBTypeWindow_Statics::NewProp_AddedSlots_Inner = { "AddedSlots", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMBAssetSlot_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMBTypeWindow_Statics::NewProp_AddedSlots = { "AddedSlots", nullptr, (EPropertyFlags)0x0040008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBTypeWindow, AddedSlots), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AddedSlots_MetaData), NewProp_AddedSlots_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMBTypeWindow_Statics::NewProp_AssetBox = { "AssetBox", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBTypeWindow, AssetBox), Z_Construct_UClass_UScrollBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetBox_MetaData), NewProp_AssetBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMBTypeWindow_Statics::NewProp_TitleTextBox = { "TitleTextBox", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBTypeWindow, TitleTextBox), Z_Construct_UClass_UEditableTextBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TitleTextBox_MetaData), NewProp_TitleTextBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMBTypeWindow_Statics::NewProp_AssetDropBorder = { "AssetDropBorder", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBTypeWindow, AssetDropBorder), Z_Construct_UClass_UMBAssetBorder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetDropBorder_MetaData), NewProp_AssetDropBorder_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMBTypeWindow_Statics::NewProp_TypeUpBtn = { "TypeUpBtn", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBTypeWindow, TypeUpBtn), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TypeUpBtn_MetaData), NewProp_TypeUpBtn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMBTypeWindow_Statics::NewProp_TypeDownBtn = { "TypeDownBtn", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBTypeWindow, TypeDownBtn), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TypeDownBtn_MetaData), NewProp_TypeDownBtn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMBTypeWindow_Statics::NewProp_DeleteBtn = { "DeleteBtn", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBTypeWindow, DeleteBtn), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeleteBtn_MetaData), NewProp_DeleteBtn_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMBTypeWindow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBTypeWindow_Statics::NewProp_MenuType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBTypeWindow_Statics::NewProp_AddedSlots_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBTypeWindow_Statics::NewProp_AddedSlots,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBTypeWindow_Statics::NewProp_AssetBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBTypeWindow_Statics::NewProp_TitleTextBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBTypeWindow_Statics::NewProp_AssetDropBorder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBTypeWindow_Statics::NewProp_TypeUpBtn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBTypeWindow_Statics::NewProp_TypeDownBtn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBTypeWindow_Statics::NewProp_DeleteBtn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMBTypeWindow_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMBTypeWindow_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ModularBuilding,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMBTypeWindow_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMBTypeWindow_Statics::ClassParams = {
	&UMBTypeWindow::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMBTypeWindow_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMBTypeWindow_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMBTypeWindow_Statics::Class_MetaDataParams), Z_Construct_UClass_UMBTypeWindow_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMBTypeWindow()
{
	if (!Z_Registration_Info_UClass_UMBTypeWindow.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMBTypeWindow.OuterSingleton, Z_Construct_UClass_UMBTypeWindow_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMBTypeWindow.OuterSingleton;
}
template<> MODULARBUILDING_API UClass* StaticClass<UMBTypeWindow>()
{
	return UMBTypeWindow::StaticClass();
}
UMBTypeWindow::UMBTypeWindow(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMBTypeWindow);
UMBTypeWindow::~UMBTypeWindow() {}
// End Class UMBTypeWindow

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBTypeWindow_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMBTypeWindow, UMBTypeWindow::StaticClass, TEXT("UMBTypeWindow"), &Z_Registration_Info_UClass_UMBTypeWindow, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMBTypeWindow), 4167719593U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBTypeWindow_h_1755431498(TEXT("/Script/ModularBuilding"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBTypeWindow_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBTypeWindow_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
