// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/MBMainScreen.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MODULARBUILDING_MBMainScreen_generated_h
#error "MBMainScreen.generated.h already included, missing '#pragma once' in MBMainScreen.h"
#endif
#define MODULARBUILDING_MBMainScreen_generated_h

#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBMainScreen_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnNewAssetsAddedToTool); \
	DECLARE_FUNCTION(execLeartesBtnPressed); \
	DECLARE_FUNCTION(execSettingsBtnPressed); \
	DECLARE_FUNCTION(execPropCategoryBtnPressed); \
	DECLARE_FUNCTION(execModularCategoryBtnPressed);


#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBMainScreen_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMBMainScreen(); \
	friend struct Z_Construct_UClass_UMBMainScreen_Statics; \
public: \
	DECLARE_CLASS(UMBMainScreen, UEditorUtilityWidget, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ModularBuilding"), NO_API) \
	DECLARE_SERIALIZER(UMBMainScreen) \
	virtual UObject* _getUObject() const override { return const_cast<UMBMainScreen*>(this); }


#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBMainScreen_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMBMainScreen(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMBMainScreen(UMBMainScreen&&); \
	UMBMainScreen(const UMBMainScreen&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMBMainScreen); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMBMainScreen); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMBMainScreen) \
	NO_API virtual ~UMBMainScreen();


#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBMainScreen_h_22_PROLOG
#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBMainScreen_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBMainScreen_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBMainScreen_h_25_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBMainScreen_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MODULARBUILDING_API UClass* StaticClass<class UMBMainScreen>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBMainScreen_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
