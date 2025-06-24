// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularBuilding/Public/Data/MBMActionSettingsObj.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMBMActionSettingsObj() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
MODULARBUILDING_API UClass* Z_Construct_UClass_UMBMActionSettingsObj();
MODULARBUILDING_API UClass* Z_Construct_UClass_UMBMActionSettingsObj_NoRegister();
MODULARBUILDING_API UEnum* Z_Construct_UEnum_ModularBuilding_EMBAxis();
UPackage* Z_Construct_UPackage__Script_ModularBuilding();
// End Cross Module References

// Begin Class UMBMActionSettingsObj Function Duplicate
struct Z_Construct_UFunction_UMBMActionSettingsObj_Duplicate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Multiple Modular Duplication" },
		{ "ModuleRelativePath", "Public/Data/MBMActionSettingsObj.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMBMActionSettingsObj_Duplicate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMBMActionSettingsObj, nullptr, "Duplicate", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBMActionSettingsObj_Duplicate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMBMActionSettingsObj_Duplicate_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMBMActionSettingsObj_Duplicate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMBMActionSettingsObj_Duplicate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMBMActionSettingsObj::execDuplicate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Duplicate();
	P_NATIVE_END;
}
// End Class UMBMActionSettingsObj Function Duplicate

// Begin Class UMBMActionSettingsObj
void UMBMActionSettingsObj::StaticRegisterNativesUMBMActionSettingsObj()
{
	UClass* Class = UMBMActionSettingsObj::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Duplicate", &UMBMActionSettingsObj::execDuplicate },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMBMActionSettingsObj);
UClass* Z_Construct_UClass_UMBMActionSettingsObj_NoRegister()
{
	return UMBMActionSettingsObj::StaticClass();
}
struct Z_Construct_UClass_UMBMActionSettingsObj_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Data/MBMActionSettingsObj.h" },
		{ "ModuleRelativePath", "Public/Data/MBMActionSettingsObj.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfDuplications_MetaData[] = {
		{ "Category", "Multiple Modular Duplication" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/Data/MBMActionSettingsObj.h" },
		{ "NoResetToDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DuplicationAxis_MetaData[] = {
		{ "Category", "Multiple Modular Duplication" },
		{ "ModuleRelativePath", "Public/Data/MBMActionSettingsObj.h" },
		{ "NoResetToDefault", "" },
		{ "ValidEnumValues", "AxisX,AxisY,AxisZ" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[] = {
		{ "Category", "Multiple Modular Duplication" },
		{ "ModuleRelativePath", "Public/Data/MBMActionSettingsObj.h" },
		{ "NoResetToDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPositiveDirection_MetaData[] = {
		{ "Category", "Multiple Modular Duplication" },
		{ "DisplayName", "Positive Direction" },
		{ "ModuleRelativePath", "Public/Data/MBMActionSettingsObj.h" },
		{ "NoResetToDefault", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfDuplications;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DuplicationAxis_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DuplicationAxis;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Offset;
	static void NewProp_bPositiveDirection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPositiveDirection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMBMActionSettingsObj_Duplicate, "Duplicate" }, // 734100721
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMBMActionSettingsObj>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMBMActionSettingsObj_Statics::NewProp_NumberOfDuplications = { "NumberOfDuplications", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBMActionSettingsObj, NumberOfDuplications), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumberOfDuplications_MetaData), NewProp_NumberOfDuplications_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMBMActionSettingsObj_Statics::NewProp_DuplicationAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMBMActionSettingsObj_Statics::NewProp_DuplicationAxis = { "DuplicationAxis", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBMActionSettingsObj, DuplicationAxis), Z_Construct_UEnum_ModularBuilding_EMBAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DuplicationAxis_MetaData), NewProp_DuplicationAxis_MetaData) }; // 3735486892
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMBMActionSettingsObj_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBMActionSettingsObj, Offset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Offset_MetaData), NewProp_Offset_MetaData) };
void Z_Construct_UClass_UMBMActionSettingsObj_Statics::NewProp_bPositiveDirection_SetBit(void* Obj)
{
	((UMBMActionSettingsObj*)Obj)->bPositiveDirection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMBMActionSettingsObj_Statics::NewProp_bPositiveDirection = { "bPositiveDirection", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMBMActionSettingsObj), &Z_Construct_UClass_UMBMActionSettingsObj_Statics::NewProp_bPositiveDirection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPositiveDirection_MetaData), NewProp_bPositiveDirection_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMBMActionSettingsObj_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBMActionSettingsObj_Statics::NewProp_NumberOfDuplications,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBMActionSettingsObj_Statics::NewProp_DuplicationAxis_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBMActionSettingsObj_Statics::NewProp_DuplicationAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBMActionSettingsObj_Statics::NewProp_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBMActionSettingsObj_Statics::NewProp_bPositiveDirection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMBMActionSettingsObj_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMBMActionSettingsObj_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ModularBuilding,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMBMActionSettingsObj_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMBMActionSettingsObj_Statics::ClassParams = {
	&UMBMActionSettingsObj::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMBMActionSettingsObj_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMBMActionSettingsObj_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMBMActionSettingsObj_Statics::Class_MetaDataParams), Z_Construct_UClass_UMBMActionSettingsObj_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMBMActionSettingsObj()
{
	if (!Z_Registration_Info_UClass_UMBMActionSettingsObj.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMBMActionSettingsObj.OuterSingleton, Z_Construct_UClass_UMBMActionSettingsObj_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMBMActionSettingsObj.OuterSingleton;
}
template<> MODULARBUILDING_API UClass* StaticClass<UMBMActionSettingsObj>()
{
	return UMBMActionSettingsObj::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMBMActionSettingsObj);
UMBMActionSettingsObj::~UMBMActionSettingsObj() {}
// End Class UMBMActionSettingsObj

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Data_MBMActionSettingsObj_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMBMActionSettingsObj, UMBMActionSettingsObj::StaticClass, TEXT("UMBMActionSettingsObj"), &Z_Registration_Info_UClass_UMBMActionSettingsObj, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMBMActionSettingsObj), 2658227640U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Data_MBMActionSettingsObj_h_1974999192(TEXT("/Script/ModularBuilding"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Data_MBMActionSettingsObj_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Data_MBMActionSettingsObj_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
