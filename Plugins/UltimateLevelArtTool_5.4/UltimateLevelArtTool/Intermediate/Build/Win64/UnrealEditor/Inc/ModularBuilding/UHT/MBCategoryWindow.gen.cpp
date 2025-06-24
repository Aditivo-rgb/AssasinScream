// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularBuilding/Public/UI/MBCategoryWindow.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMBCategoryWindow() {}

// Begin Cross Module References
MODULARBUILDING_API UClass* Z_Construct_UClass_UMBCategoryWindow();
MODULARBUILDING_API UClass* Z_Construct_UClass_UMBCategoryWindow_NoRegister();
MODULARBUILDING_API UClass* Z_Construct_UClass_UMBTypeWindow_NoRegister();
MODULARBUILDING_API UEnum* Z_Construct_UEnum_ModularBuilding_EBuildingCategory();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ETextCommit();
UMG_API UClass* Z_Construct_UClass_UEditableTextBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_USizeBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UMG_API UClass* Z_Construct_UClass_UVerticalBox_NoRegister();
UPackage* Z_Construct_UPackage__Script_ModularBuilding();
// End Cross Module References

// Begin Class UMBCategoryWindow Function OnAddNewTypeTextCommitted
struct Z_Construct_UFunction_UMBCategoryWindow_OnAddNewTypeTextCommitted_Statics
{
	struct MBCategoryWindow_eventOnAddNewTypeTextCommitted_Parms
	{
		FText Text;
		TEnumAsByte<ETextCommit::Type> CommitMethod;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/MBCategoryWindow.h" },
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
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMBCategoryWindow_OnAddNewTypeTextCommitted_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MBCategoryWindow_eventOnAddNewTypeTextCommitted_Parms, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMBCategoryWindow_OnAddNewTypeTextCommitted_Statics::NewProp_CommitMethod = { "CommitMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MBCategoryWindow_eventOnAddNewTypeTextCommitted_Parms, CommitMethod), Z_Construct_UEnum_SlateCore_ETextCommit, METADATA_PARAMS(0, nullptr) }; // 1817921380
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMBCategoryWindow_OnAddNewTypeTextCommitted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMBCategoryWindow_OnAddNewTypeTextCommitted_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMBCategoryWindow_OnAddNewTypeTextCommitted_Statics::NewProp_CommitMethod,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBCategoryWindow_OnAddNewTypeTextCommitted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMBCategoryWindow_OnAddNewTypeTextCommitted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMBCategoryWindow, nullptr, "OnAddNewTypeTextCommitted", nullptr, nullptr, Z_Construct_UFunction_UMBCategoryWindow_OnAddNewTypeTextCommitted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMBCategoryWindow_OnAddNewTypeTextCommitted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMBCategoryWindow_OnAddNewTypeTextCommitted_Statics::MBCategoryWindow_eventOnAddNewTypeTextCommitted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBCategoryWindow_OnAddNewTypeTextCommitted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMBCategoryWindow_OnAddNewTypeTextCommitted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMBCategoryWindow_OnAddNewTypeTextCommitted_Statics::MBCategoryWindow_eventOnAddNewTypeTextCommitted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMBCategoryWindow_OnAddNewTypeTextCommitted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMBCategoryWindow_OnAddNewTypeTextCommitted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMBCategoryWindow::execOnAddNewTypeTextCommitted)
{
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Text);
	P_GET_PROPERTY(FByteProperty,Z_Param_CommitMethod);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnAddNewTypeTextCommitted(Z_Param_Out_Text,ETextCommit::Type(Z_Param_CommitMethod));
	P_NATIVE_END;
}
// End Class UMBCategoryWindow Function OnAddNewTypeTextCommitted

// Begin Class UMBCategoryWindow
void UMBCategoryWindow::StaticRegisterNativesUMBCategoryWindow()
{
	UClass* Class = UMBCategoryWindow::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnAddNewTypeTextCommitted", &UMBCategoryWindow::execOnAddNewTypeTextCommitted },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMBCategoryWindow);
UClass* Z_Construct_UClass_UMBCategoryWindow_NoRegister()
{
	return UMBCategoryWindow::StaticClass();
}
struct Z_Construct_UClass_UMBCategoryWindow_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/MBCategoryWindow.h" },
		{ "ModuleRelativePath", "Public/UI/MBCategoryWindow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TypeWindows_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MBCategoryWindow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/MBCategoryWindow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CategoryMenuBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MBCategoryWindow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainCategoryBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MBCategoryWindow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AddNewTypeText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MBCategoryWindow.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TypeWindows_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TypeWindows_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_TypeWindows;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Category_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Category;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CategoryMenuBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MainCategoryBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AddNewTypeText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMBCategoryWindow_OnAddNewTypeTextCommitted, "OnAddNewTypeTextCommitted" }, // 1622975987
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMBCategoryWindow>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMBCategoryWindow_Statics::NewProp_TypeWindows_ValueProp = { "TypeWindows", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UMBTypeWindow_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMBCategoryWindow_Statics::NewProp_TypeWindows_Key_KeyProp = { "TypeWindows_Key", nullptr, (EPropertyFlags)0x0100000000080008, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMBCategoryWindow_Statics::NewProp_TypeWindows = { "TypeWindows", nullptr, (EPropertyFlags)0x0144008000000008, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBCategoryWindow, TypeWindows), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TypeWindows_MetaData), NewProp_TypeWindows_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMBCategoryWindow_Statics::NewProp_Category_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMBCategoryWindow_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBCategoryWindow, Category), Z_Construct_UEnum_ModularBuilding_EBuildingCategory, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Category_MetaData), NewProp_Category_MetaData) }; // 385100287
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMBCategoryWindow_Statics::NewProp_CategoryMenuBox = { "CategoryMenuBox", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBCategoryWindow, CategoryMenuBox), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CategoryMenuBox_MetaData), NewProp_CategoryMenuBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMBCategoryWindow_Statics::NewProp_MainCategoryBox = { "MainCategoryBox", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBCategoryWindow, MainCategoryBox), Z_Construct_UClass_USizeBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainCategoryBox_MetaData), NewProp_MainCategoryBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMBCategoryWindow_Statics::NewProp_AddNewTypeText = { "AddNewTypeText", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBCategoryWindow, AddNewTypeText), Z_Construct_UClass_UEditableTextBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AddNewTypeText_MetaData), NewProp_AddNewTypeText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMBCategoryWindow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBCategoryWindow_Statics::NewProp_TypeWindows_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBCategoryWindow_Statics::NewProp_TypeWindows_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBCategoryWindow_Statics::NewProp_TypeWindows,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBCategoryWindow_Statics::NewProp_Category_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBCategoryWindow_Statics::NewProp_Category,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBCategoryWindow_Statics::NewProp_CategoryMenuBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBCategoryWindow_Statics::NewProp_MainCategoryBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBCategoryWindow_Statics::NewProp_AddNewTypeText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMBCategoryWindow_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMBCategoryWindow_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ModularBuilding,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMBCategoryWindow_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMBCategoryWindow_Statics::ClassParams = {
	&UMBCategoryWindow::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMBCategoryWindow_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMBCategoryWindow_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMBCategoryWindow_Statics::Class_MetaDataParams), Z_Construct_UClass_UMBCategoryWindow_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMBCategoryWindow()
{
	if (!Z_Registration_Info_UClass_UMBCategoryWindow.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMBCategoryWindow.OuterSingleton, Z_Construct_UClass_UMBCategoryWindow_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMBCategoryWindow.OuterSingleton;
}
template<> MODULARBUILDING_API UClass* StaticClass<UMBCategoryWindow>()
{
	return UMBCategoryWindow::StaticClass();
}
UMBCategoryWindow::UMBCategoryWindow(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMBCategoryWindow);
UMBCategoryWindow::~UMBCategoryWindow() {}
// End Class UMBCategoryWindow

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBCategoryWindow_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMBCategoryWindow, UMBCategoryWindow::StaticClass, TEXT("UMBCategoryWindow"), &Z_Registration_Info_UClass_UMBCategoryWindow, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMBCategoryWindow), 1206266262U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBCategoryWindow_h_3679952947(TEXT("/Script/ModularBuilding"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBCategoryWindow_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBCategoryWindow_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
