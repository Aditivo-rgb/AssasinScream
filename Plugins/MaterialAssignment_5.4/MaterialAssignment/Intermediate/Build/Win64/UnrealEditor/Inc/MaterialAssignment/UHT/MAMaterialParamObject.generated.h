// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/MAMaterialParamObject.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MATERIALASSIGNMENT_MAMaterialParamObject_generated_h
#error "MAMaterialParamObject.generated.h already included, missing '#pragma once' in MAMaterialParamObject.h"
#endif
#define MATERIALASSIGNMENT_MAMaterialParamObject_generated_h

#define FID_HostProject_Plugins_MaterialAssignment_Source_MaterialAssignment_Public_Data_MAMaterialParamObject_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMAMaterialParamObject(); \
	friend struct Z_Construct_UClass_UMAMaterialParamObject_Statics; \
public: \
	DECLARE_CLASS(UMAMaterialParamObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MaterialAssignment"), NO_API) \
	DECLARE_SERIALIZER(UMAMaterialParamObject)


#define FID_HostProject_Plugins_MaterialAssignment_Source_MaterialAssignment_Public_Data_MAMaterialParamObject_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMAMaterialParamObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMAMaterialParamObject(UMAMaterialParamObject&&); \
	UMAMaterialParamObject(const UMAMaterialParamObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMAMaterialParamObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMAMaterialParamObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMAMaterialParamObject) \
	NO_API virtual ~UMAMaterialParamObject();


#define FID_HostProject_Plugins_MaterialAssignment_Source_MaterialAssignment_Public_Data_MAMaterialParamObject_h_13_PROLOG
#define FID_HostProject_Plugins_MaterialAssignment_Source_MaterialAssignment_Public_Data_MAMaterialParamObject_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_MaterialAssignment_Source_MaterialAssignment_Public_Data_MAMaterialParamObject_h_17_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_MaterialAssignment_Source_MaterialAssignment_Public_Data_MAMaterialParamObject_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MATERIALASSIGNMENT_API UClass* StaticClass<class UMAMaterialParamObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_MaterialAssignment_Source_MaterialAssignment_Public_Data_MAMaterialParamObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
