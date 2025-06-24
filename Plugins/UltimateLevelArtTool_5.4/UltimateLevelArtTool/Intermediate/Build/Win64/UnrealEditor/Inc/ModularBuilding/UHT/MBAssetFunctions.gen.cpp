// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularBuilding/Public/Libraries/MBAssetFunctions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMBAssetFunctions() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FAssetData();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
MODULARBUILDING_API UClass* Z_Construct_UClass_UMBAssetFunctions();
MODULARBUILDING_API UClass* Z_Construct_UClass_UMBAssetFunctions_NoRegister();
MODULARBUILDING_API UEnum* Z_Construct_UEnum_ModularBuilding_EMBAssetThumbnailFormant();
UPackage* Z_Construct_UPackage__Script_ModularBuilding();
// End Cross Module References

// Begin Enum EMBAssetThumbnailFormant
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMBAssetThumbnailFormant;
static UEnum* EMBAssetThumbnailFormant_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMBAssetThumbnailFormant.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMBAssetThumbnailFormant.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ModularBuilding_EMBAssetThumbnailFormant, (UObject*)Z_Construct_UPackage__Script_ModularBuilding(), TEXT("EMBAssetThumbnailFormant"));
	}
	return Z_Registration_Info_UEnum_EMBAssetThumbnailFormant.OuterSingleton;
}
template<> MODULARBUILDING_API UEnum* StaticEnum<EMBAssetThumbnailFormant>()
{
	return EMBAssetThumbnailFormant_StaticEnum();
}
struct Z_Construct_UEnum_ModularBuilding_EMBAssetThumbnailFormant_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Modular Building Tool" },
		{ "JPEG.DisplayName", "JPEG" },
		{ "JPEG.Name", "EMBAssetThumbnailFormant::JPEG" },
		{ "ModuleRelativePath", "Public/Libraries/MBAssetFunctions.h" },
		{ "PNG.DisplayName", "PNG" },
		{ "PNG.Name", "EMBAssetThumbnailFormant::PNG" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMBAssetThumbnailFormant::JPEG", (int64)EMBAssetThumbnailFormant::JPEG },
		{ "EMBAssetThumbnailFormant::PNG", (int64)EMBAssetThumbnailFormant::PNG },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ModularBuilding_EMBAssetThumbnailFormant_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ModularBuilding,
	nullptr,
	"EMBAssetThumbnailFormant",
	"EMBAssetThumbnailFormant",
	Z_Construct_UEnum_ModularBuilding_EMBAssetThumbnailFormant_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ModularBuilding_EMBAssetThumbnailFormant_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ModularBuilding_EMBAssetThumbnailFormant_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ModularBuilding_EMBAssetThumbnailFormant_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ModularBuilding_EMBAssetThumbnailFormant()
{
	if (!Z_Registration_Info_UEnum_EMBAssetThumbnailFormant.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMBAssetThumbnailFormant.InnerSingleton, Z_Construct_UEnum_ModularBuilding_EMBAssetThumbnailFormant_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMBAssetThumbnailFormant.InnerSingleton;
}
// End Enum EMBAssetThumbnailFormant

// Begin Class UMBAssetFunctions Function GenerateThumbnailForAsset
struct Z_Construct_UFunction_UMBAssetFunctions_GenerateThumbnailForAsset_Statics
{
	struct FTopLevelAssetPath
	{
		FName PackageName;
		FName AssetName;
	};

	struct MBAssetFunctions_eventGenerateThumbnailForAsset_Parms
	{
		FAssetData InAssetPath;
		EMBAssetThumbnailFormant InImageFormat;
		UTexture2D* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ModularBuilding|Asset" },
		{ "ModuleRelativePath", "Public/Libraries/MBAssetFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAssetPath_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InImageFormat_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InAssetPath;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InImageFormat_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InImageFormat;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMBAssetFunctions_GenerateThumbnailForAsset_Statics::NewProp_InAssetPath = { "InAssetPath", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MBAssetFunctions_eventGenerateThumbnailForAsset_Parms, InAssetPath), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAssetPath_MetaData), NewProp_InAssetPath_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMBAssetFunctions_GenerateThumbnailForAsset_Statics::NewProp_InImageFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMBAssetFunctions_GenerateThumbnailForAsset_Statics::NewProp_InImageFormat = { "InImageFormat", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MBAssetFunctions_eventGenerateThumbnailForAsset_Parms, InImageFormat), Z_Construct_UEnum_ModularBuilding_EMBAssetThumbnailFormant, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InImageFormat_MetaData), NewProp_InImageFormat_MetaData) }; // 1491578062
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMBAssetFunctions_GenerateThumbnailForAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MBAssetFunctions_eventGenerateThumbnailForAsset_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMBAssetFunctions_GenerateThumbnailForAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMBAssetFunctions_GenerateThumbnailForAsset_Statics::NewProp_InAssetPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMBAssetFunctions_GenerateThumbnailForAsset_Statics::NewProp_InImageFormat_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMBAssetFunctions_GenerateThumbnailForAsset_Statics::NewProp_InImageFormat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMBAssetFunctions_GenerateThumbnailForAsset_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBAssetFunctions_GenerateThumbnailForAsset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMBAssetFunctions_GenerateThumbnailForAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMBAssetFunctions, nullptr, "GenerateThumbnailForAsset", nullptr, nullptr, Z_Construct_UFunction_UMBAssetFunctions_GenerateThumbnailForAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMBAssetFunctions_GenerateThumbnailForAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMBAssetFunctions_GenerateThumbnailForAsset_Statics::MBAssetFunctions_eventGenerateThumbnailForAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBAssetFunctions_GenerateThumbnailForAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMBAssetFunctions_GenerateThumbnailForAsset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMBAssetFunctions_GenerateThumbnailForAsset_Statics::MBAssetFunctions_eventGenerateThumbnailForAsset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMBAssetFunctions_GenerateThumbnailForAsset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMBAssetFunctions_GenerateThumbnailForAsset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMBAssetFunctions::execGenerateThumbnailForAsset)
{
	P_GET_STRUCT_REF(FAssetData,Z_Param_Out_InAssetPath);
	P_GET_ENUM(EMBAssetThumbnailFormant,Z_Param_InImageFormat);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTexture2D**)Z_Param__Result=UMBAssetFunctions::GenerateThumbnailForAsset(Z_Param_Out_InAssetPath,EMBAssetThumbnailFormant(Z_Param_InImageFormat));
	P_NATIVE_END;
}
// End Class UMBAssetFunctions Function GenerateThumbnailForAsset

// Begin Class UMBAssetFunctions Function GetAssetDataFromObject
struct Z_Construct_UFunction_UMBAssetFunctions_GetAssetDataFromObject_Statics
{
	struct FTopLevelAssetPath
	{
		FName PackageName;
		FName AssetName;
	};

	struct MBAssetFunctions_eventGetAssetDataFromObject_Parms
	{
		const UObject* Object;
		FAssetData ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Editor|Asset" },
		{ "ModuleRelativePath", "Public/Libraries/MBAssetFunctions.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMBAssetFunctions_GetAssetDataFromObject_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MBAssetFunctions_eventGetAssetDataFromObject_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Object_MetaData), NewProp_Object_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMBAssetFunctions_GetAssetDataFromObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MBAssetFunctions_eventGetAssetDataFromObject_Parms, ReturnValue), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMBAssetFunctions_GetAssetDataFromObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMBAssetFunctions_GetAssetDataFromObject_Statics::NewProp_Object,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMBAssetFunctions_GetAssetDataFromObject_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBAssetFunctions_GetAssetDataFromObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMBAssetFunctions_GetAssetDataFromObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMBAssetFunctions, nullptr, "GetAssetDataFromObject", nullptr, nullptr, Z_Construct_UFunction_UMBAssetFunctions_GetAssetDataFromObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMBAssetFunctions_GetAssetDataFromObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMBAssetFunctions_GetAssetDataFromObject_Statics::MBAssetFunctions_eventGetAssetDataFromObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBAssetFunctions_GetAssetDataFromObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMBAssetFunctions_GetAssetDataFromObject_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMBAssetFunctions_GetAssetDataFromObject_Statics::MBAssetFunctions_eventGetAssetDataFromObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMBAssetFunctions_GetAssetDataFromObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMBAssetFunctions_GetAssetDataFromObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMBAssetFunctions::execGetAssetDataFromObject)
{
	P_GET_OBJECT(UObject,Z_Param_Object);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FAssetData*)Z_Param__Result=UMBAssetFunctions::GetAssetDataFromObject(Z_Param_Object);
	P_NATIVE_END;
}
// End Class UMBAssetFunctions Function GetAssetDataFromObject

// Begin Class UMBAssetFunctions Function GetAssetDataFromPath
struct Z_Construct_UFunction_UMBAssetFunctions_GetAssetDataFromPath_Statics
{
	struct FTopLevelAssetPath
	{
		FName PackageName;
		FName AssetName;
	};

	struct MBAssetFunctions_eventGetAssetDataFromPath_Parms
	{
		FString AssetPath;
		FAssetData ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ModularBuilding|Asset" },
		{ "ModuleRelativePath", "Public/Libraries/MBAssetFunctions.h" },
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
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMBAssetFunctions_GetAssetDataFromPath_Statics::NewProp_AssetPath = { "AssetPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MBAssetFunctions_eventGetAssetDataFromPath_Parms, AssetPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetPath_MetaData), NewProp_AssetPath_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMBAssetFunctions_GetAssetDataFromPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MBAssetFunctions_eventGetAssetDataFromPath_Parms, ReturnValue), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMBAssetFunctions_GetAssetDataFromPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMBAssetFunctions_GetAssetDataFromPath_Statics::NewProp_AssetPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMBAssetFunctions_GetAssetDataFromPath_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBAssetFunctions_GetAssetDataFromPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMBAssetFunctions_GetAssetDataFromPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMBAssetFunctions, nullptr, "GetAssetDataFromPath", nullptr, nullptr, Z_Construct_UFunction_UMBAssetFunctions_GetAssetDataFromPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMBAssetFunctions_GetAssetDataFromPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMBAssetFunctions_GetAssetDataFromPath_Statics::MBAssetFunctions_eventGetAssetDataFromPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBAssetFunctions_GetAssetDataFromPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMBAssetFunctions_GetAssetDataFromPath_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMBAssetFunctions_GetAssetDataFromPath_Statics::MBAssetFunctions_eventGetAssetDataFromPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMBAssetFunctions_GetAssetDataFromPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMBAssetFunctions_GetAssetDataFromPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMBAssetFunctions::execGetAssetDataFromPath)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_AssetPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FAssetData*)Z_Param__Result=UMBAssetFunctions::GetAssetDataFromPath(Z_Param_AssetPath);
	P_NATIVE_END;
}
// End Class UMBAssetFunctions Function GetAssetDataFromPath

// Begin Class UMBAssetFunctions Function GetAssetPathFromObject
struct Z_Construct_UFunction_UMBAssetFunctions_GetAssetPathFromObject_Statics
{
	struct MBAssetFunctions_eventGetAssetPathFromObject_Parms
	{
		const UObject* Object;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ModularBuilding|Asset" },
		{ "ModuleRelativePath", "Public/Libraries/MBAssetFunctions.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMBAssetFunctions_GetAssetPathFromObject_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MBAssetFunctions_eventGetAssetPathFromObject_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Object_MetaData), NewProp_Object_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMBAssetFunctions_GetAssetPathFromObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MBAssetFunctions_eventGetAssetPathFromObject_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMBAssetFunctions_GetAssetPathFromObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMBAssetFunctions_GetAssetPathFromObject_Statics::NewProp_Object,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMBAssetFunctions_GetAssetPathFromObject_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBAssetFunctions_GetAssetPathFromObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMBAssetFunctions_GetAssetPathFromObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMBAssetFunctions, nullptr, "GetAssetPathFromObject", nullptr, nullptr, Z_Construct_UFunction_UMBAssetFunctions_GetAssetPathFromObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMBAssetFunctions_GetAssetPathFromObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMBAssetFunctions_GetAssetPathFromObject_Statics::MBAssetFunctions_eventGetAssetPathFromObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBAssetFunctions_GetAssetPathFromObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMBAssetFunctions_GetAssetPathFromObject_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMBAssetFunctions_GetAssetPathFromObject_Statics::MBAssetFunctions_eventGetAssetPathFromObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMBAssetFunctions_GetAssetPathFromObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMBAssetFunctions_GetAssetPathFromObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMBAssetFunctions::execGetAssetPathFromObject)
{
	P_GET_OBJECT(UObject,Z_Param_Object);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UMBAssetFunctions::GetAssetPathFromObject(Z_Param_Object);
	P_NATIVE_END;
}
// End Class UMBAssetFunctions Function GetAssetPathFromObject

// Begin Class UMBAssetFunctions
void UMBAssetFunctions::StaticRegisterNativesUMBAssetFunctions()
{
	UClass* Class = UMBAssetFunctions::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GenerateThumbnailForAsset", &UMBAssetFunctions::execGenerateThumbnailForAsset },
		{ "GetAssetDataFromObject", &UMBAssetFunctions::execGetAssetDataFromObject },
		{ "GetAssetDataFromPath", &UMBAssetFunctions::execGetAssetDataFromPath },
		{ "GetAssetPathFromObject", &UMBAssetFunctions::execGetAssetPathFromObject },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMBAssetFunctions);
UClass* Z_Construct_UClass_UMBAssetFunctions_NoRegister()
{
	return UMBAssetFunctions::StaticClass();
}
struct Z_Construct_UClass_UMBAssetFunctions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Libraries/MBAssetFunctions.h" },
		{ "ModuleRelativePath", "Public/Libraries/MBAssetFunctions.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMBAssetFunctions_GenerateThumbnailForAsset, "GenerateThumbnailForAsset" }, // 1389729658
		{ &Z_Construct_UFunction_UMBAssetFunctions_GetAssetDataFromObject, "GetAssetDataFromObject" }, // 450217872
		{ &Z_Construct_UFunction_UMBAssetFunctions_GetAssetDataFromPath, "GetAssetDataFromPath" }, // 534118698
		{ &Z_Construct_UFunction_UMBAssetFunctions_GetAssetPathFromObject, "GetAssetPathFromObject" }, // 2738967050
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMBAssetFunctions>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMBAssetFunctions_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_ModularBuilding,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMBAssetFunctions_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMBAssetFunctions_Statics::ClassParams = {
	&UMBAssetFunctions::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMBAssetFunctions_Statics::Class_MetaDataParams), Z_Construct_UClass_UMBAssetFunctions_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMBAssetFunctions()
{
	if (!Z_Registration_Info_UClass_UMBAssetFunctions.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMBAssetFunctions.OuterSingleton, Z_Construct_UClass_UMBAssetFunctions_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMBAssetFunctions.OuterSingleton;
}
template<> MODULARBUILDING_API UClass* StaticClass<UMBAssetFunctions>()
{
	return UMBAssetFunctions::StaticClass();
}
UMBAssetFunctions::UMBAssetFunctions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMBAssetFunctions);
UMBAssetFunctions::~UMBAssetFunctions() {}
// End Class UMBAssetFunctions

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Libraries_MBAssetFunctions_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMBAssetThumbnailFormant_StaticEnum, TEXT("EMBAssetThumbnailFormant"), &Z_Registration_Info_UEnum_EMBAssetThumbnailFormant, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1491578062U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMBAssetFunctions, UMBAssetFunctions::StaticClass, TEXT("UMBAssetFunctions"), &Z_Registration_Info_UClass_UMBAssetFunctions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMBAssetFunctions), 631566927U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Libraries_MBAssetFunctions_h_3713549051(TEXT("/Script/ModularBuilding"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Libraries_MBAssetFunctions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Libraries_MBAssetFunctions_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Libraries_MBAssetFunctions_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Libraries_MBAssetFunctions_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
