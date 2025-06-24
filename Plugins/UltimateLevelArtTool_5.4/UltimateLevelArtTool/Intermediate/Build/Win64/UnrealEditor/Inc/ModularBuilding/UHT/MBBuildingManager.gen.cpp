// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularBuilding/Public/Building/MBBuildingManager.h"
#include "ModularBuilding/Public/Data/MBDataStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMBBuildingManager() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
MODULARBUILDING_API UClass* Z_Construct_UClass_UMBBuildingManager();
MODULARBUILDING_API UClass* Z_Construct_UClass_UMBBuildingManager_NoRegister();
MODULARBUILDING_API UClass* Z_Construct_UClass_UMBBuildingManagerInterface_NoRegister();
MODULARBUILDING_API UClass* Z_Construct_UClass_UMBToolSubsystem_NoRegister();
MODULARBUILDING_API UEnum* Z_Construct_UEnum_ModularBuilding_EBuildingCategory();
MODULARBUILDING_API UEnum* Z_Construct_UEnum_ModularBuilding_EMBAxis();
MODULARBUILDING_API UEnum* Z_Construct_UEnum_ModularBuilding_EPlacementStatus();
MODULARBUILDING_API UScriptStruct* Z_Construct_UScriptStruct_FDuplicationData();
MODULARBUILDING_API UScriptStruct* Z_Construct_UScriptStruct_FDuplicationFilters();
MODULARBUILDING_API UScriptStruct* Z_Construct_UScriptStruct_FMultiPlacementData();
UPackage* Z_Construct_UPackage__Script_ModularBuilding();
// End Cross Module References

// Begin ScriptStruct FMultiPlacementData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MultiPlacementData;
class UScriptStruct* FMultiPlacementData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MultiPlacementData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MultiPlacementData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMultiPlacementData, (UObject*)Z_Construct_UPackage__Script_ModularBuilding(), TEXT("MultiPlacementData"));
	}
	return Z_Registration_Info_UScriptStruct_MultiPlacementData.OuterSingleton;
}
template<> MODULARBUILDING_API UScriptStruct* StaticStruct<FMultiPlacementData>()
{
	return FMultiPlacementData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMultiPlacementData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Building/MBBuildingManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Axis_MetaData[] = {
		{ "ModuleRelativePath", "Public/Building/MBBuildingManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HalfLength_MetaData[] = {
		{ "ModuleRelativePath", "Public/Building/MBBuildingManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/Building/MBBuildingManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[] = {
		{ "ModuleRelativePath", "Public/Building/MBBuildingManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Axis_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Axis;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HalfLength;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SpawnCount;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMultiPlacementData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMultiPlacementData_Statics::NewProp_Axis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMultiPlacementData_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMultiPlacementData, Axis), Z_Construct_UEnum_ModularBuilding_EMBAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Axis_MetaData), NewProp_Axis_MetaData) }; // 3735486892
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMultiPlacementData_Statics::NewProp_HalfLength = { "HalfLength", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMultiPlacementData, HalfLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HalfLength_MetaData), NewProp_HalfLength_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMultiPlacementData_Statics::NewProp_SpawnCount = { "SpawnCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMultiPlacementData, SpawnCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnCount_MetaData), NewProp_SpawnCount_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMultiPlacementData_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMultiPlacementData, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Direction_MetaData), NewProp_Direction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMultiPlacementData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiPlacementData_Statics::NewProp_Axis_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiPlacementData_Statics::NewProp_Axis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiPlacementData_Statics::NewProp_HalfLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiPlacementData_Statics::NewProp_SpawnCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiPlacementData_Statics::NewProp_Direction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiPlacementData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMultiPlacementData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ModularBuilding,
	nullptr,
	&NewStructOps,
	"MultiPlacementData",
	Z_Construct_UScriptStruct_FMultiPlacementData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiPlacementData_Statics::PropPointers),
	sizeof(FMultiPlacementData),
	alignof(FMultiPlacementData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiPlacementData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMultiPlacementData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMultiPlacementData()
{
	if (!Z_Registration_Info_UScriptStruct_MultiPlacementData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MultiPlacementData.InnerSingleton, Z_Construct_UScriptStruct_FMultiPlacementData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MultiPlacementData.InnerSingleton;
}
// End ScriptStruct FMultiPlacementData

// Begin Class UMBBuildingManager Function OnPlacementTypeChanged
struct Z_Construct_UFunction_UMBBuildingManager_OnPlacementTypeChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Building/MBBuildingManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMBBuildingManager_OnPlacementTypeChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMBBuildingManager, nullptr, "OnPlacementTypeChanged", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBBuildingManager_OnPlacementTypeChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMBBuildingManager_OnPlacementTypeChanged_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMBBuildingManager_OnPlacementTypeChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMBBuildingManager_OnPlacementTypeChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMBBuildingManager::execOnPlacementTypeChanged)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPlacementTypeChanged();
	P_NATIVE_END;
}
// End Class UMBBuildingManager Function OnPlacementTypeChanged

// Begin Class UMBBuildingManager
void UMBBuildingManager::StaticRegisterNativesUMBBuildingManager()
{
	UClass* Class = UMBBuildingManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnPlacementTypeChanged", &UMBBuildingManager::execOnPlacementTypeChanged },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMBBuildingManager);
UClass* Z_Construct_UClass_UMBBuildingManager_NoRegister()
{
	return UMBBuildingManager::StaticClass();
}
struct Z_Construct_UClass_UMBBuildingManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Building/MBBuildingManager.h" },
		{ "ModuleRelativePath", "Public/Building/MBBuildingManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToolSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/Building/MBBuildingManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovedActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Building/MBBuildingManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Building/MBBuildingManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Building/MBBuildingManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitCategory_MetaData[] = {
		{ "ModuleRelativePath", "Public/Building/MBBuildingManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/Building/MBBuildingManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetRotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/Building/MBBuildingManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropTargetRotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/Building/MBBuildingManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlacementStatus_MetaData[] = {
		{ "ModuleRelativePath", "Public/Building/MBBuildingManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LockedAxis_MetaData[] = {
		{ "ModuleRelativePath", "Public/Building/MBBuildingManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LockedAxisValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/Building/MBBuildingManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CancelledWorldAxis_MetaData[] = {
		{ "ModuleRelativePath", "Public/Building/MBBuildingManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CancelledValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/Building/MBBuildingManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlacementDynamicMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/Building/MBBuildingManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlacementDynamicMaterialForNanite_MetaData[] = {
		{ "ModuleRelativePath", "Public/Building/MBBuildingManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedDupActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Building/MBBuildingManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Placeholders_MetaData[] = {
		{ "ModuleRelativePath", "Public/Building/MBBuildingManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DuplicatedFreePool_MetaData[] = {
		{ "ModuleRelativePath", "Public/Building/MBBuildingManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_XDupData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Building/MBBuildingManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_YDupData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Building/MBBuildingManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZDupData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Building/MBBuildingManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DuplicationFilters_MetaData[] = {
		{ "ModuleRelativePath", "Public/Building/MBBuildingManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MultiPlacementBaseComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Building/MBBuildingManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ToolSettings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MovedActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedActor;
	static const UECodeGen_Private::FBytePropertyParams NewProp_HitCategory_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_HitCategory;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PropTargetRotation;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PlacementStatus_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PlacementStatus;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LockedAxis_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LockedAxis;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LockedAxisValue;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CancelledWorldAxis_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CancelledWorldAxis;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CancelledValue;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlacementDynamicMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlacementDynamicMaterialForNanite;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedDupActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Placeholders_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Placeholders;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DuplicatedFreePool_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DuplicatedFreePool;
	static const UECodeGen_Private::FStructPropertyParams NewProp_XDupData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_YDupData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ZDupData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DuplicationFilters;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MultiPlacementBaseComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMBBuildingManager_OnPlacementTypeChanged, "OnPlacementTypeChanged" }, // 1114347408
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMBBuildingManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMBBuildingManager_Statics::NewProp_ToolSettings = { "ToolSettings", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBBuildingManager, ToolSettings), Z_Construct_UClass_UMBToolSubsystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToolSettings_MetaData), NewProp_ToolSettings_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMBBuildingManager_Statics::NewProp_MovedActor = { "MovedActor", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBBuildingManager, MovedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovedActor_MetaData), NewProp_MovedActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMBBuildingManager_Statics::NewProp_HitActor = { "HitActor", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBBuildingManager, HitActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitActor_MetaData), NewProp_HitActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMBBuildingManager_Statics::NewProp_OverlappedActor = { "OverlappedActor", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBBuildingManager, OverlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedActor_MetaData), NewProp_OverlappedActor_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMBBuildingManager_Statics::NewProp_HitCategory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMBBuildingManager_Statics::NewProp_HitCategory = { "HitCategory", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBBuildingManager, HitCategory), Z_Construct_UEnum_ModularBuilding_EBuildingCategory, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitCategory_MetaData), NewProp_HitCategory_MetaData) }; // 385100287
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMBBuildingManager_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBBuildingManager, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetLocation_MetaData), NewProp_TargetLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMBBuildingManager_Statics::NewProp_TargetRotation = { "TargetRotation", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBBuildingManager, TargetRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetRotation_MetaData), NewProp_TargetRotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMBBuildingManager_Statics::NewProp_PropTargetRotation = { "PropTargetRotation", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBBuildingManager, PropTargetRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropTargetRotation_MetaData), NewProp_PropTargetRotation_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMBBuildingManager_Statics::NewProp_PlacementStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMBBuildingManager_Statics::NewProp_PlacementStatus = { "PlacementStatus", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBBuildingManager, PlacementStatus), Z_Construct_UEnum_ModularBuilding_EPlacementStatus, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlacementStatus_MetaData), NewProp_PlacementStatus_MetaData) }; // 3758527380
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMBBuildingManager_Statics::NewProp_LockedAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMBBuildingManager_Statics::NewProp_LockedAxis = { "LockedAxis", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBBuildingManager, LockedAxis), Z_Construct_UEnum_ModularBuilding_EMBAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LockedAxis_MetaData), NewProp_LockedAxis_MetaData) }; // 3735486892
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMBBuildingManager_Statics::NewProp_LockedAxisValue = { "LockedAxisValue", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBBuildingManager, LockedAxisValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LockedAxisValue_MetaData), NewProp_LockedAxisValue_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMBBuildingManager_Statics::NewProp_CancelledWorldAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMBBuildingManager_Statics::NewProp_CancelledWorldAxis = { "CancelledWorldAxis", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBBuildingManager, CancelledWorldAxis), Z_Construct_UEnum_ModularBuilding_EMBAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CancelledWorldAxis_MetaData), NewProp_CancelledWorldAxis_MetaData) }; // 3735486892
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMBBuildingManager_Statics::NewProp_CancelledValue = { "CancelledValue", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBBuildingManager, CancelledValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CancelledValue_MetaData), NewProp_CancelledValue_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMBBuildingManager_Statics::NewProp_PlacementDynamicMaterial = { "PlacementDynamicMaterial", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBBuildingManager, PlacementDynamicMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlacementDynamicMaterial_MetaData), NewProp_PlacementDynamicMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMBBuildingManager_Statics::NewProp_PlacementDynamicMaterialForNanite = { "PlacementDynamicMaterialForNanite", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBBuildingManager, PlacementDynamicMaterialForNanite), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlacementDynamicMaterialForNanite_MetaData), NewProp_PlacementDynamicMaterialForNanite_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMBBuildingManager_Statics::NewProp_SelectedDupActor = { "SelectedDupActor", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBBuildingManager, SelectedDupActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedDupActor_MetaData), NewProp_SelectedDupActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMBBuildingManager_Statics::NewProp_Placeholders_Inner = { "Placeholders", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMBBuildingManager_Statics::NewProp_Placeholders = { "Placeholders", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBBuildingManager, Placeholders), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Placeholders_MetaData), NewProp_Placeholders_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMBBuildingManager_Statics::NewProp_DuplicatedFreePool_Inner = { "DuplicatedFreePool", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMBBuildingManager_Statics::NewProp_DuplicatedFreePool = { "DuplicatedFreePool", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBBuildingManager, DuplicatedFreePool), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DuplicatedFreePool_MetaData), NewProp_DuplicatedFreePool_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMBBuildingManager_Statics::NewProp_XDupData = { "XDupData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBBuildingManager, XDupData), Z_Construct_UScriptStruct_FDuplicationData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_XDupData_MetaData), NewProp_XDupData_MetaData) }; // 4279460606
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMBBuildingManager_Statics::NewProp_YDupData = { "YDupData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBBuildingManager, YDupData), Z_Construct_UScriptStruct_FDuplicationData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_YDupData_MetaData), NewProp_YDupData_MetaData) }; // 4279460606
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMBBuildingManager_Statics::NewProp_ZDupData = { "ZDupData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBBuildingManager, ZDupData), Z_Construct_UScriptStruct_FDuplicationData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZDupData_MetaData), NewProp_ZDupData_MetaData) }; // 4279460606
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMBBuildingManager_Statics::NewProp_DuplicationFilters = { "DuplicationFilters", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBBuildingManager, DuplicationFilters), Z_Construct_UScriptStruct_FDuplicationFilters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DuplicationFilters_MetaData), NewProp_DuplicationFilters_MetaData) }; // 1790621036
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMBBuildingManager_Statics::NewProp_MultiPlacementBaseComponent = { "MultiPlacementBaseComponent", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBBuildingManager, MultiPlacementBaseComponent), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MultiPlacementBaseComponent_MetaData), NewProp_MultiPlacementBaseComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMBBuildingManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBBuildingManager_Statics::NewProp_ToolSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBBuildingManager_Statics::NewProp_MovedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBBuildingManager_Statics::NewProp_HitActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBBuildingManager_Statics::NewProp_OverlappedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBBuildingManager_Statics::NewProp_HitCategory_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBBuildingManager_Statics::NewProp_HitCategory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBBuildingManager_Statics::NewProp_TargetLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBBuildingManager_Statics::NewProp_TargetRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBBuildingManager_Statics::NewProp_PropTargetRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBBuildingManager_Statics::NewProp_PlacementStatus_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBBuildingManager_Statics::NewProp_PlacementStatus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBBuildingManager_Statics::NewProp_LockedAxis_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBBuildingManager_Statics::NewProp_LockedAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBBuildingManager_Statics::NewProp_LockedAxisValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBBuildingManager_Statics::NewProp_CancelledWorldAxis_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBBuildingManager_Statics::NewProp_CancelledWorldAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBBuildingManager_Statics::NewProp_CancelledValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBBuildingManager_Statics::NewProp_PlacementDynamicMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBBuildingManager_Statics::NewProp_PlacementDynamicMaterialForNanite,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBBuildingManager_Statics::NewProp_SelectedDupActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBBuildingManager_Statics::NewProp_Placeholders_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBBuildingManager_Statics::NewProp_Placeholders,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBBuildingManager_Statics::NewProp_DuplicatedFreePool_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBBuildingManager_Statics::NewProp_DuplicatedFreePool,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBBuildingManager_Statics::NewProp_XDupData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBBuildingManager_Statics::NewProp_YDupData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBBuildingManager_Statics::NewProp_ZDupData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBBuildingManager_Statics::NewProp_DuplicationFilters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBBuildingManager_Statics::NewProp_MultiPlacementBaseComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMBBuildingManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMBBuildingManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ModularBuilding,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMBBuildingManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMBBuildingManager_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UMBBuildingManagerInterface_NoRegister, (int32)VTABLE_OFFSET(UMBBuildingManager, IMBBuildingManagerInterface), false },  // 1335250729
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMBBuildingManager_Statics::ClassParams = {
	&UMBBuildingManager::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMBBuildingManager_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMBBuildingManager_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMBBuildingManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UMBBuildingManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMBBuildingManager()
{
	if (!Z_Registration_Info_UClass_UMBBuildingManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMBBuildingManager.OuterSingleton, Z_Construct_UClass_UMBBuildingManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMBBuildingManager.OuterSingleton;
}
template<> MODULARBUILDING_API UClass* StaticClass<UMBBuildingManager>()
{
	return UMBBuildingManager::StaticClass();
}
UMBBuildingManager::UMBBuildingManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMBBuildingManager);
UMBBuildingManager::~UMBBuildingManager() {}
// End Class UMBBuildingManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Building_MBBuildingManager_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMultiPlacementData::StaticStruct, Z_Construct_UScriptStruct_FMultiPlacementData_Statics::NewStructOps, TEXT("MultiPlacementData"), &Z_Registration_Info_UScriptStruct_MultiPlacementData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMultiPlacementData), 2253015394U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMBBuildingManager, UMBBuildingManager::StaticClass, TEXT("UMBBuildingManager"), &Z_Registration_Info_UClass_UMBBuildingManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMBBuildingManager), 842999277U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Building_MBBuildingManager_h_4004321868(TEXT("/Script/ModularBuilding"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Building_MBBuildingManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Building_MBBuildingManager_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Building_MBBuildingManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Building_MBBuildingManager_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
