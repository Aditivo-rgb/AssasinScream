// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/LTLightRenderData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LIGHTINGTOOL_LTLightRenderData_generated_h
#error "LTLightRenderData.generated.h already included, missing '#pragma once' in LTLightRenderData.h"
#endif
#define LIGHTINGTOOL_LTLightRenderData_generated_h

#define FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_Data_LTLightRenderData_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLightRenderData_Statics; \
	LIGHTINGTOOL_API static class UScriptStruct* StaticStruct();


template<> LIGHTINGTOOL_API UScriptStruct* StaticStruct<struct FLightRenderData>();

#define FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_Data_LTLightRenderData_h_110_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execLoadPresetData); \
	DECLARE_FUNCTION(execSavePresetData);


#define FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_Data_LTLightRenderData_h_110_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULTLightRenderData(); \
	friend struct Z_Construct_UClass_ULTLightRenderData_Statics; \
public: \
	DECLARE_CLASS(ULTLightRenderData, UDataAsset, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LightingTool"), NO_API) \
	DECLARE_SERIALIZER(ULTLightRenderData) \
	static const TCHAR* StaticConfigName() {return TEXT("LTLightRenderingSettings");} \



#define FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_Data_LTLightRenderData_h_110_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULTLightRenderData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULTLightRenderData(ULTLightRenderData&&); \
	ULTLightRenderData(const ULTLightRenderData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULTLightRenderData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULTLightRenderData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULTLightRenderData) \
	NO_API virtual ~ULTLightRenderData();


#define FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_Data_LTLightRenderData_h_107_PROLOG
#define FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_Data_LTLightRenderData_h_110_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_Data_LTLightRenderData_h_110_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_Data_LTLightRenderData_h_110_INCLASS_NO_PURE_DECLS \
	FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_Data_LTLightRenderData_h_110_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIGHTINGTOOL_API UClass* StaticClass<class ULTLightRenderData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_Data_LTLightRenderData_h


#define FOREACH_ENUM_ELIGHTRENDERPRESET(op) \
	op(ELightRenderPreset::Custom) \
	op(ELightRenderPreset::Lumen) \
	op(ELightRenderPreset::Static) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
