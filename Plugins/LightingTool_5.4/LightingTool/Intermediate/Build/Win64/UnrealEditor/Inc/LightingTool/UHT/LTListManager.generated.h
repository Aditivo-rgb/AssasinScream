// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/LTListManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LIGHTINGTOOL_LTListManager_generated_h
#error "LTListManager.generated.h already included, missing '#pragma once' in LTListManager.h"
#endif
#define LIGHTINGTOOL_LTListManager_generated_h

#define FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_UI_LTListManager_h_10_DELEGATE \
LIGHTINGTOOL_API void FOnItemSelected_DelegateWrapper(const FMulticastScriptDelegate& OnItemSelected, FName OutItemName);


#define FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_UI_LTListManager_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetSelectedItemName); \
	DECLARE_FUNCTION(execChangeSelectedItemName); \
	DECLARE_FUNCTION(execReGenerateItemList); \
	DECLARE_FUNCTION(execSwitchToNextItem);


#define FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_UI_LTListManager_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULTListManager(); \
	friend struct Z_Construct_UClass_ULTListManager_Statics; \
public: \
	DECLARE_CLASS(ULTListManager, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LightingTool"), NO_API) \
	DECLARE_SERIALIZER(ULTListManager)


#define FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_UI_LTListManager_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULTListManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULTListManager(ULTListManager&&); \
	ULTListManager(const ULTListManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULTListManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULTListManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULTListManager) \
	NO_API virtual ~ULTListManager();


#define FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_UI_LTListManager_h_13_PROLOG
#define FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_UI_LTListManager_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_UI_LTListManager_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_UI_LTListManager_h_16_INCLASS_NO_PURE_DECLS \
	FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_UI_LTListManager_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIGHTINGTOOL_API UClass* StaticClass<class ULTListManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_UI_LTListManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
