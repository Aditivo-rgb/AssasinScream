// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObjectDistribution/Public/ObjectDistribution/ODSphereDistribution.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeODSphereDistribution() {}

// Begin Cross Module References
OBJECTDISTRIBUTION_API UClass* Z_Construct_UClass_UODDistributionBase();
OBJECTDISTRIBUTION_API UClass* Z_Construct_UClass_UODSphereDistribution();
OBJECTDISTRIBUTION_API UClass* Z_Construct_UClass_UODSphereDistribution_NoRegister();
UPackage* Z_Construct_UPackage__Script_ObjectDistribution();
// End Cross Module References

// Begin Class UODSphereDistribution
void UODSphereDistribution::StaticRegisterNativesUODSphereDistribution()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UODSphereDistribution);
UClass* Z_Construct_UClass_UODSphereDistribution_NoRegister()
{
	return UODSphereDistribution::StaticClass();
}
struct Z_Construct_UClass_UODSphereDistribution_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ObjectDistribution/ODSphereDistribution.h" },
		{ "ModuleRelativePath", "Public/ObjectDistribution/ODSphereDistribution.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpiralWinding_MetaData[] = {
		{ "Category", "Distribution" },
		{ "ModuleRelativePath", "Public/ObjectDistribution/ODSphereDistribution.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SphereRadius_MetaData[] = {
		{ "Category", "Distribution" },
		{ "ModuleRelativePath", "Public/ObjectDistribution/ODSphereDistribution.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Chaos_MetaData[] = {
		{ "Category", "Distribution" },
		{ "ModuleRelativePath", "Public/ObjectDistribution/ODSphereDistribution.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpiralWinding;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SphereRadius;
	static void NewProp_Chaos_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Chaos;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UODSphereDistribution>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UODSphereDistribution_Statics::NewProp_SpiralWinding = { "SpiralWinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UODSphereDistribution, SpiralWinding), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpiralWinding_MetaData), NewProp_SpiralWinding_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UODSphereDistribution_Statics::NewProp_SphereRadius = { "SphereRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UODSphereDistribution, SphereRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SphereRadius_MetaData), NewProp_SphereRadius_MetaData) };
void Z_Construct_UClass_UODSphereDistribution_Statics::NewProp_Chaos_SetBit(void* Obj)
{
	((UODSphereDistribution*)Obj)->Chaos = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UODSphereDistribution_Statics::NewProp_Chaos = { "Chaos", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UODSphereDistribution), &Z_Construct_UClass_UODSphereDistribution_Statics::NewProp_Chaos_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Chaos_MetaData), NewProp_Chaos_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UODSphereDistribution_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODSphereDistribution_Statics::NewProp_SpiralWinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODSphereDistribution_Statics::NewProp_SphereRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODSphereDistribution_Statics::NewProp_Chaos,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UODSphereDistribution_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UODSphereDistribution_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UODDistributionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ObjectDistribution,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UODSphereDistribution_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UODSphereDistribution_Statics::ClassParams = {
	&UODSphereDistribution::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UODSphereDistribution_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UODSphereDistribution_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UODSphereDistribution_Statics::Class_MetaDataParams), Z_Construct_UClass_UODSphereDistribution_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UODSphereDistribution()
{
	if (!Z_Registration_Info_UClass_UODSphereDistribution.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UODSphereDistribution.OuterSingleton, Z_Construct_UClass_UODSphereDistribution_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UODSphereDistribution.OuterSingleton;
}
template<> OBJECTDISTRIBUTION_API UClass* StaticClass<UODSphereDistribution>()
{
	return UODSphereDistribution::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UODSphereDistribution);
UODSphereDistribution::~UODSphereDistribution() {}
// End Class UODSphereDistribution

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ObjectDistribution_Public_ObjectDistribution_ODSphereDistribution_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UODSphereDistribution, UODSphereDistribution::StaticClass, TEXT("UODSphereDistribution"), &Z_Registration_Info_UClass_UODSphereDistribution, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UODSphereDistribution), 633688773U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ObjectDistribution_Public_ObjectDistribution_ODSphereDistribution_h_1855335641(TEXT("/Script/ObjectDistribution"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ObjectDistribution_Public_ObjectDistribution_ODSphereDistribution_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ObjectDistribution_Public_ObjectDistribution_ODSphereDistribution_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
