// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LightingGame/Public/Data/LGLightData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLGLightData() {}

// Begin Cross Module References
LIGHTINGGAME_API UEnum* Z_Construct_UEnum_LightingGame_ELGLightTypes();
UPackage* Z_Construct_UPackage__Script_LightingGame();
// End Cross Module References

// Begin Enum ELGLightTypes
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELGLightTypes;
static UEnum* ELGLightTypes_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELGLightTypes.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELGLightTypes.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LightingGame_ELGLightTypes, (UObject*)Z_Construct_UPackage__Script_LightingGame(), TEXT("ELGLightTypes"));
	}
	return Z_Registration_Info_UEnum_ELGLightTypes.OuterSingleton;
}
template<> LIGHTINGGAME_API UEnum* StaticEnum<ELGLightTypes>()
{
	return ELGLightTypes_StaticEnum();
}
struct Z_Construct_UEnum_LightingGame_ELGLightTypes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Lighting Tool" },
		{ "ModuleRelativePath", "Public/Data/LGLightData.h" },
		{ "PointLight.DisplayName", "Point Light" },
		{ "PointLight.Name", "ELGLightTypes::PointLight" },
		{ "RectLight.DisplayName", "Rect Light" },
		{ "RectLight.Name", "ELGLightTypes::RectLight" },
		{ "SpotLight.DisplayName", "Spot Light" },
		{ "SpotLight.Name", "ELGLightTypes::SpotLight" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELGLightTypes::PointLight", (int64)ELGLightTypes::PointLight },
		{ "ELGLightTypes::RectLight", (int64)ELGLightTypes::RectLight },
		{ "ELGLightTypes::SpotLight", (int64)ELGLightTypes::SpotLight },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LightingGame_ELGLightTypes_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_LightingGame,
	nullptr,
	"ELGLightTypes",
	"ELGLightTypes",
	Z_Construct_UEnum_LightingGame_ELGLightTypes_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_LightingGame_ELGLightTypes_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_LightingGame_ELGLightTypes_Statics::Enum_MetaDataParams), Z_Construct_UEnum_LightingGame_ELGLightTypes_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_LightingGame_ELGLightTypes()
{
	if (!Z_Registration_Info_UEnum_ELGLightTypes.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELGLightTypes.InnerSingleton, Z_Construct_UEnum_LightingGame_ELGLightTypes_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELGLightTypes.InnerSingleton;
}
// End Enum ELGLightTypes

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingGame_Public_Data_LGLightData_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ELGLightTypes_StaticEnum, TEXT("ELGLightTypes"), &Z_Registration_Info_UEnum_ELGLightTypes, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 943561389U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingGame_Public_Data_LGLightData_h_627112519(TEXT("/Script/LightingGame"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingGame_Public_Data_LGLightData_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingGame_Public_Data_LGLightData_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
