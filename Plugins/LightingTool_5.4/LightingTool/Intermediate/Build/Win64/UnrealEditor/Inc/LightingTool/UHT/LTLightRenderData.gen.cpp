// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LightingTool/Public/Data/LTLightRenderData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLTLightRenderData() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDynamicGlobalIlluminationMethod();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ELumenSoftwareTracingMode();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EReflectionMethod();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EShadowMapMethod();
LIGHTINGTOOL_API UClass* Z_Construct_UClass_ULTLightRenderData();
LIGHTINGTOOL_API UClass* Z_Construct_UClass_ULTLightRenderData_NoRegister();
LIGHTINGTOOL_API UEnum* Z_Construct_UEnum_LightingTool_ELightRenderPreset();
LIGHTINGTOOL_API UScriptStruct* Z_Construct_UScriptStruct_FLightRenderData();
UPackage* Z_Construct_UPackage__Script_LightingTool();
WINDOWSTARGETPLATFORM_API UEnum* Z_Construct_UEnum_WindowsTargetPlatform_EDefaultGraphicsRHI();
// End Cross Module References

// Begin Enum ELightRenderPreset
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELightRenderPreset;
static UEnum* ELightRenderPreset_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELightRenderPreset.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELightRenderPreset.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LightingTool_ELightRenderPreset, (UObject*)Z_Construct_UPackage__Script_LightingTool(), TEXT("ELightRenderPreset"));
	}
	return Z_Registration_Info_UEnum_ELightRenderPreset.OuterSingleton;
}
template<> LIGHTINGTOOL_API UEnum* StaticEnum<ELightRenderPreset::Type>()
{
	return ELightRenderPreset_StaticEnum();
}
struct Z_Construct_UEnum_LightingTool_ELightRenderPreset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Lighting Data" },
		{ "Custom.DisplayName", "Custom" },
		{ "Custom.Name", "ELightRenderPreset::Custom" },
		{ "Lumen.DisplayName", "Lumen" },
		{ "Lumen.Name", "ELightRenderPreset::Lumen" },
		{ "ModuleRelativePath", "Public/Data/LTLightRenderData.h" },
		{ "Static.DisplayName", "Static" },
		{ "Static.Name", "ELightRenderPreset::Static" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELightRenderPreset::Custom", (int64)ELightRenderPreset::Custom },
		{ "ELightRenderPreset::Lumen", (int64)ELightRenderPreset::Lumen },
		{ "ELightRenderPreset::Static", (int64)ELightRenderPreset::Static },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LightingTool_ELightRenderPreset_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_LightingTool,
	nullptr,
	"ELightRenderPreset",
	"ELightRenderPreset::Type",
	Z_Construct_UEnum_LightingTool_ELightRenderPreset_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_LightingTool_ELightRenderPreset_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_LightingTool_ELightRenderPreset_Statics::Enum_MetaDataParams), Z_Construct_UEnum_LightingTool_ELightRenderPreset_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_LightingTool_ELightRenderPreset()
{
	if (!Z_Registration_Info_UEnum_ELightRenderPreset.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELightRenderPreset.InnerSingleton, Z_Construct_UEnum_LightingTool_ELightRenderPreset_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELightRenderPreset.InnerSingleton;
}
// End Enum ELightRenderPreset

// Begin ScriptStruct FLightRenderData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LightRenderData;
class UScriptStruct* FLightRenderData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LightRenderData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LightRenderData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLightRenderData, (UObject*)Z_Construct_UPackage__Script_LightingTool(), TEXT("LightRenderData"));
	}
	return Z_Registration_Info_UScriptStruct_LightRenderData.OuterSingleton;
}
template<> LIGHTINGTOOL_API UScriptStruct* StaticStruct<FLightRenderData>()
{
	return FLightRenderData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLightRenderData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Data/LTLightRenderData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultGraphicsRHI_MetaData[] = {
		{ "Category", "Lighting Data" },
		{ "ModuleRelativePath", "Public/Data/LTLightRenderData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicGlobalIlluminationMethod_MetaData[] = {
		{ "Category", "Lighting Data" },
		{ "ModuleRelativePath", "Public/Data/LTLightRenderData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReflectionMethod_MetaData[] = {
		{ "Category", "Lighting Data" },
		{ "ModuleRelativePath", "Public/Data/LTLightRenderData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnableRayTracing_MetaData[] = {
		{ "Category", "Lighting Data" },
		{ "ModuleRelativePath", "Public/Data/LTLightRenderData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathTracing_MetaData[] = {
		{ "Category", "Lighting Data" },
		{ "ModuleRelativePath", "Public/Data/LTLightRenderData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SupportSkinCacheShaders_MetaData[] = {
		{ "Category", "Lighting Data" },
		{ "ModuleRelativePath", "Public/Data/LTLightRenderData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseHardwareRayTracingWhenAvailable_MetaData[] = {
		{ "Category", "Lighting Data" },
		{ "ModuleRelativePath", "Public/Data/LTLightRenderData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoftwareRayTracingMode_MetaData[] = {
		{ "Category", "Lighting Data" },
		{ "ModuleRelativePath", "Public/Data/LTLightRenderData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShadowMapMethod_MetaData[] = {
		{ "Category", "Lighting Data" },
		{ "ModuleRelativePath", "Public/Data/LTLightRenderData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GenerateMeshDistanceField_MetaData[] = {
		{ "Category", "Lighting Data" },
		{ "ModuleRelativePath", "Public/Data/LTLightRenderData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultGraphicsRHI_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultGraphicsRHI;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DynamicGlobalIlluminationMethod;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReflectionMethod;
	static void NewProp_EnableRayTracing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableRayTracing;
	static void NewProp_PathTracing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_PathTracing;
	static void NewProp_SupportSkinCacheShaders_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SupportSkinCacheShaders;
	static void NewProp_UseHardwareRayTracingWhenAvailable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseHardwareRayTracingWhenAvailable;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SoftwareRayTracingMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ShadowMapMethod;
	static void NewProp_GenerateMeshDistanceField_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_GenerateMeshDistanceField;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLightRenderData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLightRenderData_Statics::NewProp_DefaultGraphicsRHI_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLightRenderData_Statics::NewProp_DefaultGraphicsRHI = { "DefaultGraphicsRHI", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLightRenderData, DefaultGraphicsRHI), Z_Construct_UEnum_WindowsTargetPlatform_EDefaultGraphicsRHI, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultGraphicsRHI_MetaData), NewProp_DefaultGraphicsRHI_MetaData) }; // 420144750
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLightRenderData_Statics::NewProp_DynamicGlobalIlluminationMethod = { "DynamicGlobalIlluminationMethod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLightRenderData, DynamicGlobalIlluminationMethod), Z_Construct_UEnum_Engine_EDynamicGlobalIlluminationMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicGlobalIlluminationMethod_MetaData), NewProp_DynamicGlobalIlluminationMethod_MetaData) }; // 2546568098
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLightRenderData_Statics::NewProp_ReflectionMethod = { "ReflectionMethod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLightRenderData, ReflectionMethod), Z_Construct_UEnum_Engine_EReflectionMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReflectionMethod_MetaData), NewProp_ReflectionMethod_MetaData) }; // 569687725
void Z_Construct_UScriptStruct_FLightRenderData_Statics::NewProp_EnableRayTracing_SetBit(void* Obj)
{
	((FLightRenderData*)Obj)->EnableRayTracing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLightRenderData_Statics::NewProp_EnableRayTracing = { "EnableRayTracing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLightRenderData), &Z_Construct_UScriptStruct_FLightRenderData_Statics::NewProp_EnableRayTracing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnableRayTracing_MetaData), NewProp_EnableRayTracing_MetaData) };
void Z_Construct_UScriptStruct_FLightRenderData_Statics::NewProp_PathTracing_SetBit(void* Obj)
{
	((FLightRenderData*)Obj)->PathTracing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLightRenderData_Statics::NewProp_PathTracing = { "PathTracing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLightRenderData), &Z_Construct_UScriptStruct_FLightRenderData_Statics::NewProp_PathTracing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathTracing_MetaData), NewProp_PathTracing_MetaData) };
void Z_Construct_UScriptStruct_FLightRenderData_Statics::NewProp_SupportSkinCacheShaders_SetBit(void* Obj)
{
	((FLightRenderData*)Obj)->SupportSkinCacheShaders = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLightRenderData_Statics::NewProp_SupportSkinCacheShaders = { "SupportSkinCacheShaders", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLightRenderData), &Z_Construct_UScriptStruct_FLightRenderData_Statics::NewProp_SupportSkinCacheShaders_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SupportSkinCacheShaders_MetaData), NewProp_SupportSkinCacheShaders_MetaData) };
void Z_Construct_UScriptStruct_FLightRenderData_Statics::NewProp_UseHardwareRayTracingWhenAvailable_SetBit(void* Obj)
{
	((FLightRenderData*)Obj)->UseHardwareRayTracingWhenAvailable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLightRenderData_Statics::NewProp_UseHardwareRayTracingWhenAvailable = { "UseHardwareRayTracingWhenAvailable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLightRenderData), &Z_Construct_UScriptStruct_FLightRenderData_Statics::NewProp_UseHardwareRayTracingWhenAvailable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseHardwareRayTracingWhenAvailable_MetaData), NewProp_UseHardwareRayTracingWhenAvailable_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLightRenderData_Statics::NewProp_SoftwareRayTracingMode = { "SoftwareRayTracingMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLightRenderData, SoftwareRayTracingMode), Z_Construct_UEnum_Engine_ELumenSoftwareTracingMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoftwareRayTracingMode_MetaData), NewProp_SoftwareRayTracingMode_MetaData) }; // 2919508242
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLightRenderData_Statics::NewProp_ShadowMapMethod = { "ShadowMapMethod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLightRenderData, ShadowMapMethod), Z_Construct_UEnum_Engine_EShadowMapMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShadowMapMethod_MetaData), NewProp_ShadowMapMethod_MetaData) }; // 422023146
void Z_Construct_UScriptStruct_FLightRenderData_Statics::NewProp_GenerateMeshDistanceField_SetBit(void* Obj)
{
	((FLightRenderData*)Obj)->GenerateMeshDistanceField = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLightRenderData_Statics::NewProp_GenerateMeshDistanceField = { "GenerateMeshDistanceField", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLightRenderData), &Z_Construct_UScriptStruct_FLightRenderData_Statics::NewProp_GenerateMeshDistanceField_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GenerateMeshDistanceField_MetaData), NewProp_GenerateMeshDistanceField_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLightRenderData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightRenderData_Statics::NewProp_DefaultGraphicsRHI_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightRenderData_Statics::NewProp_DefaultGraphicsRHI,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightRenderData_Statics::NewProp_DynamicGlobalIlluminationMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightRenderData_Statics::NewProp_ReflectionMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightRenderData_Statics::NewProp_EnableRayTracing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightRenderData_Statics::NewProp_PathTracing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightRenderData_Statics::NewProp_SupportSkinCacheShaders,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightRenderData_Statics::NewProp_UseHardwareRayTracingWhenAvailable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightRenderData_Statics::NewProp_SoftwareRayTracingMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightRenderData_Statics::NewProp_ShadowMapMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightRenderData_Statics::NewProp_GenerateMeshDistanceField,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightRenderData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLightRenderData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LightingTool,
	nullptr,
	&NewStructOps,
	"LightRenderData",
	Z_Construct_UScriptStruct_FLightRenderData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightRenderData_Statics::PropPointers),
	sizeof(FLightRenderData),
	alignof(FLightRenderData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightRenderData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLightRenderData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLightRenderData()
{
	if (!Z_Registration_Info_UScriptStruct_LightRenderData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LightRenderData.InnerSingleton, Z_Construct_UScriptStruct_FLightRenderData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LightRenderData.InnerSingleton;
}
// End ScriptStruct FLightRenderData

// Begin Class ULTLightRenderData Function LoadPresetData
struct Z_Construct_UFunction_ULTLightRenderData_LoadPresetData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lighting Tool|Light Rendering" },
		{ "ModuleRelativePath", "Public/Data/LTLightRenderData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULTLightRenderData_LoadPresetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULTLightRenderData, nullptr, "LoadPresetData", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTLightRenderData_LoadPresetData_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULTLightRenderData_LoadPresetData_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ULTLightRenderData_LoadPresetData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULTLightRenderData_LoadPresetData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULTLightRenderData::execLoadPresetData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoadPresetData();
	P_NATIVE_END;
}
// End Class ULTLightRenderData Function LoadPresetData

// Begin Class ULTLightRenderData Function SavePresetData
struct Z_Construct_UFunction_ULTLightRenderData_SavePresetData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lighting Tool|Light Rendering" },
		{ "ModuleRelativePath", "Public/Data/LTLightRenderData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULTLightRenderData_SavePresetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULTLightRenderData, nullptr, "SavePresetData", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTLightRenderData_SavePresetData_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULTLightRenderData_SavePresetData_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ULTLightRenderData_SavePresetData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULTLightRenderData_SavePresetData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULTLightRenderData::execSavePresetData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SavePresetData();
	P_NATIVE_END;
}
// End Class ULTLightRenderData Function SavePresetData

// Begin Class ULTLightRenderData
void ULTLightRenderData::StaticRegisterNativesULTLightRenderData()
{
	UClass* Class = ULTLightRenderData::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "LoadPresetData", &ULTLightRenderData::execLoadPresetData },
		{ "SavePresetData", &ULTLightRenderData::execSavePresetData },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULTLightRenderData);
UClass* Z_Construct_UClass_ULTLightRenderData_NoRegister()
{
	return ULTLightRenderData::StaticClass();
}
struct Z_Construct_UClass_ULTLightRenderData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Data/LTLightRenderData.h" },
		{ "ModuleRelativePath", "Public/Data/LTLightRenderData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Preset_MetaData[] = {
		{ "Category", "Lighting Tool|Light Rendering" },
		{ "ModuleRelativePath", "Public/Data/LTLightRenderData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LumenPreset_MetaData[] = {
		{ "Category", "Lighting Tool|Light Rendering" },
		{ "ModuleRelativePath", "Public/Data/LTLightRenderData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticPreset_MetaData[] = {
		{ "Category", "Lighting Tool|Light Rendering" },
		{ "ModuleRelativePath", "Public/Data/LTLightRenderData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathTracingProgressViewState_MetaData[] = {
		{ "Category", "Lighting Tool|Light Rendering" },
		{ "ModuleRelativePath", "Public/Data/LTLightRenderData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Preset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LumenPreset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StaticPreset;
	static void NewProp_PathTracingProgressViewState_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_PathTracingProgressViewState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULTLightRenderData_LoadPresetData, "LoadPresetData" }, // 1543179277
		{ &Z_Construct_UFunction_ULTLightRenderData_SavePresetData, "SavePresetData" }, // 3704646154
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULTLightRenderData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULTLightRenderData_Statics::NewProp_Preset = { "Preset", nullptr, (EPropertyFlags)0x0010000000004004, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULTLightRenderData, Preset), Z_Construct_UEnum_LightingTool_ELightRenderPreset, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Preset_MetaData), NewProp_Preset_MetaData) }; // 2601064996
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULTLightRenderData_Statics::NewProp_LumenPreset = { "LumenPreset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULTLightRenderData, LumenPreset), Z_Construct_UScriptStruct_FLightRenderData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LumenPreset_MetaData), NewProp_LumenPreset_MetaData) }; // 2454118793
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULTLightRenderData_Statics::NewProp_StaticPreset = { "StaticPreset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULTLightRenderData, StaticPreset), Z_Construct_UScriptStruct_FLightRenderData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticPreset_MetaData), NewProp_StaticPreset_MetaData) }; // 2454118793
void Z_Construct_UClass_ULTLightRenderData_Statics::NewProp_PathTracingProgressViewState_SetBit(void* Obj)
{
	((ULTLightRenderData*)Obj)->PathTracingProgressViewState = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULTLightRenderData_Statics::NewProp_PathTracingProgressViewState = { "PathTracingProgressViewState", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULTLightRenderData), &Z_Construct_UClass_ULTLightRenderData_Statics::NewProp_PathTracingProgressViewState_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathTracingProgressViewState_MetaData), NewProp_PathTracingProgressViewState_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULTLightRenderData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULTLightRenderData_Statics::NewProp_Preset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULTLightRenderData_Statics::NewProp_LumenPreset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULTLightRenderData_Statics::NewProp_StaticPreset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULTLightRenderData_Statics::NewProp_PathTracingProgressViewState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULTLightRenderData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULTLightRenderData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_LightingTool,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULTLightRenderData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULTLightRenderData_Statics::ClassParams = {
	&ULTLightRenderData::StaticClass,
	"LTLightRenderingSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULTLightRenderData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULTLightRenderData_Statics::PropPointers),
	0,
	0x001000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULTLightRenderData_Statics::Class_MetaDataParams), Z_Construct_UClass_ULTLightRenderData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULTLightRenderData()
{
	if (!Z_Registration_Info_UClass_ULTLightRenderData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULTLightRenderData.OuterSingleton, Z_Construct_UClass_ULTLightRenderData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULTLightRenderData.OuterSingleton;
}
template<> LIGHTINGTOOL_API UClass* StaticClass<ULTLightRenderData>()
{
	return ULTLightRenderData::StaticClass();
}
ULTLightRenderData::ULTLightRenderData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULTLightRenderData);
ULTLightRenderData::~ULTLightRenderData() {}
// End Class ULTLightRenderData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_Data_LTLightRenderData_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ELightRenderPreset_StaticEnum, TEXT("ELightRenderPreset"), &Z_Registration_Info_UEnum_ELightRenderPreset, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2601064996U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLightRenderData::StaticStruct, Z_Construct_UScriptStruct_FLightRenderData_Statics::NewStructOps, TEXT("LightRenderData"), &Z_Registration_Info_UScriptStruct_LightRenderData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLightRenderData), 2454118793U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULTLightRenderData, ULTLightRenderData::StaticClass, TEXT("ULTLightRenderData"), &Z_Registration_Info_UClass_ULTLightRenderData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULTLightRenderData), 2625276367U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_Data_LTLightRenderData_h_1089564607(TEXT("/Script/LightingTool"),
	Z_CompiledInDeferFile_FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_Data_LTLightRenderData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_Data_LTLightRenderData_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_Data_LTLightRenderData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_Data_LTLightRenderData_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_Data_LTLightRenderData_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_Data_LTLightRenderData_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
