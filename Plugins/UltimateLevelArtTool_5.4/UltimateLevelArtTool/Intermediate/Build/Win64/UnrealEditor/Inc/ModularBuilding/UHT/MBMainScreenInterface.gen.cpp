// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularBuilding/Public/Interfaces/MBMainScreenInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMBMainScreenInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
MODULARBUILDING_API UClass* Z_Construct_UClass_UMBMainScreenInterface();
MODULARBUILDING_API UClass* Z_Construct_UClass_UMBMainScreenInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_ModularBuilding();
// End Cross Module References

// Begin Interface UMBMainScreenInterface
void UMBMainScreenInterface::StaticRegisterNativesUMBMainScreenInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMBMainScreenInterface);
UClass* Z_Construct_UClass_UMBMainScreenInterface_NoRegister()
{
	return UMBMainScreenInterface::StaticClass();
}
struct Z_Construct_UClass_UMBMainScreenInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/MBMainScreenInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMBMainScreenInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMBMainScreenInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_ModularBuilding,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMBMainScreenInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMBMainScreenInterface_Statics::ClassParams = {
	&UMBMainScreenInterface::StaticClass,
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
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMBMainScreenInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UMBMainScreenInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMBMainScreenInterface()
{
	if (!Z_Registration_Info_UClass_UMBMainScreenInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMBMainScreenInterface.OuterSingleton, Z_Construct_UClass_UMBMainScreenInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMBMainScreenInterface.OuterSingleton;
}
template<> MODULARBUILDING_API UClass* StaticClass<UMBMainScreenInterface>()
{
	return UMBMainScreenInterface::StaticClass();
}
UMBMainScreenInterface::UMBMainScreenInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMBMainScreenInterface);
UMBMainScreenInterface::~UMBMainScreenInterface() {}
// End Interface UMBMainScreenInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Interfaces_MBMainScreenInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMBMainScreenInterface, UMBMainScreenInterface::StaticClass, TEXT("UMBMainScreenInterface"), &Z_Registration_Info_UClass_UMBMainScreenInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMBMainScreenInterface), 209076882U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Interfaces_MBMainScreenInterface_h_410632301(TEXT("/Script/ModularBuilding"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Interfaces_MBMainScreenInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Interfaces_MBMainScreenInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
