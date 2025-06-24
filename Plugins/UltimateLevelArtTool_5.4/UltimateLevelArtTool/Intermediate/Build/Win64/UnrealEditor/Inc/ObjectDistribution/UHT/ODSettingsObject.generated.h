// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/ODSettingsObject.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OBJECTDISTRIBUTION_ODSettingsObject_generated_h
#error "ODSettingsObject.generated.h already included, missing '#pragma once' in ODSettingsObject.h"
#endif
#define OBJECTDISTRIBUTION_ODSettingsObject_generated_h

#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_ObjectDistribution_Public_Data_ODSettingsObject_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUODSettingsObject(); \
	friend struct Z_Construct_UClass_UODSettingsObject_Statics; \
public: \
	DECLARE_CLASS(UODSettingsObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ObjectDistribution"), NO_API) \
	DECLARE_SERIALIZER(UODSettingsObject)


#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_ObjectDistribution_Public_Data_ODSettingsObject_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UODSettingsObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UODSettingsObject(UODSettingsObject&&); \
	UODSettingsObject(const UODSettingsObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UODSettingsObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UODSettingsObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UODSettingsObject) \
	NO_API virtual ~UODSettingsObject();


#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_ObjectDistribution_Public_Data_ODSettingsObject_h_8_PROLOG
#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_ObjectDistribution_Public_Data_ODSettingsObject_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_UltimateLevelArtTool_Source_ObjectDistribution_Public_Data_ODSettingsObject_h_11_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_UltimateLevelArtTool_Source_ObjectDistribution_Public_Data_ODSettingsObject_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OBJECTDISTRIBUTION_API UClass* StaticClass<class UODSettingsObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_UltimateLevelArtTool_Source_ObjectDistribution_Public_Data_ODSettingsObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
