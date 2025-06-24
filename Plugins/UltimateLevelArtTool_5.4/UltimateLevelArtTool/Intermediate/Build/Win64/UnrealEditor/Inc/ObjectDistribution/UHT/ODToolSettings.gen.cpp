// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObjectDistribution/Public/Data/ODToolSettings.h"
#include "ObjectDistribution/Public/Data/ODDistributionData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeODToolSettings() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
OBJECTDISTRIBUTION_API UClass* Z_Construct_UClass_UODToolSettings();
OBJECTDISTRIBUTION_API UClass* Z_Construct_UClass_UODToolSettings_NoRegister();
OBJECTDISTRIBUTION_API UEnum* Z_Construct_UEnum_ObjectDistribution_EObjectDistributionType();
OBJECTDISTRIBUTION_API UScriptStruct* Z_Construct_UScriptStruct_FODCubeDistributionData();
OBJECTDISTRIBUTION_API UScriptStruct* Z_Construct_UScriptStruct_FODDiskDistributionData();
OBJECTDISTRIBUTION_API UScriptStruct* Z_Construct_UScriptStruct_FODGridDistributionData();
OBJECTDISTRIBUTION_API UScriptStruct* Z_Construct_UScriptStruct_FODLineDistributionData();
OBJECTDISTRIBUTION_API UScriptStruct* Z_Construct_UScriptStruct_FODPlaneDistributionData();
OBJECTDISTRIBUTION_API UScriptStruct* Z_Construct_UScriptStruct_FODRingDistributionData();
OBJECTDISTRIBUTION_API UScriptStruct* Z_Construct_UScriptStruct_FODSphereDistributionData();
OBJECTDISTRIBUTION_API UScriptStruct* Z_Construct_UScriptStruct_FODSpiralDistributionData();
UPackage* Z_Construct_UPackage__Script_ObjectDistribution();
// End Cross Module References

// Begin Class UODToolSettings
void UODToolSettings::StaticRegisterNativesUODToolSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UODToolSettings);
UClass* Z_Construct_UClass_UODToolSettings_NoRegister()
{
	return UODToolSettings::StaticClass();
}
struct Z_Construct_UClass_UODToolSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Data/ODToolSettings.h" },
		{ "ModuleRelativePath", "Public/Data/ODToolSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DiskDistributionData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/ODToolSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CubeDistributionData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/ODToolSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineDistributionData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/ODToolSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RingDistributionData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/ODToolSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SphereDistributionData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/ODToolSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridDistributionData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/ODToolSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaneDistributionData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/ODToolSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpiralDistributionData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/ODToolSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSimulatePhysics_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/ODToolSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisableSimAfterFinish_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/ODToolSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KillZ_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/ODToolSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawSpawnBounds_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/ODToolSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundsColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/ODToolSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FinishingType_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/ODToolSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetType_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/ODToolSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTestForCollider_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/ODToolSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxCollisionTest_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/ODToolSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastSelectedDistributionType_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/ODToolSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DiskDistributionData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CubeDistributionData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LineDistributionData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RingDistributionData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SphereDistributionData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GridDistributionData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlaneDistributionData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpiralDistributionData;
	static void NewProp_bSimulatePhysics_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSimulatePhysics;
	static void NewProp_bDisableSimAfterFinish_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableSimAfterFinish;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_KillZ;
	static void NewProp_bDrawSpawnBounds_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawSpawnBounds;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoundsColor;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FinishingType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TargetType;
	static void NewProp_bTestForCollider_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTestForCollider;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxCollisionTest;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LastSelectedDistributionType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LastSelectedDistributionType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UODToolSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UODToolSettings_Statics::NewProp_DiskDistributionData = { "DiskDistributionData", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UODToolSettings, DiskDistributionData), Z_Construct_UScriptStruct_FODDiskDistributionData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DiskDistributionData_MetaData), NewProp_DiskDistributionData_MetaData) }; // 2276438453
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UODToolSettings_Statics::NewProp_CubeDistributionData = { "CubeDistributionData", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UODToolSettings, CubeDistributionData), Z_Construct_UScriptStruct_FODCubeDistributionData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CubeDistributionData_MetaData), NewProp_CubeDistributionData_MetaData) }; // 4014688577
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UODToolSettings_Statics::NewProp_LineDistributionData = { "LineDistributionData", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UODToolSettings, LineDistributionData), Z_Construct_UScriptStruct_FODLineDistributionData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineDistributionData_MetaData), NewProp_LineDistributionData_MetaData) }; // 1230466085
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UODToolSettings_Statics::NewProp_RingDistributionData = { "RingDistributionData", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UODToolSettings, RingDistributionData), Z_Construct_UScriptStruct_FODRingDistributionData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RingDistributionData_MetaData), NewProp_RingDistributionData_MetaData) }; // 2132914566
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UODToolSettings_Statics::NewProp_SphereDistributionData = { "SphereDistributionData", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UODToolSettings, SphereDistributionData), Z_Construct_UScriptStruct_FODSphereDistributionData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SphereDistributionData_MetaData), NewProp_SphereDistributionData_MetaData) }; // 1537026329
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UODToolSettings_Statics::NewProp_GridDistributionData = { "GridDistributionData", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UODToolSettings, GridDistributionData), Z_Construct_UScriptStruct_FODGridDistributionData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridDistributionData_MetaData), NewProp_GridDistributionData_MetaData) }; // 736794814
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UODToolSettings_Statics::NewProp_PlaneDistributionData = { "PlaneDistributionData", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UODToolSettings, PlaneDistributionData), Z_Construct_UScriptStruct_FODPlaneDistributionData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaneDistributionData_MetaData), NewProp_PlaneDistributionData_MetaData) }; // 3851040986
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UODToolSettings_Statics::NewProp_SpiralDistributionData = { "SpiralDistributionData", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UODToolSettings, SpiralDistributionData), Z_Construct_UScriptStruct_FODSpiralDistributionData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpiralDistributionData_MetaData), NewProp_SpiralDistributionData_MetaData) }; // 1376488153
void Z_Construct_UClass_UODToolSettings_Statics::NewProp_bSimulatePhysics_SetBit(void* Obj)
{
	((UODToolSettings*)Obj)->bSimulatePhysics = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UODToolSettings_Statics::NewProp_bSimulatePhysics = { "bSimulatePhysics", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UODToolSettings), &Z_Construct_UClass_UODToolSettings_Statics::NewProp_bSimulatePhysics_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSimulatePhysics_MetaData), NewProp_bSimulatePhysics_MetaData) };
void Z_Construct_UClass_UODToolSettings_Statics::NewProp_bDisableSimAfterFinish_SetBit(void* Obj)
{
	((UODToolSettings*)Obj)->bDisableSimAfterFinish = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UODToolSettings_Statics::NewProp_bDisableSimAfterFinish = { "bDisableSimAfterFinish", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UODToolSettings), &Z_Construct_UClass_UODToolSettings_Statics::NewProp_bDisableSimAfterFinish_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisableSimAfterFinish_MetaData), NewProp_bDisableSimAfterFinish_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UODToolSettings_Statics::NewProp_KillZ = { "KillZ", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UODToolSettings, KillZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KillZ_MetaData), NewProp_KillZ_MetaData) };
void Z_Construct_UClass_UODToolSettings_Statics::NewProp_bDrawSpawnBounds_SetBit(void* Obj)
{
	((UODToolSettings*)Obj)->bDrawSpawnBounds = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UODToolSettings_Statics::NewProp_bDrawSpawnBounds = { "bDrawSpawnBounds", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UODToolSettings), &Z_Construct_UClass_UODToolSettings_Statics::NewProp_bDrawSpawnBounds_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawSpawnBounds_MetaData), NewProp_bDrawSpawnBounds_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UODToolSettings_Statics::NewProp_BoundsColor = { "BoundsColor", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UODToolSettings, BoundsColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundsColor_MetaData), NewProp_BoundsColor_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UODToolSettings_Statics::NewProp_FinishingType = { "FinishingType", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UODToolSettings, FinishingType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FinishingType_MetaData), NewProp_FinishingType_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UODToolSettings_Statics::NewProp_TargetType = { "TargetType", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UODToolSettings, TargetType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetType_MetaData), NewProp_TargetType_MetaData) };
void Z_Construct_UClass_UODToolSettings_Statics::NewProp_bTestForCollider_SetBit(void* Obj)
{
	((UODToolSettings*)Obj)->bTestForCollider = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UODToolSettings_Statics::NewProp_bTestForCollider = { "bTestForCollider", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UODToolSettings), &Z_Construct_UClass_UODToolSettings_Statics::NewProp_bTestForCollider_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTestForCollider_MetaData), NewProp_bTestForCollider_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UODToolSettings_Statics::NewProp_MaxCollisionTest = { "MaxCollisionTest", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UODToolSettings, MaxCollisionTest), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxCollisionTest_MetaData), NewProp_MaxCollisionTest_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UODToolSettings_Statics::NewProp_LastSelectedDistributionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UODToolSettings_Statics::NewProp_LastSelectedDistributionType = { "LastSelectedDistributionType", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UODToolSettings, LastSelectedDistributionType), Z_Construct_UEnum_ObjectDistribution_EObjectDistributionType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastSelectedDistributionType_MetaData), NewProp_LastSelectedDistributionType_MetaData) }; // 3898895517
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UODToolSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODToolSettings_Statics::NewProp_DiskDistributionData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODToolSettings_Statics::NewProp_CubeDistributionData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODToolSettings_Statics::NewProp_LineDistributionData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODToolSettings_Statics::NewProp_RingDistributionData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODToolSettings_Statics::NewProp_SphereDistributionData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODToolSettings_Statics::NewProp_GridDistributionData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODToolSettings_Statics::NewProp_PlaneDistributionData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODToolSettings_Statics::NewProp_SpiralDistributionData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODToolSettings_Statics::NewProp_bSimulatePhysics,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODToolSettings_Statics::NewProp_bDisableSimAfterFinish,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODToolSettings_Statics::NewProp_KillZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODToolSettings_Statics::NewProp_bDrawSpawnBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODToolSettings_Statics::NewProp_BoundsColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODToolSettings_Statics::NewProp_FinishingType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODToolSettings_Statics::NewProp_TargetType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODToolSettings_Statics::NewProp_bTestForCollider,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODToolSettings_Statics::NewProp_MaxCollisionTest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODToolSettings_Statics::NewProp_LastSelectedDistributionType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODToolSettings_Statics::NewProp_LastSelectedDistributionType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UODToolSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UODToolSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ObjectDistribution,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UODToolSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UODToolSettings_Statics::ClassParams = {
	&UODToolSettings::StaticClass,
	"ODToolSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UODToolSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UODToolSettings_Statics::PropPointers),
	0,
	0x001000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UODToolSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UODToolSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UODToolSettings()
{
	if (!Z_Registration_Info_UClass_UODToolSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UODToolSettings.OuterSingleton, Z_Construct_UClass_UODToolSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UODToolSettings.OuterSingleton;
}
template<> OBJECTDISTRIBUTION_API UClass* StaticClass<UODToolSettings>()
{
	return UODToolSettings::StaticClass();
}
UODToolSettings::UODToolSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UODToolSettings);
UODToolSettings::~UODToolSettings() {}
// End Class UODToolSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ObjectDistribution_Public_Data_ODToolSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UODToolSettings, UODToolSettings::StaticClass, TEXT("UODToolSettings"), &Z_Registration_Info_UClass_UODToolSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UODToolSettings), 3092860067U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ObjectDistribution_Public_Data_ODToolSettings_h_3584071399(TEXT("/Script/ObjectDistribution"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ObjectDistribution_Public_Data_ODToolSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ObjectDistribution_Public_Data_ODToolSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
