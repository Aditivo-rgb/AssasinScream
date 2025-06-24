// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObjectDistribution/Public/ObjectDistribution/ODDistributionBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeODDistributionBase() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
OBJECTDISTRIBUTION_API UClass* Z_Construct_UClass_UODDistributionBase();
OBJECTDISTRIBUTION_API UClass* Z_Construct_UClass_UODDistributionBase_NoRegister();
OBJECTDISTRIBUTION_API UClass* Z_Construct_UClass_UODToolSubsystem_NoRegister();
OBJECTDISTRIBUTION_API UClass* Z_Construct_UClass_UODToolWindow_NoRegister();
OBJECTDISTRIBUTION_API UEnum* Z_Construct_UEnum_ObjectDistribution_EObjectDistributionType();
UPackage* Z_Construct_UPackage__Script_ObjectDistribution();
// End Cross Module References

// Begin Class UODDistributionBase Function OnPresetLoaded
struct Z_Construct_UFunction_UODDistributionBase_OnPresetLoaded_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ObjectDistribution/ODDistributionBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UODDistributionBase_OnPresetLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UODDistributionBase, nullptr, "OnPresetLoaded", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UODDistributionBase_OnPresetLoaded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UODDistributionBase_OnPresetLoaded_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UODDistributionBase_OnPresetLoaded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UODDistributionBase_OnPresetLoaded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UODDistributionBase::execOnPresetLoaded)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPresetLoaded();
	P_NATIVE_END;
}
// End Class UODDistributionBase Function OnPresetLoaded

// Begin Class UODDistributionBase
void UODDistributionBase::StaticRegisterNativesUODDistributionBase()
{
	UClass* Class = UODDistributionBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnPresetLoaded", &UODDistributionBase::execOnPresetLoaded },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UODDistributionBase);
UClass* Z_Construct_UClass_UODDistributionBase_NoRegister()
{
	return UODDistributionBase::StaticClass();
}
struct Z_Construct_UClass_UODDistributionBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ObjectDistribution/ODDistributionBase.h" },
		{ "ModuleRelativePath", "Public/ObjectDistribution/ODDistributionBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToolWindow_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ObjectDistribution/ODDistributionBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToolSubsystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectDistribution/ODDistributionBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsInMixerMode_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectDistribution/ODDistributionBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistributionType_MetaData[] = {
		{ "Category", "Distribution" },
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Public/ObjectDistribution/ODDistributionBase.h" },
		{ "NoResetToDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorsInKillZ_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectDistribution/ODDistributionBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SimulatedActors_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectDistribution/ODDistributionBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ToolWindow;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ToolSubsystem;
	static void NewProp_bIsInMixerMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInMixerMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DistributionType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DistributionType;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ActorsInKillZ_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorsInKillZ;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SimulatedActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SimulatedActors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UODDistributionBase_OnPresetLoaded, "OnPresetLoaded" }, // 3326101093
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UODDistributionBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UODDistributionBase_Statics::NewProp_ToolWindow = { "ToolWindow", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UODDistributionBase, ToolWindow), Z_Construct_UClass_UODToolWindow_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToolWindow_MetaData), NewProp_ToolWindow_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UODDistributionBase_Statics::NewProp_ToolSubsystem = { "ToolSubsystem", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UODDistributionBase, ToolSubsystem), Z_Construct_UClass_UODToolSubsystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToolSubsystem_MetaData), NewProp_ToolSubsystem_MetaData) };
void Z_Construct_UClass_UODDistributionBase_Statics::NewProp_bIsInMixerMode_SetBit(void* Obj)
{
	((UODDistributionBase*)Obj)->bIsInMixerMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UODDistributionBase_Statics::NewProp_bIsInMixerMode = { "bIsInMixerMode", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UODDistributionBase), &Z_Construct_UClass_UODDistributionBase_Statics::NewProp_bIsInMixerMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsInMixerMode_MetaData), NewProp_bIsInMixerMode_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UODDistributionBase_Statics::NewProp_DistributionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UODDistributionBase_Statics::NewProp_DistributionType = { "DistributionType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UODDistributionBase, DistributionType), Z_Construct_UEnum_ObjectDistribution_EObjectDistributionType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistributionType_MetaData), NewProp_DistributionType_MetaData) }; // 3898895517
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UODDistributionBase_Statics::NewProp_ActorsInKillZ_Inner = { "ActorsInKillZ", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UODDistributionBase_Statics::NewProp_ActorsInKillZ = { "ActorsInKillZ", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UODDistributionBase, ActorsInKillZ), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorsInKillZ_MetaData), NewProp_ActorsInKillZ_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UODDistributionBase_Statics::NewProp_SimulatedActors_Inner = { "SimulatedActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UODDistributionBase_Statics::NewProp_SimulatedActors = { "SimulatedActors", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UODDistributionBase, SimulatedActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SimulatedActors_MetaData), NewProp_SimulatedActors_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UODDistributionBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODDistributionBase_Statics::NewProp_ToolWindow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODDistributionBase_Statics::NewProp_ToolSubsystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODDistributionBase_Statics::NewProp_bIsInMixerMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODDistributionBase_Statics::NewProp_DistributionType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODDistributionBase_Statics::NewProp_DistributionType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODDistributionBase_Statics::NewProp_ActorsInKillZ_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODDistributionBase_Statics::NewProp_ActorsInKillZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODDistributionBase_Statics::NewProp_SimulatedActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODDistributionBase_Statics::NewProp_SimulatedActors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UODDistributionBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UODDistributionBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ObjectDistribution,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UODDistributionBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UODDistributionBase_Statics::ClassParams = {
	&UODDistributionBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UODDistributionBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UODDistributionBase_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UODDistributionBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UODDistributionBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UODDistributionBase()
{
	if (!Z_Registration_Info_UClass_UODDistributionBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UODDistributionBase.OuterSingleton, Z_Construct_UClass_UODDistributionBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UODDistributionBase.OuterSingleton;
}
template<> OBJECTDISTRIBUTION_API UClass* StaticClass<UODDistributionBase>()
{
	return UODDistributionBase::StaticClass();
}
UODDistributionBase::UODDistributionBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UODDistributionBase);
UODDistributionBase::~UODDistributionBase() {}
// End Class UODDistributionBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ObjectDistribution_Source_ObjectDistribution_Public_ObjectDistribution_ODDistributionBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UODDistributionBase, UODDistributionBase::StaticClass, TEXT("UODDistributionBase"), &Z_Registration_Info_UClass_UODDistributionBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UODDistributionBase), 1054417579U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ObjectDistribution_Source_ObjectDistribution_Public_ObjectDistribution_ODDistributionBase_h_915759002(TEXT("/Script/ObjectDistribution"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_ObjectDistribution_Source_ObjectDistribution_Public_ObjectDistribution_ODDistributionBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ObjectDistribution_Source_ObjectDistribution_Public_ObjectDistribution_ODDistributionBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
