// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Building/MBBuildingManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MODULARBUILDING_MBBuildingManager_generated_h
#error "MBBuildingManager.generated.h already included, missing '#pragma once' in MBBuildingManager.h"
#endif
#define MODULARBUILDING_MBBuildingManager_generated_h

#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Building_MBBuildingManager_h_29_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMultiPlacementData_Statics; \
	MODULARBUILDING_API static class UScriptStruct* StaticStruct();


template<> MODULARBUILDING_API UScriptStruct* StaticStruct<struct FMultiPlacementData>();

#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Building_MBBuildingManager_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnPlacementTypeChanged);


#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Building_MBBuildingManager_h_47_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMBBuildingManager(); \
	friend struct Z_Construct_UClass_UMBBuildingManager_Statics; \
public: \
	DECLARE_CLASS(UMBBuildingManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ModularBuilding"), NO_API) \
	DECLARE_SERIALIZER(UMBBuildingManager) \
	virtual UObject* _getUObject() const override { return const_cast<UMBBuildingManager*>(this); }


#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Building_MBBuildingManager_h_47_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMBBuildingManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMBBuildingManager(UMBBuildingManager&&); \
	UMBBuildingManager(const UMBBuildingManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMBBuildingManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMBBuildingManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMBBuildingManager) \
	NO_API virtual ~UMBBuildingManager();


#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Building_MBBuildingManager_h_44_PROLOG
#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Building_MBBuildingManager_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Building_MBBuildingManager_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Building_MBBuildingManager_h_47_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Building_MBBuildingManager_h_47_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MODULARBUILDING_API UClass* StaticClass<class UMBBuildingManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Building_MBBuildingManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
