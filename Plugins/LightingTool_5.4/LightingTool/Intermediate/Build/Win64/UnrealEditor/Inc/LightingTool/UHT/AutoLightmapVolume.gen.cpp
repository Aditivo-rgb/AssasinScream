// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LightingTool/Public/Volume/AutoLightmapVolume.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutoLightmapVolume() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AVolume();
ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
LIGHTINGTOOL_API UClass* Z_Construct_UClass_AAutoLightmapVolume();
LIGHTINGTOOL_API UClass* Z_Construct_UClass_AAutoLightmapVolume_NoRegister();
UPackage* Z_Construct_UPackage__Script_LightingTool();
// End Cross Module References

// Begin Class AAutoLightmapVolume
void AAutoLightmapVolume::StaticRegisterNativesAAutoLightmapVolume()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAutoLightmapVolume);
UClass* Z_Construct_UClass_AAutoLightmapVolume_NoRegister()
{
	return AAutoLightmapVolume::StaticClass();
}
struct Z_Construct_UClass_AAutoLightmapVolume_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "Volume/AutoLightmapVolume.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Volume/AutoLightmapVolume.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpriteComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TriggerBase" },
		{ "Comment", "/** Billboard used to see the trigger in the editor */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Volume/AutoLightmapVolume.h" },
		{ "ToolTip", "Billboard used to see the trigger in the editor" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpriteComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAutoLightmapVolume>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAutoLightmapVolume_Statics::NewProp_SpriteComponent = { "SpriteComponent", nullptr, (EPropertyFlags)0x014400080008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutoLightmapVolume, SpriteComponent), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpriteComponent_MetaData), NewProp_SpriteComponent_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAutoLightmapVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoLightmapVolume_Statics::NewProp_SpriteComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAutoLightmapVolume_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
UObject* (*const Z_Construct_UClass_AAutoLightmapVolume_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AVolume,
	(UObject* (*)())Z_Construct_UPackage__Script_LightingTool,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAutoLightmapVolume_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAutoLightmapVolume_Statics::ClassParams = {
	&AAutoLightmapVolume::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_AAutoLightmapVolume_Statics::PropPointers, nullptr),
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_AAutoLightmapVolume_Statics::PropPointers), 0),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAutoLightmapVolume_Statics::Class_MetaDataParams), Z_Construct_UClass_AAutoLightmapVolume_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAutoLightmapVolume()
{
	if (!Z_Registration_Info_UClass_AAutoLightmapVolume.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAutoLightmapVolume.OuterSingleton, Z_Construct_UClass_AAutoLightmapVolume_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAutoLightmapVolume.OuterSingleton;
}
template<> LIGHTINGTOOL_API UClass* StaticClass<AAutoLightmapVolume>()
{
	return AAutoLightmapVolume::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAutoLightmapVolume);
AAutoLightmapVolume::~AAutoLightmapVolume() {}
// End Class AAutoLightmapVolume

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_Volume_AutoLightmapVolume_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAutoLightmapVolume, AAutoLightmapVolume::StaticClass, TEXT("AAutoLightmapVolume"), &Z_Registration_Info_UClass_AAutoLightmapVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAutoLightmapVolume), 928847021U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_Volume_AutoLightmapVolume_h_1012163851(TEXT("/Script/LightingTool"),
	Z_CompiledInDeferFile_FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_Volume_AutoLightmapVolume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_Volume_AutoLightmapVolume_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
