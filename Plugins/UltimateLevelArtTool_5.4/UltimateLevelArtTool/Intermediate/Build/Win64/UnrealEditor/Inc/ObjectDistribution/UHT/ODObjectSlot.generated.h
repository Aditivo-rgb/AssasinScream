// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/ODObjectSlot.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OBJECTDISTRIBUTION_ODObjectSlot_generated_h
#error "ODObjectSlot.generated.h already included, missing '#pragma once' in ODObjectSlot.h"
#endif
#define OBJECTDISTRIBUTION_ODObjectSlot_generated_h

#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_ObjectDistribution_Public_UI_ODObjectSlot_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnActivateCheckBoxChanged); \
	DECLARE_FUNCTION(execSlotSelectBtnPressed);


#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_ObjectDistribution_Public_UI_ODObjectSlot_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUODObjectSlot(); \
	friend struct Z_Construct_UClass_UODObjectSlot_Statics; \
public: \
	DECLARE_CLASS(UODObjectSlot, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ObjectDistribution"), NO_API) \
	DECLARE_SERIALIZER(UODObjectSlot)


#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_ObjectDistribution_Public_UI_ODObjectSlot_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UODObjectSlot(UODObjectSlot&&); \
	UODObjectSlot(const UODObjectSlot&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UODObjectSlot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UODObjectSlot); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UODObjectSlot) \
	NO_API virtual ~UODObjectSlot();


#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_ObjectDistribution_Public_UI_ODObjectSlot_h_20_PROLOG
#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_ObjectDistribution_Public_UI_ODObjectSlot_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_UltimateLevelArtTool_Source_ObjectDistribution_Public_UI_ODObjectSlot_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_UltimateLevelArtTool_Source_ObjectDistribution_Public_UI_ODObjectSlot_h_23_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_UltimateLevelArtTool_Source_ObjectDistribution_Public_UI_ODObjectSlot_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OBJECTDISTRIBUTION_API UClass* StaticClass<class UODObjectSlot>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_UltimateLevelArtTool_Source_ObjectDistribution_Public_UI_ODObjectSlot_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
