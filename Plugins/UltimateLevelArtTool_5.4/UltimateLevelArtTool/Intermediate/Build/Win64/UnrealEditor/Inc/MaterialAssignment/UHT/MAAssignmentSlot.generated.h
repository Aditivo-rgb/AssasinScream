// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/MAAssignmentSlot.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MATERIALASSIGNMENT_MAAssignmentSlot_generated_h
#error "MAAssignmentSlot.generated.h already included, missing '#pragma once' in MAAssignmentSlot.h"
#endif
#define MATERIALASSIGNMENT_MAAssignmentSlot_generated_h

#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_MaterialAssignment_Public_UI_MAAssignmentSlot_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnSlotNameTextCommitted); \
	DECLARE_FUNCTION(execDeleteBtnPressed); \
	DECLARE_FUNCTION(execQuickAssignBtnPressed); \
	DECLARE_FUNCTION(execApplyBtnPressed);


#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_MaterialAssignment_Public_UI_MAAssignmentSlot_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMAAssignmentSlot(); \
	friend struct Z_Construct_UClass_UMAAssignmentSlot_Statics; \
public: \
	DECLARE_CLASS(UMAAssignmentSlot, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MaterialAssignment"), NO_API) \
	DECLARE_SERIALIZER(UMAAssignmentSlot)


#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_MaterialAssignment_Public_UI_MAAssignmentSlot_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMAAssignmentSlot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMAAssignmentSlot(UMAAssignmentSlot&&); \
	UMAAssignmentSlot(const UMAAssignmentSlot&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMAAssignmentSlot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMAAssignmentSlot); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMAAssignmentSlot) \
	NO_API virtual ~UMAAssignmentSlot();


#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_MaterialAssignment_Public_UI_MAAssignmentSlot_h_17_PROLOG
#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_MaterialAssignment_Public_UI_MAAssignmentSlot_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_UltimateLevelArtTool_Source_MaterialAssignment_Public_UI_MAAssignmentSlot_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_UltimateLevelArtTool_Source_MaterialAssignment_Public_UI_MAAssignmentSlot_h_20_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_UltimateLevelArtTool_Source_MaterialAssignment_Public_UI_MAAssignmentSlot_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MATERIALASSIGNMENT_API UClass* StaticClass<class UMAAssignmentSlot>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_UltimateLevelArtTool_Source_MaterialAssignment_Public_UI_MAAssignmentSlot_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
