// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/MAToolWindow.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MATERIALASSIGNMENT_MAToolWindow_generated_h
#error "MAToolWindow.generated.h already included, missing '#pragma once' in MAToolWindow.h"
#endif
#define MATERIALASSIGNMENT_MAToolWindow_generated_h

#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_MaterialAssignment_Public_UI_MAToolWindow_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execApplyAllBtnPressed);


#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_MaterialAssignment_Public_UI_MAToolWindow_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMAToolWindow(); \
	friend struct Z_Construct_UClass_UMAToolWindow_Statics; \
public: \
	DECLARE_CLASS(UMAToolWindow, UEditorUtilityWidget, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MaterialAssignment"), NO_API) \
	DECLARE_SERIALIZER(UMAToolWindow) \
	virtual UObject* _getUObject() const override { return const_cast<UMAToolWindow*>(this); }


#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_MaterialAssignment_Public_UI_MAToolWindow_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMAToolWindow(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMAToolWindow(UMAToolWindow&&); \
	UMAToolWindow(const UMAToolWindow&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMAToolWindow); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMAToolWindow); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMAToolWindow) \
	NO_API virtual ~UMAToolWindow();


#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_MaterialAssignment_Public_UI_MAToolWindow_h_25_PROLOG
#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_MaterialAssignment_Public_UI_MAToolWindow_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_UltimateLevelArtTool_Source_MaterialAssignment_Public_UI_MAToolWindow_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_UltimateLevelArtTool_Source_MaterialAssignment_Public_UI_MAToolWindow_h_28_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_UltimateLevelArtTool_Source_MaterialAssignment_Public_UI_MAToolWindow_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MATERIALASSIGNMENT_API UClass* StaticClass<class UMAToolWindow>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_UltimateLevelArtTool_Source_MaterialAssignment_Public_UI_MAToolWindow_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
