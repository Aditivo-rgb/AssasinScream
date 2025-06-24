// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObjectDistribution/Public/Data/ODSettingsObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeODSettingsObject() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
OBJECTDISTRIBUTION_API UClass* Z_Construct_UClass_UODSettingsObject();
OBJECTDISTRIBUTION_API UClass* Z_Construct_UClass_UODSettingsObject_NoRegister();
UPackage* Z_Construct_UPackage__Script_ObjectDistribution();
// End Cross Module References

// Begin Class UODSettingsObject
void UODSettingsObject::StaticRegisterNativesUODSettingsObject()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UODSettingsObject);
UClass* Z_Construct_UClass_UODSettingsObject_NoRegister()
{
	return UODSettingsObject::StaticClass();
}
struct Z_Construct_UClass_UODSettingsObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Data/ODSettingsObject.h" },
		{ "ModuleRelativePath", "Public/Data/ODSettingsObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSimulatePhysics_MetaData[] = {
		{ "Category", "Simulation" },
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Public/Data/ODSettingsObject.h" },
		{ "NoResetToDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisableSimAfterFinish_MetaData[] = {
		{ "Category", "Simulation" },
		{ "DisplayName", "Disable Sim After Finishing" },
		{ "DisplayPriority", "1" },
		{ "EditCondition", "bSimulatePhysics" },
		{ "ModuleRelativePath", "Public/Data/ODSettingsObject.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Disable simulate physics option on the actors after finishing the distribution." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawSpawnBounds_MetaData[] = {
		{ "Category", "Visualization" },
		{ "DisplayName", "Draw Spawn Bounds" },
		{ "ModuleRelativePath", "Public/Data/ODSettingsObject.h" },
		{ "NoResetToDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundsColor_MetaData[] = {
		{ "Category", "Visualization" },
		{ "Comment", "/*EditConditionHides,*/" },
		{ "EditCondition", "bDrawSpawnBounds" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Public/Data/ODSettingsObject.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "EditConditionHides," },
	};
#endif // WITH_METADATA
	static void NewProp_bSimulatePhysics_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSimulatePhysics;
	static void NewProp_bDisableSimAfterFinish_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableSimAfterFinish;
	static void NewProp_bDrawSpawnBounds_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawSpawnBounds;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoundsColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UODSettingsObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UODSettingsObject_Statics::NewProp_bSimulatePhysics_SetBit(void* Obj)
{
	((UODSettingsObject*)Obj)->bSimulatePhysics = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UODSettingsObject_Statics::NewProp_bSimulatePhysics = { "bSimulatePhysics", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UODSettingsObject), &Z_Construct_UClass_UODSettingsObject_Statics::NewProp_bSimulatePhysics_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSimulatePhysics_MetaData), NewProp_bSimulatePhysics_MetaData) };
void Z_Construct_UClass_UODSettingsObject_Statics::NewProp_bDisableSimAfterFinish_SetBit(void* Obj)
{
	((UODSettingsObject*)Obj)->bDisableSimAfterFinish = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UODSettingsObject_Statics::NewProp_bDisableSimAfterFinish = { "bDisableSimAfterFinish", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UODSettingsObject), &Z_Construct_UClass_UODSettingsObject_Statics::NewProp_bDisableSimAfterFinish_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisableSimAfterFinish_MetaData), NewProp_bDisableSimAfterFinish_MetaData) };
void Z_Construct_UClass_UODSettingsObject_Statics::NewProp_bDrawSpawnBounds_SetBit(void* Obj)
{
	((UODSettingsObject*)Obj)->bDrawSpawnBounds = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UODSettingsObject_Statics::NewProp_bDrawSpawnBounds = { "bDrawSpawnBounds", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UODSettingsObject), &Z_Construct_UClass_UODSettingsObject_Statics::NewProp_bDrawSpawnBounds_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawSpawnBounds_MetaData), NewProp_bDrawSpawnBounds_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UODSettingsObject_Statics::NewProp_BoundsColor = { "BoundsColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UODSettingsObject, BoundsColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundsColor_MetaData), NewProp_BoundsColor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UODSettingsObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODSettingsObject_Statics::NewProp_bSimulatePhysics,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODSettingsObject_Statics::NewProp_bDisableSimAfterFinish,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODSettingsObject_Statics::NewProp_bDrawSpawnBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODSettingsObject_Statics::NewProp_BoundsColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UODSettingsObject_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UODSettingsObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ObjectDistribution,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UODSettingsObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UODSettingsObject_Statics::ClassParams = {
	&UODSettingsObject::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UODSettingsObject_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UODSettingsObject_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UODSettingsObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UODSettingsObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UODSettingsObject()
{
	if (!Z_Registration_Info_UClass_UODSettingsObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UODSettingsObject.OuterSingleton, Z_Construct_UClass_UODSettingsObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UODSettingsObject.OuterSingleton;
}
template<> OBJECTDISTRIBUTION_API UClass* StaticClass<UODSettingsObject>()
{
	return UODSettingsObject::StaticClass();
}
UODSettingsObject::UODSettingsObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UODSettingsObject);
UODSettingsObject::~UODSettingsObject() {}
// End Class UODSettingsObject

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ObjectDistribution_Public_Data_ODSettingsObject_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UODSettingsObject, UODSettingsObject::StaticClass, TEXT("UODSettingsObject"), &Z_Registration_Info_UClass_UODSettingsObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UODSettingsObject), 1023405511U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ObjectDistribution_Public_Data_ODSettingsObject_h_707496001(TEXT("/Script/ObjectDistribution"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ObjectDistribution_Public_Data_ODSettingsObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ObjectDistribution_Public_Data_ODSettingsObject_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
