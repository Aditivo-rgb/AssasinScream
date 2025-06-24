// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/LTEditorTimer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LIGHTINGTOOL_LTEditorTimer_generated_h
#error "LTEditorTimer.generated.h already included, missing '#pragma once' in LTEditorTimer.h"
#endif
#define LIGHTINGTOOL_LTEditorTimer_generated_h

#define FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_Data_LTEditorTimer_h_11_DELEGATE \
LIGHTINGTOOL_API void FLTEditorTimerFinishSignature_DelegateWrapper(const FMulticastScriptDelegate& LTEditorTimerFinishSignature);


#define FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_Data_LTEditorTimer_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execStopTimer); \
	DECLARE_FUNCTION(execStartTimer);


#define FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_Data_LTEditorTimer_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULTEditorTimer(); \
	friend struct Z_Construct_UClass_ULTEditorTimer_Statics; \
public: \
	DECLARE_CLASS(ULTEditorTimer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LightingTool"), NO_API) \
	DECLARE_SERIALIZER(ULTEditorTimer)


#define FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_Data_LTEditorTimer_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULTEditorTimer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULTEditorTimer(ULTEditorTimer&&); \
	ULTEditorTimer(const ULTEditorTimer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULTEditorTimer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULTEditorTimer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULTEditorTimer) \
	NO_API virtual ~ULTEditorTimer();


#define FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_Data_LTEditorTimer_h_12_PROLOG
#define FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_Data_LTEditorTimer_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_Data_LTEditorTimer_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_Data_LTEditorTimer_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_Data_LTEditorTimer_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIGHTINGTOOL_API UClass* StaticClass<class ULTEditorTimer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_Data_LTEditorTimer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
