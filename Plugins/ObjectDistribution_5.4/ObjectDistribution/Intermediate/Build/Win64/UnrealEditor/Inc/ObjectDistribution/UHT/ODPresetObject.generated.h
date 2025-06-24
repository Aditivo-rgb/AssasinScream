// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/ODPresetObject.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OBJECTDISTRIBUTION_ODPresetObject_generated_h
#error "ODPresetObject.generated.h already included, missing '#pragma once' in ODPresetObject.h"
#endif
#define OBJECTDISTRIBUTION_ODPresetObject_generated_h

#define FID_HostProject_Plugins_ObjectDistribution_Source_ObjectDistribution_Public_Data_ODPresetObject_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUODPresetObject(); \
	friend struct Z_Construct_UClass_UODPresetObject_Statics; \
public: \
	DECLARE_CLASS(UODPresetObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ObjectDistribution"), NO_API) \
	DECLARE_SERIALIZER(UODPresetObject)


#define FID_HostProject_Plugins_ObjectDistribution_Source_ObjectDistribution_Public_Data_ODPresetObject_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UODPresetObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UODPresetObject(UODPresetObject&&); \
	UODPresetObject(const UODPresetObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UODPresetObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UODPresetObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UODPresetObject) \
	NO_API virtual ~UODPresetObject();


#define FID_HostProject_Plugins_ObjectDistribution_Source_ObjectDistribution_Public_Data_ODPresetObject_h_11_PROLOG
#define FID_HostProject_Plugins_ObjectDistribution_Source_ObjectDistribution_Public_Data_ODPresetObject_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_ObjectDistribution_Source_ObjectDistribution_Public_Data_ODPresetObject_h_14_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_ObjectDistribution_Source_ObjectDistribution_Public_Data_ODPresetObject_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OBJECTDISTRIBUTION_API UClass* StaticClass<class UODPresetObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_ObjectDistribution_Source_ObjectDistribution_Public_Data_ODPresetObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
