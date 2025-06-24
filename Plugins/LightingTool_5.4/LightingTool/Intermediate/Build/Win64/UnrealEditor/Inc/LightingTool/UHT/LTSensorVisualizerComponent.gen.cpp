// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LightingTool/Public/Debug/LTSensorVisualizerComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLTSensorVisualizerComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
LIGHTINGTOOL_API UClass* Z_Construct_UClass_ULTSensorVisualizerComponent();
LIGHTINGTOOL_API UClass* Z_Construct_UClass_ULTSensorVisualizerComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_LightingTool();
// End Cross Module References

// Begin Class ULTSensorVisualizerComponent
void ULTSensorVisualizerComponent::StaticRegisterNativesULTSensorVisualizerComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULTSensorVisualizerComponent);
UClass* Z_Construct_UClass_ULTSensorVisualizerComponent_NoRegister()
{
	return ULTSensorVisualizerComponent::StaticClass();
}
struct Z_Construct_UClass_ULTSensorVisualizerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Debug/LTSensorVisualizerComponent.h" },
		{ "ModuleRelativePath", "Public/Debug/LTSensorVisualizerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugBounds_MetaData[] = {
		{ "Category", "Lighting Tool|Sensor" },
		{ "ModuleRelativePath", "Public/Debug/LTSensorVisualizerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[] = {
		{ "Category", "Lighting Tool|Sensor" },
		{ "ModuleRelativePath", "Public/Debug/LTSensorVisualizerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngleWidth_MetaData[] = {
		{ "Category", "Lighting Tool|Sensor" },
		{ "ModuleRelativePath", "Public/Debug/LTSensorVisualizerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumSides_MetaData[] = {
		{ "Category", "Lighting Tool|Sensor" },
		{ "ModuleRelativePath", "Public/Debug/LTSensorVisualizerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FovColor_MetaData[] = {
		{ "Category", "Lighting Tool|Sensor" },
		{ "DisplayName", "FOV Color" },
		{ "ModuleRelativePath", "Public/Debug/LTSensorVisualizerComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_DebugBounds_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DebugBounds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Height;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AngleWidth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumSides;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FovColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULTSensorVisualizerComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_ULTSensorVisualizerComponent_Statics::NewProp_DebugBounds_SetBit(void* Obj)
{
	((ULTSensorVisualizerComponent*)Obj)->DebugBounds = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULTSensorVisualizerComponent_Statics::NewProp_DebugBounds = { "DebugBounds", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULTSensorVisualizerComponent), &Z_Construct_UClass_ULTSensorVisualizerComponent_Statics::NewProp_DebugBounds_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugBounds_MetaData), NewProp_DebugBounds_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULTSensorVisualizerComponent_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULTSensorVisualizerComponent, Height), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Height_MetaData), NewProp_Height_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULTSensorVisualizerComponent_Statics::NewProp_AngleWidth = { "AngleWidth", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULTSensorVisualizerComponent, AngleWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngleWidth_MetaData), NewProp_AngleWidth_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULTSensorVisualizerComponent_Statics::NewProp_NumSides = { "NumSides", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULTSensorVisualizerComponent, NumSides), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumSides_MetaData), NewProp_NumSides_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULTSensorVisualizerComponent_Statics::NewProp_FovColor = { "FovColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULTSensorVisualizerComponent, FovColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FovColor_MetaData), NewProp_FovColor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULTSensorVisualizerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULTSensorVisualizerComponent_Statics::NewProp_DebugBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULTSensorVisualizerComponent_Statics::NewProp_Height,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULTSensorVisualizerComponent_Statics::NewProp_AngleWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULTSensorVisualizerComponent_Statics::NewProp_NumSides,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULTSensorVisualizerComponent_Statics::NewProp_FovColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULTSensorVisualizerComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULTSensorVisualizerComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_LightingTool,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULTSensorVisualizerComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULTSensorVisualizerComponent_Statics::ClassParams = {
	&ULTSensorVisualizerComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULTSensorVisualizerComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULTSensorVisualizerComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULTSensorVisualizerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_ULTSensorVisualizerComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULTSensorVisualizerComponent()
{
	if (!Z_Registration_Info_UClass_ULTSensorVisualizerComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULTSensorVisualizerComponent.OuterSingleton, Z_Construct_UClass_ULTSensorVisualizerComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULTSensorVisualizerComponent.OuterSingleton;
}
template<> LIGHTINGTOOL_API UClass* StaticClass<ULTSensorVisualizerComponent>()
{
	return ULTSensorVisualizerComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULTSensorVisualizerComponent);
ULTSensorVisualizerComponent::~ULTSensorVisualizerComponent() {}
// End Class ULTSensorVisualizerComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_Debug_LTSensorVisualizerComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULTSensorVisualizerComponent, ULTSensorVisualizerComponent::StaticClass, TEXT("ULTSensorVisualizerComponent"), &Z_Registration_Info_UClass_ULTSensorVisualizerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULTSensorVisualizerComponent), 47166748U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_Debug_LTSensorVisualizerComponent_h_745266029(TEXT("/Script/LightingTool"),
	Z_CompiledInDeferFile_FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_Debug_LTSensorVisualizerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_Debug_LTSensorVisualizerComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
