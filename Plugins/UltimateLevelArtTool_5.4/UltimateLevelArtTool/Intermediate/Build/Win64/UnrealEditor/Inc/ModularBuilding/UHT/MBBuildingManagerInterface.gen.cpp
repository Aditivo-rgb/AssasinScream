// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularBuilding/Public/Interfaces/MBBuildingManagerInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMBBuildingManagerInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
MODULARBUILDING_API UClass* Z_Construct_UClass_UMBBuildingManagerInterface();
MODULARBUILDING_API UClass* Z_Construct_UClass_UMBBuildingManagerInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_ModularBuilding();
// End Cross Module References

// Begin Interface UMBBuildingManagerInterface
void UMBBuildingManagerInterface::StaticRegisterNativesUMBBuildingManagerInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMBBuildingManagerInterface);
UClass* Z_Construct_UClass_UMBBuildingManagerInterface_NoRegister()
{
	return UMBBuildingManagerInterface::StaticClass();
}
struct Z_Construct_UClass_UMBBuildingManagerInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/MBBuildingManagerInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMBBuildingManagerInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMBBuildingManagerInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_ModularBuilding,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMBBuildingManagerInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMBBuildingManagerInterface_Statics::ClassParams = {
	&UMBBuildingManagerInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMBBuildingManagerInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UMBBuildingManagerInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMBBuildingManagerInterface()
{
	if (!Z_Registration_Info_UClass_UMBBuildingManagerInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMBBuildingManagerInterface.OuterSingleton, Z_Construct_UClass_UMBBuildingManagerInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMBBuildingManagerInterface.OuterSingleton;
}
template<> MODULARBUILDING_API UClass* StaticClass<UMBBuildingManagerInterface>()
{
	return UMBBuildingManagerInterface::StaticClass();
}
UMBBuildingManagerInterface::UMBBuildingManagerInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMBBuildingManagerInterface);
UMBBuildingManagerInterface::~UMBBuildingManagerInterface() {}
// End Interface UMBBuildingManagerInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Interfaces_MBBuildingManagerInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMBBuildingManagerInterface, UMBBuildingManagerInterface::StaticClass, TEXT("UMBBuildingManagerInterface"), &Z_Registration_Info_UClass_UMBBuildingManagerInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMBBuildingManagerInterface), 1335250729U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Interfaces_MBBuildingManagerInterface_h_2578183544(TEXT("/Script/ModularBuilding"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Interfaces_MBBuildingManagerInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Interfaces_MBBuildingManagerInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
