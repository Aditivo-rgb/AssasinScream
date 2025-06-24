// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/MBUserSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MODULARBUILDING_MBUserSettings_generated_h
#error "MBUserSettings.generated.h already included, missing '#pragma once' in MBUserSettings.h"
#endif
#define MODULARBUILDING_MBUserSettings_generated_h

#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Data_MBUserSettings_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMBUserSettings(); \
	friend struct Z_Construct_UClass_UMBUserSettings_Statics; \
public: \
	DECLARE_CLASS(UMBUserSettings, UDataAsset, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ModularBuilding"), NO_API) \
	DECLARE_SERIALIZER(UMBUserSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("MBUserSettings");} \



#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Data_MBUserSettings_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMBUserSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMBUserSettings(UMBUserSettings&&); \
	UMBUserSettings(const UMBUserSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMBUserSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMBUserSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMBUserSettings) \
	NO_API virtual ~UMBUserSettings();


#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Data_MBUserSettings_h_9_PROLOG
#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Data_MBUserSettings_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Data_MBUserSettings_h_12_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Data_MBUserSettings_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MODULARBUILDING_API UClass* StaticClass<class UMBUserSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Data_MBUserSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
