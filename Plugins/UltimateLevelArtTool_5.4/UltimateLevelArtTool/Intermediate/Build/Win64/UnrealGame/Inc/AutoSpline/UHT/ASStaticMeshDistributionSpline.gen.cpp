// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoSpline/Public/Spline/ASStaticMeshDistributionSpline.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeASStaticMeshDistributionSpline() {}

// Begin Cross Module References
AUTOSPLINE_API UClass* Z_Construct_UClass_AASAutoSplineBase();
AUTOSPLINE_API UClass* Z_Construct_UClass_AASAutoSplineBase_NoRegister();
AUTOSPLINE_API UClass* Z_Construct_UClass_AASStaticMeshDistributionSpline();
AUTOSPLINE_API UClass* Z_Construct_UClass_AASStaticMeshDistributionSpline_NoRegister();
AUTOSPLINE_API UEnum* Z_Construct_UEnum_AutoSpline_EASMeshAxis();
AUTOSPLINE_API UEnum* Z_Construct_UEnum_AutoSpline_ENonDeformInstanceType();
AUTOSPLINE_API UEnum* Z_Construct_UEnum_AutoSpline_ESplineObjectRotationType();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRandomStream();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EComponentMobility();
UPackage* Z_Construct_UPackage__Script_AutoSpline();
// End Cross Module References

// Begin Enum ENonDeformInstanceType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENonDeformInstanceType;
static UEnum* ENonDeformInstanceType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENonDeformInstanceType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENonDeformInstanceType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AutoSpline_ENonDeformInstanceType, (UObject*)Z_Construct_UPackage__Script_AutoSpline(), TEXT("ENonDeformInstanceType"));
	}
	return Z_Registration_Info_UEnum_ENonDeformInstanceType.OuterSingleton;
}
template<> AUTOSPLINE_API UEnum* StaticEnum<ENonDeformInstanceType>()
{
	return ENonDeformInstanceType_StaticEnum();
}
struct Z_Construct_UEnum_AutoSpline_ENonDeformInstanceType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Modular Building Tool" },
		{ "HIsm.DisplayName", "Hierarchical Instanced Static Mesh" },
		{ "HIsm.Name", "ENonDeformInstanceType::HIsm" },
		{ "Ism.DisplayName", "Instanced Static Mesh" },
		{ "Ism.Name", "ENonDeformInstanceType::Ism" },
		{ "ModuleRelativePath", "Public/Spline/ASStaticMeshDistributionSpline.h" },
		{ "Sm.DisplayName", "Static Mesh" },
		{ "Sm.Name", "ENonDeformInstanceType::Sm" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENonDeformInstanceType::Sm", (int64)ENonDeformInstanceType::Sm },
		{ "ENonDeformInstanceType::Ism", (int64)ENonDeformInstanceType::Ism },
		{ "ENonDeformInstanceType::HIsm", (int64)ENonDeformInstanceType::HIsm },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AutoSpline_ENonDeformInstanceType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AutoSpline,
	nullptr,
	"ENonDeformInstanceType",
	"ENonDeformInstanceType",
	Z_Construct_UEnum_AutoSpline_ENonDeformInstanceType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AutoSpline_ENonDeformInstanceType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AutoSpline_ENonDeformInstanceType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AutoSpline_ENonDeformInstanceType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AutoSpline_ENonDeformInstanceType()
{
	if (!Z_Registration_Info_UEnum_ENonDeformInstanceType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENonDeformInstanceType.InnerSingleton, Z_Construct_UEnum_AutoSpline_ENonDeformInstanceType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENonDeformInstanceType.InnerSingleton;
}
// End Enum ENonDeformInstanceType

// Begin Class AASStaticMeshDistributionSpline
void AASStaticMeshDistributionSpline::StaticRegisterNativesAASStaticMeshDistributionSpline()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AASStaticMeshDistributionSpline);
UClass* Z_Construct_UClass_AASStaticMeshDistributionSpline_NoRegister()
{
	return AASStaticMeshDistributionSpline::StaticClass();
}
struct Z_Construct_UClass_AASStaticMeshDistributionSpline_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Spline/ASStaticMeshDistributionSpline.h" },
		{ "ModuleRelativePath", "Public/Spline/ASStaticMeshDistributionSpline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomStream_MetaData[] = {
		{ "ModuleRelativePath", "Public/Spline/ASStaticMeshDistributionSpline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicSMInstanceComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Spline/ASStaticMeshDistributionSpline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicSMComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Spline/ASStaticMeshDistributionSpline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstanceType_MetaData[] = {
		{ "Category", "Tool Settings|Instances" },
		{ "ModuleRelativePath", "Public/Spline/ASStaticMeshDistributionSpline.h" },
		{ "NoResetToDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplineStaticMeshes_MetaData[] = {
		{ "Category", "Tool Settings|Instances" },
		{ "ModuleRelativePath", "Public/Spline/ASStaticMeshDistributionSpline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAddCustomEndMeshCond_MetaData[] = {
		{ "Category", "Tool Settings|Instances" },
		{ "DisplayName", "Custom End Mesh" },
		{ "ModuleRelativePath", "Public/Spline/ASStaticMeshDistributionSpline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomEndMesh_MetaData[] = {
		{ "Category", "Tool Settings|Instances" },
		{ "EditCondition", "bAddCustomEndMeshCond" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Spline/ASStaticMeshDistributionSpline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSetNumber_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Spline/ASStaticMeshDistributionSpline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfInstance_MetaData[] = {
		{ "Category", "Tool Settings|Distribution" },
		{ "ClampMin", "1" },
		{ "EditCondition", "bSetNumber" },
		{ "ModuleRelativePath", "Public/Spline/ASStaticMeshDistributionSpline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OffsetOnSpline_MetaData[] = {
		{ "Category", "Tool Settings|Distribution" },
		{ "EditCondition", "!bSetNumber && NumberOfInstance >= 0" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Spline/ASStaticMeshDistributionSpline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialRotationOffset_MetaData[] = {
		{ "Category", "Tool Settings|Distribution" },
		{ "ModuleRelativePath", "Public/Spline/ASStaticMeshDistributionSpline.h" },
		{ "ToolTip", "Initially adds local rotation offset." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSelectRandom_MetaData[] = {
		{ "Category", "Tool Settings|Distribution" },
		{ "DisplayName", "Distribute Randomly" },
		{ "ModuleRelativePath", "Public/Spline/ASStaticMeshDistributionSpline.h" },
		{ "ToolTip", "Selects static meshes randomly from the list" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRandomPositionOffset_MetaData[] = {
		{ "Category", "Tool Settings|Distribution" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Spline/ASStaticMeshDistributionSpline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomPositionOffset_MetaData[] = {
		{ "Category", "Tool Settings|Distribution" },
		{ "ClampMin", "0.000000" },
		{ "EditCondition", "bRandomPositionOffset" },
		{ "ModuleRelativePath", "Public/Spline/ASStaticMeshDistributionSpline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRandomRotationOffset_MetaData[] = {
		{ "Category", "Tool Settings|Distribution" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Spline/ASStaticMeshDistributionSpline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomRotationOffset_MetaData[] = {
		{ "Category", "Tool Settings|Distribution" },
		{ "ClampMax", "180.000000" },
		{ "ClampMin", "0" },
		{ "EditCondition", "bRandomRotationOffset" },
		{ "ModuleRelativePath", "Public/Spline/ASStaticMeshDistributionSpline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRandomScaleRange_MetaData[] = {
		{ "Category", "Tool Settings|Distribution" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Spline/ASStaticMeshDistributionSpline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomScaleRange_MetaData[] = {
		{ "Category", "Tool Settings|Distribution" },
		{ "ClampMin", "0.010000" },
		{ "EditCondition", "bRandomScaleRange" },
		{ "ModuleRelativePath", "Public/Spline/ASStaticMeshDistributionSpline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInnerSplineOffset_MetaData[] = {
		{ "Category", "Tool Settings|Distribution" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Spline/ASStaticMeshDistributionSpline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InnerSplineOffset_MetaData[] = {
		{ "Category", "Tool Settings|Distribution" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Inner Spline Offset Range" },
		{ "EditCondition", "bInnerSplineOffset" },
		{ "ModuleRelativePath", "Public/Spline/ASStaticMeshDistributionSpline.h" },
		{ "NoSpinbox", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationType_MetaData[] = {
		{ "Category", "Tool Settings|Distribution" },
		{ "ModuleRelativePath", "Public/Spline/ASStaticMeshDistributionSpline.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Stream value for random actions" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SnapToSurface_MetaData[] = {
		{ "Category", "Tool Settings|Distribution" },
		{ "ModuleRelativePath", "Public/Spline/ASStaticMeshDistributionSpline.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Stream value for random actions" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoCloseTheSpline_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "DisplayName", "Auto Close The Spline" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Spline/ASStaticMeshDistributionSpline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoCloseTheSpline_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "EditCondition", "bAutoCloseTheSpline" },
		{ "ModuleRelativePath", "Public/Spline/ASStaticMeshDistributionSpline.h" },
		{ "ToolTip", "The spline closes automatically when the first and last point are close enough" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Seed_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "ModuleRelativePath", "Public/Spline/ASStaticMeshDistributionSpline.h" },
		{ "ToolTip", "Stream value for random actions" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mobility_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "ModuleRelativePath", "Public/Spline/ASStaticMeshDistributionSpline.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCopyASpline_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Spline/ASStaticMeshDistributionSpline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CopyASpline_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "EditCondition", "bCopyASpline" },
		{ "ModuleRelativePath", "Public/Spline/ASStaticMeshDistributionSpline.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForwardAxis_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "ModuleRelativePath", "Public/Spline/ASStaticMeshDistributionSpline.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RandomStream;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DynamicSMInstanceComponents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DynamicSMInstanceComponents;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DynamicSMComponents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DynamicSMComponents;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InstanceType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InstanceType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SplineStaticMeshes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SplineStaticMeshes;
	static void NewProp_bAddCustomEndMeshCond_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddCustomEndMeshCond;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomEndMesh;
	static void NewProp_bSetNumber_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetNumber;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfInstance;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OffsetOnSpline;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InitialRotationOffset;
	static void NewProp_bSelectRandom_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelectRandom;
	static void NewProp_bRandomPositionOffset_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRandomPositionOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RandomPositionOffset;
	static void NewProp_bRandomRotationOffset_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRandomRotationOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RandomRotationOffset;
	static void NewProp_bRandomScaleRange_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRandomScaleRange;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RandomScaleRange;
	static void NewProp_bInnerSplineOffset_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInnerSplineOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InnerSplineOffset;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RotationType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RotationType;
	static void NewProp_SnapToSurface_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SnapToSurface;
	static void NewProp_bAutoCloseTheSpline_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoCloseTheSpline;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AutoCloseTheSpline;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Seed;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Mobility;
#if WITH_EDITORONLY_DATA
	static void NewProp_bCopyASpline_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCopyASpline;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CopyASpline;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ForwardAxis_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ForwardAxis;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AASStaticMeshDistributionSpline>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AASStaticMeshDistributionSpline_Statics::NewProp_RandomStream = { "RandomStream", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AASStaticMeshDistributionSpline, RandomStream), Z_Construct_UScriptStruct_FRandomStream, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomStream_MetaData), NewProp_RandomStream_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AASStaticMeshDistributionSpline_Statics::NewProp_DynamicSMInstanceComponents_Inner = { "DynamicSMInstanceComponents", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AASStaticMeshDistributionSpline_Statics::NewProp_DynamicSMInstanceComponents = { "DynamicSMInstanceComponents", nullptr, (EPropertyFlags)0x0144008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AASStaticMeshDistributionSpline, DynamicSMInstanceComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicSMInstanceComponents_MetaData), NewProp_DynamicSMInstanceComponents_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AASStaticMeshDistributionSpline_Statics::NewProp_DynamicSMComponents_Inner = { "DynamicSMComponents", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AASStaticMeshDistributionSpline_Statics::NewProp_DynamicSMComponents = { "DynamicSMComponents", nullptr, (EPropertyFlags)0x0144008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AASStaticMeshDistributionSpline, DynamicSMComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicSMComponents_MetaData), NewProp_DynamicSMComponents_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AASStaticMeshDistributionSpline_Statics::NewProp_InstanceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AASStaticMeshDistributionSpline_Statics::NewProp_InstanceType = { "InstanceType", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AASStaticMeshDistributionSpline, InstanceType), Z_Construct_UEnum_AutoSpline_ENonDeformInstanceType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstanceType_MetaData), NewProp_InstanceType_MetaData) }; // 3514227367
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AASStaticMeshDistributionSpline_Statics::NewProp_SplineStaticMeshes_Inner = { "SplineStaticMeshes", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AASStaticMeshDistributionSpline_Statics::NewProp_SplineStaticMeshes = { "SplineStaticMeshes", nullptr, (EPropertyFlags)0x0124080000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AASStaticMeshDistributionSpline, SplineStaticMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplineStaticMeshes_MetaData), NewProp_SplineStaticMeshes_MetaData) };
void Z_Construct_UClass_AASStaticMeshDistributionSpline_Statics::NewProp_bAddCustomEndMeshCond_SetBit(void* Obj)
{
	((AASStaticMeshDistributionSpline*)Obj)->bAddCustomEndMeshCond = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AASStaticMeshDistributionSpline_Statics::NewProp_bAddCustomEndMeshCond = { "bAddCustomEndMeshCond", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AASStaticMeshDistributionSpline), &Z_Construct_UClass_AASStaticMeshDistributionSpline_Statics::NewProp_bAddCustomEndMeshCond_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAddCustomEndMeshCond_MetaData), NewProp_bAddCustomEndMeshCond_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AASStaticMeshDistributionSpline_Statics::NewProp_CustomEndMesh = { "CustomEndMesh", nullptr, (EPropertyFlags)0x0124080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AASStaticMeshDistributionSpline, CustomEndMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomEndMesh_MetaData), NewProp_CustomEndMesh_MetaData) };
void Z_Construct_UClass_AASStaticMeshDistributionSpline_Statics::NewProp_bSetNumber_SetBit(void* Obj)
{
	((AASStaticMeshDistributionSpline*)Obj)->bSetNumber = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AASStaticMeshDistributionSpline_Statics::NewProp_bSetNumber = { "bSetNumber", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AASStaticMeshDistributionSpline), &Z_Construct_UClass_AASStaticMeshDistributionSpline_Statics::NewProp_bSetNumber_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSetNumber_MetaData), NewProp_bSetNumber_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AASStaticMeshDistributionSpline_Statics::NewProp_NumberOfInstance = { "NumberOfInstance", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AASStaticMeshDistributionSpline, NumberOfInstance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumberOfInstance_MetaData), NewProp_NumberOfInstance_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AASStaticMeshDistributionSpline_Statics::NewProp_OffsetOnSpline = { "OffsetOnSpline", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AASStaticMeshDistributionSpline, OffsetOnSpline), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OffsetOnSpline_MetaData), NewProp_OffsetOnSpline_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AASStaticMeshDistributionSpline_Statics::NewProp_InitialRotationOffset = { "InitialRotationOffset", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AASStaticMeshDistributionSpline, InitialRotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialRotationOffset_MetaData), NewProp_InitialRotationOffset_MetaData) };
void Z_Construct_UClass_AASStaticMeshDistributionSpline_Statics::NewProp_bSelectRandom_SetBit(void* Obj)
{
	((AASStaticMeshDistributionSpline*)Obj)->bSelectRandom = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AASStaticMeshDistributionSpline_Statics::NewProp_bSelectRandom = { "bSelectRandom", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AASStaticMeshDistributionSpline), &Z_Construct_UClass_AASStaticMeshDistributionSpline_Statics::NewProp_bSelectRandom_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSelectRandom_MetaData), NewProp_bSelectRandom_MetaData) };
void Z_Construct_UClass_AASStaticMeshDistributionSpline_Statics::NewProp_bRandomPositionOffset_SetBit(void* Obj)
{
	((AASStaticMeshDistributionSpline*)Obj)->bRandomPositionOffset = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AASStaticMeshDistributionSpline_Statics::NewProp_bRandomPositionOffset = { "bRandomPositionOffset", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AASStaticMeshDistributionSpline), &Z_Construct_UClass_AASStaticMeshDistributionSpline_Statics::NewProp_bRandomPositionOffset_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRandomPositionOffset_MetaData), NewProp_bRandomPositionOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AASStaticMeshDistributionSpline_Statics::NewProp_RandomPositionOffset = { "RandomPositionOffset", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AASStaticMeshDistributionSpline, RandomPositionOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomPositionOffset_MetaData), NewProp_RandomPositionOffset_MetaData) };
void Z_Construct_UClass_AASStaticMeshDistributionSpline_Statics::NewProp_bRandomRotationOffset_SetBit(void* Obj)
{
	((AASStaticMeshDistributionSpline*)Obj)->bRandomRotationOffset = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AASStaticMeshDistributionSpline_Statics::NewProp_bRandomRotationOffset = { "bRandomRotationOffset", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AASStaticMeshDistributionSpline), &Z_Construct_UClass_AASStaticMeshDistributionSpline_Statics::NewProp_bRandomRotationOffset_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRandomRotationOffset_MetaData), NewProp_bRandomRotationOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AASStaticMeshDistributionSpline_Statics::NewProp_RandomRotationOffset = { "RandomRotationOffset", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AASStaticMeshDistributionSpline, RandomRotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomRotationOffset_MetaData), NewProp_RandomRotationOffset_MetaData) };
void Z_Construct_UClass_AASStaticMeshDistributionSpline_Statics::NewProp_bRandomScaleRange_SetBit(void* Obj)
{
	((AASStaticMeshDistributionSpline*)Obj)->bRandomScaleRange = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AASStaticMeshDistributionSpline_Statics::NewProp_bRandomScaleRange = { "bRandomScaleRange", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AASStaticMeshDistributionSpline), &Z_Construct_UClass_AASStaticMeshDistributionSpline_Statics::NewProp_bRandomScaleRange_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRandomScaleRange_MetaData), NewProp_bRandomScaleRange_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AASStaticMeshDistributionSpline_Statics::NewProp_RandomScaleRange = { "RandomScaleRange", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AASStaticMeshDistributionSpline, RandomScaleRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomScaleRange_MetaData), NewProp_RandomScaleRange_MetaData) };
void Z_Construct_UClass_AASStaticMeshDistributionSpline_Statics::NewProp_bInnerSplineOffset_SetBit(void* Obj)
{
	((AASStaticMeshDistributionSpline*)Obj)->bInnerSplineOffset = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AASStaticMeshDistributionSpline_Statics::NewProp_bInnerSplineOffset = { "bInnerSplineOffset", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AASStaticMeshDistributionSpline), &Z_Construct_UClass_AASStaticMeshDistributionSpline_Statics::NewProp_bInnerSplineOffset_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInnerSplineOffset_MetaData), NewProp_bInnerSplineOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AASStaticMeshDistributionSpline_Statics::NewProp_InnerSplineOffset = { "InnerSplineOffset", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AASStaticMeshDistributionSpline, InnerSplineOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InnerSplineOffset_MetaData), NewProp_InnerSplineOffset_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AASStaticMeshDistributionSpline_Statics::NewProp_RotationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AASStaticMeshDistributionSpline_Statics::NewProp_RotationType = { "RotationType", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AASStaticMeshDistributionSpline, RotationType), Z_Construct_UEnum_AutoSpline_ESplineObjectRotationType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationType_MetaData), NewProp_RotationType_MetaData) }; // 880155797
void Z_Construct_UClass_AASStaticMeshDistributionSpline_Statics::NewProp_SnapToSurface_SetBit(void* Obj)
{
	((AASStaticMeshDistributionSpline*)Obj)->SnapToSurface = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AASStaticMeshDistributionSpline_Statics::NewProp_SnapToSurface = { "SnapToSurface", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AASStaticMeshDistributionSpline), &Z_Construct_UClass_AASStaticMeshDistributionSpline_Statics::NewProp_SnapToSurface_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SnapToSurface_MetaData), NewProp_SnapToSurface_MetaData) };
void Z_Construct_UClass_AASStaticMeshDistributionSpline_Statics::NewProp_bAutoCloseTheSpline_SetBit(void* Obj)
{
	((AASStaticMeshDistributionSpline*)Obj)->bAutoCloseTheSpline = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AASStaticMeshDistributionSpline_Statics::NewProp_bAutoCloseTheSpline = { "bAutoCloseTheSpline", nullptr, (EPropertyFlags)0x00200c0000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AASStaticMeshDistributionSpline), &Z_Construct_UClass_AASStaticMeshDistributionSpline_Statics::NewProp_bAutoCloseTheSpline_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoCloseTheSpline_MetaData), NewProp_bAutoCloseTheSpline_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AASStaticMeshDistributionSpline_Statics::NewProp_AutoCloseTheSpline = { "AutoCloseTheSpline", nullptr, (EPropertyFlags)0x00200c0000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AASStaticMeshDistributionSpline, AutoCloseTheSpline), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoCloseTheSpline_MetaData), NewProp_AutoCloseTheSpline_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AASStaticMeshDistributionSpline_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x00200c0000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AASStaticMeshDistributionSpline, Seed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Seed_MetaData), NewProp_Seed_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AASStaticMeshDistributionSpline_Statics::NewProp_Mobility = { "Mobility", nullptr, (EPropertyFlags)0x00200c0000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AASStaticMeshDistributionSpline, Mobility), Z_Construct_UEnum_Engine_EComponentMobility, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mobility_MetaData), NewProp_Mobility_MetaData) }; // 2012069661
#if WITH_EDITORONLY_DATA
void Z_Construct_UClass_AASStaticMeshDistributionSpline_Statics::NewProp_bCopyASpline_SetBit(void* Obj)
{
	((AASStaticMeshDistributionSpline*)Obj)->bCopyASpline = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AASStaticMeshDistributionSpline_Statics::NewProp_bCopyASpline = { "bCopyASpline", nullptr, (EPropertyFlags)0x00200c0800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AASStaticMeshDistributionSpline), &Z_Construct_UClass_AASStaticMeshDistributionSpline_Statics::NewProp_bCopyASpline_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCopyASpline_MetaData), NewProp_bCopyASpline_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AASStaticMeshDistributionSpline_Statics::NewProp_CopyASpline = { "CopyASpline", nullptr, (EPropertyFlags)0x01240c0800000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AASStaticMeshDistributionSpline, CopyASpline), Z_Construct_UClass_AASAutoSplineBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CopyASpline_MetaData), NewProp_CopyASpline_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AASStaticMeshDistributionSpline_Statics::NewProp_ForwardAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AASStaticMeshDistributionSpline_Statics::NewProp_ForwardAxis = { "ForwardAxis", nullptr, (EPropertyFlags)0x00200c0000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AASStaticMeshDistributionSpline, ForwardAxis), Z_Construct_UEnum_AutoSpline_EASMeshAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForwardAxis_MetaData), NewProp_ForwardAxis_MetaData) }; // 133580503
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AASStaticMeshDistributionSpline_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AASStaticMeshDistributionSpline_Statics::NewProp_RandomStream,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AASStaticMeshDistributionSpline_Statics::NewProp_DynamicSMInstanceComponents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AASStaticMeshDistributionSpline_Statics::NewProp_DynamicSMInstanceComponents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AASStaticMeshDistributionSpline_Statics::NewProp_DynamicSMComponents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AASStaticMeshDistributionSpline_Statics::NewProp_DynamicSMComponents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AASStaticMeshDistributionSpline_Statics::NewProp_InstanceType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AASStaticMeshDistributionSpline_Statics::NewProp_InstanceType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AASStaticMeshDistributionSpline_Statics::NewProp_SplineStaticMeshes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AASStaticMeshDistributionSpline_Statics::NewProp_SplineStaticMeshes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AASStaticMeshDistributionSpline_Statics::NewProp_bAddCustomEndMeshCond,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AASStaticMeshDistributionSpline_Statics::NewProp_CustomEndMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AASStaticMeshDistributionSpline_Statics::NewProp_bSetNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AASStaticMeshDistributionSpline_Statics::NewProp_NumberOfInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AASStaticMeshDistributionSpline_Statics::NewProp_OffsetOnSpline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AASStaticMeshDistributionSpline_Statics::NewProp_InitialRotationOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AASStaticMeshDistributionSpline_Statics::NewProp_bSelectRandom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AASStaticMeshDistributionSpline_Statics::NewProp_bRandomPositionOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AASStaticMeshDistributionSpline_Statics::NewProp_RandomPositionOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AASStaticMeshDistributionSpline_Statics::NewProp_bRandomRotationOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AASStaticMeshDistributionSpline_Statics::NewProp_RandomRotationOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AASStaticMeshDistributionSpline_Statics::NewProp_bRandomScaleRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AASStaticMeshDistributionSpline_Statics::NewProp_RandomScaleRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AASStaticMeshDistributionSpline_Statics::NewProp_bInnerSplineOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AASStaticMeshDistributionSpline_Statics::NewProp_InnerSplineOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AASStaticMeshDistributionSpline_Statics::NewProp_RotationType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AASStaticMeshDistributionSpline_Statics::NewProp_RotationType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AASStaticMeshDistributionSpline_Statics::NewProp_SnapToSurface,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AASStaticMeshDistributionSpline_Statics::NewProp_bAutoCloseTheSpline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AASStaticMeshDistributionSpline_Statics::NewProp_AutoCloseTheSpline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AASStaticMeshDistributionSpline_Statics::NewProp_Seed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AASStaticMeshDistributionSpline_Statics::NewProp_Mobility,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AASStaticMeshDistributionSpline_Statics::NewProp_bCopyASpline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AASStaticMeshDistributionSpline_Statics::NewProp_CopyASpline,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AASStaticMeshDistributionSpline_Statics::NewProp_ForwardAxis_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AASStaticMeshDistributionSpline_Statics::NewProp_ForwardAxis,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AASStaticMeshDistributionSpline_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AASStaticMeshDistributionSpline_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AASAutoSplineBase,
	(UObject* (*)())Z_Construct_UPackage__Script_AutoSpline,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AASStaticMeshDistributionSpline_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AASStaticMeshDistributionSpline_Statics::ClassParams = {
	&AASStaticMeshDistributionSpline::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AASStaticMeshDistributionSpline_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AASStaticMeshDistributionSpline_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AASStaticMeshDistributionSpline_Statics::Class_MetaDataParams), Z_Construct_UClass_AASStaticMeshDistributionSpline_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AASStaticMeshDistributionSpline()
{
	if (!Z_Registration_Info_UClass_AASStaticMeshDistributionSpline.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AASStaticMeshDistributionSpline.OuterSingleton, Z_Construct_UClass_AASStaticMeshDistributionSpline_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AASStaticMeshDistributionSpline.OuterSingleton;
}
template<> AUTOSPLINE_API UClass* StaticClass<AASStaticMeshDistributionSpline>()
{
	return AASStaticMeshDistributionSpline::StaticClass();
}
AASStaticMeshDistributionSpline::AASStaticMeshDistributionSpline() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AASStaticMeshDistributionSpline);
AASStaticMeshDistributionSpline::~AASStaticMeshDistributionSpline() {}
// End Class AASStaticMeshDistributionSpline

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_AutoSpline_Public_Spline_ASStaticMeshDistributionSpline_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ENonDeformInstanceType_StaticEnum, TEXT("ENonDeformInstanceType"), &Z_Registration_Info_UEnum_ENonDeformInstanceType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3514227367U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AASStaticMeshDistributionSpline, AASStaticMeshDistributionSpline::StaticClass, TEXT("AASStaticMeshDistributionSpline"), &Z_Registration_Info_UClass_AASStaticMeshDistributionSpline, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AASStaticMeshDistributionSpline), 4162430704U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_AutoSpline_Public_Spline_ASStaticMeshDistributionSpline_h_598059176(TEXT("/Script/AutoSpline"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_AutoSpline_Public_Spline_ASStaticMeshDistributionSpline_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_AutoSpline_Public_Spline_ASStaticMeshDistributionSpline_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_AutoSpline_Public_Spline_ASStaticMeshDistributionSpline_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_AutoSpline_Public_Spline_ASStaticMeshDistributionSpline_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
