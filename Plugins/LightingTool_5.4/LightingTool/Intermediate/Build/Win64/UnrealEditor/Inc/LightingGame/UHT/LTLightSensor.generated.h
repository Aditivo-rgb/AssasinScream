// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tools/LTLightSensor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LIGHTINGGAME_LTLightSensor_generated_h
#error "LTLightSensor.generated.h already included, missing '#pragma once' in LTLightSensor.h"
#endif
#define LIGHTINGGAME_LTLightSensor_generated_h

#define FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingGame_Public_Tools_LTLightSensor_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsPlayerMoving); \
	DECLARE_FUNCTION(execIsTargetInFOV);


#define FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingGame_Public_Tools_LTLightSensor_h_23_CALLBACK_WRAPPERS
#define FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingGame_Public_Tools_LTLightSensor_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALTLightSensor(); \
	friend struct Z_Construct_UClass_ALTLightSensor_Statics; \
public: \
	DECLARE_CLASS(ALTLightSensor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LightingGame"), NO_API) \
	DECLARE_SERIALIZER(ALTLightSensor)


#define FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingGame_Public_Tools_LTLightSensor_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ALTLightSensor(ALTLightSensor&&); \
	ALTLightSensor(const ALTLightSensor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALTLightSensor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALTLightSensor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALTLightSensor) \
	NO_API virtual ~ALTLightSensor();


#define FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingGame_Public_Tools_LTLightSensor_h_20_PROLOG
#define FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingGame_Public_Tools_LTLightSensor_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingGame_Public_Tools_LTLightSensor_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingGame_Public_Tools_LTLightSensor_h_23_CALLBACK_WRAPPERS \
	FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingGame_Public_Tools_LTLightSensor_h_23_INCLASS_NO_PURE_DECLS \
	FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingGame_Public_Tools_LTLightSensor_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIGHTINGGAME_API UClass* StaticClass<class ALTLightSensor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingGame_Public_Tools_LTLightSensor_h


#define FOREACH_ENUM_ELIGHTSENSORBEHAVIOR(op) \
	op(ELightSensorBehavior::Permanent) \
	op(ELightSensorBehavior::OnOff) \
	op(ELightSensorBehavior::Timer) 

enum class ELightSensorBehavior : uint8;
template<> struct TIsUEnumClass<ELightSensorBehavior> { enum { Value = true }; };
template<> LIGHTINGGAME_API UEnum* StaticEnum<ELightSensorBehavior>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
