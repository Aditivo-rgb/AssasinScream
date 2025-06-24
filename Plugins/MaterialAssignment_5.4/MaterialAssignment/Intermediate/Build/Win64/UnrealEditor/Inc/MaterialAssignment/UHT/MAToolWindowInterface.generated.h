// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/MAToolWindowInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MATERIALASSIGNMENT_MAToolWindowInterface_generated_h
#error "MAToolWindowInterface.generated.h already included, missing '#pragma once' in MAToolWindowInterface.h"
#endif
#define MATERIALASSIGNMENT_MAToolWindowInterface_generated_h

#define FID_HostProject_Plugins_MaterialAssignment_Source_MaterialAssignment_Public_Interfaces_MAToolWindowInterface_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MATERIALASSIGNMENT_API UMAToolWindowInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMAToolWindowInterface(UMAToolWindowInterface&&); \
	UMAToolWindowInterface(const UMAToolWindowInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MATERIALASSIGNMENT_API, UMAToolWindowInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMAToolWindowInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMAToolWindowInterface) \
	MATERIALASSIGNMENT_API virtual ~UMAToolWindowInterface();


#define FID_HostProject_Plugins_MaterialAssignment_Source_MaterialAssignment_Public_Interfaces_MAToolWindowInterface_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMAToolWindowInterface(); \
	friend struct Z_Construct_UClass_UMAToolWindowInterface_Statics; \
public: \
	DECLARE_CLASS(UMAToolWindowInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MaterialAssignment"), MATERIALASSIGNMENT_API) \
	DECLARE_SERIALIZER(UMAToolWindowInterface)


#define FID_HostProject_Plugins_MaterialAssignment_Source_MaterialAssignment_Public_Interfaces_MAToolWindowInterface_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_HostProject_Plugins_MaterialAssignment_Source_MaterialAssignment_Public_Interfaces_MAToolWindowInterface_h_14_GENERATED_UINTERFACE_BODY() \
	FID_HostProject_Plugins_MaterialAssignment_Source_MaterialAssignment_Public_Interfaces_MAToolWindowInterface_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_MaterialAssignment_Source_MaterialAssignment_Public_Interfaces_MAToolWindowInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMAToolWindowInterface() {} \
public: \
	typedef UMAToolWindowInterface UClassType; \
	typedef IMAToolWindowInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_HostProject_Plugins_MaterialAssignment_Source_MaterialAssignment_Public_Interfaces_MAToolWindowInterface_h_11_PROLOG
#define FID_HostProject_Plugins_MaterialAssignment_Source_MaterialAssignment_Public_Interfaces_MAToolWindowInterface_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_MaterialAssignment_Source_MaterialAssignment_Public_Interfaces_MAToolWindowInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MATERIALASSIGNMENT_API UClass* StaticClass<class UMAToolWindowInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_MaterialAssignment_Source_MaterialAssignment_Public_Interfaces_MAToolWindowInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
