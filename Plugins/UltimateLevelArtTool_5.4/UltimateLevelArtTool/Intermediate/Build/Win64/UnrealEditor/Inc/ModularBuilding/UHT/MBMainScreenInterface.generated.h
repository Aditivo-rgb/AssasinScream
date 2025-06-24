// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/MBMainScreenInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MODULARBUILDING_MBMainScreenInterface_generated_h
#error "MBMainScreenInterface.generated.h already included, missing '#pragma once' in MBMainScreenInterface.h"
#endif
#define MODULARBUILDING_MBMainScreenInterface_generated_h

#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Interfaces_MBMainScreenInterface_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MODULARBUILDING_API UMBMainScreenInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMBMainScreenInterface(UMBMainScreenInterface&&); \
	UMBMainScreenInterface(const UMBMainScreenInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MODULARBUILDING_API, UMBMainScreenInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMBMainScreenInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMBMainScreenInterface) \
	MODULARBUILDING_API virtual ~UMBMainScreenInterface();


#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Interfaces_MBMainScreenInterface_h_16_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMBMainScreenInterface(); \
	friend struct Z_Construct_UClass_UMBMainScreenInterface_Statics; \
public: \
	DECLARE_CLASS(UMBMainScreenInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ModularBuilding"), MODULARBUILDING_API) \
	DECLARE_SERIALIZER(UMBMainScreenInterface)


#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Interfaces_MBMainScreenInterface_h_16_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Interfaces_MBMainScreenInterface_h_16_GENERATED_UINTERFACE_BODY() \
	FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Interfaces_MBMainScreenInterface_h_16_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Interfaces_MBMainScreenInterface_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMBMainScreenInterface() {} \
public: \
	typedef UMBMainScreenInterface UClassType; \
	typedef IMBMainScreenInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Interfaces_MBMainScreenInterface_h_13_PROLOG
#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Interfaces_MBMainScreenInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Interfaces_MBMainScreenInterface_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MODULARBUILDING_API UClass* StaticClass<class UMBMainScreenInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Interfaces_MBMainScreenInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
