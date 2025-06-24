// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/ASSplineSlot.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUTOSPLINEEDITOR_ASSplineSlot_generated_h
#error "ASSplineSlot.generated.h already included, missing '#pragma once' in ASSplineSlot.h"
#endif
#define AUTOSPLINEEDITOR_ASSplineSlot_generated_h

#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_AutoSplineEditor_Public_UI_ASSplineSlot_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSelectionCheckboxChanged); \
	DECLARE_FUNCTION(execSplineNameTextBoxCommitted); \
	DECLARE_FUNCTION(execRenameBtnPressed); \
	DECLARE_FUNCTION(execSeeSplineBtnPressed);


#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_AutoSplineEditor_Public_UI_ASSplineSlot_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUASSplineSlot(); \
	friend struct Z_Construct_UClass_UASSplineSlot_Statics; \
public: \
	DECLARE_CLASS(UASSplineSlot, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AutoSplineEditor"), NO_API) \
	DECLARE_SERIALIZER(UASSplineSlot)


#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_AutoSplineEditor_Public_UI_ASSplineSlot_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UASSplineSlot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UASSplineSlot(UASSplineSlot&&); \
	UASSplineSlot(const UASSplineSlot&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UASSplineSlot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UASSplineSlot); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UASSplineSlot) \
	NO_API virtual ~UASSplineSlot();


#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_AutoSplineEditor_Public_UI_ASSplineSlot_h_14_PROLOG
#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_AutoSplineEditor_Public_UI_ASSplineSlot_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_UltimateLevelArtTool_Source_AutoSplineEditor_Public_UI_ASSplineSlot_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_UltimateLevelArtTool_Source_AutoSplineEditor_Public_UI_ASSplineSlot_h_17_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_UltimateLevelArtTool_Source_AutoSplineEditor_Public_UI_ASSplineSlot_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUTOSPLINEEDITOR_API UClass* StaticClass<class UASSplineSlot>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_UltimateLevelArtTool_Source_AutoSplineEditor_Public_UI_ASSplineSlot_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
