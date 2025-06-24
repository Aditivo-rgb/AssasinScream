// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CameraManager/Public/Data/CMSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCMSubsystem() {}

// Begin Cross Module References
CAMERAMANAGER_API UClass* Z_Construct_UClass_UCameraManagerSubsystem();
CAMERAMANAGER_API UClass* Z_Construct_UClass_UCameraManagerSubsystem_NoRegister();
EDITORSUBSYSTEM_API UClass* Z_Construct_UClass_UEditorSubsystem();
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
UPackage* Z_Construct_UPackage__Script_CameraManager();
// End Cross Module References

// Begin Class UCameraManagerSubsystem
void UCameraManagerSubsystem::StaticRegisterNativesUCameraManagerSubsystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCameraManagerSubsystem);
UClass* Z_Construct_UClass_UCameraManagerSubsystem_NoRegister()
{
	return UCameraManagerSubsystem::StaticClass();
}
struct Z_Construct_UClass_UCameraManagerSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * @class UCameraManagerSubsystem\n * @brief A class that manages scene settings in the Unreal Engine editor.\n *\n * This class is responsible for managing camera presets, importing and exporting presets,\n * and handling the user interface for these operations.\n */" },
		{ "IncludePath", "Data/CMSubsystem.h" },
		{ "ModuleRelativePath", "Public/Data/CMSubsystem.h" },
		{ "ToolTip", "@class UCameraManagerSubsystem\n@brief A class that manages scene settings in the Unreal Engine editor.\n\nThis class is responsible for managing camera presets, importing and exporting presets,\nand handling the user interface for these operations." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraPresetData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/CMSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraPresetData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCameraManagerSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCameraManagerSubsystem_Statics::NewProp_CameraPresetData = { "CameraPresetData", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraManagerSubsystem, CameraPresetData), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraPresetData_MetaData), NewProp_CameraPresetData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCameraManagerSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraManagerSubsystem_Statics::NewProp_CameraPresetData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraManagerSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCameraManagerSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEditorSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_CameraManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraManagerSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCameraManagerSubsystem_Statics::ClassParams = {
	&UCameraManagerSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCameraManagerSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCameraManagerSubsystem_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraManagerSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UCameraManagerSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCameraManagerSubsystem()
{
	if (!Z_Registration_Info_UClass_UCameraManagerSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCameraManagerSubsystem.OuterSingleton, Z_Construct_UClass_UCameraManagerSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCameraManagerSubsystem.OuterSingleton;
}
template<> CAMERAMANAGER_API UClass* StaticClass<UCameraManagerSubsystem>()
{
	return UCameraManagerSubsystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCameraManagerSubsystem);
UCameraManagerSubsystem::~UCameraManagerSubsystem() {}
// End Class UCameraManagerSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_CameraManager_Public_Data_CMSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCameraManagerSubsystem, UCameraManagerSubsystem::StaticClass, TEXT("UCameraManagerSubsystem"), &Z_Registration_Info_UClass_UCameraManagerSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCameraManagerSubsystem), 3926690647U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_CameraManager_Public_Data_CMSubsystem_h_3381914943(TEXT("/Script/CameraManager"),
	Z_CompiledInDeferFile_FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_CameraManager_Public_Data_CMSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_CameraManager_Public_Data_CMSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
