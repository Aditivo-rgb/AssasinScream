// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObjectDistribution/Public/ObjectDistribution/ODDiskDistribution.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeODDiskDistribution() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
OBJECTDISTRIBUTION_API UClass* Z_Construct_UClass_UODDiskDistribution();
OBJECTDISTRIBUTION_API UClass* Z_Construct_UClass_UODDiskDistribution_NoRegister();
OBJECTDISTRIBUTION_API UClass* Z_Construct_UClass_UODDistributionBase();
UPackage* Z_Construct_UPackage__Script_ObjectDistribution();
// End Cross Module References

// Begin Class UODDiskDistribution
void UODDiskDistribution::StaticRegisterNativesUODDiskDistribution()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UODDiskDistribution);
UClass* Z_Construct_UClass_UODDiskDistribution_NoRegister()
{
	return UODDiskDistribution::StaticClass();
}
struct Z_Construct_UClass_UODDiskDistribution_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ObjectDistribution/ODDiskDistribution.h" },
		{ "ModuleRelativePath", "Public/ObjectDistribution/ODDiskDistribution.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "Category", "Distribution" },
		{ "ModuleRelativePath", "Public/ObjectDistribution/ODDiskDistribution.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRandZRangeCond_MetaData[] = {
		{ "Category", "Distribution" },
		{ "DisplayName", "Random Z Offset" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/ObjectDistribution/ODDiskDistribution.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandZRange_MetaData[] = {
		{ "Category", "Distribution" },
		{ "DisplayName", "Random Z Offset" },
		{ "EditCondition", "bRandZRangeCond" },
		{ "ModuleRelativePath", "Public/ObjectDistribution/ODDiskDistribution.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Chaos_MetaData[] = {
		{ "Category", "Distribution" },
		{ "ModuleRelativePath", "Public/ObjectDistribution/ODDiskDistribution.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static void NewProp_bRandZRangeCond_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRandZRangeCond;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RandZRange;
	static void NewProp_Chaos_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Chaos;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UODDiskDistribution>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UODDiskDistribution_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UODDiskDistribution, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
void Z_Construct_UClass_UODDiskDistribution_Statics::NewProp_bRandZRangeCond_SetBit(void* Obj)
{
	((UODDiskDistribution*)Obj)->bRandZRangeCond = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UODDiskDistribution_Statics::NewProp_bRandZRangeCond = { "bRandZRangeCond", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UODDiskDistribution), &Z_Construct_UClass_UODDiskDistribution_Statics::NewProp_bRandZRangeCond_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRandZRangeCond_MetaData), NewProp_bRandZRangeCond_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UODDiskDistribution_Statics::NewProp_RandZRange = { "RandZRange", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UODDiskDistribution, RandZRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandZRange_MetaData), NewProp_RandZRange_MetaData) };
void Z_Construct_UClass_UODDiskDistribution_Statics::NewProp_Chaos_SetBit(void* Obj)
{
	((UODDiskDistribution*)Obj)->Chaos = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UODDiskDistribution_Statics::NewProp_Chaos = { "Chaos", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UODDiskDistribution), &Z_Construct_UClass_UODDiskDistribution_Statics::NewProp_Chaos_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Chaos_MetaData), NewProp_Chaos_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UODDiskDistribution_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODDiskDistribution_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODDiskDistribution_Statics::NewProp_bRandZRangeCond,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODDiskDistribution_Statics::NewProp_RandZRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODDiskDistribution_Statics::NewProp_Chaos,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UODDiskDistribution_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UODDiskDistribution_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UODDistributionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ObjectDistribution,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UODDiskDistribution_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UODDiskDistribution_Statics::ClassParams = {
	&UODDiskDistribution::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UODDiskDistribution_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UODDiskDistribution_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UODDiskDistribution_Statics::Class_MetaDataParams), Z_Construct_UClass_UODDiskDistribution_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UODDiskDistribution()
{
	if (!Z_Registration_Info_UClass_UODDiskDistribution.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UODDiskDistribution.OuterSingleton, Z_Construct_UClass_UODDiskDistribution_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UODDiskDistribution.OuterSingleton;
}
template<> OBJECTDISTRIBUTION_API UClass* StaticClass<UODDiskDistribution>()
{
	return UODDiskDistribution::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UODDiskDistribution);
UODDiskDistribution::~UODDiskDistribution() {}
// End Class UODDiskDistribution

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ObjectDistribution_Public_ObjectDistribution_ODDiskDistribution_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UODDiskDistribution, UODDiskDistribution::StaticClass, TEXT("UODDiskDistribution"), &Z_Registration_Info_UClass_UODDiskDistribution, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UODDiskDistribution), 2174620658U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ObjectDistribution_Public_ObjectDistribution_ODDiskDistribution_h_2673451596(TEXT("/Script/ObjectDistribution"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ObjectDistribution_Public_ObjectDistribution_ODDiskDistribution_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ObjectDistribution_Public_ObjectDistribution_ODDiskDistribution_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
