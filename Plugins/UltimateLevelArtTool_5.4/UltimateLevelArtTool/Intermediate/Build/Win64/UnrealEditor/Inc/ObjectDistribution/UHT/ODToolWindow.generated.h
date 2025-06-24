// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/ODToolWindow.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef OBJECTDISTRIBUTION_ODToolWindow_generated_h
#error "ODToolWindow.generated.h already included, missing '#pragma once' in ODToolWindow.h"
#endif
#define OBJECTDISTRIBUTION_ODToolWindow_generated_h

#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_ObjectDistribution_Public_UI_ODToolWindow_h_12_DELEGATE \
OBJECTDISTRIBUTION_API void FOnLevelActorDeletedNativeSignature_DelegateWrapper(const FMulticastScriptDelegate& OnLevelActorDeletedNativeSignature, AActor* Actor);


#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_ObjectDistribution_Public_UI_ODToolWindow_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnObjectSlotPressed); \
	DECLARE_FUNCTION(execRebuildPalette); \
	DECLARE_FUNCTION(execOnPresetLoaded); \
	DECLARE_FUNCTION(execFinishBtnPressed); \
	DECLARE_FUNCTION(execPaletteBackgroundBtnPressed); \
	DECLARE_FUNCTION(execOnSaveAsTextCommitted); \
	DECLARE_FUNCTION(execOnRenamePresetTextCommitted); \
	DECLARE_FUNCTION(execOnAddAssetsTextCommitted); \
	DECLARE_FUNCTION(execOnNewPresetTextCommitted); \
	DECLARE_FUNCTION(execSaveAsNewPresetBtnPressed); \
	DECLARE_FUNCTION(execSavePresetBtnPressed); \
	DECLARE_FUNCTION(execRemovePresetBtnPressed); \
	DECLARE_FUNCTION(execRenamePresetBtnPressed); \
	DECLARE_FUNCTION(execAddSelectedAssetsBtnPressed); \
	DECLARE_FUNCTION(execAddNewPresetBtnPressed);


#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_ObjectDistribution_Public_UI_ODToolWindow_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUODToolWindow(); \
	friend struct Z_Construct_UClass_UODToolWindow_Statics; \
public: \
	DECLARE_CLASS(UODToolWindow, UEditorUtilityWidget, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ObjectDistribution"), NO_API) \
	DECLARE_SERIALIZER(UODToolWindow)


#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_ObjectDistribution_Public_UI_ODToolWindow_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UODToolWindow(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UODToolWindow(UODToolWindow&&); \
	UODToolWindow(const UODToolWindow&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UODToolWindow); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UODToolWindow); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UODToolWindow) \
	NO_API virtual ~UODToolWindow();


#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_ObjectDistribution_Public_UI_ODToolWindow_h_31_PROLOG
#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_ObjectDistribution_Public_UI_ODToolWindow_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_UltimateLevelArtTool_Source_ObjectDistribution_Public_UI_ODToolWindow_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_UltimateLevelArtTool_Source_ObjectDistribution_Public_UI_ODToolWindow_h_34_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_UltimateLevelArtTool_Source_ObjectDistribution_Public_UI_ODToolWindow_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OBJECTDISTRIBUTION_API UClass* StaticClass<class UODToolWindow>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_UltimateLevelArtTool_Source_ObjectDistribution_Public_UI_ODToolWindow_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
