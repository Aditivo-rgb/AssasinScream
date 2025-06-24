// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/ASToolWindow.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUTOSPLINEEDITOR_ASToolWindow_generated_h
#error "ASToolWindow.generated.h already included, missing '#pragma once' in ASToolWindow.h"
#endif
#define AUTOSPLINEEDITOR_ASToolWindow_generated_h

#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_AutoSplineEditor_Public_UI_ASToolWindow_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSelectAllCheckboxChanged); \
	DECLARE_FUNCTION(execCreateBtnPressed); \
	DECLARE_FUNCTION(execSelectBtnPressed); \
	DECLARE_FUNCTION(execViewClassDistBtnPressed); \
	DECLARE_FUNCTION(execViewMeshDistBtnPressed); \
	DECLARE_FUNCTION(execViewDeformableBtnPressed); \
	DECLARE_FUNCTION(execClassDistributionBtnPressed); \
	DECLARE_FUNCTION(execMeshDistributionBtnPressed); \
	DECLARE_FUNCTION(execDeformableBtnPressed);


#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_AutoSplineEditor_Public_UI_ASToolWindow_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUASToolWindow(); \
	friend struct Z_Construct_UClass_UASToolWindow_Statics; \
public: \
	DECLARE_CLASS(UASToolWindow, UEditorUtilityWidget, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AutoSplineEditor"), NO_API) \
	DECLARE_SERIALIZER(UASToolWindow)


#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_AutoSplineEditor_Public_UI_ASToolWindow_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UASToolWindow(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UASToolWindow(UASToolWindow&&); \
	UASToolWindow(const UASToolWindow&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UASToolWindow); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UASToolWindow); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UASToolWindow) \
	NO_API virtual ~UASToolWindow();


#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_AutoSplineEditor_Public_UI_ASToolWindow_h_23_PROLOG
#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_AutoSplineEditor_Public_UI_ASToolWindow_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_UltimateLevelArtTool_Source_AutoSplineEditor_Public_UI_ASToolWindow_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_UltimateLevelArtTool_Source_AutoSplineEditor_Public_UI_ASToolWindow_h_26_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_UltimateLevelArtTool_Source_AutoSplineEditor_Public_UI_ASToolWindow_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUTOSPLINEEDITOR_API UClass* StaticClass<class UASToolWindow>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_UltimateLevelArtTool_Source_AutoSplineEditor_Public_UI_ASToolWindow_h


#define FOREACH_ENUM_EAUTOSPLINEEDITORTYPE(op) \
	op(EAutoSplineEditorType::None) \
	op(EAutoSplineEditorType::Deformable) \
	op(EAutoSplineEditorType::SMDistribution) \
	op(EAutoSplineEditorType::CCDistribution) 

enum class EAutoSplineEditorType : uint8;
template<> struct TIsUEnumClass<EAutoSplineEditorType> { enum { Value = true }; };
template<> AUTOSPLINEEDITOR_API UEnum* StaticEnum<EAutoSplineEditorType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
