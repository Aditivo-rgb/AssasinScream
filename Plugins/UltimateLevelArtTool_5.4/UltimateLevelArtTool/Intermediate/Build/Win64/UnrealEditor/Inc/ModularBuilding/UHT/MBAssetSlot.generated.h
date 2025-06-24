// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/MBAssetSlot.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MODULARBUILDING_MBAssetSlot_generated_h
#error "MBAssetSlot.generated.h already included, missing '#pragma once' in MBAssetSlot.h"
#endif
#define MODULARBUILDING_MBAssetSlot_generated_h

#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBAssetSlot_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetSelectionState); \
	DECLARE_FUNCTION(execAssetSelectionBtnPressed);


#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBAssetSlot_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMBAssetSlot(); \
	friend struct Z_Construct_UClass_UMBAssetSlot_Statics; \
public: \
	DECLARE_CLASS(UMBAssetSlot, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ModularBuilding"), NO_API) \
	DECLARE_SERIALIZER(UMBAssetSlot)


#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBAssetSlot_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMBAssetSlot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMBAssetSlot(UMBAssetSlot&&); \
	UMBAssetSlot(const UMBAssetSlot&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMBAssetSlot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMBAssetSlot); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMBAssetSlot) \
	NO_API virtual ~UMBAssetSlot();


#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBAssetSlot_h_13_PROLOG
#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBAssetSlot_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBAssetSlot_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBAssetSlot_h_16_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBAssetSlot_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MODULARBUILDING_API UClass* StaticClass<class UMBAssetSlot>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBAssetSlot_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
