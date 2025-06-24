// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/MBModActorSlot.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MODULARBUILDING_MBModActorSlot_generated_h
#error "MBModActorSlot.generated.h already included, missing '#pragma once' in MBModActorSlot.h"
#endif
#define MODULARBUILDING_MBModActorSlot_generated_h

#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBModActorSlot_h_13_DELEGATE \
MODULARBUILDING_API void FOnModActorSlotClickedSignature_DelegateWrapper(const FScriptDelegate& OnModActorSlotClickedSignature, int32 InSlotIndex, uint8 InSection);


#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBModActorSlot_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execTabSlotSelectBtnPressed);


#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBModActorSlot_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMBModActorSlot(); \
	friend struct Z_Construct_UClass_UMBModActorSlot_Statics; \
public: \
	DECLARE_CLASS(UMBModActorSlot, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ModularBuilding"), NO_API) \
	DECLARE_SERIALIZER(UMBModActorSlot)


#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBModActorSlot_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMBModActorSlot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMBModActorSlot(UMBModActorSlot&&); \
	UMBModActorSlot(const UMBModActorSlot&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMBModActorSlot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMBModActorSlot); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMBModActorSlot) \
	NO_API virtual ~UMBModActorSlot();


#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBModActorSlot_h_17_PROLOG
#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBModActorSlot_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBModActorSlot_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBModActorSlot_h_20_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBModActorSlot_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MODULARBUILDING_API UClass* StaticClass<class UMBModActorSlot>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBModActorSlot_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
