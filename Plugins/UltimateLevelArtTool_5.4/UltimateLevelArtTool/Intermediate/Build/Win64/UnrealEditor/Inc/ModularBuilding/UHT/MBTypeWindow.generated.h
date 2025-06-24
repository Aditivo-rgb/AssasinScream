// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/MBTypeWindow.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MODULARBUILDING_MBTypeWindow_generated_h
#error "MBTypeWindow.generated.h already included, missing '#pragma once' in MBTypeWindow.h"
#endif
#define MODULARBUILDING_MBTypeWindow_generated_h

#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBTypeWindow_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDeleteBtnPressed); \
	DECLARE_FUNCTION(execTypeDownBtnPressed); \
	DECLARE_FUNCTION(execTypeUpBtnPressed); \
	DECLARE_FUNCTION(execOnTitleTextBoxCommitted);


#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBTypeWindow_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMBTypeWindow(); \
	friend struct Z_Construct_UClass_UMBTypeWindow_Statics; \
public: \
	DECLARE_CLASS(UMBTypeWindow, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ModularBuilding"), NO_API) \
	DECLARE_SERIALIZER(UMBTypeWindow)


#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBTypeWindow_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMBTypeWindow(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMBTypeWindow(UMBTypeWindow&&); \
	UMBTypeWindow(const UMBTypeWindow&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMBTypeWindow); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMBTypeWindow); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMBTypeWindow) \
	NO_API virtual ~UMBTypeWindow();


#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBTypeWindow_h_20_PROLOG
#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBTypeWindow_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBTypeWindow_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBTypeWindow_h_23_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBTypeWindow_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MODULARBUILDING_API UClass* StaticClass<class UMBTypeWindow>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBTypeWindow_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
