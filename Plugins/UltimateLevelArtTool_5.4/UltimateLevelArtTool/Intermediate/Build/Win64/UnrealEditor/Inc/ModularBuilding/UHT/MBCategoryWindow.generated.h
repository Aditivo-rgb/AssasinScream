// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/MBCategoryWindow.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MODULARBUILDING_MBCategoryWindow_generated_h
#error "MBCategoryWindow.generated.h already included, missing '#pragma once' in MBCategoryWindow.h"
#endif
#define MODULARBUILDING_MBCategoryWindow_generated_h

#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBCategoryWindow_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnAddNewTypeTextCommitted);


#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBCategoryWindow_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMBCategoryWindow(); \
	friend struct Z_Construct_UClass_UMBCategoryWindow_Statics; \
public: \
	DECLARE_CLASS(UMBCategoryWindow, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ModularBuilding"), NO_API) \
	DECLARE_SERIALIZER(UMBCategoryWindow)


#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBCategoryWindow_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMBCategoryWindow(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMBCategoryWindow(UMBCategoryWindow&&); \
	UMBCategoryWindow(const UMBCategoryWindow&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMBCategoryWindow); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMBCategoryWindow); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMBCategoryWindow) \
	NO_API virtual ~UMBCategoryWindow();


#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBCategoryWindow_h_17_PROLOG
#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBCategoryWindow_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBCategoryWindow_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBCategoryWindow_h_20_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBCategoryWindow_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MODULARBUILDING_API UClass* StaticClass<class UMBCategoryWindow>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBCategoryWindow_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
