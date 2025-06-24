// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/MBCollectionWindow.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MODULARBUILDING_MBCollectionWindow_generated_h
#error "MBCollectionWindow.generated.h already included, missing '#pragma once' in MBCollectionWindow.h"
#endif
#define MODULARBUILDING_MBCollectionWindow_generated_h

#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBCollectionWindow_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnTitleTextBoxCommitted); \
	DECLARE_FUNCTION(execOnActorSlotPressed); \
	DECLARE_FUNCTION(execDeleteCollectionBtnPressed); \
	DECLARE_FUNCTION(execSingleConvertToBtnPressed); \
	DECLARE_FUNCTION(execMergeCollectionBtnPressed); \
	DECLARE_FUNCTION(execCreateBlueprintBtnPressed); \
	DECLARE_FUNCTION(execSelectCollectionTransportBtnPressed); \
	DECLARE_FUNCTION(execSelectAllBtnPressed);


#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBCollectionWindow_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMBCollectionWindow(); \
	friend struct Z_Construct_UClass_UMBCollectionWindow_Statics; \
public: \
	DECLARE_CLASS(UMBCollectionWindow, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ModularBuilding"), NO_API) \
	DECLARE_SERIALIZER(UMBCollectionWindow)


#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBCollectionWindow_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMBCollectionWindow(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMBCollectionWindow(UMBCollectionWindow&&); \
	UMBCollectionWindow(const UMBCollectionWindow&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMBCollectionWindow); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMBCollectionWindow); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMBCollectionWindow) \
	NO_API virtual ~UMBCollectionWindow();


#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBCollectionWindow_h_18_PROLOG
#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBCollectionWindow_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBCollectionWindow_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBCollectionWindow_h_21_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBCollectionWindow_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MODULARBUILDING_API UClass* StaticClass<class UMBCollectionWindow>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBCollectionWindow_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
