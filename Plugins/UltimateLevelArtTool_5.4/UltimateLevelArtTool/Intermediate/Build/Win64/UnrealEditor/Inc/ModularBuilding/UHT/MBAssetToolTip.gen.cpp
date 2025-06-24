// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularBuilding/Public/UI/MBAssetToolTip.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMBAssetToolTip() {}

// Begin Cross Module References
MODULARBUILDING_API UClass* Z_Construct_UClass_UMBAssetToolTip();
MODULARBUILDING_API UClass* Z_Construct_UClass_UMBAssetToolTip_NoRegister();
UMG_API UClass* Z_Construct_UClass_URichTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_ModularBuilding();
// End Cross Module References

// Begin Class UMBAssetToolTip
void UMBAssetToolTip::StaticRegisterNativesUMBAssetToolTip()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMBAssetToolTip);
UClass* Z_Construct_UClass_UMBAssetToolTip_NoRegister()
{
	return UMBAssetToolTip::StaticClass();
}
struct Z_Construct_UClass_UMBAssetToolTip_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/MBAssetToolTip.h" },
		{ "ModuleRelativePath", "Public/UI/MBAssetToolTip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetNameText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MBAssetToolTip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetInfoText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MBAssetToolTip.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AssetNameText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AssetInfoText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMBAssetToolTip>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMBAssetToolTip_Statics::NewProp_AssetNameText = { "AssetNameText", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBAssetToolTip, AssetNameText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetNameText_MetaData), NewProp_AssetNameText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMBAssetToolTip_Statics::NewProp_AssetInfoText = { "AssetInfoText", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBAssetToolTip, AssetInfoText), Z_Construct_UClass_URichTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetInfoText_MetaData), NewProp_AssetInfoText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMBAssetToolTip_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBAssetToolTip_Statics::NewProp_AssetNameText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBAssetToolTip_Statics::NewProp_AssetInfoText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMBAssetToolTip_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMBAssetToolTip_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ModularBuilding,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMBAssetToolTip_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMBAssetToolTip_Statics::ClassParams = {
	&UMBAssetToolTip::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMBAssetToolTip_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMBAssetToolTip_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMBAssetToolTip_Statics::Class_MetaDataParams), Z_Construct_UClass_UMBAssetToolTip_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMBAssetToolTip()
{
	if (!Z_Registration_Info_UClass_UMBAssetToolTip.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMBAssetToolTip.OuterSingleton, Z_Construct_UClass_UMBAssetToolTip_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMBAssetToolTip.OuterSingleton;
}
template<> MODULARBUILDING_API UClass* StaticClass<UMBAssetToolTip>()
{
	return UMBAssetToolTip::StaticClass();
}
UMBAssetToolTip::UMBAssetToolTip(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMBAssetToolTip);
UMBAssetToolTip::~UMBAssetToolTip() {}
// End Class UMBAssetToolTip

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBAssetToolTip_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMBAssetToolTip, UMBAssetToolTip::StaticClass, TEXT("UMBAssetToolTip"), &Z_Registration_Info_UClass_UMBAssetToolTip, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMBAssetToolTip), 3179602240U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBAssetToolTip_h_108207893(TEXT("/Script/ModularBuilding"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBAssetToolTip_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBAssetToolTip_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
