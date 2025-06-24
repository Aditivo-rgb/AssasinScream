// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CameraManager/Public/Data/CMCameraPresetData.h"
#include "Runtime/CinematicCamera/Public/CineCameraActor.h"
#include "Runtime/CinematicCamera/Public/CineCameraSettings.h"
#include "Runtime/Engine/Classes/Engine/Scene.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCMCameraPresetData() {}

// Begin Cross Module References
CAMERAMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FCineCameraPresetData();
CAMERAMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FCMCineCameraData();
CINEMATICCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FCameraFilmbackSettings();
CINEMATICCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FCameraFocusSettings();
CINEMATICCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FCameraLensSettings();
CINEMATICCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FCameraLookatTrackingSettings();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECameraProjectionMode();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPostProcessSettings();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
UPackage* Z_Construct_UPackage__Script_CameraManager();
// End Cross Module References

// Begin ScriptStruct FCMCineCameraData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CMCineCameraData;
class UScriptStruct* FCMCineCameraData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CMCineCameraData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CMCineCameraData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCMCineCameraData, (UObject*)Z_Construct_UPackage__Script_CameraManager(), TEXT("CMCineCameraData"));
	}
	return Z_Registration_Info_UScriptStruct_CMCineCameraData.OuterSingleton;
}
template<> CAMERAMANAGER_API UScriptStruct* StaticStruct<FCMCineCameraData>()
{
	return FCMCineCameraData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCMCineCameraData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Data/CMCameraPresetData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraLookatTrackingSettings_MetaData[] = {
		{ "Category", "Camera Preset" },
		{ "Comment", "//Cine Camera Actor\n" },
		{ "ModuleRelativePath", "Public/Data/CMCameraPresetData.h" },
		{ "ToolTip", "Cine Camera Actor" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Filmback_MetaData[] = {
		{ "Category", "Camera Preset" },
		{ "Comment", "//Cine Camera Component\n" },
		{ "ModuleRelativePath", "Public/Data/CMCameraPresetData.h" },
		{ "ToolTip", "Cine Camera Component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LensSettings_MetaData[] = {
		{ "Category", "Camera Preset" },
		{ "ModuleRelativePath", "Public/Data/CMCameraPresetData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FocusSettings_MetaData[] = {
		{ "Category", "Camera Preset" },
		{ "ModuleRelativePath", "Public/Data/CMCameraPresetData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentFocalLength_MetaData[] = {
		{ "Category", "Camera Preset" },
		{ "ModuleRelativePath", "Public/Data/CMCameraPresetData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentAperture_MetaData[] = {
		{ "Category", "Camera Preset" },
		{ "ModuleRelativePath", "Public/Data/CMCameraPresetData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldOfView_MetaData[] = {
		{ "Category", "Camera Preset" },
		{ "ModuleRelativePath", "Public/Data/CMCameraPresetData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrthoWidth_MetaData[] = {
		{ "Category", "Camera Preset" },
		{ "ModuleRelativePath", "Public/Data/CMCameraPresetData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrthoNearClipPlane_MetaData[] = {
		{ "Category", "Camera Preset" },
		{ "ModuleRelativePath", "Public/Data/CMCameraPresetData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrthoFarClipPlane_MetaData[] = {
		{ "Category", "Camera Preset" },
		{ "ModuleRelativePath", "Public/Data/CMCameraPresetData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AspectRatio_MetaData[] = {
		{ "Category", "Camera Preset" },
		{ "ModuleRelativePath", "Public/Data/CMCameraPresetData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bConstrainAspectRatio_MetaData[] = {
		{ "Category", "Camera Preset" },
		{ "ModuleRelativePath", "Public/Data/CMCameraPresetData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseFieldOfViewForLOD_MetaData[] = {
		{ "Category", "Camera Preset" },
		{ "ModuleRelativePath", "Public/Data/CMCameraPresetData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawFrustumAllowed_MetaData[] = {
		{ "Category", "Camera Preset" },
		{ "ModuleRelativePath", "Public/Data/CMCameraPresetData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCameraMeshHiddenInGame_MetaData[] = {
		{ "Category", "Camera Preset" },
		{ "ModuleRelativePath", "Public/Data/CMCameraPresetData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLockToHmd_MetaData[] = {
		{ "Category", "Camera Preset" },
		{ "ModuleRelativePath", "Public/Data/CMCameraPresetData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectionMode_MetaData[] = {
		{ "Category", "Camera Preset" },
		{ "ModuleRelativePath", "Public/Data/CMCameraPresetData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PostProcessBlendWeight_MetaData[] = {
		{ "Category", "Camera Preset" },
		{ "ModuleRelativePath", "Public/Data/CMCameraPresetData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PostProcessSettings_MetaData[] = {
		{ "Category", "Camera Preset" },
		{ "ModuleRelativePath", "Public/Data/CMCameraPresetData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CameraLookatTrackingSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Filmback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LensSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FocusSettings;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentFocalLength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentAperture;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FieldOfView;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OrthoWidth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OrthoNearClipPlane;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OrthoFarClipPlane;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AspectRatio;
	static void NewProp_bConstrainAspectRatio_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bConstrainAspectRatio;
	static void NewProp_bUseFieldOfViewForLOD_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseFieldOfViewForLOD;
	static void NewProp_bDrawFrustumAllowed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawFrustumAllowed;
	static void NewProp_bCameraMeshHiddenInGame_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCameraMeshHiddenInGame;
	static void NewProp_bLockToHmd_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLockToHmd;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ProjectionMode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PostProcessBlendWeight;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PostProcessSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCMCineCameraData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCMCineCameraData_Statics::NewProp_CameraLookatTrackingSettings = { "CameraLookatTrackingSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCMCineCameraData, CameraLookatTrackingSettings), Z_Construct_UScriptStruct_FCameraLookatTrackingSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraLookatTrackingSettings_MetaData), NewProp_CameraLookatTrackingSettings_MetaData) }; // 451115465
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCMCineCameraData_Statics::NewProp_Filmback = { "Filmback", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCMCineCameraData, Filmback), Z_Construct_UScriptStruct_FCameraFilmbackSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Filmback_MetaData), NewProp_Filmback_MetaData) }; // 2566076393
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCMCineCameraData_Statics::NewProp_LensSettings = { "LensSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCMCineCameraData, LensSettings), Z_Construct_UScriptStruct_FCameraLensSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LensSettings_MetaData), NewProp_LensSettings_MetaData) }; // 2172479636
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCMCineCameraData_Statics::NewProp_FocusSettings = { "FocusSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCMCineCameraData, FocusSettings), Z_Construct_UScriptStruct_FCameraFocusSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FocusSettings_MetaData), NewProp_FocusSettings_MetaData) }; // 1798919099
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCMCineCameraData_Statics::NewProp_CurrentFocalLength = { "CurrentFocalLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCMCineCameraData, CurrentFocalLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentFocalLength_MetaData), NewProp_CurrentFocalLength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCMCineCameraData_Statics::NewProp_CurrentAperture = { "CurrentAperture", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCMCineCameraData, CurrentAperture), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentAperture_MetaData), NewProp_CurrentAperture_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCMCineCameraData_Statics::NewProp_FieldOfView = { "FieldOfView", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCMCineCameraData, FieldOfView), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldOfView_MetaData), NewProp_FieldOfView_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCMCineCameraData_Statics::NewProp_OrthoWidth = { "OrthoWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCMCineCameraData, OrthoWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrthoWidth_MetaData), NewProp_OrthoWidth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCMCineCameraData_Statics::NewProp_OrthoNearClipPlane = { "OrthoNearClipPlane", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCMCineCameraData, OrthoNearClipPlane), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrthoNearClipPlane_MetaData), NewProp_OrthoNearClipPlane_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCMCineCameraData_Statics::NewProp_OrthoFarClipPlane = { "OrthoFarClipPlane", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCMCineCameraData, OrthoFarClipPlane), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrthoFarClipPlane_MetaData), NewProp_OrthoFarClipPlane_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCMCineCameraData_Statics::NewProp_AspectRatio = { "AspectRatio", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCMCineCameraData, AspectRatio), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AspectRatio_MetaData), NewProp_AspectRatio_MetaData) };
void Z_Construct_UScriptStruct_FCMCineCameraData_Statics::NewProp_bConstrainAspectRatio_SetBit(void* Obj)
{
	((FCMCineCameraData*)Obj)->bConstrainAspectRatio = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCMCineCameraData_Statics::NewProp_bConstrainAspectRatio = { "bConstrainAspectRatio", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FCMCineCameraData), &Z_Construct_UScriptStruct_FCMCineCameraData_Statics::NewProp_bConstrainAspectRatio_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bConstrainAspectRatio_MetaData), NewProp_bConstrainAspectRatio_MetaData) };
void Z_Construct_UScriptStruct_FCMCineCameraData_Statics::NewProp_bUseFieldOfViewForLOD_SetBit(void* Obj)
{
	((FCMCineCameraData*)Obj)->bUseFieldOfViewForLOD = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCMCineCameraData_Statics::NewProp_bUseFieldOfViewForLOD = { "bUseFieldOfViewForLOD", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FCMCineCameraData), &Z_Construct_UScriptStruct_FCMCineCameraData_Statics::NewProp_bUseFieldOfViewForLOD_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseFieldOfViewForLOD_MetaData), NewProp_bUseFieldOfViewForLOD_MetaData) };
void Z_Construct_UScriptStruct_FCMCineCameraData_Statics::NewProp_bDrawFrustumAllowed_SetBit(void* Obj)
{
	((FCMCineCameraData*)Obj)->bDrawFrustumAllowed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCMCineCameraData_Statics::NewProp_bDrawFrustumAllowed = { "bDrawFrustumAllowed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCMCineCameraData), &Z_Construct_UScriptStruct_FCMCineCameraData_Statics::NewProp_bDrawFrustumAllowed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawFrustumAllowed_MetaData), NewProp_bDrawFrustumAllowed_MetaData) };
void Z_Construct_UScriptStruct_FCMCineCameraData_Statics::NewProp_bCameraMeshHiddenInGame_SetBit(void* Obj)
{
	((FCMCineCameraData*)Obj)->bCameraMeshHiddenInGame = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCMCineCameraData_Statics::NewProp_bCameraMeshHiddenInGame = { "bCameraMeshHiddenInGame", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FCMCineCameraData), &Z_Construct_UScriptStruct_FCMCineCameraData_Statics::NewProp_bCameraMeshHiddenInGame_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCameraMeshHiddenInGame_MetaData), NewProp_bCameraMeshHiddenInGame_MetaData) };
void Z_Construct_UScriptStruct_FCMCineCameraData_Statics::NewProp_bLockToHmd_SetBit(void* Obj)
{
	((FCMCineCameraData*)Obj)->bLockToHmd = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCMCineCameraData_Statics::NewProp_bLockToHmd = { "bLockToHmd", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FCMCineCameraData), &Z_Construct_UScriptStruct_FCMCineCameraData_Statics::NewProp_bLockToHmd_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLockToHmd_MetaData), NewProp_bLockToHmd_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCMCineCameraData_Statics::NewProp_ProjectionMode = { "ProjectionMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCMCineCameraData, ProjectionMode), Z_Construct_UEnum_Engine_ECameraProjectionMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectionMode_MetaData), NewProp_ProjectionMode_MetaData) }; // 785982369
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCMCineCameraData_Statics::NewProp_PostProcessBlendWeight = { "PostProcessBlendWeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCMCineCameraData, PostProcessBlendWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PostProcessBlendWeight_MetaData), NewProp_PostProcessBlendWeight_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCMCineCameraData_Statics::NewProp_PostProcessSettings = { "PostProcessSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCMCineCameraData, PostProcessSettings), Z_Construct_UScriptStruct_FPostProcessSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PostProcessSettings_MetaData), NewProp_PostProcessSettings_MetaData) }; // 1858651484
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCMCineCameraData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCMCineCameraData_Statics::NewProp_CameraLookatTrackingSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCMCineCameraData_Statics::NewProp_Filmback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCMCineCameraData_Statics::NewProp_LensSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCMCineCameraData_Statics::NewProp_FocusSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCMCineCameraData_Statics::NewProp_CurrentFocalLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCMCineCameraData_Statics::NewProp_CurrentAperture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCMCineCameraData_Statics::NewProp_FieldOfView,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCMCineCameraData_Statics::NewProp_OrthoWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCMCineCameraData_Statics::NewProp_OrthoNearClipPlane,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCMCineCameraData_Statics::NewProp_OrthoFarClipPlane,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCMCineCameraData_Statics::NewProp_AspectRatio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCMCineCameraData_Statics::NewProp_bConstrainAspectRatio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCMCineCameraData_Statics::NewProp_bUseFieldOfViewForLOD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCMCineCameraData_Statics::NewProp_bDrawFrustumAllowed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCMCineCameraData_Statics::NewProp_bCameraMeshHiddenInGame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCMCineCameraData_Statics::NewProp_bLockToHmd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCMCineCameraData_Statics::NewProp_ProjectionMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCMCineCameraData_Statics::NewProp_PostProcessBlendWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCMCineCameraData_Statics::NewProp_PostProcessSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCMCineCameraData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCMCineCameraData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CameraManager,
	nullptr,
	&NewStructOps,
	"CMCineCameraData",
	Z_Construct_UScriptStruct_FCMCineCameraData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCMCineCameraData_Statics::PropPointers),
	sizeof(FCMCineCameraData),
	alignof(FCMCineCameraData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCMCineCameraData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCMCineCameraData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCMCineCameraData()
{
	if (!Z_Registration_Info_UScriptStruct_CMCineCameraData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CMCineCameraData.InnerSingleton, Z_Construct_UScriptStruct_FCMCineCameraData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CMCineCameraData.InnerSingleton;
}
// End ScriptStruct FCMCineCameraData

// Begin ScriptStruct FCineCameraPresetData
static_assert(std::is_polymorphic<FCineCameraPresetData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FCineCameraPresetData cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CineCameraPresetData;
class UScriptStruct* FCineCameraPresetData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CineCameraPresetData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CineCameraPresetData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCineCameraPresetData, (UObject*)Z_Construct_UPackage__Script_CameraManager(), TEXT("CineCameraPresetData"));
	}
	return Z_Registration_Info_UScriptStruct_CineCameraPresetData.OuterSingleton;
}
template<> CAMERAMANAGER_API UScriptStruct* StaticStruct<FCineCameraPresetData>()
{
	return FCineCameraPresetData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCineCameraPresetData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Data/CMCameraPresetData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PresetName_MetaData[] = {
		{ "Category", "Camera Preset" },
		{ "ModuleRelativePath", "Public/Data/CMCameraPresetData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "Camera Preset" },
		{ "ModuleRelativePath", "Public/Data/CMCameraPresetData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CineCameraData_MetaData[] = {
		{ "Category", "Camera Preset" },
		{ "ModuleRelativePath", "Public/Data/CMCameraPresetData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_PresetName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Description;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CineCameraData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCineCameraPresetData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCineCameraPresetData_Statics::NewProp_PresetName = { "PresetName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCineCameraPresetData, PresetName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PresetName_MetaData), NewProp_PresetName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCineCameraPresetData_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCineCameraPresetData, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCineCameraPresetData_Statics::NewProp_CineCameraData = { "CineCameraData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCineCameraPresetData, CineCameraData), Z_Construct_UScriptStruct_FCMCineCameraData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CineCameraData_MetaData), NewProp_CineCameraData_MetaData) }; // 3763378217
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCineCameraPresetData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCineCameraPresetData_Statics::NewProp_PresetName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCineCameraPresetData_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCineCameraPresetData_Statics::NewProp_CineCameraData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCineCameraPresetData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCineCameraPresetData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CameraManager,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"CineCameraPresetData",
	Z_Construct_UScriptStruct_FCineCameraPresetData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCineCameraPresetData_Statics::PropPointers),
	sizeof(FCineCameraPresetData),
	alignof(FCineCameraPresetData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCineCameraPresetData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCineCameraPresetData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCineCameraPresetData()
{
	if (!Z_Registration_Info_UScriptStruct_CineCameraPresetData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CineCameraPresetData.InnerSingleton, Z_Construct_UScriptStruct_FCineCameraPresetData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CineCameraPresetData.InnerSingleton;
}
// End ScriptStruct FCineCameraPresetData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_CameraManager_Public_Data_CMCameraPresetData_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCMCineCameraData::StaticStruct, Z_Construct_UScriptStruct_FCMCineCameraData_Statics::NewStructOps, TEXT("CMCineCameraData"), &Z_Registration_Info_UScriptStruct_CMCineCameraData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCMCineCameraData), 3763378217U) },
		{ FCineCameraPresetData::StaticStruct, Z_Construct_UScriptStruct_FCineCameraPresetData_Statics::NewStructOps, TEXT("CineCameraPresetData"), &Z_Registration_Info_UScriptStruct_CineCameraPresetData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCineCameraPresetData), 264338665U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_CameraManager_Public_Data_CMCameraPresetData_h_1967220580(TEXT("/Script/CameraManager"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_CameraManager_Public_Data_CMCameraPresetData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_CameraManager_Public_Data_CMCameraPresetData_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
