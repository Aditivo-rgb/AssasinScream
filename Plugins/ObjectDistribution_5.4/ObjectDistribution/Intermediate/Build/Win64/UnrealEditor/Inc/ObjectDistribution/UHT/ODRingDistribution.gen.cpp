// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObjectDistribution/Public/ObjectDistribution/ODRingDistribution.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeODRingDistribution() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
OBJECTDISTRIBUTION_API UClass* Z_Construct_UClass_UODDistributionBase();
OBJECTDISTRIBUTION_API UClass* Z_Construct_UClass_UODRingDistribution();
OBJECTDISTRIBUTION_API UClass* Z_Construct_UClass_UODRingDistribution_NoRegister();
UPackage* Z_Construct_UPackage__Script_ObjectDistribution();
// End Cross Module References

// Begin Class UODRingDistribution
void UODRingDistribution::StaticRegisterNativesUODRingDistribution()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UODRingDistribution);
UClass* Z_Construct_UClass_UODRingDistribution_NoRegister()
{
	return UODRingDistribution::StaticClass();
}
struct Z_Construct_UClass_UODRingDistribution_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ObjectDistribution/ODRingDistribution.h" },
		{ "ModuleRelativePath", "Public/ObjectDistribution/ODRingDistribution.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArcAngle_MetaData[] = {
		{ "Category", "Distribution" },
		{ "ModuleRelativePath", "Public/ObjectDistribution/ODRingDistribution.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[] = {
		{ "Category", "Distribution" },
		{ "ModuleRelativePath", "Public/ObjectDistribution/ODRingDistribution.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "Category", "Distribution" },
		{ "ModuleRelativePath", "Public/ObjectDistribution/ODRingDistribution.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRandZRangeCond_MetaData[] = {
		{ "Category", "Distribution" },
		{ "DisplayName", "Random Z Offset" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/ObjectDistribution/ODRingDistribution.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandZRange_MetaData[] = {
		{ "Category", "Distribution" },
		{ "DisplayName", "Random Z Offset" },
		{ "EditCondition", "bRandZRangeCond" },
		{ "ModuleRelativePath", "Public/ObjectDistribution/ODRingDistribution.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Chaos_MetaData[] = {
		{ "Category", "Distribution" },
		{ "ModuleRelativePath", "Public/ObjectDistribution/ODRingDistribution.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ArcAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static void NewProp_bRandZRangeCond_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRandZRangeCond;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RandZRange;
	static void NewProp_Chaos_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Chaos;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UODRingDistribution>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UODRingDistribution_Statics::NewProp_ArcAngle = { "ArcAngle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UODRingDistribution, ArcAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArcAngle_MetaData), NewProp_ArcAngle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UODRingDistribution_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UODRingDistribution, Offset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Offset_MetaData), NewProp_Offset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UODRingDistribution_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UODRingDistribution, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
void Z_Construct_UClass_UODRingDistribution_Statics::NewProp_bRandZRangeCond_SetBit(void* Obj)
{
	((UODRingDistribution*)Obj)->bRandZRangeCond = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UODRingDistribution_Statics::NewProp_bRandZRangeCond = { "bRandZRangeCond", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UODRingDistribution), &Z_Construct_UClass_UODRingDistribution_Statics::NewProp_bRandZRangeCond_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRandZRangeCond_MetaData), NewProp_bRandZRangeCond_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UODRingDistribution_Statics::NewProp_RandZRange = { "RandZRange", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UODRingDistribution, RandZRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandZRange_MetaData), NewProp_RandZRange_MetaData) };
void Z_Construct_UClass_UODRingDistribution_Statics::NewProp_Chaos_SetBit(void* Obj)
{
	((UODRingDistribution*)Obj)->Chaos = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UODRingDistribution_Statics::NewProp_Chaos = { "Chaos", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UODRingDistribution), &Z_Construct_UClass_UODRingDistribution_Statics::NewProp_Chaos_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Chaos_MetaData), NewProp_Chaos_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UODRingDistribution_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODRingDistribution_Statics::NewProp_ArcAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODRingDistribution_Statics::NewProp_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODRingDistribution_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODRingDistribution_Statics::NewProp_bRandZRangeCond,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODRingDistribution_Statics::NewProp_RandZRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODRingDistribution_Statics::NewProp_Chaos,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UODRingDistribution_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UODRingDistribution_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UODDistributionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ObjectDistribution,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UODRingDistribution_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UODRingDistribution_Statics::ClassParams = {
	&UODRingDistribution::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UODRingDistribution_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UODRingDistribution_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UODRingDistribution_Statics::Class_MetaDataParams), Z_Construct_UClass_UODRingDistribution_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UODRingDistribution()
{
	if (!Z_Registration_Info_UClass_UODRingDistribution.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UODRingDistribution.OuterSingleton, Z_Construct_UClass_UODRingDistribution_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UODRingDistribution.OuterSingleton;
}
template<> OBJECTDISTRIBUTION_API UClass* StaticClass<UODRingDistribution>()
{
	return UODRingDistribution::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UODRingDistribution);
UODRingDistribution::~UODRingDistribution() {}
// End Class UODRingDistribution

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ObjectDistribution_Source_ObjectDistribution_Public_ObjectDistribution_ODRingDistribution_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UODRingDistribution, UODRingDistribution::StaticClass, TEXT("UODRingDistribution"), &Z_Registration_Info_UClass_UODRingDistribution, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UODRingDistribution), 1243607919U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ObjectDistribution_Source_ObjectDistribution_Public_ObjectDistribution_ODRingDistribution_h_3364696346(TEXT("/Script/ObjectDistribution"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_ObjectDistribution_Source_ObjectDistribution_Public_ObjectDistribution_ODRingDistribution_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ObjectDistribution_Source_ObjectDistribution_Public_ObjectDistribution_ODRingDistribution_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
