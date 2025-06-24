// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Libraries/MBExtendedMath.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EMBAxis : uint8;
#ifdef MODULARBUILDING_MBExtendedMath_generated_h
#error "MBExtendedMath.generated.h already included, missing '#pragma once' in MBExtendedMath.h"
#endif
#define MODULARBUILDING_MBExtendedMath_generated_h

#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Libraries_MBExtendedMath_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetNearestAxisOfVector); \
	DECLARE_FUNCTION(execGetAxisEnumOfDirectionVector); \
	DECLARE_FUNCTION(execGetAxisVectorWithEnumValue); \
	DECLARE_FUNCTION(execGetSecAxis); \
	DECLARE_FUNCTION(execGetHighestAxisAndDirectionOfVector); \
	DECLARE_FUNCTION(execSetAxisOfVector); \
	DECLARE_FUNCTION(execGetAxisOfVector);


#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Libraries_MBExtendedMath_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMBExtendedMath(); \
	friend struct Z_Construct_UClass_UMBExtendedMath_Statics; \
public: \
	DECLARE_CLASS(UMBExtendedMath, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ModularBuilding"), NO_API) \
	DECLARE_SERIALIZER(UMBExtendedMath)


#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Libraries_MBExtendedMath_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMBExtendedMath(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMBExtendedMath(UMBExtendedMath&&); \
	UMBExtendedMath(const UMBExtendedMath&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMBExtendedMath); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMBExtendedMath); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMBExtendedMath) \
	NO_API virtual ~UMBExtendedMath();


#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Libraries_MBExtendedMath_h_13_PROLOG
#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Libraries_MBExtendedMath_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Libraries_MBExtendedMath_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Libraries_MBExtendedMath_h_16_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Libraries_MBExtendedMath_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MODULARBUILDING_API UClass* StaticClass<class UMBExtendedMath>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Libraries_MBExtendedMath_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
