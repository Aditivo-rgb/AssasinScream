// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Library/ODAssetFunctions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UTexture2D;
struct FAssetData;
#ifdef OBJECTDISTRIBUTION_ODAssetFunctions_generated_h
#error "ODAssetFunctions.generated.h already included, missing '#pragma once' in ODAssetFunctions.h"
#endif
#define OBJECTDISTRIBUTION_ODAssetFunctions_generated_h

#define FID_HostProject_Plugins_ObjectDistribution_Source_ObjectDistribution_Public_Library_ODAssetFunctions_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGenerateThumbnailForSM); \
	DECLARE_FUNCTION(execGetAssetDataFromPath); \
	DECLARE_FUNCTION(execGetAssetPathFromObject); \
	DECLARE_FUNCTION(execGetAssetDataFromObject);


#define FID_HostProject_Plugins_ObjectDistribution_Source_ObjectDistribution_Public_Library_ODAssetFunctions_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUODAssetFunctions(); \
	friend struct Z_Construct_UClass_UODAssetFunctions_Statics; \
public: \
	DECLARE_CLASS(UODAssetFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ObjectDistribution"), NO_API) \
	DECLARE_SERIALIZER(UODAssetFunctions)


#define FID_HostProject_Plugins_ObjectDistribution_Source_ObjectDistribution_Public_Library_ODAssetFunctions_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UODAssetFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UODAssetFunctions(UODAssetFunctions&&); \
	UODAssetFunctions(const UODAssetFunctions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UODAssetFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UODAssetFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UODAssetFunctions) \
	NO_API virtual ~UODAssetFunctions();


#define FID_HostProject_Plugins_ObjectDistribution_Source_ObjectDistribution_Public_Library_ODAssetFunctions_h_14_PROLOG
#define FID_HostProject_Plugins_ObjectDistribution_Source_ObjectDistribution_Public_Library_ODAssetFunctions_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_ObjectDistribution_Source_ObjectDistribution_Public_Library_ODAssetFunctions_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_ObjectDistribution_Source_ObjectDistribution_Public_Library_ODAssetFunctions_h_17_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_ObjectDistribution_Source_ObjectDistribution_Public_Library_ODAssetFunctions_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OBJECTDISTRIBUTION_API UClass* StaticClass<class UODAssetFunctions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_ObjectDistribution_Source_ObjectDistribution_Public_Library_ODAssetFunctions_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
