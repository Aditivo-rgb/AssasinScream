// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularBuilding/Public/UI/MBMaterialAssignmentSection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMBMaterialAssignmentSection() {}

// Begin Cross Module References
MODULARBUILDING_API UClass* Z_Construct_UClass_UMBMaterialAssignmentSection();
MODULARBUILDING_API UClass* Z_Construct_UClass_UMBMaterialAssignmentSection_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UMG_API UClass* Z_Construct_UClass_UWrapBox_NoRegister();
UPackage* Z_Construct_UPackage__Script_ModularBuilding();
// End Cross Module References

// Begin Class UMBMaterialAssignmentSection
void UMBMaterialAssignmentSection::StaticRegisterNativesUMBMaterialAssignmentSection()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMBMaterialAssignmentSection);
UClass* Z_Construct_UClass_UMBMaterialAssignmentSection_NoRegister()
{
	return UMBMaterialAssignmentSection::StaticClass();
}
struct Z_Construct_UClass_UMBMaterialAssignmentSection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/MBMaterialAssignmentSection.h" },
		{ "ModuleRelativePath", "Public/UI/MBMaterialAssignmentSection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialSlotContainer_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MBMaterialAssignmentSection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotNameText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MBMaterialAssignmentSection.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialSlotContainer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SlotNameText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMBMaterialAssignmentSection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMBMaterialAssignmentSection_Statics::NewProp_MaterialSlotContainer = { "MaterialSlotContainer", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBMaterialAssignmentSection, MaterialSlotContainer), Z_Construct_UClass_UWrapBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialSlotContainer_MetaData), NewProp_MaterialSlotContainer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMBMaterialAssignmentSection_Statics::NewProp_SlotNameText = { "SlotNameText", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBMaterialAssignmentSection, SlotNameText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotNameText_MetaData), NewProp_SlotNameText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMBMaterialAssignmentSection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBMaterialAssignmentSection_Statics::NewProp_MaterialSlotContainer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBMaterialAssignmentSection_Statics::NewProp_SlotNameText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMBMaterialAssignmentSection_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMBMaterialAssignmentSection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ModularBuilding,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMBMaterialAssignmentSection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMBMaterialAssignmentSection_Statics::ClassParams = {
	&UMBMaterialAssignmentSection::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMBMaterialAssignmentSection_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMBMaterialAssignmentSection_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMBMaterialAssignmentSection_Statics::Class_MetaDataParams), Z_Construct_UClass_UMBMaterialAssignmentSection_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMBMaterialAssignmentSection()
{
	if (!Z_Registration_Info_UClass_UMBMaterialAssignmentSection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMBMaterialAssignmentSection.OuterSingleton, Z_Construct_UClass_UMBMaterialAssignmentSection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMBMaterialAssignmentSection.OuterSingleton;
}
template<> MODULARBUILDING_API UClass* StaticClass<UMBMaterialAssignmentSection>()
{
	return UMBMaterialAssignmentSection::StaticClass();
}
UMBMaterialAssignmentSection::UMBMaterialAssignmentSection(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMBMaterialAssignmentSection);
UMBMaterialAssignmentSection::~UMBMaterialAssignmentSection() {}
// End Class UMBMaterialAssignmentSection

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBMaterialAssignmentSection_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMBMaterialAssignmentSection, UMBMaterialAssignmentSection::StaticClass, TEXT("UMBMaterialAssignmentSection"), &Z_Registration_Info_UClass_UMBMaterialAssignmentSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMBMaterialAssignmentSection), 647113146U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBMaterialAssignmentSection_h_2861183224(TEXT("/Script/ModularBuilding"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBMaterialAssignmentSection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBMaterialAssignmentSection_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
