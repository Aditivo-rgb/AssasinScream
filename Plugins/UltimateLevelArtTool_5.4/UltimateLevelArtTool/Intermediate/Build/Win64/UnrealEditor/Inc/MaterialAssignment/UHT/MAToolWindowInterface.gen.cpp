// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MaterialAssignment/Public/Interfaces/MAToolWindowInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMAToolWindowInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
MATERIALASSIGNMENT_API UClass* Z_Construct_UClass_UMAToolWindowInterface();
MATERIALASSIGNMENT_API UClass* Z_Construct_UClass_UMAToolWindowInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_MaterialAssignment();
// End Cross Module References

// Begin Interface UMAToolWindowInterface
void UMAToolWindowInterface::StaticRegisterNativesUMAToolWindowInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMAToolWindowInterface);
UClass* Z_Construct_UClass_UMAToolWindowInterface_NoRegister()
{
	return UMAToolWindowInterface::StaticClass();
}
struct Z_Construct_UClass_UMAToolWindowInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/MAToolWindowInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMAToolWindowInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMAToolWindowInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_MaterialAssignment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMAToolWindowInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMAToolWindowInterface_Statics::ClassParams = {
	&UMAToolWindowInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMAToolWindowInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UMAToolWindowInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMAToolWindowInterface()
{
	if (!Z_Registration_Info_UClass_UMAToolWindowInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMAToolWindowInterface.OuterSingleton, Z_Construct_UClass_UMAToolWindowInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMAToolWindowInterface.OuterSingleton;
}
template<> MATERIALASSIGNMENT_API UClass* StaticClass<UMAToolWindowInterface>()
{
	return UMAToolWindowInterface::StaticClass();
}
UMAToolWindowInterface::UMAToolWindowInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMAToolWindowInterface);
UMAToolWindowInterface::~UMAToolWindowInterface() {}
// End Interface UMAToolWindowInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_MaterialAssignment_Public_Interfaces_MAToolWindowInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMAToolWindowInterface, UMAToolWindowInterface::StaticClass, TEXT("UMAToolWindowInterface"), &Z_Registration_Info_UClass_UMAToolWindowInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMAToolWindowInterface), 802643018U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_MaterialAssignment_Public_Interfaces_MAToolWindowInterface_h_4124151095(TEXT("/Script/MaterialAssignment"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_MaterialAssignment_Public_Interfaces_MAToolWindowInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_MaterialAssignment_Public_Interfaces_MAToolWindowInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
