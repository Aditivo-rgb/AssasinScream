// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObjectDistribution/Public/ObjectDistribution/ODTDDistribution.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeODTDDistribution() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
OBJECTDISTRIBUTION_API UClass* Z_Construct_UClass_UODDistributionBase();
OBJECTDISTRIBUTION_API UClass* Z_Construct_UClass_UODTDDistribution();
OBJECTDISTRIBUTION_API UClass* Z_Construct_UClass_UODTDDistribution_NoRegister();
UPackage* Z_Construct_UPackage__Script_ObjectDistribution();
// End Cross Module References

// Begin Class UODTDDistribution
void UODTDDistribution::StaticRegisterNativesUODTDDistribution()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UODTDDistribution);
UClass* Z_Construct_UClass_UODTDDistribution_NoRegister()
{
	return UODTDDistribution::StaticClass();
}
struct Z_Construct_UClass_UODTDDistribution_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ObjectDistribution/ODTDDistribution.h" },
		{ "ModuleRelativePath", "Public/ObjectDistribution/ODTDDistribution.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridSize_MetaData[] = {
		{ "Category", "Distribution" },
		{ "ModuleRelativePath", "Public/ObjectDistribution/ODTDDistribution.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridLength_MetaData[] = {
		{ "Category", "Distribution" },
		{ "ModuleRelativePath", "Public/ObjectDistribution/ODTDDistribution.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Chaos_MetaData[] = {
		{ "Category", "Distribution" },
		{ "ModuleRelativePath", "Public/ObjectDistribution/ODTDDistribution.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GridSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GridLength;
	static void NewProp_Chaos_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Chaos;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UODTDDistribution>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UODTDDistribution_Statics::NewProp_GridSize = { "GridSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UODTDDistribution, GridSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridSize_MetaData), NewProp_GridSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UODTDDistribution_Statics::NewProp_GridLength = { "GridLength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UODTDDistribution, GridLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridLength_MetaData), NewProp_GridLength_MetaData) };
void Z_Construct_UClass_UODTDDistribution_Statics::NewProp_Chaos_SetBit(void* Obj)
{
	((UODTDDistribution*)Obj)->Chaos = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UODTDDistribution_Statics::NewProp_Chaos = { "Chaos", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UODTDDistribution), &Z_Construct_UClass_UODTDDistribution_Statics::NewProp_Chaos_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Chaos_MetaData), NewProp_Chaos_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UODTDDistribution_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODTDDistribution_Statics::NewProp_GridSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODTDDistribution_Statics::NewProp_GridLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODTDDistribution_Statics::NewProp_Chaos,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UODTDDistribution_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UODTDDistribution_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UODDistributionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ObjectDistribution,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UODTDDistribution_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UODTDDistribution_Statics::ClassParams = {
	&UODTDDistribution::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UODTDDistribution_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UODTDDistribution_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UODTDDistribution_Statics::Class_MetaDataParams), Z_Construct_UClass_UODTDDistribution_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UODTDDistribution()
{
	if (!Z_Registration_Info_UClass_UODTDDistribution.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UODTDDistribution.OuterSingleton, Z_Construct_UClass_UODTDDistribution_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UODTDDistribution.OuterSingleton;
}
template<> OBJECTDISTRIBUTION_API UClass* StaticClass<UODTDDistribution>()
{
	return UODTDDistribution::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UODTDDistribution);
UODTDDistribution::~UODTDDistribution() {}
// End Class UODTDDistribution

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ObjectDistribution_Source_ObjectDistribution_Public_ObjectDistribution_ODTDDistribution_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UODTDDistribution, UODTDDistribution::StaticClass, TEXT("UODTDDistribution"), &Z_Registration_Info_UClass_UODTDDistribution, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UODTDDistribution), 408744530U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ObjectDistribution_Source_ObjectDistribution_Public_ObjectDistribution_ODTDDistribution_h_3137579075(TEXT("/Script/ObjectDistribution"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_ObjectDistribution_Source_ObjectDistribution_Public_ObjectDistribution_ODTDDistribution_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ObjectDistribution_Source_ObjectDistribution_Public_ObjectDistribution_ODTDDistribution_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
