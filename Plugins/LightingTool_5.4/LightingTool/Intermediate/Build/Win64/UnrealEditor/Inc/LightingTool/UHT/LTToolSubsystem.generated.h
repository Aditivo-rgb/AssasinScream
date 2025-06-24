// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/LTToolSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ULTToolData;
class UObject;
enum class ELTLightingToolType : uint8;
#ifdef LIGHTINGTOOL_LTToolSubsystem_generated_h
#error "LTToolSubsystem.generated.h already included, missing '#pragma once' in LTToolSubsystem.h"
#endif
#define LIGHTINGTOOL_LTToolSubsystem_generated_h

#define FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_Data_LTToolSubsystem_h_15_DELEGATE \
LIGHTINGTOOL_API void FObjectSelectionChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& ObjectSelectionChangedSignature);


#define FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_Data_LTToolSubsystem_h_16_DELEGATE \
LIGHTINGTOOL_API void FOnActorDroppedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnActorDroppedSignature, AActor* OutActor);


#define FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_Data_LTToolSubsystem_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnDropEventOccured); \
	DECLARE_FUNCTION(execSetupOnActorsDroppedEvent); \
	DECLARE_FUNCTION(execDisableAllResolutionOverrides); \
	DECLARE_FUNCTION(execResizeToolWindow); \
	DECLARE_FUNCTION(execAddLightByDrag); \
	DECLARE_FUNCTION(execAddLightmapVolumeManually); \
	DECLARE_FUNCTION(execOverrideLightmapCoordinateIndex); \
	DECLARE_FUNCTION(execGenerateLightmapResolutionsForAssets); \
	DECLARE_FUNCTION(execGenerateLightmapResolutions); \
	DECLARE_FUNCTION(execGetLightingToolData);


#define FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_Data_LTToolSubsystem_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULTToolSubsystem(); \
	friend struct Z_Construct_UClass_ULTToolSubsystem_Statics; \
public: \
	DECLARE_CLASS(ULTToolSubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LightingTool"), NO_API) \
	DECLARE_SERIALIZER(ULTToolSubsystem)


#define FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_Data_LTToolSubsystem_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULTToolSubsystem(ULTToolSubsystem&&); \
	ULTToolSubsystem(const ULTToolSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULTToolSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULTToolSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULTToolSubsystem) \
	NO_API virtual ~ULTToolSubsystem();


#define FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_Data_LTToolSubsystem_h_18_PROLOG
#define FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_Data_LTToolSubsystem_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_Data_LTToolSubsystem_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_Data_LTToolSubsystem_h_21_INCLASS_NO_PURE_DECLS \
	FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_Data_LTToolSubsystem_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIGHTINGTOOL_API UClass* StaticClass<class ULTToolSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_Data_LTToolSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
