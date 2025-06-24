// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/ODPaletteDataObject.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OBJECTDISTRIBUTION_ODPaletteDataObject_generated_h
#error "ODPaletteDataObject.generated.h already included, missing '#pragma once' in ODPaletteDataObject.h"
#endif
#define OBJECTDISTRIBUTION_ODPaletteDataObject_generated_h

#define FID_HostProject_Plugins_ObjectDistribution_Source_ObjectDistribution_Public_Data_ODPaletteDataObject_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnPresetLoaded);


#define FID_HostProject_Plugins_ObjectDistribution_Source_ObjectDistribution_Public_Data_ODPaletteDataObject_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUODPaletteDataObject(); \
	friend struct Z_Construct_UClass_UODPaletteDataObject_Statics; \
public: \
	DECLARE_CLASS(UODPaletteDataObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ObjectDistribution"), NO_API) \
	DECLARE_SERIALIZER(UODPaletteDataObject)


#define FID_HostProject_Plugins_ObjectDistribution_Source_ObjectDistribution_Public_Data_ODPaletteDataObject_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UODPaletteDataObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UODPaletteDataObject(UODPaletteDataObject&&); \
	UODPaletteDataObject(const UODPaletteDataObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UODPaletteDataObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UODPaletteDataObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UODPaletteDataObject) \
	NO_API virtual ~UODPaletteDataObject();


#define FID_HostProject_Plugins_ObjectDistribution_Source_ObjectDistribution_Public_Data_ODPaletteDataObject_h_11_PROLOG
#define FID_HostProject_Plugins_ObjectDistribution_Source_ObjectDistribution_Public_Data_ODPaletteDataObject_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_ObjectDistribution_Source_ObjectDistribution_Public_Data_ODPaletteDataObject_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_ObjectDistribution_Source_ObjectDistribution_Public_Data_ODPaletteDataObject_h_14_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_ObjectDistribution_Source_ObjectDistribution_Public_Data_ODPaletteDataObject_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OBJECTDISTRIBUTION_API UClass* StaticClass<class UODPaletteDataObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_ObjectDistribution_Source_ObjectDistribution_Public_Data_ODPaletteDataObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
