// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/LGLightData.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LIGHTINGGAME_LGLightData_generated_h
#error "LGLightData.generated.h already included, missing '#pragma once' in LGLightData.h"
#endif
#define LIGHTINGGAME_LGLightData_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingGame_Public_Data_LGLightData_h


#define FOREACH_ENUM_ELGLIGHTTYPES(op) \
	op(ELGLightTypes::PointLight) \
	op(ELGLightTypes::RectLight) \
	op(ELGLightTypes::SpotLight) 

enum class ELGLightTypes : uint8;
template<> struct TIsUEnumClass<ELGLightTypes> { enum { Value = true }; };
template<> LIGHTINGGAME_API UEnum* StaticEnum<ELGLightTypes>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
