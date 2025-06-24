// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/LTNumericEntry.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LIGHTINGTOOL_LTNumericEntry_generated_h
#error "LTNumericEntry.generated.h already included, missing '#pragma once' in LTNumericEntry.h"
#endif
#define LIGHTINGTOOL_LTNumericEntry_generated_h

#define FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_UI_LTNumericEntry_h_11_DELEGATE \
LIGHTINGTOOL_API void FOnValueChanged_DelegateWrapper(const FMulticastScriptDelegate& OnValueChanged, float OutValue);


#define FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_UI_LTNumericEntry_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetInitialValue);


#define FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_UI_LTNumericEntry_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULTNumericEntry(); \
	friend struct Z_Construct_UClass_ULTNumericEntry_Statics; \
public: \
	DECLARE_CLASS(ULTNumericEntry, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LightingTool"), NO_API) \
	DECLARE_SERIALIZER(ULTNumericEntry)


#define FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_UI_LTNumericEntry_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULTNumericEntry(ULTNumericEntry&&); \
	ULTNumericEntry(const ULTNumericEntry&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULTNumericEntry); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULTNumericEntry); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULTNumericEntry) \
	NO_API virtual ~ULTNumericEntry();


#define FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_UI_LTNumericEntry_h_15_PROLOG
#define FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_UI_LTNumericEntry_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_UI_LTNumericEntry_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_UI_LTNumericEntry_h_18_INCLASS_NO_PURE_DECLS \
	FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_UI_LTNumericEntry_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIGHTINGTOOL_API UClass* StaticClass<class ULTNumericEntry>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_UI_LTNumericEntry_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
