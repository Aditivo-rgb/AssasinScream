// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObjectDistribution/Public/Data/ODPresetObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeODPresetObject() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
OBJECTDISTRIBUTION_API UClass* Z_Construct_UClass_UODPresetObject();
OBJECTDISTRIBUTION_API UClass* Z_Construct_UClass_UODPresetObject_NoRegister();
UPackage* Z_Construct_UPackage__Script_ObjectDistribution();
// End Cross Module References

// Begin Class UODPresetObject
void UODPresetObject::StaticRegisterNativesUODPresetObject()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UODPresetObject);
UClass* Z_Construct_UClass_UODPresetObject_NoRegister()
{
	return UODPresetObject::StaticClass();
}
struct Z_Construct_UClass_UODPresetObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Data/ODPresetObject.h" },
		{ "ModuleRelativePath", "Public/Data/ODPresetObject.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UODPresetObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UODPresetObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ObjectDistribution,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UODPresetObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UODPresetObject_Statics::ClassParams = {
	&UODPresetObject::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UODPresetObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UODPresetObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UODPresetObject()
{
	if (!Z_Registration_Info_UClass_UODPresetObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UODPresetObject.OuterSingleton, Z_Construct_UClass_UODPresetObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UODPresetObject.OuterSingleton;
}
template<> OBJECTDISTRIBUTION_API UClass* StaticClass<UODPresetObject>()
{
	return UODPresetObject::StaticClass();
}
UODPresetObject::UODPresetObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UODPresetObject);
UODPresetObject::~UODPresetObject() {}
// End Class UODPresetObject

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ObjectDistribution_Source_ObjectDistribution_Public_Data_ODPresetObject_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UODPresetObject, UODPresetObject::StaticClass, TEXT("UODPresetObject"), &Z_Registration_Info_UClass_UODPresetObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UODPresetObject), 1213796554U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ObjectDistribution_Source_ObjectDistribution_Public_Data_ODPresetObject_h_3957065017(TEXT("/Script/ObjectDistribution"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_ObjectDistribution_Source_ObjectDistribution_Public_Data_ODPresetObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ObjectDistribution_Source_ObjectDistribution_Public_Data_ODPresetObject_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
