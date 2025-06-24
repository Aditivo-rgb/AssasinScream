// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MaterialAssignment/Public/Data/MAMaterialParamObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMAMaterialParamObject() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
MATERIALASSIGNMENT_API UClass* Z_Construct_UClass_UMAMaterialParamObject();
MATERIALASSIGNMENT_API UClass* Z_Construct_UClass_UMAMaterialParamObject_NoRegister();
UPackage* Z_Construct_UPackage__Script_MaterialAssignment();
// End Cross Module References

// Begin Class UMAMaterialParamObject
void UMAMaterialParamObject::StaticRegisterNativesUMAMaterialParamObject()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMAMaterialParamObject);
UClass* Z_Construct_UClass_UMAMaterialParamObject_NoRegister()
{
	return UMAMaterialParamObject::StaticClass();
}
struct Z_Construct_UClass_UMAMaterialParamObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Data/MAMaterialParamObject.h" },
		{ "ModuleRelativePath", "Public/Data/MAMaterialParamObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewMaterial_MetaData[] = {
		{ "Category", "Material Assignment" },
		{ "ModuleRelativePath", "Public/Data/MAMaterialParamObject.h" },
		{ "NoResetToDefault", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMAMaterialParamObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMAMaterialParamObject_Statics::NewProp_NewMaterial = { "NewMaterial", nullptr, (EPropertyFlags)0x0144000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMAMaterialParamObject, NewMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewMaterial_MetaData), NewProp_NewMaterial_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMAMaterialParamObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMAMaterialParamObject_Statics::NewProp_NewMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMAMaterialParamObject_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMAMaterialParamObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_MaterialAssignment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMAMaterialParamObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMAMaterialParamObject_Statics::ClassParams = {
	&UMAMaterialParamObject::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMAMaterialParamObject_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMAMaterialParamObject_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMAMaterialParamObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UMAMaterialParamObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMAMaterialParamObject()
{
	if (!Z_Registration_Info_UClass_UMAMaterialParamObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMAMaterialParamObject.OuterSingleton, Z_Construct_UClass_UMAMaterialParamObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMAMaterialParamObject.OuterSingleton;
}
template<> MATERIALASSIGNMENT_API UClass* StaticClass<UMAMaterialParamObject>()
{
	return UMAMaterialParamObject::StaticClass();
}
UMAMaterialParamObject::UMAMaterialParamObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMAMaterialParamObject);
UMAMaterialParamObject::~UMAMaterialParamObject() {}
// End Class UMAMaterialParamObject

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_MaterialAssignment_Source_MaterialAssignment_Public_Data_MAMaterialParamObject_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMAMaterialParamObject, UMAMaterialParamObject::StaticClass, TEXT("UMAMaterialParamObject"), &Z_Registration_Info_UClass_UMAMaterialParamObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMAMaterialParamObject), 503201152U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_MaterialAssignment_Source_MaterialAssignment_Public_Data_MAMaterialParamObject_h_1278339791(TEXT("/Script/MaterialAssignment"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_MaterialAssignment_Source_MaterialAssignment_Public_Data_MAMaterialParamObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_MaterialAssignment_Source_MaterialAssignment_Public_Data_MAMaterialParamObject_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
