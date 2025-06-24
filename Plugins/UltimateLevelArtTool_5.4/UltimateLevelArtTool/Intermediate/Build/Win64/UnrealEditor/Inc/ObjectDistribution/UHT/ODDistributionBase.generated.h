// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ObjectDistribution/ODDistributionBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OBJECTDISTRIBUTION_ODDistributionBase_generated_h
#error "ODDistributionBase.generated.h already included, missing '#pragma once' in ODDistributionBase.h"
#endif
#define OBJECTDISTRIBUTION_ODDistributionBase_generated_h

#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_ObjectDistribution_Public_ObjectDistribution_ODDistributionBase_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnPresetLoaded);


#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_ObjectDistribution_Public_ObjectDistribution_ODDistributionBase_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUODDistributionBase(); \
	friend struct Z_Construct_UClass_UODDistributionBase_Statics; \
public: \
	DECLARE_CLASS(UODDistributionBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ObjectDistribution"), NO_API) \
	DECLARE_SERIALIZER(UODDistributionBase)


#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_ObjectDistribution_Public_ObjectDistribution_ODDistributionBase_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UODDistributionBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UODDistributionBase(UODDistributionBase&&); \
	UODDistributionBase(const UODDistributionBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UODDistributionBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UODDistributionBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UODDistributionBase) \
	NO_API virtual ~UODDistributionBase();


#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_ObjectDistribution_Public_ObjectDistribution_ODDistributionBase_h_19_PROLOG
#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_ObjectDistribution_Public_ObjectDistribution_ODDistributionBase_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_UltimateLevelArtTool_Source_ObjectDistribution_Public_ObjectDistribution_ODDistributionBase_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_UltimateLevelArtTool_Source_ObjectDistribution_Public_ObjectDistribution_ODDistributionBase_h_22_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_UltimateLevelArtTool_Source_ObjectDistribution_Public_ObjectDistribution_ODDistributionBase_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OBJECTDISTRIBUTION_API UClass* StaticClass<class UODDistributionBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_UltimateLevelArtTool_Source_ObjectDistribution_Public_ObjectDistribution_ODDistributionBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
