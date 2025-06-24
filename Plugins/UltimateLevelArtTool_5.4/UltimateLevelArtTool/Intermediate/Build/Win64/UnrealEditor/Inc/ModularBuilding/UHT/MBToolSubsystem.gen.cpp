// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularBuilding/Public/Data/MBToolSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMBToolSubsystem() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
EDITORSUBSYSTEM_API UClass* Z_Construct_UClass_UEditorSubsystem();
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
MODULARBUILDING_API UClass* Z_Construct_UClass_UMBToolData_NoRegister();
MODULARBUILDING_API UClass* Z_Construct_UClass_UMBToolSubsystem();
MODULARBUILDING_API UClass* Z_Construct_UClass_UMBToolSubsystem_NoRegister();
MODULARBUILDING_API UClass* Z_Construct_UClass_UMBUserSettings_NoRegister();
MODULARBUILDING_API UEnum* Z_Construct_UEnum_ModularBuilding_EBuildingCategory();
MODULARBUILDING_API UEnum* Z_Construct_UEnum_ModularBuilding_EMBWorkingMode();
MODULARBUILDING_API UEnum* Z_Construct_UEnum_ModularBuilding_EPlacementMode();
MODULARBUILDING_API UFunction* Z_Construct_UDelegateFunction_ModularBuilding_OnPlacementTypeChanged__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_ModularBuilding();
// End Cross Module References

// Begin Delegate FOnPlacementTypeChanged
struct Z_Construct_UDelegateFunction_ModularBuilding_OnPlacementTypeChanged__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Data/MBToolSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ModularBuilding_OnPlacementTypeChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ModularBuilding, nullptr, "OnPlacementTypeChanged__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ModularBuilding_OnPlacementTypeChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ModularBuilding_OnPlacementTypeChanged__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_ModularBuilding_OnPlacementTypeChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ModularBuilding_OnPlacementTypeChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnPlacementTypeChanged_DelegateWrapper(const FMulticastScriptDelegate& OnPlacementTypeChanged)
{
	OnPlacementTypeChanged.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnPlacementTypeChanged

// Begin Class UMBToolSubsystem
void UMBToolSubsystem::StaticRegisterNativesUMBToolSubsystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMBToolSubsystem);
UClass* Z_Construct_UClass_UMBToolSubsystem_NoRegister()
{
	return UMBToolSubsystem::StaticClass();
}
struct Z_Construct_UClass_UMBToolSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Data/MBToolSubsystem.h" },
		{ "ModuleRelativePath", "Public/Data/MBToolSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToolData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/MBToolSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToolUserSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/MBToolSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModularAssetData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/MBToolSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MBToolMainScreen_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/MBToolSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnNewAssetsAdded_MetaData[] = {
		{ "Category", "ToolSettings" },
		{ "ModuleRelativePath", "Public/Data/MBToolSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPlacementTypeChanged_MetaData[] = {
		{ "Category", "ToolSettings" },
		{ "ModuleRelativePath", "Public/Data/MBToolSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsTheSettingsOn_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/MBToolSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlacementMode_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/MBToolSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsMouseOnToolWindow_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/MBToolSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovedAssetCategory_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/MBToolSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorkingMode_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/MBToolSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsDuplicationInprogress_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/MBToolSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastActiveCollectionIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/MBToolSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveCollectionWindow_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/MBToolSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsShiftPressed_MetaData[] = {
		{ "Comment", "//Input Modifiers\n" },
		{ "ModuleRelativePath", "Public/Data/MBToolSubsystem.h" },
		{ "ToolTip", "Input Modifiers" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCtrlPressed_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/MBToolSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastCreatedAsset_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/MBToolSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ToolData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ToolUserSettings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ModularAssetData;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_MBToolMainScreen;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnNewAssetsAdded;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlacementTypeChanged;
	static void NewProp_IsTheSettingsOn_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsTheSettingsOn;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PlacementMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PlacementMode;
	static void NewProp_bIsMouseOnToolWindow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsMouseOnToolWindow;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MovedAssetCategory_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MovedAssetCategory;
	static const UECodeGen_Private::FBytePropertyParams NewProp_WorkingMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_WorkingMode;
	static void NewProp_bIsDuplicationInprogress_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDuplicationInprogress;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LastActiveCollectionIndex;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ActiveCollectionWindow;
	static void NewProp_bIsShiftPressed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsShiftPressed;
	static void NewProp_bIsCtrlPressed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCtrlPressed;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LastCreatedAsset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMBToolSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMBToolSubsystem_Statics::NewProp_ToolData = { "ToolData", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBToolSubsystem, ToolData), Z_Construct_UClass_UMBToolData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToolData_MetaData), NewProp_ToolData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMBToolSubsystem_Statics::NewProp_ToolUserSettings = { "ToolUserSettings", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBToolSubsystem, ToolUserSettings), Z_Construct_UClass_UMBUserSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToolUserSettings_MetaData), NewProp_ToolUserSettings_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMBToolSubsystem_Statics::NewProp_ModularAssetData = { "ModularAssetData", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBToolSubsystem, ModularAssetData), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModularAssetData_MetaData), NewProp_ModularAssetData_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UMBToolSubsystem_Statics::NewProp_MBToolMainScreen = { "MBToolMainScreen", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBToolSubsystem, MBToolMainScreen), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MBToolMainScreen_MetaData), NewProp_MBToolMainScreen_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMBToolSubsystem_Statics::NewProp_OnNewAssetsAdded = { "OnNewAssetsAdded", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBToolSubsystem, OnNewAssetsAdded), Z_Construct_UDelegateFunction_ModularBuilding_OnPlacementTypeChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnNewAssetsAdded_MetaData), NewProp_OnNewAssetsAdded_MetaData) }; // 3756890115
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMBToolSubsystem_Statics::NewProp_OnPlacementTypeChanged = { "OnPlacementTypeChanged", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBToolSubsystem, OnPlacementTypeChanged), Z_Construct_UDelegateFunction_ModularBuilding_OnPlacementTypeChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPlacementTypeChanged_MetaData), NewProp_OnPlacementTypeChanged_MetaData) }; // 3756890115
void Z_Construct_UClass_UMBToolSubsystem_Statics::NewProp_IsTheSettingsOn_SetBit(void* Obj)
{
	((UMBToolSubsystem*)Obj)->IsTheSettingsOn = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMBToolSubsystem_Statics::NewProp_IsTheSettingsOn = { "IsTheSettingsOn", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMBToolSubsystem), &Z_Construct_UClass_UMBToolSubsystem_Statics::NewProp_IsTheSettingsOn_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsTheSettingsOn_MetaData), NewProp_IsTheSettingsOn_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMBToolSubsystem_Statics::NewProp_PlacementMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMBToolSubsystem_Statics::NewProp_PlacementMode = { "PlacementMode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBToolSubsystem, PlacementMode), Z_Construct_UEnum_ModularBuilding_EPlacementMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlacementMode_MetaData), NewProp_PlacementMode_MetaData) }; // 2746029554
void Z_Construct_UClass_UMBToolSubsystem_Statics::NewProp_bIsMouseOnToolWindow_SetBit(void* Obj)
{
	((UMBToolSubsystem*)Obj)->bIsMouseOnToolWindow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMBToolSubsystem_Statics::NewProp_bIsMouseOnToolWindow = { "bIsMouseOnToolWindow", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMBToolSubsystem), &Z_Construct_UClass_UMBToolSubsystem_Statics::NewProp_bIsMouseOnToolWindow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsMouseOnToolWindow_MetaData), NewProp_bIsMouseOnToolWindow_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMBToolSubsystem_Statics::NewProp_MovedAssetCategory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMBToolSubsystem_Statics::NewProp_MovedAssetCategory = { "MovedAssetCategory", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBToolSubsystem, MovedAssetCategory), Z_Construct_UEnum_ModularBuilding_EBuildingCategory, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovedAssetCategory_MetaData), NewProp_MovedAssetCategory_MetaData) }; // 385100287
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMBToolSubsystem_Statics::NewProp_WorkingMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMBToolSubsystem_Statics::NewProp_WorkingMode = { "WorkingMode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBToolSubsystem, WorkingMode), Z_Construct_UEnum_ModularBuilding_EMBWorkingMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorkingMode_MetaData), NewProp_WorkingMode_MetaData) }; // 3586567999
void Z_Construct_UClass_UMBToolSubsystem_Statics::NewProp_bIsDuplicationInprogress_SetBit(void* Obj)
{
	((UMBToolSubsystem*)Obj)->bIsDuplicationInprogress = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMBToolSubsystem_Statics::NewProp_bIsDuplicationInprogress = { "bIsDuplicationInprogress", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMBToolSubsystem), &Z_Construct_UClass_UMBToolSubsystem_Statics::NewProp_bIsDuplicationInprogress_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsDuplicationInprogress_MetaData), NewProp_bIsDuplicationInprogress_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMBToolSubsystem_Statics::NewProp_LastActiveCollectionIndex = { "LastActiveCollectionIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBToolSubsystem, LastActiveCollectionIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastActiveCollectionIndex_MetaData), NewProp_LastActiveCollectionIndex_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMBToolSubsystem_Statics::NewProp_ActiveCollectionWindow = { "ActiveCollectionWindow", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBToolSubsystem, ActiveCollectionWindow), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveCollectionWindow_MetaData), NewProp_ActiveCollectionWindow_MetaData) };
void Z_Construct_UClass_UMBToolSubsystem_Statics::NewProp_bIsShiftPressed_SetBit(void* Obj)
{
	((UMBToolSubsystem*)Obj)->bIsShiftPressed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMBToolSubsystem_Statics::NewProp_bIsShiftPressed = { "bIsShiftPressed", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMBToolSubsystem), &Z_Construct_UClass_UMBToolSubsystem_Statics::NewProp_bIsShiftPressed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsShiftPressed_MetaData), NewProp_bIsShiftPressed_MetaData) };
void Z_Construct_UClass_UMBToolSubsystem_Statics::NewProp_bIsCtrlPressed_SetBit(void* Obj)
{
	((UMBToolSubsystem*)Obj)->bIsCtrlPressed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMBToolSubsystem_Statics::NewProp_bIsCtrlPressed = { "bIsCtrlPressed", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMBToolSubsystem), &Z_Construct_UClass_UMBToolSubsystem_Statics::NewProp_bIsCtrlPressed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCtrlPressed_MetaData), NewProp_bIsCtrlPressed_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMBToolSubsystem_Statics::NewProp_LastCreatedAsset = { "LastCreatedAsset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBToolSubsystem, LastCreatedAsset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastCreatedAsset_MetaData), NewProp_LastCreatedAsset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMBToolSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBToolSubsystem_Statics::NewProp_ToolData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBToolSubsystem_Statics::NewProp_ToolUserSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBToolSubsystem_Statics::NewProp_ModularAssetData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBToolSubsystem_Statics::NewProp_MBToolMainScreen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBToolSubsystem_Statics::NewProp_OnNewAssetsAdded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBToolSubsystem_Statics::NewProp_OnPlacementTypeChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBToolSubsystem_Statics::NewProp_IsTheSettingsOn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBToolSubsystem_Statics::NewProp_PlacementMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBToolSubsystem_Statics::NewProp_PlacementMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBToolSubsystem_Statics::NewProp_bIsMouseOnToolWindow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBToolSubsystem_Statics::NewProp_MovedAssetCategory_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBToolSubsystem_Statics::NewProp_MovedAssetCategory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBToolSubsystem_Statics::NewProp_WorkingMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBToolSubsystem_Statics::NewProp_WorkingMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBToolSubsystem_Statics::NewProp_bIsDuplicationInprogress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBToolSubsystem_Statics::NewProp_LastActiveCollectionIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBToolSubsystem_Statics::NewProp_ActiveCollectionWindow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBToolSubsystem_Statics::NewProp_bIsShiftPressed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBToolSubsystem_Statics::NewProp_bIsCtrlPressed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBToolSubsystem_Statics::NewProp_LastCreatedAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMBToolSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMBToolSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEditorSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_ModularBuilding,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMBToolSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMBToolSubsystem_Statics::ClassParams = {
	&UMBToolSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMBToolSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMBToolSubsystem_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMBToolSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UMBToolSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMBToolSubsystem()
{
	if (!Z_Registration_Info_UClass_UMBToolSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMBToolSubsystem.OuterSingleton, Z_Construct_UClass_UMBToolSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMBToolSubsystem.OuterSingleton;
}
template<> MODULARBUILDING_API UClass* StaticClass<UMBToolSubsystem>()
{
	return UMBToolSubsystem::StaticClass();
}
UMBToolSubsystem::UMBToolSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMBToolSubsystem);
UMBToolSubsystem::~UMBToolSubsystem() {}
// End Class UMBToolSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Data_MBToolSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMBToolSubsystem, UMBToolSubsystem::StaticClass, TEXT("UMBToolSubsystem"), &Z_Registration_Info_UClass_UMBToolSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMBToolSubsystem), 1663506164U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Data_MBToolSubsystem_h_379095443(TEXT("/Script/ModularBuilding"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Data_MBToolSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Data_MBToolSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
