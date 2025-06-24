// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularBuilding/Public/Data/MBUserSettingsObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMBUserSettingsObject() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
MODULARBUILDING_API UClass* Z_Construct_UClass_UMBUserSettingsObject();
MODULARBUILDING_API UClass* Z_Construct_UClass_UMBUserSettingsObject_NoRegister();
UPackage* Z_Construct_UPackage__Script_ModularBuilding();
// End Cross Module References

// Begin Class UMBUserSettingsObject
void UMBUserSettingsObject::StaticRegisterNativesUMBUserSettingsObject()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMBUserSettingsObject);
UClass* Z_Construct_UClass_UMBUserSettingsObject_NoRegister()
{
	return UMBUserSettingsObject::StaticClass();
}
struct Z_Construct_UClass_UMBUserSettingsObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Data/MBUserSettingsObject.h" },
		{ "ModuleRelativePath", "Public/Data/MBUserSettingsObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectTracingDistance_MetaData[] = {
		{ "Category", "Placement" },
		{ "ClampMax", "100000.000000" },
		{ "ClampMin", "5000.000000" },
		{ "DisplayName", "Object Tracing Distance" },
		{ "ModuleRelativePath", "Public/Data/MBUserSettingsObject.h" },
		{ "NoResetToDefault", "" },
		{ "ShowOnlyInnerProperties", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FreePlacementDistance_MetaData[] = {
		{ "Category", "Placement" },
		{ "ClampMax", "50000.000000" },
		{ "ClampMin", "500.000000" },
		{ "DisplayName", "Free Placement Distance" },
		{ "ModuleRelativePath", "Public/Data/MBUserSettingsObject.h" },
		{ "NoResetToDefault", "" },
		{ "ShowOnlyInnerProperties", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UsePreviewShader_MetaData[] = {
		{ "Category", "Debugging" },
		{ "ModuleRelativePath", "Public/Data/MBUserSettingsObject.h" },
		{ "NoResetToDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaceableColor_MetaData[] = {
		{ "Category", "Debugging" },
		{ "DisplayName", "Mesh Placeable Color" },
		{ "ModuleRelativePath", "Public/Data/MBUserSettingsObject.h" },
		{ "NoResetToDefault", "" },
		{ "ShowOnlyInnerProperties", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NotPlaceableColor_MetaData[] = {
		{ "Category", "Modular Placement" },
		{ "DisplayName", "Mesh Not Placeable Color" },
		{ "ModuleRelativePath", "Public/Data/MBUserSettingsObject.h" },
		{ "NoResetToDefault", "" },
		{ "ShowOnlyInnerProperties", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReplaceableColor_MetaData[] = {
		{ "Category", "Debugging" },
		{ "DisplayName", "Mesh Replaceable Color" },
		{ "ModuleRelativePath", "Public/Data/MBUserSettingsObject.h" },
		{ "NoResetToDefault", "" },
		{ "ShowOnlyInnerProperties", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnableDirectionDebugger_MetaData[] = {
		{ "Category", "Debugging" },
		{ "DisplayName", "Enable Direction Debugger" },
		{ "ModuleRelativePath", "Public/Data/MBUserSettingsObject.h" },
		{ "NoResetToDefault", "" },
		{ "ShowOnlyInnerProperties", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirectionDebugColor_MetaData[] = {
		{ "Category", "Debugging" },
		{ "DisplayName", "Direction Debug Color" },
		{ "ModuleRelativePath", "Public/Data/MBUserSettingsObject.h" },
		{ "NoResetToDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugThickness_MetaData[] = {
		{ "Category", "Debugging" },
		{ "ClampMax", "50.000000" },
		{ "ClampMin", "0.100000" },
		{ "DisplayName", "Debug Thickness" },
		{ "ModuleRelativePath", "Public/Data/MBUserSettingsObject.h" },
		{ "NoResetToDefault", "" },
		{ "ShowOnlyInnerProperties", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetSelectionColor_MetaData[] = {
		{ "Category", "User Interface" },
		{ "DisplayName", "Asset Selection Color" },
		{ "ModuleRelativePath", "Public/Data/MBUserSettingsObject.h" },
		{ "NoResetToDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollectionSelectionColor_MetaData[] = {
		{ "Category", "User Interface" },
		{ "DisplayName", "Collection Selection Color" },
		{ "ModuleRelativePath", "Public/Data/MBUserSettingsObject.h" },
		{ "NoResetToDefault", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ObjectTracingDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FreePlacementDistance;
	static void NewProp_UsePreviewShader_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UsePreviewShader;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlaceableColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NotPlaceableColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReplaceableColor;
	static void NewProp_EnableDirectionDebugger_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableDirectionDebugger;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DirectionDebugColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DebugThickness;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AssetSelectionColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CollectionSelectionColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMBUserSettingsObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMBUserSettingsObject_Statics::NewProp_ObjectTracingDistance = { "ObjectTracingDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBUserSettingsObject, ObjectTracingDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectTracingDistance_MetaData), NewProp_ObjectTracingDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMBUserSettingsObject_Statics::NewProp_FreePlacementDistance = { "FreePlacementDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBUserSettingsObject, FreePlacementDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FreePlacementDistance_MetaData), NewProp_FreePlacementDistance_MetaData) };
void Z_Construct_UClass_UMBUserSettingsObject_Statics::NewProp_UsePreviewShader_SetBit(void* Obj)
{
	((UMBUserSettingsObject*)Obj)->UsePreviewShader = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMBUserSettingsObject_Statics::NewProp_UsePreviewShader = { "UsePreviewShader", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMBUserSettingsObject), &Z_Construct_UClass_UMBUserSettingsObject_Statics::NewProp_UsePreviewShader_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UsePreviewShader_MetaData), NewProp_UsePreviewShader_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMBUserSettingsObject_Statics::NewProp_PlaceableColor = { "PlaceableColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBUserSettingsObject, PlaceableColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaceableColor_MetaData), NewProp_PlaceableColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMBUserSettingsObject_Statics::NewProp_NotPlaceableColor = { "NotPlaceableColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBUserSettingsObject, NotPlaceableColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NotPlaceableColor_MetaData), NewProp_NotPlaceableColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMBUserSettingsObject_Statics::NewProp_ReplaceableColor = { "ReplaceableColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBUserSettingsObject, ReplaceableColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReplaceableColor_MetaData), NewProp_ReplaceableColor_MetaData) };
void Z_Construct_UClass_UMBUserSettingsObject_Statics::NewProp_EnableDirectionDebugger_SetBit(void* Obj)
{
	((UMBUserSettingsObject*)Obj)->EnableDirectionDebugger = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMBUserSettingsObject_Statics::NewProp_EnableDirectionDebugger = { "EnableDirectionDebugger", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMBUserSettingsObject), &Z_Construct_UClass_UMBUserSettingsObject_Statics::NewProp_EnableDirectionDebugger_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnableDirectionDebugger_MetaData), NewProp_EnableDirectionDebugger_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMBUserSettingsObject_Statics::NewProp_DirectionDebugColor = { "DirectionDebugColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBUserSettingsObject, DirectionDebugColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirectionDebugColor_MetaData), NewProp_DirectionDebugColor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMBUserSettingsObject_Statics::NewProp_DebugThickness = { "DebugThickness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBUserSettingsObject, DebugThickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugThickness_MetaData), NewProp_DebugThickness_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMBUserSettingsObject_Statics::NewProp_AssetSelectionColor = { "AssetSelectionColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBUserSettingsObject, AssetSelectionColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetSelectionColor_MetaData), NewProp_AssetSelectionColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMBUserSettingsObject_Statics::NewProp_CollectionSelectionColor = { "CollectionSelectionColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBUserSettingsObject, CollectionSelectionColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollectionSelectionColor_MetaData), NewProp_CollectionSelectionColor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMBUserSettingsObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBUserSettingsObject_Statics::NewProp_ObjectTracingDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBUserSettingsObject_Statics::NewProp_FreePlacementDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBUserSettingsObject_Statics::NewProp_UsePreviewShader,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBUserSettingsObject_Statics::NewProp_PlaceableColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBUserSettingsObject_Statics::NewProp_NotPlaceableColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBUserSettingsObject_Statics::NewProp_ReplaceableColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBUserSettingsObject_Statics::NewProp_EnableDirectionDebugger,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBUserSettingsObject_Statics::NewProp_DirectionDebugColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBUserSettingsObject_Statics::NewProp_DebugThickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBUserSettingsObject_Statics::NewProp_AssetSelectionColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBUserSettingsObject_Statics::NewProp_CollectionSelectionColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMBUserSettingsObject_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMBUserSettingsObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ModularBuilding,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMBUserSettingsObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMBUserSettingsObject_Statics::ClassParams = {
	&UMBUserSettingsObject::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMBUserSettingsObject_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMBUserSettingsObject_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMBUserSettingsObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UMBUserSettingsObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMBUserSettingsObject()
{
	if (!Z_Registration_Info_UClass_UMBUserSettingsObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMBUserSettingsObject.OuterSingleton, Z_Construct_UClass_UMBUserSettingsObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMBUserSettingsObject.OuterSingleton;
}
template<> MODULARBUILDING_API UClass* StaticClass<UMBUserSettingsObject>()
{
	return UMBUserSettingsObject::StaticClass();
}
UMBUserSettingsObject::UMBUserSettingsObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMBUserSettingsObject);
UMBUserSettingsObject::~UMBUserSettingsObject() {}
// End Class UMBUserSettingsObject

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Data_MBUserSettingsObject_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMBUserSettingsObject, UMBUserSettingsObject::StaticClass, TEXT("UMBUserSettingsObject"), &Z_Registration_Info_UClass_UMBUserSettingsObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMBUserSettingsObject), 3385086776U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Data_MBUserSettingsObject_h_3502157501(TEXT("/Script/ModularBuilding"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Data_MBUserSettingsObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Data_MBUserSettingsObject_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
