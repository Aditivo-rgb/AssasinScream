// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularBuilding/Public/Building/MBPropDistributionBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMBPropDistributionBase() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
MODULARBUILDING_API UClass* Z_Construct_UClass_UMBPropDistributionBase();
MODULARBUILDING_API UClass* Z_Construct_UClass_UMBPropDistributionBase_NoRegister();
MODULARBUILDING_API UClass* Z_Construct_UClass_UMBToolSubsystem_NoRegister();
MODULARBUILDING_API UEnum* Z_Construct_UEnum_ModularBuilding_EMBDistributionType();
MODULARBUILDING_API UEnum* Z_Construct_UEnum_ModularBuilding_EMBPropOrientation();
UPackage* Z_Construct_UPackage__Script_ModularBuilding();
// End Cross Module References

// Begin Class UMBPropDistributionBase
void UMBPropDistributionBase::StaticRegisterNativesUMBPropDistributionBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMBPropDistributionBase);
UClass* Z_Construct_UClass_UMBPropDistributionBase_NoRegister()
{
	return UMBPropDistributionBase::StaticClass();
}
struct Z_Construct_UClass_UMBPropDistributionBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Building/MBPropDistributionBase.h" },
		{ "ModuleRelativePath", "Public/Building/MBPropDistributionBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToolSettingsSubsystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/Building/MBPropDistributionBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bActorSelected_MetaData[] = {
		{ "ModuleRelativePath", "Public/Building/MBPropDistributionBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOneActorDistribution_MetaData[] = {
		{ "ModuleRelativePath", "Public/Building/MBPropDistributionBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistributionActors_MetaData[] = {
		{ "ModuleRelativePath", "Public/Building/MBPropDistributionBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfDistribution_MetaData[] = {
		{ "Category", "Distribution" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/Building/MBPropDistributionBase.h" },
		{ "NoResetToDefault", "" },
		{ "NoSpinbox", "TRUE" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistributionType_MetaData[] = {
		{ "Category", "Distribution" },
		{ "ModuleRelativePath", "Public/Building/MBPropDistributionBase.h" },
		{ "NoResetToDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorToFollow_MetaData[] = {
		{ "Category", "Distribution" },
		{ "ModuleRelativePath", "Public/Building/MBPropDistributionBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "Category", "Distribution" },
		{ "MakeEditWidget", "TRUE" },
		{ "ModuleRelativePath", "Public/Building/MBPropDistributionBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Orientation_MetaData[] = {
		{ "Category", "Distribution" },
		{ "ModuleRelativePath", "Public/Building/MBPropDistributionBase.h" },
		{ "NoResetToDefault", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ToolSettingsSubsystem;
	static void NewProp_bActorSelected_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bActorSelected;
	static void NewProp_bOneActorDistribution_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOneActorDistribution;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DistributionActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DistributionActors;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfDistribution;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DistributionType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DistributionType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorToFollow;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Orientation_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Orientation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMBPropDistributionBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMBPropDistributionBase_Statics::NewProp_ToolSettingsSubsystem = { "ToolSettingsSubsystem", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBPropDistributionBase, ToolSettingsSubsystem), Z_Construct_UClass_UMBToolSubsystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToolSettingsSubsystem_MetaData), NewProp_ToolSettingsSubsystem_MetaData) };
void Z_Construct_UClass_UMBPropDistributionBase_Statics::NewProp_bActorSelected_SetBit(void* Obj)
{
	((UMBPropDistributionBase*)Obj)->bActorSelected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMBPropDistributionBase_Statics::NewProp_bActorSelected = { "bActorSelected", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMBPropDistributionBase), &Z_Construct_UClass_UMBPropDistributionBase_Statics::NewProp_bActorSelected_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bActorSelected_MetaData), NewProp_bActorSelected_MetaData) };
void Z_Construct_UClass_UMBPropDistributionBase_Statics::NewProp_bOneActorDistribution_SetBit(void* Obj)
{
	((UMBPropDistributionBase*)Obj)->bOneActorDistribution = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMBPropDistributionBase_Statics::NewProp_bOneActorDistribution = { "bOneActorDistribution", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMBPropDistributionBase), &Z_Construct_UClass_UMBPropDistributionBase_Statics::NewProp_bOneActorDistribution_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOneActorDistribution_MetaData), NewProp_bOneActorDistribution_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMBPropDistributionBase_Statics::NewProp_DistributionActors_Inner = { "DistributionActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMBPropDistributionBase_Statics::NewProp_DistributionActors = { "DistributionActors", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBPropDistributionBase, DistributionActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistributionActors_MetaData), NewProp_DistributionActors_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMBPropDistributionBase_Statics::NewProp_NumberOfDistribution = { "NumberOfDistribution", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBPropDistributionBase, NumberOfDistribution), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumberOfDistribution_MetaData), NewProp_NumberOfDistribution_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMBPropDistributionBase_Statics::NewProp_DistributionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMBPropDistributionBase_Statics::NewProp_DistributionType = { "DistributionType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBPropDistributionBase, DistributionType), Z_Construct_UEnum_ModularBuilding_EMBDistributionType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistributionType_MetaData), NewProp_DistributionType_MetaData) }; // 1496322610
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMBPropDistributionBase_Statics::NewProp_ActorToFollow = { "ActorToFollow", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBPropDistributionBase, ActorToFollow), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorToFollow_MetaData), NewProp_ActorToFollow_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMBPropDistributionBase_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBPropDistributionBase, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMBPropDistributionBase_Statics::NewProp_Orientation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMBPropDistributionBase_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBPropDistributionBase, Orientation), Z_Construct_UEnum_ModularBuilding_EMBPropOrientation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Orientation_MetaData), NewProp_Orientation_MetaData) }; // 2680957852
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMBPropDistributionBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBPropDistributionBase_Statics::NewProp_ToolSettingsSubsystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBPropDistributionBase_Statics::NewProp_bActorSelected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBPropDistributionBase_Statics::NewProp_bOneActorDistribution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBPropDistributionBase_Statics::NewProp_DistributionActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBPropDistributionBase_Statics::NewProp_DistributionActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBPropDistributionBase_Statics::NewProp_NumberOfDistribution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBPropDistributionBase_Statics::NewProp_DistributionType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBPropDistributionBase_Statics::NewProp_DistributionType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBPropDistributionBase_Statics::NewProp_ActorToFollow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBPropDistributionBase_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBPropDistributionBase_Statics::NewProp_Orientation_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBPropDistributionBase_Statics::NewProp_Orientation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMBPropDistributionBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMBPropDistributionBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ModularBuilding,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMBPropDistributionBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMBPropDistributionBase_Statics::ClassParams = {
	&UMBPropDistributionBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMBPropDistributionBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMBPropDistributionBase_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMBPropDistributionBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UMBPropDistributionBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMBPropDistributionBase()
{
	if (!Z_Registration_Info_UClass_UMBPropDistributionBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMBPropDistributionBase.OuterSingleton, Z_Construct_UClass_UMBPropDistributionBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMBPropDistributionBase.OuterSingleton;
}
template<> MODULARBUILDING_API UClass* StaticClass<UMBPropDistributionBase>()
{
	return UMBPropDistributionBase::StaticClass();
}
UMBPropDistributionBase::UMBPropDistributionBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMBPropDistributionBase);
UMBPropDistributionBase::~UMBPropDistributionBase() {}
// End Class UMBPropDistributionBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Building_MBPropDistributionBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMBPropDistributionBase, UMBPropDistributionBase::StaticClass, TEXT("UMBPropDistributionBase"), &Z_Registration_Info_UClass_UMBPropDistributionBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMBPropDistributionBase), 691167584U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Building_MBPropDistributionBase_h_479701530(TEXT("/Script/ModularBuilding"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Building_MBPropDistributionBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Building_MBPropDistributionBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
