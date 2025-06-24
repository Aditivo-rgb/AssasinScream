// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Library/LTFunctions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ALight;
class APostProcessVolume;
class ULightComponent;
class UMaterialInterface;
class UStaticMeshComponent;
class UTexture2D;
class UTextureCube;
class UTextureLightProfile;
class UWorld;
enum class EDefaultGraphicsRHI : uint8;
struct FAssetData;
struct FLightRenderData;
struct FLinearColor;
#ifdef LIGHTINGTOOL_LTFunctions_generated_h
#error "LTFunctions.generated.h already included, missing '#pragma once' in LTFunctions.h"
#endif
#define LIGHTINGTOOL_LTFunctions_generated_h

#define FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_Library_LTFunctions_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGoToWorldOriginWithOffset); \
	DECLARE_FUNCTION(execReRunConstructionScriptOfActor); \
	DECLARE_FUNCTION(execFindAndGetHDRIFromList); \
	DECLARE_FUNCTION(execGetRidOfHDRISuffix); \
	DECLARE_FUNCTION(execGetHDRINames); \
	DECLARE_FUNCTION(execGetAllHDRIsInPath); \
	DECLARE_FUNCTION(execGetHDRIVolumeInTheLevel); \
	DECLARE_FUNCTION(execDoesToolHDRIActorExist); \
	DECLARE_FUNCTION(execSpawnAndGetHDRIVolume); \
	DECLARE_FUNCTION(execFindAndGetIESTextureFromList); \
	DECLARE_FUNCTION(execFindAndGetTextureFromList); \
	DECLARE_FUNCTION(execGetRidOfTextureSuffix); \
	DECLARE_FUNCTION(execGetTextureNames); \
	DECLARE_FUNCTION(execGetAllIESTexturesInPath); \
	DECLARE_FUNCTION(execGetAllTexturesInPath); \
	DECLARE_FUNCTION(execCopyLightComponentProperties); \
	DECLARE_FUNCTION(execChangeLightsFunction); \
	DECLARE_FUNCTION(execChangeLightsColor); \
	DECLARE_FUNCTION(execChangeLightsBrightness); \
	DECLARE_FUNCTION(execChangeLightsVisibility); \
	DECLARE_FUNCTION(execGetLocationOnViewport); \
	DECLARE_FUNCTION(execGetEditorWorld); \
	DECLARE_FUNCTION(execApplyLightRenderPresetData); \
	DECLARE_FUNCTION(execGetGenerateMeshDistanceField); \
	DECLARE_FUNCTION(execGetShadowMapMethod); \
	DECLARE_FUNCTION(execGetSoftwareRayTracingMode); \
	DECLARE_FUNCTION(execGetUseHardwareRayTracingWhenAvailable); \
	DECLARE_FUNCTION(execGetEnablePathTracing); \
	DECLARE_FUNCTION(execGetEnableRayTracing); \
	DECLARE_FUNCTION(execGetReflectionMethod); \
	DECLARE_FUNCTION(execGetDynamicGlobalIlluminationMethod); \
	DECLARE_FUNCTION(execGetDefaultRHI); \
	DECLARE_FUNCTION(execEnablePathTracingProgress); \
	DECLARE_FUNCTION(execChangePathTracingViewMode); \
	DECLARE_FUNCTION(execChangeGenerateMeshDistanceField); \
	DECLARE_FUNCTION(execChangeShadowMapMethod); \
	DECLARE_FUNCTION(execChangeSoftwareRayTracingMode); \
	DECLARE_FUNCTION(execChangeUseHardwareRayTracingWhenAvailable); \
	DECLARE_FUNCTION(execChangeEnablePathTracing); \
	DECLARE_FUNCTION(execChangeEnableRayTracing); \
	DECLARE_FUNCTION(execChangeReflectionMethod); \
	DECLARE_FUNCTION(execChangeDynamicGlobalIlluminationMethod); \
	DECLARE_FUNCTION(execChangeDefaultRHI); \
	DECLARE_FUNCTION(execAdjustDensityWithEase); \
	DECLARE_FUNCTION(execGetEasingFuncValueFromIndex); \
	DECLARE_FUNCTION(execGetEasingFuncValueFromName); \
	DECLARE_FUNCTION(execCreateEasingFuncNameArray); \
	DECLARE_FUNCTION(execSpawnOrGetExistingPostProcessVolume); \
	DECLARE_FUNCTION(execChangeLightmapResolution); \
	DECLARE_FUNCTION(execGetLightmapCoordinateIndex); \
	DECLARE_FUNCTION(execChangeLightmapCoordinateIndex); \
	DECLARE_FUNCTION(execShowNotifyToUser); \
	DECLARE_FUNCTION(execSaveSelectedAssets); \
	DECLARE_FUNCTION(execGenerateThumbnailForAsset); \
	DECLARE_FUNCTION(execGetViewMode); \
	DECLARE_FUNCTION(execChangeViewMode); \
	DECLARE_FUNCTION(execIsThereAnySelectedSMAsset); \
	DECLARE_FUNCTION(execGetMaxLightmapDensity); \
	DECLARE_FUNCTION(execSetMaxLightmapDensity); \
	DECLARE_FUNCTION(execGetIdealLightmapDensity); \
	DECLARE_FUNCTION(execSetIdealLightmapDensity); \
	DECLARE_FUNCTION(execGetColorOfTheDensity); \
	DECLARE_FUNCTION(execCalculateDensityAndResolution); \
	DECLARE_FUNCTION(execCalculateDesiredLightmapResolution);


#define FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_Library_LTFunctions_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULTFunctions(); \
	friend struct Z_Construct_UClass_ULTFunctions_Statics; \
public: \
	DECLARE_CLASS(ULTFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LightingTool"), NO_API) \
	DECLARE_SERIALIZER(ULTFunctions)


#define FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_Library_LTFunctions_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULTFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULTFunctions(ULTFunctions&&); \
	ULTFunctions(const ULTFunctions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULTFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULTFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULTFunctions) \
	NO_API virtual ~ULTFunctions();


#define FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_Library_LTFunctions_h_23_PROLOG
#define FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_Library_LTFunctions_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_Library_LTFunctions_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_Library_LTFunctions_h_26_INCLASS_NO_PURE_DECLS \
	FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_Library_LTFunctions_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIGHTINGTOOL_API UClass* StaticClass<class ULTFunctions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_Library_LTFunctions_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
