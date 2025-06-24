// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObjectDistribution/Public/UI/ODSimulationWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeODSimulationWidget() {}

// Begin Cross Module References
OBJECTDISTRIBUTION_API UClass* Z_Construct_UClass_UODSimulationWidget();
OBJECTDISTRIBUTION_API UClass* Z_Construct_UClass_UODSimulationWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidget();
UPackage* Z_Construct_UPackage__Script_ObjectDistribution();
// End Cross Module References

// Begin Class UODSimulationWidget
void UODSimulationWidget::StaticRegisterNativesUODSimulationWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UODSimulationWidget);
UClass* Z_Construct_UClass_UODSimulationWidget_NoRegister()
{
	return UODSimulationWidget::StaticClass();
}
struct Z_Construct_UClass_UODSimulationWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/ODSimulationWidget.h" },
		{ "ModuleRelativePath", "Public/UI/ODSimulationWidget.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UODSimulationWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UODSimulationWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ObjectDistribution,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UODSimulationWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UODSimulationWidget_Statics::ClassParams = {
	&UODSimulationWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UODSimulationWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UODSimulationWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UODSimulationWidget()
{
	if (!Z_Registration_Info_UClass_UODSimulationWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UODSimulationWidget.OuterSingleton, Z_Construct_UClass_UODSimulationWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UODSimulationWidget.OuterSingleton;
}
template<> OBJECTDISTRIBUTION_API UClass* StaticClass<UODSimulationWidget>()
{
	return UODSimulationWidget::StaticClass();
}
UODSimulationWidget::UODSimulationWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UODSimulationWidget);
UODSimulationWidget::~UODSimulationWidget() {}
// End Class UODSimulationWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ObjectDistribution_Source_ObjectDistribution_Public_UI_ODSimulationWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UODSimulationWidget, UODSimulationWidget::StaticClass, TEXT("UODSimulationWidget"), &Z_Registration_Info_UClass_UODSimulationWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UODSimulationWidget), 3019869197U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ObjectDistribution_Source_ObjectDistribution_Public_UI_ODSimulationWidget_h_4187128650(TEXT("/Script/ObjectDistribution"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_ObjectDistribution_Source_ObjectDistribution_Public_UI_ODSimulationWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ObjectDistribution_Source_ObjectDistribution_Public_UI_ODSimulationWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
