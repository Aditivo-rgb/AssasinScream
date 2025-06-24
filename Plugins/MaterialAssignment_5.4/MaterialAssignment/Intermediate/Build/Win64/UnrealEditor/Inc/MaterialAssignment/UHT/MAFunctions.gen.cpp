// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MaterialAssignment/Public/Library/MAFunctions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMAFunctions() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FAssetData();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
MATERIALASSIGNMENT_API UClass* Z_Construct_UClass_UMAFunctions();
MATERIALASSIGNMENT_API UClass* Z_Construct_UClass_UMAFunctions_NoRegister();
UPackage* Z_Construct_UPackage__Script_MaterialAssignment();
// End Cross Module References

// Begin Class UMAFunctions Function FindTheMostSuitableMaterialForTheNameSlot
struct Z_Construct_UFunction_UMAFunctions_FindTheMostSuitableMaterialForTheNameSlot_Statics
{
	struct FTopLevelAssetPath
	{
		FName PackageName;
		FName AssetName;
	};

	struct MAFunctions_eventFindTheMostSuitableMaterialForTheNameSlot_Parms
	{
		FString InSlotName;
		TArray<FAssetData> MaterialList;
		FAssetData ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Material Assignment" },
		{ "ModuleRelativePath", "Public/Library/MAFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSlotName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InSlotName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MaterialList;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMAFunctions_FindTheMostSuitableMaterialForTheNameSlot_Statics::NewProp_InSlotName = { "InSlotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MAFunctions_eventFindTheMostSuitableMaterialForTheNameSlot_Parms, InSlotName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSlotName_MetaData), NewProp_InSlotName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMAFunctions_FindTheMostSuitableMaterialForTheNameSlot_Statics::NewProp_MaterialList_Inner = { "MaterialList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMAFunctions_FindTheMostSuitableMaterialForTheNameSlot_Statics::NewProp_MaterialList = { "MaterialList", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MAFunctions_eventFindTheMostSuitableMaterialForTheNameSlot_Parms, MaterialList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialList_MetaData), NewProp_MaterialList_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMAFunctions_FindTheMostSuitableMaterialForTheNameSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MAFunctions_eventFindTheMostSuitableMaterialForTheNameSlot_Parms, ReturnValue), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMAFunctions_FindTheMostSuitableMaterialForTheNameSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMAFunctions_FindTheMostSuitableMaterialForTheNameSlot_Statics::NewProp_InSlotName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMAFunctions_FindTheMostSuitableMaterialForTheNameSlot_Statics::NewProp_MaterialList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMAFunctions_FindTheMostSuitableMaterialForTheNameSlot_Statics::NewProp_MaterialList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMAFunctions_FindTheMostSuitableMaterialForTheNameSlot_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMAFunctions_FindTheMostSuitableMaterialForTheNameSlot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMAFunctions_FindTheMostSuitableMaterialForTheNameSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMAFunctions, nullptr, "FindTheMostSuitableMaterialForTheNameSlot", nullptr, nullptr, Z_Construct_UFunction_UMAFunctions_FindTheMostSuitableMaterialForTheNameSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMAFunctions_FindTheMostSuitableMaterialForTheNameSlot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMAFunctions_FindTheMostSuitableMaterialForTheNameSlot_Statics::MAFunctions_eventFindTheMostSuitableMaterialForTheNameSlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMAFunctions_FindTheMostSuitableMaterialForTheNameSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMAFunctions_FindTheMostSuitableMaterialForTheNameSlot_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMAFunctions_FindTheMostSuitableMaterialForTheNameSlot_Statics::MAFunctions_eventFindTheMostSuitableMaterialForTheNameSlot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMAFunctions_FindTheMostSuitableMaterialForTheNameSlot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMAFunctions_FindTheMostSuitableMaterialForTheNameSlot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMAFunctions::execFindTheMostSuitableMaterialForTheNameSlot)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InSlotName);
	P_GET_TARRAY_REF(FAssetData,Z_Param_Out_MaterialList);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FAssetData*)Z_Param__Result=UMAFunctions::FindTheMostSuitableMaterialForTheNameSlot(Z_Param_InSlotName,Z_Param_Out_MaterialList);
	P_NATIVE_END;
}
// End Class UMAFunctions Function FindTheMostSuitableMaterialForTheNameSlot

// Begin Class UMAFunctions Function GetAllMaterialInstances
struct Z_Construct_UFunction_UMAFunctions_GetAllMaterialInstances_Statics
{
	struct FTopLevelAssetPath
	{
		FName PackageName;
		FName AssetName;
	};

	struct MAFunctions_eventGetAllMaterialInstances_Parms
	{
		TArray<FAssetData> OutAssets;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Material Assignment" },
		{ "ModuleRelativePath", "Public/Library/MAFunctions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutAssets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutAssets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMAFunctions_GetAllMaterialInstances_Statics::NewProp_OutAssets_Inner = { "OutAssets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMAFunctions_GetAllMaterialInstances_Statics::NewProp_OutAssets = { "OutAssets", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MAFunctions_eventGetAllMaterialInstances_Parms, OutAssets), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMAFunctions_GetAllMaterialInstances_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMAFunctions_GetAllMaterialInstances_Statics::NewProp_OutAssets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMAFunctions_GetAllMaterialInstances_Statics::NewProp_OutAssets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMAFunctions_GetAllMaterialInstances_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMAFunctions_GetAllMaterialInstances_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMAFunctions, nullptr, "GetAllMaterialInstances", nullptr, nullptr, Z_Construct_UFunction_UMAFunctions_GetAllMaterialInstances_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMAFunctions_GetAllMaterialInstances_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMAFunctions_GetAllMaterialInstances_Statics::MAFunctions_eventGetAllMaterialInstances_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMAFunctions_GetAllMaterialInstances_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMAFunctions_GetAllMaterialInstances_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMAFunctions_GetAllMaterialInstances_Statics::MAFunctions_eventGetAllMaterialInstances_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMAFunctions_GetAllMaterialInstances()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMAFunctions_GetAllMaterialInstances_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMAFunctions::execGetAllMaterialInstances)
{
	P_GET_TARRAY_REF(FAssetData,Z_Param_Out_OutAssets);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMAFunctions::GetAllMaterialInstances(Z_Param_Out_OutAssets);
	P_NATIVE_END;
}
// End Class UMAFunctions Function GetAllMaterialInstances

// Begin Class UMAFunctions Function IsMaterialInUsed
struct Z_Construct_UFunction_UMAFunctions_IsMaterialInUsed_Statics
{
	struct MAFunctions_eventIsMaterialInUsed_Parms
	{
		UStaticMesh* InStaticMesh;
		int32 InMaterialIndex;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Material Assignment" },
		{ "ModuleRelativePath", "Public/Library/MAFunctions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InStaticMesh;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InMaterialIndex;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMAFunctions_IsMaterialInUsed_Statics::NewProp_InStaticMesh = { "InStaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MAFunctions_eventIsMaterialInUsed_Parms, InStaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMAFunctions_IsMaterialInUsed_Statics::NewProp_InMaterialIndex = { "InMaterialIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MAFunctions_eventIsMaterialInUsed_Parms, InMaterialIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMAFunctions_IsMaterialInUsed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MAFunctions_eventIsMaterialInUsed_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMAFunctions_IsMaterialInUsed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MAFunctions_eventIsMaterialInUsed_Parms), &Z_Construct_UFunction_UMAFunctions_IsMaterialInUsed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMAFunctions_IsMaterialInUsed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMAFunctions_IsMaterialInUsed_Statics::NewProp_InStaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMAFunctions_IsMaterialInUsed_Statics::NewProp_InMaterialIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMAFunctions_IsMaterialInUsed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMAFunctions_IsMaterialInUsed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMAFunctions_IsMaterialInUsed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMAFunctions, nullptr, "IsMaterialInUsed", nullptr, nullptr, Z_Construct_UFunction_UMAFunctions_IsMaterialInUsed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMAFunctions_IsMaterialInUsed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMAFunctions_IsMaterialInUsed_Statics::MAFunctions_eventIsMaterialInUsed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMAFunctions_IsMaterialInUsed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMAFunctions_IsMaterialInUsed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMAFunctions_IsMaterialInUsed_Statics::MAFunctions_eventIsMaterialInUsed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMAFunctions_IsMaterialInUsed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMAFunctions_IsMaterialInUsed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMAFunctions::execIsMaterialInUsed)
{
	P_GET_OBJECT(UStaticMesh,Z_Param_InStaticMesh);
	P_GET_PROPERTY(FIntProperty,Z_Param_InMaterialIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UMAFunctions::IsMaterialInUsed(Z_Param_InStaticMesh,Z_Param_InMaterialIndex);
	P_NATIVE_END;
}
// End Class UMAFunctions Function IsMaterialInUsed

// Begin Class UMAFunctions
void UMAFunctions::StaticRegisterNativesUMAFunctions()
{
	UClass* Class = UMAFunctions::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FindTheMostSuitableMaterialForTheNameSlot", &UMAFunctions::execFindTheMostSuitableMaterialForTheNameSlot },
		{ "GetAllMaterialInstances", &UMAFunctions::execGetAllMaterialInstances },
		{ "IsMaterialInUsed", &UMAFunctions::execIsMaterialInUsed },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMAFunctions);
UClass* Z_Construct_UClass_UMAFunctions_NoRegister()
{
	return UMAFunctions::StaticClass();
}
struct Z_Construct_UClass_UMAFunctions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Library/MAFunctions.h" },
		{ "ModuleRelativePath", "Public/Library/MAFunctions.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMAFunctions_FindTheMostSuitableMaterialForTheNameSlot, "FindTheMostSuitableMaterialForTheNameSlot" }, // 3527712342
		{ &Z_Construct_UFunction_UMAFunctions_GetAllMaterialInstances, "GetAllMaterialInstances" }, // 1330330045
		{ &Z_Construct_UFunction_UMAFunctions_IsMaterialInUsed, "IsMaterialInUsed" }, // 2215072532
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMAFunctions>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMAFunctions_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_MaterialAssignment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMAFunctions_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMAFunctions_Statics::ClassParams = {
	&UMAFunctions::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMAFunctions_Statics::Class_MetaDataParams), Z_Construct_UClass_UMAFunctions_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMAFunctions()
{
	if (!Z_Registration_Info_UClass_UMAFunctions.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMAFunctions.OuterSingleton, Z_Construct_UClass_UMAFunctions_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMAFunctions.OuterSingleton;
}
template<> MATERIALASSIGNMENT_API UClass* StaticClass<UMAFunctions>()
{
	return UMAFunctions::StaticClass();
}
UMAFunctions::UMAFunctions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMAFunctions);
UMAFunctions::~UMAFunctions() {}
// End Class UMAFunctions

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_MaterialAssignment_Source_MaterialAssignment_Public_Library_MAFunctions_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMAFunctions, UMAFunctions::StaticClass, TEXT("UMAFunctions"), &Z_Registration_Info_UClass_UMAFunctions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMAFunctions), 4125738863U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_MaterialAssignment_Source_MaterialAssignment_Public_Library_MAFunctions_h_2177764787(TEXT("/Script/MaterialAssignment"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_MaterialAssignment_Source_MaterialAssignment_Public_Library_MAFunctions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_MaterialAssignment_Source_MaterialAssignment_Public_Library_MAFunctions_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
