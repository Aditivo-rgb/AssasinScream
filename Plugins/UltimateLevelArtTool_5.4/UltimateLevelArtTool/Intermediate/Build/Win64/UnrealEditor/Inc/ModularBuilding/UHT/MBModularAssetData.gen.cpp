// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularBuilding/Public/Data/MBModularAssetData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMBModularAssetData() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
MODULARBUILDING_API UEnum* Z_Construct_UEnum_ModularBuilding_EBuildingCategory();
MODULARBUILDING_API UScriptStruct* Z_Construct_UScriptStruct_FModularBuildingAssetData();
UPackage* Z_Construct_UPackage__Script_ModularBuilding();
// End Cross Module References

// Begin ScriptStruct FModularBuildingAssetData
static_assert(std::is_polymorphic<FModularBuildingAssetData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FModularBuildingAssetData cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ModularBuildingAssetData;
class UScriptStruct* FModularBuildingAssetData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ModularBuildingAssetData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ModularBuildingAssetData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FModularBuildingAssetData, (UObject*)Z_Construct_UPackage__Script_ModularBuilding(), TEXT("ModularBuildingAssetData"));
	}
	return Z_Registration_Info_UScriptStruct_ModularBuildingAssetData.OuterSingleton;
}
template<> MODULARBUILDING_API UScriptStruct* StaticStruct<FModularBuildingAssetData>()
{
	return FModularBuildingAssetData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FModularBuildingAssetData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Data/MBModularAssetData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshType_MetaData[] = {
		{ "Category", "ToolAsset" },
		{ "ModuleRelativePath", "Public/Data/MBModularAssetData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshCategory_MetaData[] = {
		{ "Category", "ToolAsset" },
		{ "ModuleRelativePath", "Public/Data/MBModularAssetData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetReference_MetaData[] = {
		{ "Category", "ToolAsset" },
		{ "ModuleRelativePath", "Public/Data/MBModularAssetData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_MeshType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MeshCategory_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MeshCategory;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_AssetReference;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModularBuildingAssetData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModularBuildingAssetData_Statics::NewProp_MeshType = { "MeshType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModularBuildingAssetData, MeshType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshType_MetaData), NewProp_MeshType_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FModularBuildingAssetData_Statics::NewProp_MeshCategory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FModularBuildingAssetData_Statics::NewProp_MeshCategory = { "MeshCategory", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModularBuildingAssetData, MeshCategory), Z_Construct_UEnum_ModularBuilding_EBuildingCategory, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshCategory_MetaData), NewProp_MeshCategory_MetaData) }; // 385100287
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FModularBuildingAssetData_Statics::NewProp_AssetReference = { "AssetReference", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModularBuildingAssetData, AssetReference), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetReference_MetaData), NewProp_AssetReference_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModularBuildingAssetData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularBuildingAssetData_Statics::NewProp_MeshType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularBuildingAssetData_Statics::NewProp_MeshCategory_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularBuildingAssetData_Statics::NewProp_MeshCategory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularBuildingAssetData_Statics::NewProp_AssetReference,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularBuildingAssetData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModularBuildingAssetData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ModularBuilding,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"ModularBuildingAssetData",
	Z_Construct_UScriptStruct_FModularBuildingAssetData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularBuildingAssetData_Statics::PropPointers),
	sizeof(FModularBuildingAssetData),
	alignof(FModularBuildingAssetData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularBuildingAssetData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FModularBuildingAssetData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FModularBuildingAssetData()
{
	if (!Z_Registration_Info_UScriptStruct_ModularBuildingAssetData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ModularBuildingAssetData.InnerSingleton, Z_Construct_UScriptStruct_FModularBuildingAssetData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ModularBuildingAssetData.InnerSingleton;
}
// End ScriptStruct FModularBuildingAssetData

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Data_MBModularAssetData_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FModularBuildingAssetData::StaticStruct, Z_Construct_UScriptStruct_FModularBuildingAssetData_Statics::NewStructOps, TEXT("ModularBuildingAssetData"), &Z_Registration_Info_UScriptStruct_ModularBuildingAssetData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FModularBuildingAssetData), 1407946888U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Data_MBModularAssetData_h_1480401179(TEXT("/Script/ModularBuilding"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Data_MBModularAssetData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Data_MBModularAssetData_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
