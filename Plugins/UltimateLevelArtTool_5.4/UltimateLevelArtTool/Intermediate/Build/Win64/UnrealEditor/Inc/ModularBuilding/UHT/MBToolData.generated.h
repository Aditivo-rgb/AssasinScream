// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/MBToolData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MODULARBUILDING_MBToolData_generated_h
#error "MBToolData.generated.h already included, missing '#pragma once' in MBToolData.h"
#endif
#define MODULARBUILDING_MBToolData_generated_h

#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Data_MBToolData_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMBModBuildingSettingsData_Statics; \
	MODULARBUILDING_API static class UScriptStruct* StaticStruct();


template<> MODULARBUILDING_API UScriptStruct* StaticStruct<struct FMBModBuildingSettingsData>();

#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Data_MBToolData_h_52_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMBPropBuildingSettingsData_Statics; \
	MODULARBUILDING_API static class UScriptStruct* StaticStruct();


template<> MODULARBUILDING_API UScriptStruct* StaticStruct<struct FMBPropBuildingSettingsData>();

#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Data_MBToolData_h_87_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMBToolData(); \
	friend struct Z_Construct_UClass_UMBToolData_Statics; \
public: \
	DECLARE_CLASS(UMBToolData, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ModularBuilding"), NO_API) \
	DECLARE_SERIALIZER(UMBToolData)


#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Data_MBToolData_h_87_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMBToolData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMBToolData(UMBToolData&&); \
	UMBToolData(const UMBToolData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMBToolData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMBToolData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMBToolData) \
	NO_API virtual ~UMBToolData();


#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Data_MBToolData_h_84_PROLOG
#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Data_MBToolData_h_87_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Data_MBToolData_h_87_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Data_MBToolData_h_87_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MODULARBUILDING_API UClass* StaticClass<class UMBToolData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Data_MBToolData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
