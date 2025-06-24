// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObjectDistribution/Public/ObjectDistribution/ODDistributionPlane.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeODDistributionPlane() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
OBJECTDISTRIBUTION_API UClass* Z_Construct_UClass_UODDistributionBase();
OBJECTDISTRIBUTION_API UClass* Z_Construct_UClass_UODDistributionPlane();
OBJECTDISTRIBUTION_API UClass* Z_Construct_UClass_UODDistributionPlane_NoRegister();
UPackage* Z_Construct_UPackage__Script_ObjectDistribution();
// End Cross Module References

// Begin Class UODDistributionPlane
void UODDistributionPlane::StaticRegisterNativesUODDistributionPlane()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UODDistributionPlane);
UClass* Z_Construct_UClass_UODDistributionPlane_NoRegister()
{
	return UODDistributionPlane::StaticClass();
}
struct Z_Construct_UClass_UODDistributionPlane_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ObjectDistribution/ODDistributionPlane.h" },
		{ "ModuleRelativePath", "Public/ObjectDistribution/ODDistributionPlane.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[] = {
		{ "Category", "Distribution" },
		{ "ModuleRelativePath", "Public/ObjectDistribution/ODDistributionPlane.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRandomOffset_MetaData[] = {
		{ "Category", "Distribution" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/ObjectDistribution/ODDistributionPlane.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomOffset_MetaData[] = {
		{ "Category", "Distribution" },
		{ "EditCondition", "bRandomOffset" },
		{ "ModuleRelativePath", "Public/ObjectDistribution/ODDistributionPlane.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Offset;
	static void NewProp_bRandomOffset_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRandomOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RandomOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UODDistributionPlane>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UODDistributionPlane_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UODDistributionPlane, Offset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Offset_MetaData), NewProp_Offset_MetaData) };
void Z_Construct_UClass_UODDistributionPlane_Statics::NewProp_bRandomOffset_SetBit(void* Obj)
{
	((UODDistributionPlane*)Obj)->bRandomOffset = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UODDistributionPlane_Statics::NewProp_bRandomOffset = { "bRandomOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UODDistributionPlane), &Z_Construct_UClass_UODDistributionPlane_Statics::NewProp_bRandomOffset_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRandomOffset_MetaData), NewProp_bRandomOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UODDistributionPlane_Statics::NewProp_RandomOffset = { "RandomOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UODDistributionPlane, RandomOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomOffset_MetaData), NewProp_RandomOffset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UODDistributionPlane_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODDistributionPlane_Statics::NewProp_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODDistributionPlane_Statics::NewProp_bRandomOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODDistributionPlane_Statics::NewProp_RandomOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UODDistributionPlane_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UODDistributionPlane_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UODDistributionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ObjectDistribution,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UODDistributionPlane_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UODDistributionPlane_Statics::ClassParams = {
	&UODDistributionPlane::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UODDistributionPlane_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UODDistributionPlane_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UODDistributionPlane_Statics::Class_MetaDataParams), Z_Construct_UClass_UODDistributionPlane_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UODDistributionPlane()
{
	if (!Z_Registration_Info_UClass_UODDistributionPlane.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UODDistributionPlane.OuterSingleton, Z_Construct_UClass_UODDistributionPlane_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UODDistributionPlane.OuterSingleton;
}
template<> OBJECTDISTRIBUTION_API UClass* StaticClass<UODDistributionPlane>()
{
	return UODDistributionPlane::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UODDistributionPlane);
UODDistributionPlane::~UODDistributionPlane() {}
// End Class UODDistributionPlane

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ObjectDistribution_Source_ObjectDistribution_Public_ObjectDistribution_ODDistributionPlane_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UODDistributionPlane, UODDistributionPlane::StaticClass, TEXT("UODDistributionPlane"), &Z_Registration_Info_UClass_UODDistributionPlane, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UODDistributionPlane), 1484940504U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ObjectDistribution_Source_ObjectDistribution_Public_ObjectDistribution_ODDistributionPlane_h_1226095564(TEXT("/Script/ObjectDistribution"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_ObjectDistribution_Source_ObjectDistribution_Public_ObjectDistribution_ODDistributionPlane_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ObjectDistribution_Source_ObjectDistribution_Public_ObjectDistribution_ODDistributionPlane_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
