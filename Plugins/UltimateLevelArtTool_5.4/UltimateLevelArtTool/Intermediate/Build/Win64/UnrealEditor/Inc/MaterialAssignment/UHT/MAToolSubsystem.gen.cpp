// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MaterialAssignment/Public/Data/MAToolSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMAToolSubsystem() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
EDITORSUBSYSTEM_API UClass* Z_Construct_UClass_UEditorSubsystem();
MATERIALASSIGNMENT_API UClass* Z_Construct_UClass_UMAToolSubsystem();
MATERIALASSIGNMENT_API UClass* Z_Construct_UClass_UMAToolSubsystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_MaterialAssignment();
// End Cross Module References

// Begin Class UMAToolSubsystem
void UMAToolSubsystem::StaticRegisterNativesUMAToolSubsystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMAToolSubsystem);
UClass* Z_Construct_UClass_UMAToolSubsystem_NoRegister()
{
	return UMAToolSubsystem::StaticClass();
}
struct Z_Construct_UClass_UMAToolSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Data/MAToolSubsystem.h" },
		{ "ModuleRelativePath", "Public/Data/MAToolSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MAToolWindowRef_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/MAToolSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_MAToolWindowRef;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMAToolSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UMAToolSubsystem_Statics::NewProp_MAToolWindowRef = { "MAToolWindowRef", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMAToolSubsystem, MAToolWindowRef), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MAToolWindowRef_MetaData), NewProp_MAToolWindowRef_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMAToolSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMAToolSubsystem_Statics::NewProp_MAToolWindowRef,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMAToolSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMAToolSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEditorSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_MaterialAssignment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMAToolSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMAToolSubsystem_Statics::ClassParams = {
	&UMAToolSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMAToolSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMAToolSubsystem_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMAToolSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UMAToolSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMAToolSubsystem()
{
	if (!Z_Registration_Info_UClass_UMAToolSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMAToolSubsystem.OuterSingleton, Z_Construct_UClass_UMAToolSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMAToolSubsystem.OuterSingleton;
}
template<> MATERIALASSIGNMENT_API UClass* StaticClass<UMAToolSubsystem>()
{
	return UMAToolSubsystem::StaticClass();
}
UMAToolSubsystem::UMAToolSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMAToolSubsystem);
UMAToolSubsystem::~UMAToolSubsystem() {}
// End Class UMAToolSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_MaterialAssignment_Public_Data_MAToolSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMAToolSubsystem, UMAToolSubsystem::StaticClass, TEXT("UMAToolSubsystem"), &Z_Registration_Info_UClass_UMAToolSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMAToolSubsystem), 1171060578U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_MaterialAssignment_Public_Data_MAToolSubsystem_h_552655654(TEXT("/Script/MaterialAssignment"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_MaterialAssignment_Public_Data_MAToolSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_MaterialAssignment_Public_Data_MAToolSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
