// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/MBToolSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MODULARBUILDING_MBToolSubsystem_generated_h
#error "MBToolSubsystem.generated.h already included, missing '#pragma once' in MBToolSubsystem.h"
#endif
#define MODULARBUILDING_MBToolSubsystem_generated_h

#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Data_MBToolSubsystem_h_18_DELEGATE \
MODULARBUILDING_API void FOnPlacementTypeChanged_DelegateWrapper(const FMulticastScriptDelegate& OnPlacementTypeChanged);


#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Data_MBToolSubsystem_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMBToolSubsystem(); \
	friend struct Z_Construct_UClass_UMBToolSubsystem_Statics; \
public: \
	DECLARE_CLASS(UMBToolSubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ModularBuilding"), NO_API) \
	DECLARE_SERIALIZER(UMBToolSubsystem)


#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Data_MBToolSubsystem_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMBToolSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMBToolSubsystem(UMBToolSubsystem&&); \
	UMBToolSubsystem(const UMBToolSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMBToolSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMBToolSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMBToolSubsystem) \
	NO_API virtual ~UMBToolSubsystem();


#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Data_MBToolSubsystem_h_20_PROLOG
#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Data_MBToolSubsystem_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Data_MBToolSubsystem_h_23_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Data_MBToolSubsystem_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MODULARBUILDING_API UClass* StaticClass<class UMBToolSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Data_MBToolSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
