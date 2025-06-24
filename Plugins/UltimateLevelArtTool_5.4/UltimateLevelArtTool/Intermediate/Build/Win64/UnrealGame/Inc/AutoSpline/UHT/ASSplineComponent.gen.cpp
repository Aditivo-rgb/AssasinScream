// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoSpline/Public/Spline/ASSplineComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeASSplineComponent() {}

// Begin Cross Module References
AUTOSPLINE_API UClass* Z_Construct_UClass_UASSplineComponent();
AUTOSPLINE_API UClass* Z_Construct_UClass_UASSplineComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USplineComponent();
UPackage* Z_Construct_UPackage__Script_AutoSpline();
// End Cross Module References

// Begin Class UASSplineComponent
void UASSplineComponent::StaticRegisterNativesUASSplineComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UASSplineComponent);
UClass* Z_Construct_UClass_UASSplineComponent_NoRegister()
{
	return UASSplineComponent::StaticClass();
}
struct Z_Construct_UClass_UASSplineComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Physics Collision Lighting Rendering Mobile Trigger VirtualTexture" },
		{ "IncludePath", "Spline/ASSplineComponent.h" },
		{ "ModuleRelativePath", "Public/Spline/ASSplineComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UASSplineComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UASSplineComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USplineComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_AutoSpline,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UASSplineComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UASSplineComponent_Statics::ClassParams = {
	&UASSplineComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UASSplineComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UASSplineComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UASSplineComponent()
{
	if (!Z_Registration_Info_UClass_UASSplineComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UASSplineComponent.OuterSingleton, Z_Construct_UClass_UASSplineComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UASSplineComponent.OuterSingleton;
}
template<> AUTOSPLINE_API UClass* StaticClass<UASSplineComponent>()
{
	return UASSplineComponent::StaticClass();
}
UASSplineComponent::UASSplineComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UASSplineComponent);
UASSplineComponent::~UASSplineComponent() {}
// End Class UASSplineComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_AutoSpline_Public_Spline_ASSplineComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UASSplineComponent, UASSplineComponent::StaticClass, TEXT("UASSplineComponent"), &Z_Registration_Info_UClass_UASSplineComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UASSplineComponent), 3071811729U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_AutoSpline_Public_Spline_ASSplineComponent_h_3823171962(TEXT("/Script/AutoSpline"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_AutoSpline_Public_Spline_ASSplineComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_AutoSpline_Public_Spline_ASSplineComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
