// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/ODPaletteSlate.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWidget;
class UWrapBoxSlot;
#ifdef OBJECTDISTRIBUTION_ODPaletteSlate_generated_h
#error "ODPaletteSlate.generated.h already included, missing '#pragma once' in ODPaletteSlate.h"
#endif
#define OBJECTDISTRIBUTION_ODPaletteSlate_generated_h

#define FID_HostProject_Plugins_ObjectDistribution_Source_ObjectDistribution_Public_UI_ODPaletteSlate_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAddChildToWrapBox); \
	DECLARE_FUNCTION(execSetHorizontalAlignment); \
	DECLARE_FUNCTION(execSetInnerSlotPadding);


#define FID_HostProject_Plugins_ObjectDistribution_Source_ObjectDistribution_Public_UI_ODPaletteSlate_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUODPaletteSlate(); \
	friend struct Z_Construct_UClass_UODPaletteSlate_Statics; \
public: \
	DECLARE_CLASS(UODPaletteSlate, UPanelWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ObjectDistribution"), NO_API) \
	DECLARE_SERIALIZER(UODPaletteSlate)


#define FID_HostProject_Plugins_ObjectDistribution_Source_ObjectDistribution_Public_UI_ODPaletteSlate_h_38_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UODPaletteSlate(UODPaletteSlate&&); \
	UODPaletteSlate(const UODPaletteSlate&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UODPaletteSlate); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UODPaletteSlate); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UODPaletteSlate) \
	NO_API virtual ~UODPaletteSlate();


#define FID_HostProject_Plugins_ObjectDistribution_Source_ObjectDistribution_Public_UI_ODPaletteSlate_h_35_PROLOG
#define FID_HostProject_Plugins_ObjectDistribution_Source_ObjectDistribution_Public_UI_ODPaletteSlate_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_ObjectDistribution_Source_ObjectDistribution_Public_UI_ODPaletteSlate_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_ObjectDistribution_Source_ObjectDistribution_Public_UI_ODPaletteSlate_h_38_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_ObjectDistribution_Source_ObjectDistribution_Public_UI_ODPaletteSlate_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OBJECTDISTRIBUTION_API UClass* StaticClass<class UODPaletteSlate>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_ObjectDistribution_Source_ObjectDistribution_Public_UI_ODPaletteSlate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
