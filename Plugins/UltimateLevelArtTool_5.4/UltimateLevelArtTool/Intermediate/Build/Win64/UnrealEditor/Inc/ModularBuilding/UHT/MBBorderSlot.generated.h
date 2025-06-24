// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Slate/MBBorderSlot.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMargin;
#ifdef MODULARBUILDING_MBBorderSlot_generated_h
#error "MBBorderSlot.generated.h already included, missing '#pragma once' in MBBorderSlot.h"
#endif
#define MODULARBUILDING_MBBorderSlot_generated_h

#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Slate_MBBorderSlot_h_22_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetVerticalAlignment); \
	DECLARE_FUNCTION(execSetHorizontalAlignment); \
	DECLARE_FUNCTION(execSetPadding);


#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Slate_MBBorderSlot_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUMBBorderSlot(); \
	friend struct Z_Construct_UClass_UMBBorderSlot_Statics; \
public: \
	DECLARE_CLASS(UMBBorderSlot, UPanelSlot, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ModularBuilding"), NO_API) \
	DECLARE_SERIALIZER(UMBBorderSlot)


#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Slate_MBBorderSlot_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMBBorderSlot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMBBorderSlot) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMBBorderSlot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMBBorderSlot); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMBBorderSlot(UMBBorderSlot&&); \
	UMBBorderSlot(const UMBBorderSlot&); \
public: \
	NO_API virtual ~UMBBorderSlot();


#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Slate_MBBorderSlot_h_19_PROLOG
#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Slate_MBBorderSlot_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Slate_MBBorderSlot_h_22_RPC_WRAPPERS \
	FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Slate_MBBorderSlot_h_22_INCLASS \
	FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Slate_MBBorderSlot_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MODULARBUILDING_API UClass* StaticClass<class UMBBorderSlot>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Slate_MBBorderSlot_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
