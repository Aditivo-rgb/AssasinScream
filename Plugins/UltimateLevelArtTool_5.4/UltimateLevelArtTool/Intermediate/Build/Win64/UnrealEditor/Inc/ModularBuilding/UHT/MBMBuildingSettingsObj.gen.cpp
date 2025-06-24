// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularBuilding/Public/Data/MBMBuildingSettingsObj.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMBMBuildingSettingsObj() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
MODULARBUILDING_API UClass* Z_Construct_UClass_UMBMBuildingSettingsObj();
MODULARBUILDING_API UClass* Z_Construct_UClass_UMBMBuildingSettingsObj_NoRegister();
MODULARBUILDING_API UEnum* Z_Construct_UEnum_ModularBuilding_EMBModularSnapType();
UPackage* Z_Construct_UPackage__Script_ModularBuilding();
// End Cross Module References

// Begin Class UMBMBuildingSettingsObj
void UMBMBuildingSettingsObj::StaticRegisterNativesUMBMBuildingSettingsObj()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMBMBuildingSettingsObj);
UClass* Z_Construct_UClass_UMBMBuildingSettingsObj_NoRegister()
{
	return UMBMBuildingSettingsObj::StaticClass();
}
struct Z_Construct_UClass_UMBMBuildingSettingsObj_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Data/MBMBuildingSettingsObj.h" },
		{ "ModuleRelativePath", "Public/Data/MBMBuildingSettingsObj.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableModularSnapping_MetaData[] = {
		{ "Category", "Modular Snapping" },
		{ "DisplayName", "Enable Modular Snapping" },
		{ "ModuleRelativePath", "Public/Data/MBMBuildingSettingsObj.h" },
		{ "NoResetToDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SnappingType_MetaData[] = {
		{ "Category", "Modular Snapping" },
		{ "ModuleRelativePath", "Public/Data/MBMBuildingSettingsObj.h" },
		{ "NoResetToDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundCorrectionSensitivity_MetaData[] = {
		{ "Category", "Modular Snapping" },
		{ "ClampMin", "0" },
		{ "Delta", "50" },
		{ "EditCondition", "SnappingType == EMBModularSnapType::BoundCorrection" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Data/MBMBuildingSettingsObj.h" },
		{ "NoResetToDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSnapOffsetCond_MetaData[] = {
		{ "Category", "Offset" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Data/MBMBuildingSettingsObj.h" },
		{ "NoResetToDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SnapOffset_MetaData[] = {
		{ "Category", "Offset" },
		{ "ClampMax", "10000.000000" },
		{ "ClampMin", "0" },
		{ "Delta", "50" },
		{ "EditCondition", "bSnapOffsetCond" },
		{ "ModuleRelativePath", "Public/Data/MBMBuildingSettingsObj.h" },
		{ "NoResetToDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bZOffsetCond_MetaData[] = {
		{ "Category", "Offset" },
		{ "DisplayName", "Z Offset" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Data/MBMBuildingSettingsObj.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZOffset_MetaData[] = {
		{ "Category", "Offset" },
		{ "ClampMax", "10000.000000" },
		{ "ClampMin", "0" },
		{ "Delta", "50" },
		{ "EditCondition", "bZOffsetCond" },
		{ "ModuleRelativePath", "Public/Data/MBMBuildingSettingsObj.h" },
		{ "NoResetToDefault", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnableModularSnapping_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableModularSnapping;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SnappingType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SnappingType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BoundCorrectionSensitivity;
	static void NewProp_bSnapOffsetCond_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSnapOffsetCond;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SnapOffset;
	static void NewProp_bZOffsetCond_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bZOffsetCond;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ZOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMBMBuildingSettingsObj>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UMBMBuildingSettingsObj_Statics::NewProp_bEnableModularSnapping_SetBit(void* Obj)
{
	((UMBMBuildingSettingsObj*)Obj)->bEnableModularSnapping = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMBMBuildingSettingsObj_Statics::NewProp_bEnableModularSnapping = { "bEnableModularSnapping", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMBMBuildingSettingsObj), &Z_Construct_UClass_UMBMBuildingSettingsObj_Statics::NewProp_bEnableModularSnapping_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableModularSnapping_MetaData), NewProp_bEnableModularSnapping_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMBMBuildingSettingsObj_Statics::NewProp_SnappingType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMBMBuildingSettingsObj_Statics::NewProp_SnappingType = { "SnappingType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBMBuildingSettingsObj, SnappingType), Z_Construct_UEnum_ModularBuilding_EMBModularSnapType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SnappingType_MetaData), NewProp_SnappingType_MetaData) }; // 3074431339
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMBMBuildingSettingsObj_Statics::NewProp_BoundCorrectionSensitivity = { "BoundCorrectionSensitivity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBMBuildingSettingsObj, BoundCorrectionSensitivity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundCorrectionSensitivity_MetaData), NewProp_BoundCorrectionSensitivity_MetaData) };
void Z_Construct_UClass_UMBMBuildingSettingsObj_Statics::NewProp_bSnapOffsetCond_SetBit(void* Obj)
{
	((UMBMBuildingSettingsObj*)Obj)->bSnapOffsetCond = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMBMBuildingSettingsObj_Statics::NewProp_bSnapOffsetCond = { "bSnapOffsetCond", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMBMBuildingSettingsObj), &Z_Construct_UClass_UMBMBuildingSettingsObj_Statics::NewProp_bSnapOffsetCond_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSnapOffsetCond_MetaData), NewProp_bSnapOffsetCond_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMBMBuildingSettingsObj_Statics::NewProp_SnapOffset = { "SnapOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBMBuildingSettingsObj, SnapOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SnapOffset_MetaData), NewProp_SnapOffset_MetaData) };
void Z_Construct_UClass_UMBMBuildingSettingsObj_Statics::NewProp_bZOffsetCond_SetBit(void* Obj)
{
	((UMBMBuildingSettingsObj*)Obj)->bZOffsetCond = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMBMBuildingSettingsObj_Statics::NewProp_bZOffsetCond = { "bZOffsetCond", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMBMBuildingSettingsObj), &Z_Construct_UClass_UMBMBuildingSettingsObj_Statics::NewProp_bZOffsetCond_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bZOffsetCond_MetaData), NewProp_bZOffsetCond_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMBMBuildingSettingsObj_Statics::NewProp_ZOffset = { "ZOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBMBuildingSettingsObj, ZOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZOffset_MetaData), NewProp_ZOffset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMBMBuildingSettingsObj_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBMBuildingSettingsObj_Statics::NewProp_bEnableModularSnapping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBMBuildingSettingsObj_Statics::NewProp_SnappingType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBMBuildingSettingsObj_Statics::NewProp_SnappingType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBMBuildingSettingsObj_Statics::NewProp_BoundCorrectionSensitivity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBMBuildingSettingsObj_Statics::NewProp_bSnapOffsetCond,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBMBuildingSettingsObj_Statics::NewProp_SnapOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBMBuildingSettingsObj_Statics::NewProp_bZOffsetCond,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBMBuildingSettingsObj_Statics::NewProp_ZOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMBMBuildingSettingsObj_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMBMBuildingSettingsObj_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ModularBuilding,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMBMBuildingSettingsObj_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMBMBuildingSettingsObj_Statics::ClassParams = {
	&UMBMBuildingSettingsObj::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMBMBuildingSettingsObj_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMBMBuildingSettingsObj_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMBMBuildingSettingsObj_Statics::Class_MetaDataParams), Z_Construct_UClass_UMBMBuildingSettingsObj_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMBMBuildingSettingsObj()
{
	if (!Z_Registration_Info_UClass_UMBMBuildingSettingsObj.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMBMBuildingSettingsObj.OuterSingleton, Z_Construct_UClass_UMBMBuildingSettingsObj_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMBMBuildingSettingsObj.OuterSingleton;
}
template<> MODULARBUILDING_API UClass* StaticClass<UMBMBuildingSettingsObj>()
{
	return UMBMBuildingSettingsObj::StaticClass();
}
UMBMBuildingSettingsObj::UMBMBuildingSettingsObj(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMBMBuildingSettingsObj);
UMBMBuildingSettingsObj::~UMBMBuildingSettingsObj() {}
// End Class UMBMBuildingSettingsObj

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Data_MBMBuildingSettingsObj_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMBMBuildingSettingsObj, UMBMBuildingSettingsObj::StaticClass, TEXT("UMBMBuildingSettingsObj"), &Z_Registration_Info_UClass_UMBMBuildingSettingsObj, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMBMBuildingSettingsObj), 3252331687U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Data_MBMBuildingSettingsObj_h_1787768958(TEXT("/Script/ModularBuilding"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Data_MBMBuildingSettingsObj_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Data_MBMBuildingSettingsObj_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
