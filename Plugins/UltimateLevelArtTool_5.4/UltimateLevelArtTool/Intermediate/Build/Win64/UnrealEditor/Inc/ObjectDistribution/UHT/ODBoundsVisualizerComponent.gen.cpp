// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObjectDistribution/Public/Development/ODBoundsVisualizerComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeODBoundsVisualizerComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
OBJECTDISTRIBUTION_API UClass* Z_Construct_UClass_UODBoundsVisualizerComponent();
OBJECTDISTRIBUTION_API UClass* Z_Construct_UClass_UODBoundsVisualizerComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_ObjectDistribution();
// End Cross Module References

// Begin Class UODBoundsVisualizerComponent
void UODBoundsVisualizerComponent::StaticRegisterNativesUODBoundsVisualizerComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UODBoundsVisualizerComponent);
UClass* Z_Construct_UClass_UODBoundsVisualizerComponent_NoRegister()
{
	return UODBoundsVisualizerComponent::StaticClass();
}
struct Z_Construct_UClass_UODBoundsVisualizerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Development/ODBoundsVisualizerComponent.h" },
		{ "ModuleRelativePath", "Public/Development/ODBoundsVisualizerComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UODBoundsVisualizerComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UODBoundsVisualizerComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ObjectDistribution,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UODBoundsVisualizerComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UODBoundsVisualizerComponent_Statics::ClassParams = {
	&UODBoundsVisualizerComponent::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UODBoundsVisualizerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UODBoundsVisualizerComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UODBoundsVisualizerComponent()
{
	if (!Z_Registration_Info_UClass_UODBoundsVisualizerComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UODBoundsVisualizerComponent.OuterSingleton, Z_Construct_UClass_UODBoundsVisualizerComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UODBoundsVisualizerComponent.OuterSingleton;
}
template<> OBJECTDISTRIBUTION_API UClass* StaticClass<UODBoundsVisualizerComponent>()
{
	return UODBoundsVisualizerComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UODBoundsVisualizerComponent);
UODBoundsVisualizerComponent::~UODBoundsVisualizerComponent() {}
// End Class UODBoundsVisualizerComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ObjectDistribution_Public_Development_ODBoundsVisualizerComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UODBoundsVisualizerComponent, UODBoundsVisualizerComponent::StaticClass, TEXT("UODBoundsVisualizerComponent"), &Z_Registration_Info_UClass_UODBoundsVisualizerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UODBoundsVisualizerComponent), 2231299384U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ObjectDistribution_Public_Development_ODBoundsVisualizerComponent_h_4202105069(TEXT("/Script/ObjectDistribution"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ObjectDistribution_Public_Development_ODBoundsVisualizerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ObjectDistribution_Public_Development_ODBoundsVisualizerComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
