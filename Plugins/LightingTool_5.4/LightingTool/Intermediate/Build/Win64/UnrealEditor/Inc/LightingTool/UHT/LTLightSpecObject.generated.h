// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/LTLightSpecObject.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LIGHTINGTOOL_LTLightSpecObject_generated_h
#error "LTLightSpecObject.generated.h already included, missing '#pragma once' in LTLightSpecObject.h"
#endif
#define LIGHTINGTOOL_LTLightSpecObject_generated_h

#define FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_Data_LTLightSpecObject_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execLoadLightSpecData); \
	DECLARE_FUNCTION(execSaveLightSpecData); \
	DECLARE_FUNCTION(execSetUserIESProfilePath); \
	DECLARE_FUNCTION(execGetUserIESProfilePath); \
	DECLARE_FUNCTION(execSetUserMaskPath); \
	DECLARE_FUNCTION(execGetUserMaskPath);


#define FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_Data_LTLightSpecObject_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULTLightSpecObject(); \
	friend struct Z_Construct_UClass_ULTLightSpecObject_Statics; \
public: \
	DECLARE_CLASS(ULTLightSpecObject, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LightingTool"), NO_API) \
	DECLARE_SERIALIZER(ULTLightSpecObject) \
	static const TCHAR* StaticConfigName() {return TEXT("LightsToolData");} \



#define FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_Data_LTLightSpecObject_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULTLightSpecObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULTLightSpecObject(ULTLightSpecObject&&); \
	ULTLightSpecObject(const ULTLightSpecObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULTLightSpecObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULTLightSpecObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULTLightSpecObject) \
	NO_API virtual ~ULTLightSpecObject();


#define FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_Data_LTLightSpecObject_h_12_PROLOG
#define FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_Data_LTLightSpecObject_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_Data_LTLightSpecObject_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_Data_LTLightSpecObject_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_Data_LTLightSpecObject_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIGHTINGTOOL_API UClass* StaticClass<class ULTLightSpecObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_Data_LTLightSpecObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
