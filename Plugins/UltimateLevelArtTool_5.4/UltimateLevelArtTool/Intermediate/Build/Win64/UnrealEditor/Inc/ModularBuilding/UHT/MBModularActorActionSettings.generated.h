// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/MBModularActorActionSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MODULARBUILDING_MBModularActorActionSettings_generated_h
#error "MBModularActorActionSettings.generated.h already included, missing '#pragma once' in MBModularActorActionSettings.h"
#endif
#define MODULARBUILDING_MBModularActorActionSettings_generated_h

#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBModularActorActionSettings_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRectangleCheckChanged); \
	DECLARE_FUNCTION(execOnHoleCheckChanged); \
	DECLARE_FUNCTION(execOnZDirCheckChanged); \
	DECLARE_FUNCTION(execOnYDirCheckChanged); \
	DECLARE_FUNCTION(execOnXDirCheckChanged); \
	DECLARE_FUNCTION(execOnZDupOffsetCommitted); \
	DECLARE_FUNCTION(execOnYDupOffsetCommitted); \
	DECLARE_FUNCTION(execOnXDupOffsetCommitted); \
	DECLARE_FUNCTION(execOnZDupTextCommitted); \
	DECLARE_FUNCTION(execOnYDupTextCommitted); \
	DECLARE_FUNCTION(execOnXDupTextCommitted); \
	DECLARE_FUNCTION(execResetDupBtnPressed); \
	DECLARE_FUNCTION(execApplyBtnPressed);


#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBModularActorActionSettings_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMBModularActorActionSettings(); \
	friend struct Z_Construct_UClass_UMBModularActorActionSettings_Statics; \
public: \
	DECLARE_CLASS(UMBModularActorActionSettings, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ModularBuilding"), NO_API) \
	DECLARE_SERIALIZER(UMBModularActorActionSettings)


#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBModularActorActionSettings_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMBModularActorActionSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMBModularActorActionSettings(UMBModularActorActionSettings&&); \
	UMBModularActorActionSettings(const UMBModularActorActionSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMBModularActorActionSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMBModularActorActionSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMBModularActorActionSettings) \
	NO_API virtual ~UMBModularActorActionSettings();


#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBModularActorActionSettings_h_16_PROLOG
#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBModularActorActionSettings_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBModularActorActionSettings_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBModularActorActionSettings_h_19_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBModularActorActionSettings_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MODULARBUILDING_API UClass* StaticClass<class UMBModularActorActionSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBModularActorActionSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
