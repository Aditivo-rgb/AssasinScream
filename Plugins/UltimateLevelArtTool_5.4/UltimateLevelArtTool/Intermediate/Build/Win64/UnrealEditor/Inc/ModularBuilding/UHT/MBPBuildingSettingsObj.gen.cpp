// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularBuilding/Public/Data/MBPBuildingSettingsObj.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMBPBuildingSettingsObj() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
MODULARBUILDING_API UClass* Z_Construct_UClass_UMBPBuildingSettingsObj();
MODULARBUILDING_API UClass* Z_Construct_UClass_UMBPBuildingSettingsObj_NoRegister();
UPackage* Z_Construct_UPackage__Script_ModularBuilding();
// End Cross Module References

// Begin Class UMBPBuildingSettingsObj
void UMBPBuildingSettingsObj::StaticRegisterNativesUMBPBuildingSettingsObj()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMBPBuildingSettingsObj);
UClass* Z_Construct_UClass_UMBPBuildingSettingsObj_NoRegister()
{
	return UMBPBuildingSettingsObj::StaticClass();
}
struct Z_Construct_UClass_UMBPBuildingSettingsObj_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Data/MBPBuildingSettingsObj.h" },
		{ "ModuleRelativePath", "Public/Data/MBPBuildingSettingsObj.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableSurfaceSnapping_MetaData[] = {
		{ "Category", "Prop Placement" },
		{ "DisplayName", "Enable Modular Snapping" },
		{ "ModuleRelativePath", "Public/Data/MBPBuildingSettingsObj.h" },
		{ "NoResetToDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCustomRotationRateCond_MetaData[] = {
		{ "Category", "Prop Placement" },
		{ "DisplayName", "Custom Rotation Rate" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Data/MBPBuildingSettingsObj.h" },
		{ "NoResetToDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomRotationRate_MetaData[] = {
		{ "Category", "Prop Placement" },
		{ "ClampMax", "359.000000" },
		{ "ClampMin", "0" },
		{ "Delta", "1" },
		{ "EditCondition", "bCustomRotationRateCond" },
		{ "ModuleRelativePath", "Public/Data/MBPBuildingSettingsObj.h" },
		{ "NoResetToDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bScaleRateCond_MetaData[] = {
		{ "Category", "Prop Placement" },
		{ "DisplayName", "Scale Rate" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Data/MBPBuildingSettingsObj.h" },
		{ "NoResetToDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleRate_MetaData[] = {
		{ "Category", "Prop Placement" },
		{ "ClampMin", "0.100000" },
		{ "Delta", "0.100000" },
		{ "EditCondition", "bScaleRateCond" },
		{ "ModuleRelativePath", "Public/Data/MBPBuildingSettingsObj.h" },
		{ "NoResetToDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bZOffsetCond_MetaData[] = {
		{ "Category", "Prop Placement" },
		{ "DisplayName", "Z Offset" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Data/MBPBuildingSettingsObj.h" },
		{ "NoResetToDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZOffset_MetaData[] = {
		{ "Category", "Prop Placement" },
		{ "ClampMax", "50000.000000" },
		{ "ClampMin", "-1000.000000" },
		{ "Delta", "50" },
		{ "DisplayName", "Z Offset" },
		{ "EditCondition", "bZOffsetCond" },
		{ "ModuleRelativePath", "Public/Data/MBPBuildingSettingsObj.h" },
		{ "NoResetToDefault", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnableSurfaceSnapping_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableSurfaceSnapping;
	static void NewProp_bCustomRotationRateCond_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCustomRotationRateCond;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CustomRotationRate;
	static void NewProp_bScaleRateCond_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bScaleRateCond;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleRate;
	static void NewProp_bZOffsetCond_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bZOffsetCond;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ZOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMBPBuildingSettingsObj>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UMBPBuildingSettingsObj_Statics::NewProp_bEnableSurfaceSnapping_SetBit(void* Obj)
{
	((UMBPBuildingSettingsObj*)Obj)->bEnableSurfaceSnapping = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMBPBuildingSettingsObj_Statics::NewProp_bEnableSurfaceSnapping = { "bEnableSurfaceSnapping", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMBPBuildingSettingsObj), &Z_Construct_UClass_UMBPBuildingSettingsObj_Statics::NewProp_bEnableSurfaceSnapping_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableSurfaceSnapping_MetaData), NewProp_bEnableSurfaceSnapping_MetaData) };
void Z_Construct_UClass_UMBPBuildingSettingsObj_Statics::NewProp_bCustomRotationRateCond_SetBit(void* Obj)
{
	((UMBPBuildingSettingsObj*)Obj)->bCustomRotationRateCond = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMBPBuildingSettingsObj_Statics::NewProp_bCustomRotationRateCond = { "bCustomRotationRateCond", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMBPBuildingSettingsObj), &Z_Construct_UClass_UMBPBuildingSettingsObj_Statics::NewProp_bCustomRotationRateCond_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCustomRotationRateCond_MetaData), NewProp_bCustomRotationRateCond_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMBPBuildingSettingsObj_Statics::NewProp_CustomRotationRate = { "CustomRotationRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBPBuildingSettingsObj, CustomRotationRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomRotationRate_MetaData), NewProp_CustomRotationRate_MetaData) };
void Z_Construct_UClass_UMBPBuildingSettingsObj_Statics::NewProp_bScaleRateCond_SetBit(void* Obj)
{
	((UMBPBuildingSettingsObj*)Obj)->bScaleRateCond = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMBPBuildingSettingsObj_Statics::NewProp_bScaleRateCond = { "bScaleRateCond", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMBPBuildingSettingsObj), &Z_Construct_UClass_UMBPBuildingSettingsObj_Statics::NewProp_bScaleRateCond_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bScaleRateCond_MetaData), NewProp_bScaleRateCond_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMBPBuildingSettingsObj_Statics::NewProp_ScaleRate = { "ScaleRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBPBuildingSettingsObj, ScaleRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleRate_MetaData), NewProp_ScaleRate_MetaData) };
void Z_Construct_UClass_UMBPBuildingSettingsObj_Statics::NewProp_bZOffsetCond_SetBit(void* Obj)
{
	((UMBPBuildingSettingsObj*)Obj)->bZOffsetCond = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMBPBuildingSettingsObj_Statics::NewProp_bZOffsetCond = { "bZOffsetCond", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMBPBuildingSettingsObj), &Z_Construct_UClass_UMBPBuildingSettingsObj_Statics::NewProp_bZOffsetCond_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bZOffsetCond_MetaData), NewProp_bZOffsetCond_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMBPBuildingSettingsObj_Statics::NewProp_ZOffset = { "ZOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBPBuildingSettingsObj, ZOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZOffset_MetaData), NewProp_ZOffset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMBPBuildingSettingsObj_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBPBuildingSettingsObj_Statics::NewProp_bEnableSurfaceSnapping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBPBuildingSettingsObj_Statics::NewProp_bCustomRotationRateCond,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBPBuildingSettingsObj_Statics::NewProp_CustomRotationRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBPBuildingSettingsObj_Statics::NewProp_bScaleRateCond,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBPBuildingSettingsObj_Statics::NewProp_ScaleRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBPBuildingSettingsObj_Statics::NewProp_bZOffsetCond,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBPBuildingSettingsObj_Statics::NewProp_ZOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMBPBuildingSettingsObj_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMBPBuildingSettingsObj_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ModularBuilding,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMBPBuildingSettingsObj_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMBPBuildingSettingsObj_Statics::ClassParams = {
	&UMBPBuildingSettingsObj::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMBPBuildingSettingsObj_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMBPBuildingSettingsObj_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMBPBuildingSettingsObj_Statics::Class_MetaDataParams), Z_Construct_UClass_UMBPBuildingSettingsObj_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMBPBuildingSettingsObj()
{
	if (!Z_Registration_Info_UClass_UMBPBuildingSettingsObj.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMBPBuildingSettingsObj.OuterSingleton, Z_Construct_UClass_UMBPBuildingSettingsObj_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMBPBuildingSettingsObj.OuterSingleton;
}
template<> MODULARBUILDING_API UClass* StaticClass<UMBPBuildingSettingsObj>()
{
	return UMBPBuildingSettingsObj::StaticClass();
}
UMBPBuildingSettingsObj::UMBPBuildingSettingsObj(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMBPBuildingSettingsObj);
UMBPBuildingSettingsObj::~UMBPBuildingSettingsObj() {}
// End Class UMBPBuildingSettingsObj

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Data_MBPBuildingSettingsObj_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMBPBuildingSettingsObj, UMBPBuildingSettingsObj::StaticClass, TEXT("UMBPBuildingSettingsObj"), &Z_Registration_Info_UClass_UMBPBuildingSettingsObj, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMBPBuildingSettingsObj), 2916887561U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Data_MBPBuildingSettingsObj_h_1056460015(TEXT("/Script/ModularBuilding"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Data_MBPBuildingSettingsObj_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Data_MBPBuildingSettingsObj_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
