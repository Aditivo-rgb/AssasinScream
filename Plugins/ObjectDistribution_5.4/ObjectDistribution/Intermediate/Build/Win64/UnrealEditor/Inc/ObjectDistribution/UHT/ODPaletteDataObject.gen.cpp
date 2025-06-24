// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObjectDistribution/Public/Data/ODPaletteDataObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeODPaletteDataObject() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
OBJECTDISTRIBUTION_API UClass* Z_Construct_UClass_UODPaletteDataObject();
OBJECTDISTRIBUTION_API UClass* Z_Construct_UClass_UODPaletteDataObject_NoRegister();
OBJECTDISTRIBUTION_API UEnum* Z_Construct_UEnum_ObjectDistribution_EObjectOrientation();
UPackage* Z_Construct_UPackage__Script_ObjectDistribution();
// End Cross Module References

// Begin Class UODPaletteDataObject Function OnPresetLoaded
struct Z_Construct_UFunction_UODPaletteDataObject_OnPresetLoaded_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Data/ODPaletteDataObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UODPaletteDataObject_OnPresetLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UODPaletteDataObject, nullptr, "OnPresetLoaded", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UODPaletteDataObject_OnPresetLoaded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UODPaletteDataObject_OnPresetLoaded_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UODPaletteDataObject_OnPresetLoaded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UODPaletteDataObject_OnPresetLoaded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UODPaletteDataObject::execOnPresetLoaded)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPresetLoaded();
	P_NATIVE_END;
}
// End Class UODPaletteDataObject Function OnPresetLoaded

// Begin Class UODPaletteDataObject
void UODPaletteDataObject::StaticRegisterNativesUODPaletteDataObject()
{
	UClass* Class = UODPaletteDataObject::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnPresetLoaded", &UODPaletteDataObject::execOnPresetLoaded },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UODPaletteDataObject);
UClass* Z_Construct_UClass_UODPaletteDataObject_NoRegister()
{
	return UODPaletteDataObject::StaticClass();
}
struct Z_Construct_UClass_UODPaletteDataObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Data/ODPaletteDataObject.h" },
		{ "ModuleRelativePath", "Public/Data/ODPaletteDataObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[] = {
		{ "Category", "Object Data" },
		{ "ModuleRelativePath", "Public/Data/ODPaletteDataObject.h" },
		{ "NoResetToDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSelectRandomMaterial_MetaData[] = {
		{ "Category", "Object Data" },
		{ "DisplayName", "Override Material" },
		{ "ModuleRelativePath", "Public/Data/ODPaletteDataObject.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Assign new material for first material slot" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondRandomMaterial_MetaData[] = {
		{ "Category", "Object Data" },
		{ "DisplayName", "New Material" },
		{ "EditCondition", "bSelectRandomMaterial" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Data/ODPaletteDataObject.h" },
		{ "NoResetToDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSelectMaterialRandomly_MetaData[] = {
		{ "Category", "Object Data" },
		{ "DisplayName", "Select Material Randomly" },
		{ "EditCondition", "bSelectRandomMaterial" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Data/ODPaletteDataObject.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "It randomly changes the assigned material or doesn't change it at all." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnCount_MetaData[] = {
		{ "Category", "Object Data" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Data/ODPaletteDataObject.h" },
		{ "NoResetToDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleRange_MetaData[] = {
		{ "Category", "Object Data" },
		{ "ModuleRelativePath", "Public/Data/ODPaletteDataObject.h" },
		{ "NoResetToDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinearDamping_MetaData[] = {
		{ "Category", "Object Data" },
		{ "ModuleRelativePath", "Public/Data/ODPaletteDataObject.h" },
		{ "NoResetToDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngularDamping_MetaData[] = {
		{ "Category", "Object Data" },
		{ "ModuleRelativePath", "Public/Data/ODPaletteDataObject.h" },
		{ "NoResetToDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mass_MetaData[] = {
		{ "Category", "Object Data" },
		{ "ModuleRelativePath", "Public/Data/ODPaletteDataObject.h" },
		{ "NoResetToDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrientationType_MetaData[] = {
		{ "Category", "Object Data" },
		{ "ModuleRelativePath", "Public/Data/ODPaletteDataObject.h" },
		{ "NoResetToDefault", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_StaticMesh;
	static void NewProp_bSelectRandomMaterial_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelectRandomMaterial;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SecondRandomMaterial;
	static void NewProp_bSelectMaterialRandomly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelectMaterialRandomly;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SpawnCount;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScaleRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LinearDamping;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AngularDamping;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Mass;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OrientationType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OrientationType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UODPaletteDataObject_OnPresetLoaded, "OnPresetLoaded" }, // 1625496030
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UODPaletteDataObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UODPaletteDataObject_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0014000002000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UODPaletteDataObject, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMesh_MetaData), NewProp_StaticMesh_MetaData) };
void Z_Construct_UClass_UODPaletteDataObject_Statics::NewProp_bSelectRandomMaterial_SetBit(void* Obj)
{
	((UODPaletteDataObject*)Obj)->bSelectRandomMaterial = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UODPaletteDataObject_Statics::NewProp_bSelectRandomMaterial = { "bSelectRandomMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UODPaletteDataObject), &Z_Construct_UClass_UODPaletteDataObject_Statics::NewProp_bSelectRandomMaterial_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSelectRandomMaterial_MetaData), NewProp_bSelectRandomMaterial_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UODPaletteDataObject_Statics::NewProp_SecondRandomMaterial = { "SecondRandomMaterial", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UODPaletteDataObject, SecondRandomMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondRandomMaterial_MetaData), NewProp_SecondRandomMaterial_MetaData) };
void Z_Construct_UClass_UODPaletteDataObject_Statics::NewProp_bSelectMaterialRandomly_SetBit(void* Obj)
{
	((UODPaletteDataObject*)Obj)->bSelectMaterialRandomly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UODPaletteDataObject_Statics::NewProp_bSelectMaterialRandomly = { "bSelectMaterialRandomly", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UODPaletteDataObject), &Z_Construct_UClass_UODPaletteDataObject_Statics::NewProp_bSelectMaterialRandomly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSelectMaterialRandomly_MetaData), NewProp_bSelectMaterialRandomly_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UODPaletteDataObject_Statics::NewProp_SpawnCount = { "SpawnCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UODPaletteDataObject, SpawnCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnCount_MetaData), NewProp_SpawnCount_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UODPaletteDataObject_Statics::NewProp_ScaleRange = { "ScaleRange", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UODPaletteDataObject, ScaleRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleRange_MetaData), NewProp_ScaleRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UODPaletteDataObject_Statics::NewProp_LinearDamping = { "LinearDamping", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UODPaletteDataObject, LinearDamping), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinearDamping_MetaData), NewProp_LinearDamping_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UODPaletteDataObject_Statics::NewProp_AngularDamping = { "AngularDamping", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UODPaletteDataObject, AngularDamping), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngularDamping_MetaData), NewProp_AngularDamping_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UODPaletteDataObject_Statics::NewProp_Mass = { "Mass", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UODPaletteDataObject, Mass), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mass_MetaData), NewProp_Mass_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UODPaletteDataObject_Statics::NewProp_OrientationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UODPaletteDataObject_Statics::NewProp_OrientationType = { "OrientationType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UODPaletteDataObject, OrientationType), Z_Construct_UEnum_ObjectDistribution_EObjectOrientation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrientationType_MetaData), NewProp_OrientationType_MetaData) }; // 1099171471
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UODPaletteDataObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODPaletteDataObject_Statics::NewProp_StaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODPaletteDataObject_Statics::NewProp_bSelectRandomMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODPaletteDataObject_Statics::NewProp_SecondRandomMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODPaletteDataObject_Statics::NewProp_bSelectMaterialRandomly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODPaletteDataObject_Statics::NewProp_SpawnCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODPaletteDataObject_Statics::NewProp_ScaleRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODPaletteDataObject_Statics::NewProp_LinearDamping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODPaletteDataObject_Statics::NewProp_AngularDamping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODPaletteDataObject_Statics::NewProp_Mass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODPaletteDataObject_Statics::NewProp_OrientationType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODPaletteDataObject_Statics::NewProp_OrientationType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UODPaletteDataObject_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UODPaletteDataObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ObjectDistribution,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UODPaletteDataObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UODPaletteDataObject_Statics::ClassParams = {
	&UODPaletteDataObject::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UODPaletteDataObject_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UODPaletteDataObject_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UODPaletteDataObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UODPaletteDataObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UODPaletteDataObject()
{
	if (!Z_Registration_Info_UClass_UODPaletteDataObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UODPaletteDataObject.OuterSingleton, Z_Construct_UClass_UODPaletteDataObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UODPaletteDataObject.OuterSingleton;
}
template<> OBJECTDISTRIBUTION_API UClass* StaticClass<UODPaletteDataObject>()
{
	return UODPaletteDataObject::StaticClass();
}
UODPaletteDataObject::UODPaletteDataObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UODPaletteDataObject);
UODPaletteDataObject::~UODPaletteDataObject() {}
// End Class UODPaletteDataObject

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ObjectDistribution_Source_ObjectDistribution_Public_Data_ODPaletteDataObject_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UODPaletteDataObject, UODPaletteDataObject::StaticClass, TEXT("UODPaletteDataObject"), &Z_Registration_Info_UClass_UODPaletteDataObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UODPaletteDataObject), 3378108645U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ObjectDistribution_Source_ObjectDistribution_Public_Data_ODPaletteDataObject_h_1729735713(TEXT("/Script/ObjectDistribution"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_ObjectDistribution_Source_ObjectDistribution_Public_Data_ODPaletteDataObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ObjectDistribution_Source_ObjectDistribution_Public_Data_ODPaletteDataObject_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
