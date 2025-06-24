// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObjectDistribution/Public/Development/ODSpawnCenter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeODSpawnCenter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
OBJECTDISTRIBUTION_API UClass* Z_Construct_UClass_AODSpawnCenter();
OBJECTDISTRIBUTION_API UClass* Z_Construct_UClass_AODSpawnCenter_NoRegister();
OBJECTDISTRIBUTION_API UClass* Z_Construct_UClass_UODBoundsVisualizerComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_ObjectDistribution();
// End Cross Module References

// Begin Class AODSpawnCenter
void AODSpawnCenter::StaticRegisterNativesAODSpawnCenter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AODSpawnCenter);
UClass* Z_Construct_UClass_AODSpawnCenter_NoRegister()
{
	return AODSpawnCenter::StaticClass();
}
struct Z_Construct_UClass_AODSpawnCenter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Development/ODSpawnCenter.h" },
		{ "ModuleRelativePath", "Public/Development/ODSpawnCenter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BillboardComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Development/ODSpawnCenter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundsVisualizerComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Development/ODSpawnCenter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BillboardComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoundsVisualizerComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AODSpawnCenter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AODSpawnCenter_Statics::NewProp_BillboardComponent = { "BillboardComponent", nullptr, (EPropertyFlags)0x01440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AODSpawnCenter, BillboardComponent), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BillboardComponent_MetaData), NewProp_BillboardComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AODSpawnCenter_Statics::NewProp_BoundsVisualizerComponent = { "BoundsVisualizerComponent", nullptr, (EPropertyFlags)0x01440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AODSpawnCenter, BoundsVisualizerComponent), Z_Construct_UClass_UODBoundsVisualizerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundsVisualizerComponent_MetaData), NewProp_BoundsVisualizerComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AODSpawnCenter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AODSpawnCenter_Statics::NewProp_BillboardComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AODSpawnCenter_Statics::NewProp_BoundsVisualizerComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AODSpawnCenter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AODSpawnCenter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ObjectDistribution,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AODSpawnCenter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AODSpawnCenter_Statics::ClassParams = {
	&AODSpawnCenter::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AODSpawnCenter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AODSpawnCenter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AODSpawnCenter_Statics::Class_MetaDataParams), Z_Construct_UClass_AODSpawnCenter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AODSpawnCenter()
{
	if (!Z_Registration_Info_UClass_AODSpawnCenter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AODSpawnCenter.OuterSingleton, Z_Construct_UClass_AODSpawnCenter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AODSpawnCenter.OuterSingleton;
}
template<> OBJECTDISTRIBUTION_API UClass* StaticClass<AODSpawnCenter>()
{
	return AODSpawnCenter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AODSpawnCenter);
AODSpawnCenter::~AODSpawnCenter() {}
// End Class AODSpawnCenter

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ObjectDistribution_Source_ObjectDistribution_Public_Development_ODSpawnCenter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AODSpawnCenter, AODSpawnCenter::StaticClass, TEXT("AODSpawnCenter"), &Z_Registration_Info_UClass_AODSpawnCenter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AODSpawnCenter), 3287403661U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ObjectDistribution_Source_ObjectDistribution_Public_Development_ODSpawnCenter_h_229823388(TEXT("/Script/ObjectDistribution"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_ObjectDistribution_Source_ObjectDistribution_Public_Development_ODSpawnCenter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ObjectDistribution_Source_ObjectDistribution_Public_Development_ODSpawnCenter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
