// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularBuilding/Public/UI/MBSettingMenu.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMBSettingMenu() {}

// Begin Cross Module References
MODULARBUILDING_API UClass* Z_Construct_UClass_UMBSettingMenu();
MODULARBUILDING_API UClass* Z_Construct_UClass_UMBSettingMenu_NoRegister();
MODULARBUILDING_API UEnum* Z_Construct_UEnum_ModularBuilding_ESettingsMenuType();
UMG_API UClass* Z_Construct_UClass_UContentWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_ModularBuilding();
// End Cross Module References

// Begin Class UMBSettingMenu
void UMBSettingMenu::StaticRegisterNativesUMBSettingMenu()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMBSettingMenu);
UClass* Z_Construct_UClass_UMBSettingMenu_NoRegister()
{
	return UMBSettingMenu::StaticClass();
}
struct Z_Construct_UClass_UMBSettingMenu_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/MBSettingMenu.h" },
		{ "ModuleRelativePath", "Public/UI/MBSettingMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveSettingsMenu_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/MBSettingMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MBSettingMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContentBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MBSettingMenu.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ActiveSettingsMenu_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ActiveSettingsMenu;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ContentBox;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMBSettingMenu>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMBSettingMenu_Statics::NewProp_ActiveSettingsMenu_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMBSettingMenu_Statics::NewProp_ActiveSettingsMenu = { "ActiveSettingsMenu", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBSettingMenu, ActiveSettingsMenu), Z_Construct_UEnum_ModularBuilding_ESettingsMenuType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveSettingsMenu_MetaData), NewProp_ActiveSettingsMenu_MetaData) }; // 3069031113
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMBSettingMenu_Statics::NewProp_ActiveWidget = { "ActiveWidget", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBSettingMenu, ActiveWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveWidget_MetaData), NewProp_ActiveWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMBSettingMenu_Statics::NewProp_ContentBox = { "ContentBox", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBSettingMenu, ContentBox), Z_Construct_UClass_UContentWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContentBox_MetaData), NewProp_ContentBox_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMBSettingMenu_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBSettingMenu_Statics::NewProp_ActiveSettingsMenu_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBSettingMenu_Statics::NewProp_ActiveSettingsMenu,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBSettingMenu_Statics::NewProp_ActiveWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBSettingMenu_Statics::NewProp_ContentBox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMBSettingMenu_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMBSettingMenu_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ModularBuilding,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMBSettingMenu_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMBSettingMenu_Statics::ClassParams = {
	&UMBSettingMenu::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMBSettingMenu_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMBSettingMenu_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMBSettingMenu_Statics::Class_MetaDataParams), Z_Construct_UClass_UMBSettingMenu_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMBSettingMenu()
{
	if (!Z_Registration_Info_UClass_UMBSettingMenu.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMBSettingMenu.OuterSingleton, Z_Construct_UClass_UMBSettingMenu_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMBSettingMenu.OuterSingleton;
}
template<> MODULARBUILDING_API UClass* StaticClass<UMBSettingMenu>()
{
	return UMBSettingMenu::StaticClass();
}
UMBSettingMenu::UMBSettingMenu(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMBSettingMenu);
UMBSettingMenu::~UMBSettingMenu() {}
// End Class UMBSettingMenu

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBSettingMenu_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMBSettingMenu, UMBSettingMenu::StaticClass, TEXT("UMBSettingMenu"), &Z_Registration_Info_UClass_UMBSettingMenu, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMBSettingMenu), 3202851437U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBSettingMenu_h_209948974(TEXT("/Script/ModularBuilding"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBSettingMenu_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBSettingMenu_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
