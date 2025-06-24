// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/MBCollectionButton.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MODULARBUILDING_MBCollectionButton_generated_h
#error "MBCollectionButton.generated.h already included, missing '#pragma once' in MBCollectionButton.h"
#endif
#define MODULARBUILDING_MBCollectionButton_generated_h

#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBCollectionButton_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnTimerFinished); \
	DECLARE_FUNCTION(execModularCollectionBtnPressed); \
	DECLARE_FUNCTION(execSetSelectionState);


#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBCollectionButton_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMBCollectionButton(); \
	friend struct Z_Construct_UClass_UMBCollectionButton_Statics; \
public: \
	DECLARE_CLASS(UMBCollectionButton, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ModularBuilding"), NO_API) \
	DECLARE_SERIALIZER(UMBCollectionButton)


#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBCollectionButton_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMBCollectionButton(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMBCollectionButton(UMBCollectionButton&&); \
	UMBCollectionButton(const UMBCollectionButton&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMBCollectionButton); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMBCollectionButton); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMBCollectionButton) \
	NO_API virtual ~UMBCollectionButton();


#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBCollectionButton_h_12_PROLOG
#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBCollectionButton_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBCollectionButton_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBCollectionButton_h_15_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBCollectionButton_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MODULARBUILDING_API UClass* StaticClass<class UMBCollectionButton>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBCollectionButton_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
