// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/LTAssetEntry.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LIGHTINGTOOL_LTAssetEntry_generated_h
#error "LTAssetEntry.generated.h already included, missing '#pragma once' in LTAssetEntry.h"
#endif
#define LIGHTINGTOOL_LTAssetEntry_generated_h

#define FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_UI_LTAssetEntry_h_11_DELEGATE \
LIGHTINGTOOL_API void FOnAssetViewDataChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnAssetViewDataChangedSignature);


#define FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_UI_LTAssetEntry_h_12_DELEGATE \
LIGHTINGTOOL_API void FOnCoordIndexSubmittedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnCoordIndexSubmittedSignature, FName InObjectPath, int32 InIndex);


#define FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_UI_LTAssetEntry_h_13_DELEGATE \
LIGHTINGTOOL_API void FOnResolutionSubmittedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnResolutionSubmittedSignature, FName InObjectPath, int32 InResolution);


#define FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_UI_LTAssetEntry_h_14_DELEGATE \
LIGHTINGTOOL_API void FOnNewAssetParamSubmittedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnNewAssetParamSubmittedSignature, bool IsItForResolution, int32 InResolution);


#define FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_UI_LTAssetEntry_h_15_DELEGATE \
LIGHTINGTOOL_API void FOnEntryClickedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnEntryClickedSignature, int32 EntryIndex, bool IsControlDown, bool IsShiftDown);


#define FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_UI_LTAssetEntry_h_16_DELEGATE \
LIGHTINGTOOL_API void FOnListViewAssetSelectionChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnListViewAssetSelectionChangedSignature, bool NewSelection);


#define FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_UI_LTAssetEntry_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULTAssetEntry(); \
	friend struct Z_Construct_UClass_ULTAssetEntry_Statics; \
public: \
	DECLARE_CLASS(ULTAssetEntry, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LightingTool"), NO_API) \
	DECLARE_SERIALIZER(ULTAssetEntry)


#define FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_UI_LTAssetEntry_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULTAssetEntry(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULTAssetEntry(ULTAssetEntry&&); \
	ULTAssetEntry(const ULTAssetEntry&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULTAssetEntry); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULTAssetEntry); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULTAssetEntry) \
	NO_API virtual ~ULTAssetEntry();


#define FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_UI_LTAssetEntry_h_18_PROLOG
#define FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_UI_LTAssetEntry_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_UI_LTAssetEntry_h_21_INCLASS_NO_PURE_DECLS \
	FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_UI_LTAssetEntry_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIGHTINGTOOL_API UClass* StaticClass<class ULTAssetEntry>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_UI_LTAssetEntry_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
