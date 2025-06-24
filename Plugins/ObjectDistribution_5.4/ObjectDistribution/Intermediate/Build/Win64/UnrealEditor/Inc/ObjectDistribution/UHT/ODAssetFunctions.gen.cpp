// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObjectDistribution/Public/Library/ODAssetFunctions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeODAssetFunctions() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FAssetData();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
OBJECTDISTRIBUTION_API UClass* Z_Construct_UClass_UODAssetFunctions();
OBJECTDISTRIBUTION_API UClass* Z_Construct_UClass_UODAssetFunctions_NoRegister();
UPackage* Z_Construct_UPackage__Script_ObjectDistribution();
// End Cross Module References

// Begin Class UODAssetFunctions Function GenerateThumbnailForSM
struct Z_Construct_UFunction_UODAssetFunctions_GenerateThumbnailForSM_Statics
{
	struct FTopLevelAssetPath
	{
		FName PackageName;
		FName AssetName;
	};

	struct ODAssetFunctions_eventGenerateThumbnailForSM_Parms
	{
		FAssetData InAssetPath;
		UTexture2D* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ModularBuilding|Asset" },
		{ "ModuleRelativePath", "Public/Library/ODAssetFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAssetPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InAssetPath;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UODAssetFunctions_GenerateThumbnailForSM_Statics::NewProp_InAssetPath = { "InAssetPath", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ODAssetFunctions_eventGenerateThumbnailForSM_Parms, InAssetPath), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAssetPath_MetaData), NewProp_InAssetPath_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UODAssetFunctions_GenerateThumbnailForSM_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ODAssetFunctions_eventGenerateThumbnailForSM_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UODAssetFunctions_GenerateThumbnailForSM_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UODAssetFunctions_GenerateThumbnailForSM_Statics::NewProp_InAssetPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UODAssetFunctions_GenerateThumbnailForSM_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UODAssetFunctions_GenerateThumbnailForSM_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UODAssetFunctions_GenerateThumbnailForSM_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UODAssetFunctions, nullptr, "GenerateThumbnailForSM", nullptr, nullptr, Z_Construct_UFunction_UODAssetFunctions_GenerateThumbnailForSM_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UODAssetFunctions_GenerateThumbnailForSM_Statics::PropPointers), sizeof(Z_Construct_UFunction_UODAssetFunctions_GenerateThumbnailForSM_Statics::ODAssetFunctions_eventGenerateThumbnailForSM_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UODAssetFunctions_GenerateThumbnailForSM_Statics::Function_MetaDataParams), Z_Construct_UFunction_UODAssetFunctions_GenerateThumbnailForSM_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UODAssetFunctions_GenerateThumbnailForSM_Statics::ODAssetFunctions_eventGenerateThumbnailForSM_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UODAssetFunctions_GenerateThumbnailForSM()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UODAssetFunctions_GenerateThumbnailForSM_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UODAssetFunctions::execGenerateThumbnailForSM)
{
	P_GET_STRUCT_REF(FAssetData,Z_Param_Out_InAssetPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTexture2D**)Z_Param__Result=UODAssetFunctions::GenerateThumbnailForSM(Z_Param_Out_InAssetPath);
	P_NATIVE_END;
}
// End Class UODAssetFunctions Function GenerateThumbnailForSM

// Begin Class UODAssetFunctions Function GetAssetDataFromObject
struct Z_Construct_UFunction_UODAssetFunctions_GetAssetDataFromObject_Statics
{
	struct FTopLevelAssetPath
	{
		FName PackageName;
		FName AssetName;
	};

	struct ODAssetFunctions_eventGetAssetDataFromObject_Parms
	{
		const UObject* Object;
		FAssetData ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Editor|Asset" },
		{ "ModuleRelativePath", "Public/Library/ODAssetFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UODAssetFunctions_GetAssetDataFromObject_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ODAssetFunctions_eventGetAssetDataFromObject_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Object_MetaData), NewProp_Object_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UODAssetFunctions_GetAssetDataFromObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ODAssetFunctions_eventGetAssetDataFromObject_Parms, ReturnValue), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UODAssetFunctions_GetAssetDataFromObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UODAssetFunctions_GetAssetDataFromObject_Statics::NewProp_Object,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UODAssetFunctions_GetAssetDataFromObject_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UODAssetFunctions_GetAssetDataFromObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UODAssetFunctions_GetAssetDataFromObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UODAssetFunctions, nullptr, "GetAssetDataFromObject", nullptr, nullptr, Z_Construct_UFunction_UODAssetFunctions_GetAssetDataFromObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UODAssetFunctions_GetAssetDataFromObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UODAssetFunctions_GetAssetDataFromObject_Statics::ODAssetFunctions_eventGetAssetDataFromObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UODAssetFunctions_GetAssetDataFromObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UODAssetFunctions_GetAssetDataFromObject_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UODAssetFunctions_GetAssetDataFromObject_Statics::ODAssetFunctions_eventGetAssetDataFromObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UODAssetFunctions_GetAssetDataFromObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UODAssetFunctions_GetAssetDataFromObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UODAssetFunctions::execGetAssetDataFromObject)
{
	P_GET_OBJECT(UObject,Z_Param_Object);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FAssetData*)Z_Param__Result=UODAssetFunctions::GetAssetDataFromObject(Z_Param_Object);
	P_NATIVE_END;
}
// End Class UODAssetFunctions Function GetAssetDataFromObject

// Begin Class UODAssetFunctions Function GetAssetDataFromPath
struct Z_Construct_UFunction_UODAssetFunctions_GetAssetDataFromPath_Statics
{
	struct FTopLevelAssetPath
	{
		FName PackageName;
		FName AssetName;
	};

	struct ODAssetFunctions_eventGetAssetDataFromPath_Parms
	{
		FString AssetPath;
		FAssetData ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ModularBuilding|Asset" },
		{ "ModuleRelativePath", "Public/Library/ODAssetFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AssetPath;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UODAssetFunctions_GetAssetDataFromPath_Statics::NewProp_AssetPath = { "AssetPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ODAssetFunctions_eventGetAssetDataFromPath_Parms, AssetPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetPath_MetaData), NewProp_AssetPath_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UODAssetFunctions_GetAssetDataFromPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ODAssetFunctions_eventGetAssetDataFromPath_Parms, ReturnValue), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UODAssetFunctions_GetAssetDataFromPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UODAssetFunctions_GetAssetDataFromPath_Statics::NewProp_AssetPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UODAssetFunctions_GetAssetDataFromPath_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UODAssetFunctions_GetAssetDataFromPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UODAssetFunctions_GetAssetDataFromPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UODAssetFunctions, nullptr, "GetAssetDataFromPath", nullptr, nullptr, Z_Construct_UFunction_UODAssetFunctions_GetAssetDataFromPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UODAssetFunctions_GetAssetDataFromPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UODAssetFunctions_GetAssetDataFromPath_Statics::ODAssetFunctions_eventGetAssetDataFromPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UODAssetFunctions_GetAssetDataFromPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UODAssetFunctions_GetAssetDataFromPath_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UODAssetFunctions_GetAssetDataFromPath_Statics::ODAssetFunctions_eventGetAssetDataFromPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UODAssetFunctions_GetAssetDataFromPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UODAssetFunctions_GetAssetDataFromPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UODAssetFunctions::execGetAssetDataFromPath)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_AssetPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FAssetData*)Z_Param__Result=UODAssetFunctions::GetAssetDataFromPath(Z_Param_AssetPath);
	P_NATIVE_END;
}
// End Class UODAssetFunctions Function GetAssetDataFromPath

// Begin Class UODAssetFunctions Function GetAssetPathFromObject
struct Z_Construct_UFunction_UODAssetFunctions_GetAssetPathFromObject_Statics
{
	struct ODAssetFunctions_eventGetAssetPathFromObject_Parms
	{
		const UObject* Object;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ModularBuilding|Asset" },
		{ "ModuleRelativePath", "Public/Library/ODAssetFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UODAssetFunctions_GetAssetPathFromObject_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ODAssetFunctions_eventGetAssetPathFromObject_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Object_MetaData), NewProp_Object_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UODAssetFunctions_GetAssetPathFromObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ODAssetFunctions_eventGetAssetPathFromObject_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UODAssetFunctions_GetAssetPathFromObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UODAssetFunctions_GetAssetPathFromObject_Statics::NewProp_Object,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UODAssetFunctions_GetAssetPathFromObject_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UODAssetFunctions_GetAssetPathFromObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UODAssetFunctions_GetAssetPathFromObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UODAssetFunctions, nullptr, "GetAssetPathFromObject", nullptr, nullptr, Z_Construct_UFunction_UODAssetFunctions_GetAssetPathFromObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UODAssetFunctions_GetAssetPathFromObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UODAssetFunctions_GetAssetPathFromObject_Statics::ODAssetFunctions_eventGetAssetPathFromObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UODAssetFunctions_GetAssetPathFromObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UODAssetFunctions_GetAssetPathFromObject_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UODAssetFunctions_GetAssetPathFromObject_Statics::ODAssetFunctions_eventGetAssetPathFromObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UODAssetFunctions_GetAssetPathFromObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UODAssetFunctions_GetAssetPathFromObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UODAssetFunctions::execGetAssetPathFromObject)
{
	P_GET_OBJECT(UObject,Z_Param_Object);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UODAssetFunctions::GetAssetPathFromObject(Z_Param_Object);
	P_NATIVE_END;
}
// End Class UODAssetFunctions Function GetAssetPathFromObject

// Begin Class UODAssetFunctions
void UODAssetFunctions::StaticRegisterNativesUODAssetFunctions()
{
	UClass* Class = UODAssetFunctions::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GenerateThumbnailForSM", &UODAssetFunctions::execGenerateThumbnailForSM },
		{ "GetAssetDataFromObject", &UODAssetFunctions::execGetAssetDataFromObject },
		{ "GetAssetDataFromPath", &UODAssetFunctions::execGetAssetDataFromPath },
		{ "GetAssetPathFromObject", &UODAssetFunctions::execGetAssetPathFromObject },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UODAssetFunctions);
UClass* Z_Construct_UClass_UODAssetFunctions_NoRegister()
{
	return UODAssetFunctions::StaticClass();
}
struct Z_Construct_UClass_UODAssetFunctions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//struct FAssetData;\n" },
		{ "IncludePath", "Library/ODAssetFunctions.h" },
		{ "ModuleRelativePath", "Public/Library/ODAssetFunctions.h" },
		{ "ToolTip", "struct FAssetData;" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UODAssetFunctions_GenerateThumbnailForSM, "GenerateThumbnailForSM" }, // 4291424155
		{ &Z_Construct_UFunction_UODAssetFunctions_GetAssetDataFromObject, "GetAssetDataFromObject" }, // 466585393
		{ &Z_Construct_UFunction_UODAssetFunctions_GetAssetDataFromPath, "GetAssetDataFromPath" }, // 581792642
		{ &Z_Construct_UFunction_UODAssetFunctions_GetAssetPathFromObject, "GetAssetPathFromObject" }, // 2132534329
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UODAssetFunctions>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UODAssetFunctions_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_ObjectDistribution,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UODAssetFunctions_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UODAssetFunctions_Statics::ClassParams = {
	&UODAssetFunctions::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UODAssetFunctions_Statics::Class_MetaDataParams), Z_Construct_UClass_UODAssetFunctions_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UODAssetFunctions()
{
	if (!Z_Registration_Info_UClass_UODAssetFunctions.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UODAssetFunctions.OuterSingleton, Z_Construct_UClass_UODAssetFunctions_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UODAssetFunctions.OuterSingleton;
}
template<> OBJECTDISTRIBUTION_API UClass* StaticClass<UODAssetFunctions>()
{
	return UODAssetFunctions::StaticClass();
}
UODAssetFunctions::UODAssetFunctions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UODAssetFunctions);
UODAssetFunctions::~UODAssetFunctions() {}
// End Class UODAssetFunctions

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ObjectDistribution_Source_ObjectDistribution_Public_Library_ODAssetFunctions_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UODAssetFunctions, UODAssetFunctions::StaticClass, TEXT("UODAssetFunctions"), &Z_Registration_Info_UClass_UODAssetFunctions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UODAssetFunctions), 635794202U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ObjectDistribution_Source_ObjectDistribution_Public_Library_ODAssetFunctions_h_589113477(TEXT("/Script/ObjectDistribution"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_ObjectDistribution_Source_ObjectDistribution_Public_Library_ODAssetFunctions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ObjectDistribution_Source_ObjectDistribution_Public_Library_ODAssetFunctions_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
