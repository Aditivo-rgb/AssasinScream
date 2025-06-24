// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/MBBuildingManagerInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MODULARBUILDING_MBBuildingManagerInterface_generated_h
#error "MBBuildingManagerInterface.generated.h already included, missing '#pragma once' in MBBuildingManagerInterface.h"
#endif
#define MODULARBUILDING_MBBuildingManagerInterface_generated_h

#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Interfaces_MBBuildingManagerInterface_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MODULARBUILDING_API UMBBuildingManagerInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMBBuildingManagerInterface(UMBBuildingManagerInterface&&); \
	UMBBuildingManagerInterface(const UMBBuildingManagerInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MODULARBUILDING_API, UMBBuildingManagerInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMBBuildingManagerInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMBBuildingManagerInterface) \
	MODULARBUILDING_API virtual ~UMBBuildingManagerInterface();


#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Interfaces_MBBuildingManagerInterface_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMBBuildingManagerInterface(); \
	friend struct Z_Construct_UClass_UMBBuildingManagerInterface_Statics; \
public: \
	DECLARE_CLASS(UMBBuildingManagerInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ModularBuilding"), MODULARBUILDING_API) \
	DECLARE_SERIALIZER(UMBBuildingManagerInterface)


#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Interfaces_MBBuildingManagerInterface_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Interfaces_MBBuildingManagerInterface_h_14_GENERATED_UINTERFACE_BODY() \
	FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Interfaces_MBBuildingManagerInterface_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Interfaces_MBBuildingManagerInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMBBuildingManagerInterface() {} \
public: \
	typedef UMBBuildingManagerInterface UClassType; \
	typedef IMBBuildingManagerInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Interfaces_MBBuildingManagerInterface_h_11_PROLOG
#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Interfaces_MBBuildingManagerInterface_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Interfaces_MBBuildingManagerInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MODULARBUILDING_API UClass* StaticClass<class UMBBuildingManagerInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Interfaces_MBBuildingManagerInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
