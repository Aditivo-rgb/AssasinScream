// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObjectDistribution/Public/UI/ODPaletteItemToolTip.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeODPaletteItemToolTip() {}

// Begin Cross Module References
OBJECTDISTRIBUTION_API UClass* Z_Construct_UClass_UODPaletteItemToolTip();
OBJECTDISTRIBUTION_API UClass* Z_Construct_UClass_UODPaletteItemToolTip_NoRegister();
UMG_API UClass* Z_Construct_UClass_URichTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_ObjectDistribution();
// End Cross Module References

// Begin Class UODPaletteItemToolTip
void UODPaletteItemToolTip::StaticRegisterNativesUODPaletteItemToolTip()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UODPaletteItemToolTip);
UClass* Z_Construct_UClass_UODPaletteItemToolTip_NoRegister()
{
	return UODPaletteItemToolTip::StaticClass();
}
struct Z_Construct_UClass_UODPaletteItemToolTip_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/ODPaletteItemToolTip.h" },
		{ "ModuleRelativePath", "Public/UI/ODPaletteItemToolTip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetNameText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ODPaletteItemToolTip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetInfoText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ODPaletteItemToolTip.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AssetNameText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AssetInfoText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UODPaletteItemToolTip>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UODPaletteItemToolTip_Statics::NewProp_AssetNameText = { "AssetNameText", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UODPaletteItemToolTip, AssetNameText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetNameText_MetaData), NewProp_AssetNameText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UODPaletteItemToolTip_Statics::NewProp_AssetInfoText = { "AssetInfoText", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UODPaletteItemToolTip, AssetInfoText), Z_Construct_UClass_URichTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetInfoText_MetaData), NewProp_AssetInfoText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UODPaletteItemToolTip_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODPaletteItemToolTip_Statics::NewProp_AssetNameText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODPaletteItemToolTip_Statics::NewProp_AssetInfoText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UODPaletteItemToolTip_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UODPaletteItemToolTip_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ObjectDistribution,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UODPaletteItemToolTip_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UODPaletteItemToolTip_Statics::ClassParams = {
	&UODPaletteItemToolTip::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UODPaletteItemToolTip_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UODPaletteItemToolTip_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UODPaletteItemToolTip_Statics::Class_MetaDataParams), Z_Construct_UClass_UODPaletteItemToolTip_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UODPaletteItemToolTip()
{
	if (!Z_Registration_Info_UClass_UODPaletteItemToolTip.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UODPaletteItemToolTip.OuterSingleton, Z_Construct_UClass_UODPaletteItemToolTip_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UODPaletteItemToolTip.OuterSingleton;
}
template<> OBJECTDISTRIBUTION_API UClass* StaticClass<UODPaletteItemToolTip>()
{
	return UODPaletteItemToolTip::StaticClass();
}
UODPaletteItemToolTip::UODPaletteItemToolTip(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UODPaletteItemToolTip);
UODPaletteItemToolTip::~UODPaletteItemToolTip() {}
// End Class UODPaletteItemToolTip

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ObjectDistribution_Public_UI_ODPaletteItemToolTip_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UODPaletteItemToolTip, UODPaletteItemToolTip::StaticClass, TEXT("UODPaletteItemToolTip"), &Z_Registration_Info_UClass_UODPaletteItemToolTip, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UODPaletteItemToolTip), 2494545620U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ObjectDistribution_Public_UI_ODPaletteItemToolTip_h_186986075(TEXT("/Script/ObjectDistribution"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ObjectDistribution_Public_UI_ODPaletteItemToolTip_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ObjectDistribution_Public_UI_ODPaletteItemToolTip_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
