// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MaterialAssignment/Public/UI/MAToolWindow.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMAToolWindow() {}

// Begin Cross Module References
BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityWidget();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
MATERIALASSIGNMENT_API UClass* Z_Construct_UClass_UMAAssignmentSlot_NoRegister();
MATERIALASSIGNMENT_API UClass* Z_Construct_UClass_UMAToolWindow();
MATERIALASSIGNMENT_API UClass* Z_Construct_UClass_UMAToolWindow_NoRegister();
MATERIALASSIGNMENT_API UClass* Z_Construct_UClass_UMAToolWindowInterface_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UPanelWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UScrollBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidgetAnimation_NoRegister();
UPackage* Z_Construct_UPackage__Script_MaterialAssignment();
// End Cross Module References

// Begin Class UMAToolWindow Function ApplyAllBtnPressed
struct Z_Construct_UFunction_UMAToolWindow_ApplyAllBtnPressed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/MAToolWindow.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMAToolWindow_ApplyAllBtnPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMAToolWindow, nullptr, "ApplyAllBtnPressed", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMAToolWindow_ApplyAllBtnPressed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMAToolWindow_ApplyAllBtnPressed_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMAToolWindow_ApplyAllBtnPressed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMAToolWindow_ApplyAllBtnPressed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMAToolWindow::execApplyAllBtnPressed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyAllBtnPressed();
	P_NATIVE_END;
}
// End Class UMAToolWindow Function ApplyAllBtnPressed

// Begin Class UMAToolWindow
void UMAToolWindow::StaticRegisterNativesUMAToolWindow()
{
	UClass* Class = UMAToolWindow::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ApplyAllBtnPressed", &UMAToolWindow::execApplyAllBtnPressed },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMAToolWindow);
UClass* Z_Construct_UClass_UMAToolWindow_NoRegister()
{
	return UMAToolWindow::StaticClass();
}
struct Z_Construct_UClass_UMAToolWindow_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/MAToolWindow.h" },
		{ "ModuleRelativePath", "Public/UI/MAToolWindow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotNames_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/MAToolWindow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedStaticMeshes_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/MAToolWindow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialSlotWidgets_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MAToolWindow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ApplyAllBtn_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MAToolWindow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MAToolWindow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ApplyAllBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MAToolWindow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NoMeshText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MAToolWindow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectMeshTextAnim_MetaData[] = {
		{ "BindWidgetAnim", "" },
		{ "ModuleRelativePath", "Public/UI/MAToolWindow.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SlotNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SlotNames;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedStaticMeshes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SelectedStaticMeshes;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialSlotWidgets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MaterialSlotWidgets;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ApplyAllBtn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SlotBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ApplyAllBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NoMeshText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectMeshTextAnim;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMAToolWindow_ApplyAllBtnPressed, "ApplyAllBtnPressed" }, // 4086010073
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMAToolWindow>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMAToolWindow_Statics::NewProp_SlotNames_Inner = { "SlotNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMAToolWindow_Statics::NewProp_SlotNames = { "SlotNames", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMAToolWindow, SlotNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotNames_MetaData), NewProp_SlotNames_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMAToolWindow_Statics::NewProp_SelectedStaticMeshes_Inner = { "SelectedStaticMeshes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMAToolWindow_Statics::NewProp_SelectedStaticMeshes = { "SelectedStaticMeshes", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMAToolWindow, SelectedStaticMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedStaticMeshes_MetaData), NewProp_SelectedStaticMeshes_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMAToolWindow_Statics::NewProp_MaterialSlotWidgets_Inner = { "MaterialSlotWidgets", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMAAssignmentSlot_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMAToolWindow_Statics::NewProp_MaterialSlotWidgets = { "MaterialSlotWidgets", nullptr, (EPropertyFlags)0x0040008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMAToolWindow, MaterialSlotWidgets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialSlotWidgets_MetaData), NewProp_MaterialSlotWidgets_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMAToolWindow_Statics::NewProp_ApplyAllBtn = { "ApplyAllBtn", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMAToolWindow, ApplyAllBtn), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ApplyAllBtn_MetaData), NewProp_ApplyAllBtn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMAToolWindow_Statics::NewProp_SlotBox = { "SlotBox", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMAToolWindow, SlotBox), Z_Construct_UClass_UScrollBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotBox_MetaData), NewProp_SlotBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMAToolWindow_Statics::NewProp_ApplyAllBox = { "ApplyAllBox", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMAToolWindow, ApplyAllBox), Z_Construct_UClass_UPanelWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ApplyAllBox_MetaData), NewProp_ApplyAllBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMAToolWindow_Statics::NewProp_NoMeshText = { "NoMeshText", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMAToolWindow, NoMeshText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NoMeshText_MetaData), NewProp_NoMeshText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMAToolWindow_Statics::NewProp_SelectMeshTextAnim = { "SelectMeshTextAnim", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMAToolWindow, SelectMeshTextAnim), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectMeshTextAnim_MetaData), NewProp_SelectMeshTextAnim_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMAToolWindow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMAToolWindow_Statics::NewProp_SlotNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMAToolWindow_Statics::NewProp_SlotNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMAToolWindow_Statics::NewProp_SelectedStaticMeshes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMAToolWindow_Statics::NewProp_SelectedStaticMeshes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMAToolWindow_Statics::NewProp_MaterialSlotWidgets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMAToolWindow_Statics::NewProp_MaterialSlotWidgets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMAToolWindow_Statics::NewProp_ApplyAllBtn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMAToolWindow_Statics::NewProp_SlotBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMAToolWindow_Statics::NewProp_ApplyAllBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMAToolWindow_Statics::NewProp_NoMeshText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMAToolWindow_Statics::NewProp_SelectMeshTextAnim,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMAToolWindow_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMAToolWindow_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEditorUtilityWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_MaterialAssignment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMAToolWindow_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMAToolWindow_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UMAToolWindowInterface_NoRegister, (int32)VTABLE_OFFSET(UMAToolWindow, IMAToolWindowInterface), false },  // 802643018
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMAToolWindow_Statics::ClassParams = {
	&UMAToolWindow::StaticClass,
	"Editor",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMAToolWindow_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMAToolWindow_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMAToolWindow_Statics::Class_MetaDataParams), Z_Construct_UClass_UMAToolWindow_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMAToolWindow()
{
	if (!Z_Registration_Info_UClass_UMAToolWindow.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMAToolWindow.OuterSingleton, Z_Construct_UClass_UMAToolWindow_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMAToolWindow.OuterSingleton;
}
template<> MATERIALASSIGNMENT_API UClass* StaticClass<UMAToolWindow>()
{
	return UMAToolWindow::StaticClass();
}
UMAToolWindow::UMAToolWindow(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMAToolWindow);
UMAToolWindow::~UMAToolWindow() {}
// End Class UMAToolWindow

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_MaterialAssignment_Public_UI_MAToolWindow_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMAToolWindow, UMAToolWindow::StaticClass, TEXT("UMAToolWindow"), &Z_Registration_Info_UClass_UMAToolWindow, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMAToolWindow), 2884313079U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_MaterialAssignment_Public_UI_MAToolWindow_h_936918665(TEXT("/Script/MaterialAssignment"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_MaterialAssignment_Public_UI_MAToolWindow_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_MaterialAssignment_Public_UI_MAToolWindow_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
