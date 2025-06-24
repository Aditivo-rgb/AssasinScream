// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularBuilding/Public/UI/MBMaterialAssignmentWindow.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMBMaterialAssignmentWindow() {}

// Begin Cross Module References
MODULARBUILDING_API UClass* Z_Construct_UClass_UMBMaterialAssignmentWindow();
MODULARBUILDING_API UClass* Z_Construct_UClass_UMBMaterialAssignmentWindow_NoRegister();
UMG_API UClass* Z_Construct_UClass_UPanelWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_ModularBuilding();
// End Cross Module References

// Begin Class UMBMaterialAssignmentWindow
void UMBMaterialAssignmentWindow::StaticRegisterNativesUMBMaterialAssignmentWindow()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMBMaterialAssignmentWindow);
UClass* Z_Construct_UClass_UMBMaterialAssignmentWindow_NoRegister()
{
	return UMBMaterialAssignmentWindow::StaticClass();
}
struct Z_Construct_UClass_UMBMaterialAssignmentWindow_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/MBMaterialAssignmentWindow.h" },
		{ "ModuleRelativePath", "Public/UI/MBMaterialAssignmentWindow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialMainBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MBMaterialAssignmentWindow.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialMainBox;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMBMaterialAssignmentWindow>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMBMaterialAssignmentWindow_Statics::NewProp_MaterialMainBox = { "MaterialMainBox", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBMaterialAssignmentWindow, MaterialMainBox), Z_Construct_UClass_UPanelWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialMainBox_MetaData), NewProp_MaterialMainBox_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMBMaterialAssignmentWindow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBMaterialAssignmentWindow_Statics::NewProp_MaterialMainBox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMBMaterialAssignmentWindow_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMBMaterialAssignmentWindow_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ModularBuilding,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMBMaterialAssignmentWindow_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMBMaterialAssignmentWindow_Statics::ClassParams = {
	&UMBMaterialAssignmentWindow::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMBMaterialAssignmentWindow_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMBMaterialAssignmentWindow_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMBMaterialAssignmentWindow_Statics::Class_MetaDataParams), Z_Construct_UClass_UMBMaterialAssignmentWindow_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMBMaterialAssignmentWindow()
{
	if (!Z_Registration_Info_UClass_UMBMaterialAssignmentWindow.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMBMaterialAssignmentWindow.OuterSingleton, Z_Construct_UClass_UMBMaterialAssignmentWindow_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMBMaterialAssignmentWindow.OuterSingleton;
}
template<> MODULARBUILDING_API UClass* StaticClass<UMBMaterialAssignmentWindow>()
{
	return UMBMaterialAssignmentWindow::StaticClass();
}
UMBMaterialAssignmentWindow::UMBMaterialAssignmentWindow(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMBMaterialAssignmentWindow);
UMBMaterialAssignmentWindow::~UMBMaterialAssignmentWindow() {}
// End Class UMBMaterialAssignmentWindow

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBMaterialAssignmentWindow_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMBMaterialAssignmentWindow, UMBMaterialAssignmentWindow::StaticClass, TEXT("UMBMaterialAssignmentWindow"), &Z_Registration_Info_UClass_UMBMaterialAssignmentWindow, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMBMaterialAssignmentWindow), 2359158330U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBMaterialAssignmentWindow_h_1369042489(TEXT("/Script/ModularBuilding"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBMaterialAssignmentWindow_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBMaterialAssignmentWindow_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
