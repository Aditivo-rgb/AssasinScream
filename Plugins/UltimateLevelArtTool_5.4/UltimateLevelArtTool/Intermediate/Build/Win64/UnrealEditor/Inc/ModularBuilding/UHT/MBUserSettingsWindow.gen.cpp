// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularBuilding/Public/UI/MBUserSettingsWindow.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMBUserSettingsWindow() {}

// Begin Cross Module References
MODULARBUILDING_API UClass* Z_Construct_UClass_UMBUserSettingsObject_NoRegister();
MODULARBUILDING_API UClass* Z_Construct_UClass_UMBUserSettingsWindow();
MODULARBUILDING_API UClass* Z_Construct_UClass_UMBUserSettingsWindow_NoRegister();
SCRIPTABLEEDITORWIDGETS_API UClass* Z_Construct_UClass_UDetailsView_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_ModularBuilding();
// End Cross Module References

// Begin Class UMBUserSettingsWindow Function ClearTheSceneBtnPressed
struct Z_Construct_UFunction_UMBUserSettingsWindow_ClearTheSceneBtnPressed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/MBUserSettingsWindow.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMBUserSettingsWindow_ClearTheSceneBtnPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMBUserSettingsWindow, nullptr, "ClearTheSceneBtnPressed", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBUserSettingsWindow_ClearTheSceneBtnPressed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMBUserSettingsWindow_ClearTheSceneBtnPressed_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMBUserSettingsWindow_ClearTheSceneBtnPressed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMBUserSettingsWindow_ClearTheSceneBtnPressed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMBUserSettingsWindow::execClearTheSceneBtnPressed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearTheSceneBtnPressed();
	P_NATIVE_END;
}
// End Class UMBUserSettingsWindow Function ClearTheSceneBtnPressed

// Begin Class UMBUserSettingsWindow Function ResetToolBtnPressed
struct Z_Construct_UFunction_UMBUserSettingsWindow_ResetToolBtnPressed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/MBUserSettingsWindow.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMBUserSettingsWindow_ResetToolBtnPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMBUserSettingsWindow, nullptr, "ResetToolBtnPressed", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBUserSettingsWindow_ResetToolBtnPressed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMBUserSettingsWindow_ResetToolBtnPressed_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMBUserSettingsWindow_ResetToolBtnPressed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMBUserSettingsWindow_ResetToolBtnPressed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMBUserSettingsWindow::execResetToolBtnPressed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetToolBtnPressed();
	P_NATIVE_END;
}
// End Class UMBUserSettingsWindow Function ResetToolBtnPressed

// Begin Class UMBUserSettingsWindow
void UMBUserSettingsWindow::StaticRegisterNativesUMBUserSettingsWindow()
{
	UClass* Class = UMBUserSettingsWindow::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClearTheSceneBtnPressed", &UMBUserSettingsWindow::execClearTheSceneBtnPressed },
		{ "ResetToolBtnPressed", &UMBUserSettingsWindow::execResetToolBtnPressed },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMBUserSettingsWindow);
UClass* Z_Construct_UClass_UMBUserSettingsWindow_NoRegister()
{
	return UMBUserSettingsWindow::StaticClass();
}
struct Z_Construct_UClass_UMBUserSettingsWindow_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/MBUserSettingsWindow.h" },
		{ "ModuleRelativePath", "Public/UI/MBUserSettingsWindow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserSettingsObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/MBUserSettingsWindow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResetToolBtn_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MBUserSettingsWindow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClearTheSceneBtn_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MBUserSettingsWindow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserSettingsDetails_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Modular Building" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MBUserSettingsWindow.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UserSettingsObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ResetToolBtn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ClearTheSceneBtn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UserSettingsDetails;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMBUserSettingsWindow_ClearTheSceneBtnPressed, "ClearTheSceneBtnPressed" }, // 1943921466
		{ &Z_Construct_UFunction_UMBUserSettingsWindow_ResetToolBtnPressed, "ResetToolBtnPressed" }, // 445209174
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMBUserSettingsWindow>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMBUserSettingsWindow_Statics::NewProp_UserSettingsObject = { "UserSettingsObject", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBUserSettingsWindow, UserSettingsObject), Z_Construct_UClass_UMBUserSettingsObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserSettingsObject_MetaData), NewProp_UserSettingsObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMBUserSettingsWindow_Statics::NewProp_ResetToolBtn = { "ResetToolBtn", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBUserSettingsWindow, ResetToolBtn), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResetToolBtn_MetaData), NewProp_ResetToolBtn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMBUserSettingsWindow_Statics::NewProp_ClearTheSceneBtn = { "ClearTheSceneBtn", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBUserSettingsWindow, ClearTheSceneBtn), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClearTheSceneBtn_MetaData), NewProp_ClearTheSceneBtn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMBUserSettingsWindow_Statics::NewProp_UserSettingsDetails = { "UserSettingsDetails", nullptr, (EPropertyFlags)0x012408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBUserSettingsWindow, UserSettingsDetails), Z_Construct_UClass_UDetailsView_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserSettingsDetails_MetaData), NewProp_UserSettingsDetails_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMBUserSettingsWindow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBUserSettingsWindow_Statics::NewProp_UserSettingsObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBUserSettingsWindow_Statics::NewProp_ResetToolBtn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBUserSettingsWindow_Statics::NewProp_ClearTheSceneBtn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBUserSettingsWindow_Statics::NewProp_UserSettingsDetails,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMBUserSettingsWindow_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMBUserSettingsWindow_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ModularBuilding,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMBUserSettingsWindow_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMBUserSettingsWindow_Statics::ClassParams = {
	&UMBUserSettingsWindow::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMBUserSettingsWindow_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMBUserSettingsWindow_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMBUserSettingsWindow_Statics::Class_MetaDataParams), Z_Construct_UClass_UMBUserSettingsWindow_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMBUserSettingsWindow()
{
	if (!Z_Registration_Info_UClass_UMBUserSettingsWindow.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMBUserSettingsWindow.OuterSingleton, Z_Construct_UClass_UMBUserSettingsWindow_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMBUserSettingsWindow.OuterSingleton;
}
template<> MODULARBUILDING_API UClass* StaticClass<UMBUserSettingsWindow>()
{
	return UMBUserSettingsWindow::StaticClass();
}
UMBUserSettingsWindow::UMBUserSettingsWindow(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMBUserSettingsWindow);
UMBUserSettingsWindow::~UMBUserSettingsWindow() {}
// End Class UMBUserSettingsWindow

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBUserSettingsWindow_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMBUserSettingsWindow, UMBUserSettingsWindow::StaticClass, TEXT("UMBUserSettingsWindow"), &Z_Registration_Info_UClass_UMBUserSettingsWindow, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMBUserSettingsWindow), 3969283673U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBUserSettingsWindow_h_2943078500(TEXT("/Script/ModularBuilding"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBUserSettingsWindow_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBUserSettingsWindow_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
