// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/LTData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LIGHTINGTOOL_LTData_generated_h
#error "LTData.generated.h already included, missing '#pragma once' in LTData.h"
#endif
#define LIGHTINGTOOL_LTData_generated_h

#define FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_Data_LTData_h_43_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLTAssetViewData_Statics; \
	LIGHTINGTOOL_API static class UScriptStruct* StaticStruct();


template<> LIGHTINGTOOL_API UScriptStruct* StaticStruct<struct FLTAssetViewData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_Data_LTData_h


#define FOREACH_ENUM_ELTLIGHTINGTOOLTYPE(op) \
	op(ELTLightingToolType::None) \
	op(ELTLightingToolType::LightMapTool) \
	op(ELTLightingToolType::LightsTool) \
	op(ELTLightingToolType::LightRenderTool) \
	op(ELTLightingToolType::HDRIManager) 

enum class ELTLightingToolType : uint8;
template<> struct TIsUEnumClass<ELTLightingToolType> { enum { Value = true }; };
template<> LIGHTINGTOOL_API UEnum* StaticEnum<ELTLightingToolType>();

#define FOREACH_ENUM_ELTLIGHTMAPPRESET(op) \
	op(ELTLightmapPreset::None) \
	op(ELTLightmapPreset::BestPerformance) \
	op(ELTLightmapPreset::Performance) \
	op(ELTLightmapPreset::Quality) \
	op(ELTLightmapPreset::BestQuality) 

enum class ELTLightmapPreset : uint8;
template<> struct TIsUEnumClass<ELTLightmapPreset> { enum { Value = true }; };
template<> LIGHTINGTOOL_API UEnum* StaticEnum<ELTLightmapPreset>();

#define FOREACH_ENUM_ELTLIGHTTYPE(op) \
	op(ELTLightType::None) \
	op(ELTLightType::Standard) \
	op(ELTLightType::Flickering) \
	op(ELTLightType::Breathing) 

enum class ELTLightType : uint8;
template<> struct TIsUEnumClass<ELTLightType> { enum { Value = true }; };
template<> LIGHTINGTOOL_API UEnum* StaticEnum<ELTLightType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
