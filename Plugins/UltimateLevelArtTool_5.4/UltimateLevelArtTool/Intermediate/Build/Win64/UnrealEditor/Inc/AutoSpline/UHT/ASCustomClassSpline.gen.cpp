// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoSpline/Public/Spline/ASCustomClassSpline.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeASCustomClassSpline() {}

// Begin Cross Module References
AUTOSPLINE_API UClass* Z_Construct_UClass_AASAutoSplineBase();
AUTOSPLINE_API UClass* Z_Construct_UClass_AASAutoSplineBase_NoRegister();
AUTOSPLINE_API UClass* Z_Construct_UClass_AASCustomClassSpline();
AUTOSPLINE_API UClass* Z_Construct_UClass_AASCustomClassSpline_NoRegister();
AUTOSPLINE_API UEnum* Z_Construct_UEnum_AutoSpline_ESplineClassInstType();
AUTOSPLINE_API UEnum* Z_Construct_UEnum_AutoSpline_ESplineObjectRotationType();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRandomStream();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_AutoSpline();
// End Cross Module References

// Begin Enum ESplineClassInstType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESplineClassInstType;
static UEnum* ESplineClassInstType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESplineClassInstType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESplineClassInstType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AutoSpline_ESplineClassInstType, (UObject*)Z_Construct_UPackage__Script_AutoSpline(), TEXT("ESplineClassInstType"));
	}
	return Z_Registration_Info_UEnum_ESplineClassInstType.OuterSingleton;
}
template<> AUTOSPLINE_API UEnum* StaticEnum<ESplineClassInstType>()
{
	return ESplineClassInstType_StaticEnum();
}
struct Z_Construct_UEnum_AutoSpline_ESplineClassInstType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Actor.DisplayName", "Actor" },
		{ "Actor.Name", "ESplineClassInstType::Actor" },
		{ "BlueprintType", "true" },
		{ "Category", "Auto Plugin Tool Settings" },
		{ "Component.DisplayName", "Component" },
		{ "Component.Name", "ESplineClassInstType::Component" },
		{ "ModuleRelativePath", "Public/Spline/ASCustomClassSpline.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESplineClassInstType::Component", (int64)ESplineClassInstType::Component },
		{ "ESplineClassInstType::Actor", (int64)ESplineClassInstType::Actor },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AutoSpline_ESplineClassInstType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AutoSpline,
	nullptr,
	"ESplineClassInstType",
	"ESplineClassInstType",
	Z_Construct_UEnum_AutoSpline_ESplineClassInstType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AutoSpline_ESplineClassInstType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AutoSpline_ESplineClassInstType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AutoSpline_ESplineClassInstType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AutoSpline_ESplineClassInstType()
{
	if (!Z_Registration_Info_UEnum_ESplineClassInstType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESplineClassInstType.InnerSingleton, Z_Construct_UEnum_AutoSpline_ESplineClassInstType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESplineClassInstType.InnerSingleton;
}
// End Enum ESplineClassInstType

// Begin Class AASCustomClassSpline
void AASCustomClassSpline::StaticRegisterNativesAASCustomClassSpline()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AASCustomClassSpline);
UClass* Z_Construct_UClass_AASCustomClassSpline_NoRegister()
{
	return AASCustomClassSpline::StaticClass();
}
struct Z_Construct_UClass_AASCustomClassSpline_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Spline/ASCustomClassSpline.h" },
		{ "ModuleRelativePath", "Public/Spline/ASCustomClassSpline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomStream_MetaData[] = {
		{ "ModuleRelativePath", "Public/Spline/ASCustomClassSpline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicSplineObjects_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Spline/ASCustomClassSpline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstanceType_MetaData[] = {
		{ "Category", "Tool Settings|Instances" },
		{ "ModuleRelativePath", "Public/Spline/ASCustomClassSpline.h" },
		{ "NoResetToDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplineActorClasses_MetaData[] = {
		{ "Category", "Tool Settings|Instances" },
		{ "EditCondition", "InstanceType == ESplineClassInstType::Actor" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Spline/ASCustomClassSpline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplineComponentClasses_MetaData[] = {
		{ "Category", "Tool Settings|Instances" },
		{ "EditCondition", "InstanceType == ESplineClassInstType::Component" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Spline/ASCustomClassSpline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfInstance_MetaData[] = {
		{ "Category", "Tool Settings|Distribution" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/Spline/ASCustomClassSpline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSelectRandom_MetaData[] = {
		{ "Category", "Tool Settings|Distribution" },
		{ "DisplayName", "Distribute Randomly" },
		{ "ModuleRelativePath", "Public/Spline/ASCustomClassSpline.h" },
		{ "ToolTip", "Selects actors or components randomly from the list" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialRotationOffset_MetaData[] = {
		{ "Category", "Tool Settings|Distribution" },
		{ "ModuleRelativePath", "Public/Spline/ASCustomClassSpline.h" },
		{ "ToolTip", "Initially adds local rotation offset." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRandomPositionOffset_MetaData[] = {
		{ "Category", "Tool Settings|Distribution" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Spline/ASCustomClassSpline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomPositionOffset_MetaData[] = {
		{ "Category", "Tool Settings|Distribution" },
		{ "ClampMin", "0.000000" },
		{ "EditCondition", "bRandomPositionOffset" },
		{ "ModuleRelativePath", "Public/Spline/ASCustomClassSpline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRandomRotationOffset_MetaData[] = {
		{ "Category", "Tool Settings|Distribution" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Spline/ASCustomClassSpline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomRotationOffset_MetaData[] = {
		{ "Category", "Tool Settings|Distribution" },
		{ "ClampMax", "180.000000" },
		{ "ClampMin", "0" },
		{ "EditCondition", "bRandomRotationOffset" },
		{ "ModuleRelativePath", "Public/Spline/ASCustomClassSpline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInnerSplineOffset_MetaData[] = {
		{ "Category", "Tool Settings|Distribution" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Spline/ASCustomClassSpline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InnerSplineOffset_MetaData[] = {
		{ "Category", "Tool Settings|Distribution" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Inner Spline Offset Range" },
		{ "EditCondition", "bInnerSplineOffset" },
		{ "ModuleRelativePath", "Public/Spline/ASCustomClassSpline.h" },
		{ "NoSpinbox", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationType_MetaData[] = {
		{ "Category", "Tool Settings|Distribution" },
		{ "ModuleRelativePath", "Public/Spline/ASCustomClassSpline.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Stream value for random actions" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SnapToSurface_MetaData[] = {
		{ "Category", "Tool Settings|Distribution" },
		{ "ModuleRelativePath", "Public/Spline/ASCustomClassSpline.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Stream value for random actions" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRandomZ_MetaData[] = {
		{ "Category", "Tool Settings|Distribution" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Spline/ASCustomClassSpline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomRotationRate_MetaData[] = {
		{ "Category", "Tool Settings|Distribution" },
		{ "ClampMax", "360.000000" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Random Yaw Rotation Rate" },
		{ "EditCondition", "bRandomZ" },
		{ "ModuleRelativePath", "Public/Spline/ASCustomClassSpline.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Randomizes the rotation of the mesh on the yaw axis by the entered value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoCloseTheSpline_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "DisplayName", "Auto Close The Spline" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Spline/ASCustomClassSpline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoCloseTheSpline_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "EditCondition", "bAutoCloseTheSpline" },
		{ "ModuleRelativePath", "Public/Spline/ASCustomClassSpline.h" },
		{ "ToolTip", "The spline closes automatically when the first and last point are close enough" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Seed_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "ModuleRelativePath", "Public/Spline/ASCustomClassSpline.h" },
		{ "ToolTip", "Stream value for random actions" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCopyASpline_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Spline/ASCustomClassSpline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CopyASpline_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "EditCondition", "bCopyASpline" },
		{ "ModuleRelativePath", "Public/Spline/ASCustomClassSpline.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RandomStream;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DynamicSplineObjects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DynamicSplineObjects;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InstanceType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InstanceType;
	static const UECodeGen_Private::FClassPropertyParams NewProp_SplineActorClasses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SplineActorClasses;
	static const UECodeGen_Private::FClassPropertyParams NewProp_SplineComponentClasses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SplineComponentClasses;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfInstance;
	static void NewProp_bSelectRandom_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelectRandom;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InitialRotationOffset;
	static void NewProp_bRandomPositionOffset_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRandomPositionOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RandomPositionOffset;
	static void NewProp_bRandomRotationOffset_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRandomRotationOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RandomRotationOffset;
	static void NewProp_bInnerSplineOffset_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInnerSplineOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InnerSplineOffset;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RotationType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RotationType;
	static void NewProp_SnapToSurface_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SnapToSurface;
	static void NewProp_bRandomZ_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRandomZ;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RandomRotationRate;
	static void NewProp_bAutoCloseTheSpline_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoCloseTheSpline;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AutoCloseTheSpline;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Seed;
#if WITH_EDITORONLY_DATA
	static void NewProp_bCopyASpline_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCopyASpline;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CopyASpline;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AASCustomClassSpline>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AASCustomClassSpline_Statics::NewProp_RandomStream = { "RandomStream", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AASCustomClassSpline, RandomStream), Z_Construct_UScriptStruct_FRandomStream, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomStream_MetaData), NewProp_RandomStream_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AASCustomClassSpline_Statics::NewProp_DynamicSplineObjects_Inner = { "DynamicSplineObjects", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AASCustomClassSpline_Statics::NewProp_DynamicSplineObjects = { "DynamicSplineObjects", nullptr, (EPropertyFlags)0x0144008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AASCustomClassSpline, DynamicSplineObjects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicSplineObjects_MetaData), NewProp_DynamicSplineObjects_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AASCustomClassSpline_Statics::NewProp_InstanceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AASCustomClassSpline_Statics::NewProp_InstanceType = { "InstanceType", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AASCustomClassSpline, InstanceType), Z_Construct_UEnum_AutoSpline_ESplineClassInstType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstanceType_MetaData), NewProp_InstanceType_MetaData) }; // 1999996510
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AASCustomClassSpline_Statics::NewProp_SplineActorClasses_Inner = { "SplineActorClasses", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AASCustomClassSpline_Statics::NewProp_SplineActorClasses = { "SplineActorClasses", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AASCustomClassSpline, SplineActorClasses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplineActorClasses_MetaData), NewProp_SplineActorClasses_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AASCustomClassSpline_Statics::NewProp_SplineComponentClasses_Inner = { "SplineComponentClasses", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AASCustomClassSpline_Statics::NewProp_SplineComponentClasses = { "SplineComponentClasses", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AASCustomClassSpline, SplineComponentClasses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplineComponentClasses_MetaData), NewProp_SplineComponentClasses_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AASCustomClassSpline_Statics::NewProp_NumberOfInstance = { "NumberOfInstance", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AASCustomClassSpline, NumberOfInstance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumberOfInstance_MetaData), NewProp_NumberOfInstance_MetaData) };
void Z_Construct_UClass_AASCustomClassSpline_Statics::NewProp_bSelectRandom_SetBit(void* Obj)
{
	((AASCustomClassSpline*)Obj)->bSelectRandom = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AASCustomClassSpline_Statics::NewProp_bSelectRandom = { "bSelectRandom", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AASCustomClassSpline), &Z_Construct_UClass_AASCustomClassSpline_Statics::NewProp_bSelectRandom_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSelectRandom_MetaData), NewProp_bSelectRandom_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AASCustomClassSpline_Statics::NewProp_InitialRotationOffset = { "InitialRotationOffset", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AASCustomClassSpline, InitialRotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialRotationOffset_MetaData), NewProp_InitialRotationOffset_MetaData) };
void Z_Construct_UClass_AASCustomClassSpline_Statics::NewProp_bRandomPositionOffset_SetBit(void* Obj)
{
	((AASCustomClassSpline*)Obj)->bRandomPositionOffset = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AASCustomClassSpline_Statics::NewProp_bRandomPositionOffset = { "bRandomPositionOffset", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AASCustomClassSpline), &Z_Construct_UClass_AASCustomClassSpline_Statics::NewProp_bRandomPositionOffset_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRandomPositionOffset_MetaData), NewProp_bRandomPositionOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AASCustomClassSpline_Statics::NewProp_RandomPositionOffset = { "RandomPositionOffset", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AASCustomClassSpline, RandomPositionOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomPositionOffset_MetaData), NewProp_RandomPositionOffset_MetaData) };
void Z_Construct_UClass_AASCustomClassSpline_Statics::NewProp_bRandomRotationOffset_SetBit(void* Obj)
{
	((AASCustomClassSpline*)Obj)->bRandomRotationOffset = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AASCustomClassSpline_Statics::NewProp_bRandomRotationOffset = { "bRandomRotationOffset", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AASCustomClassSpline), &Z_Construct_UClass_AASCustomClassSpline_Statics::NewProp_bRandomRotationOffset_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRandomRotationOffset_MetaData), NewProp_bRandomRotationOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AASCustomClassSpline_Statics::NewProp_RandomRotationOffset = { "RandomRotationOffset", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AASCustomClassSpline, RandomRotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomRotationOffset_MetaData), NewProp_RandomRotationOffset_MetaData) };
void Z_Construct_UClass_AASCustomClassSpline_Statics::NewProp_bInnerSplineOffset_SetBit(void* Obj)
{
	((AASCustomClassSpline*)Obj)->bInnerSplineOffset = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AASCustomClassSpline_Statics::NewProp_bInnerSplineOffset = { "bInnerSplineOffset", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AASCustomClassSpline), &Z_Construct_UClass_AASCustomClassSpline_Statics::NewProp_bInnerSplineOffset_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInnerSplineOffset_MetaData), NewProp_bInnerSplineOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AASCustomClassSpline_Statics::NewProp_InnerSplineOffset = { "InnerSplineOffset", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AASCustomClassSpline, InnerSplineOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InnerSplineOffset_MetaData), NewProp_InnerSplineOffset_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AASCustomClassSpline_Statics::NewProp_RotationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AASCustomClassSpline_Statics::NewProp_RotationType = { "RotationType", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AASCustomClassSpline, RotationType), Z_Construct_UEnum_AutoSpline_ESplineObjectRotationType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationType_MetaData), NewProp_RotationType_MetaData) }; // 880155797
void Z_Construct_UClass_AASCustomClassSpline_Statics::NewProp_SnapToSurface_SetBit(void* Obj)
{
	((AASCustomClassSpline*)Obj)->SnapToSurface = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AASCustomClassSpline_Statics::NewProp_SnapToSurface = { "SnapToSurface", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AASCustomClassSpline), &Z_Construct_UClass_AASCustomClassSpline_Statics::NewProp_SnapToSurface_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SnapToSurface_MetaData), NewProp_SnapToSurface_MetaData) };
void Z_Construct_UClass_AASCustomClassSpline_Statics::NewProp_bRandomZ_SetBit(void* Obj)
{
	((AASCustomClassSpline*)Obj)->bRandomZ = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AASCustomClassSpline_Statics::NewProp_bRandomZ = { "bRandomZ", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AASCustomClassSpline), &Z_Construct_UClass_AASCustomClassSpline_Statics::NewProp_bRandomZ_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRandomZ_MetaData), NewProp_bRandomZ_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AASCustomClassSpline_Statics::NewProp_RandomRotationRate = { "RandomRotationRate", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AASCustomClassSpline, RandomRotationRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomRotationRate_MetaData), NewProp_RandomRotationRate_MetaData) };
void Z_Construct_UClass_AASCustomClassSpline_Statics::NewProp_bAutoCloseTheSpline_SetBit(void* Obj)
{
	((AASCustomClassSpline*)Obj)->bAutoCloseTheSpline = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AASCustomClassSpline_Statics::NewProp_bAutoCloseTheSpline = { "bAutoCloseTheSpline", nullptr, (EPropertyFlags)0x00200c0000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AASCustomClassSpline), &Z_Construct_UClass_AASCustomClassSpline_Statics::NewProp_bAutoCloseTheSpline_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoCloseTheSpline_MetaData), NewProp_bAutoCloseTheSpline_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AASCustomClassSpline_Statics::NewProp_AutoCloseTheSpline = { "AutoCloseTheSpline", nullptr, (EPropertyFlags)0x00200c0000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AASCustomClassSpline, AutoCloseTheSpline), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoCloseTheSpline_MetaData), NewProp_AutoCloseTheSpline_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AASCustomClassSpline_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x00200c0000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AASCustomClassSpline, Seed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Seed_MetaData), NewProp_Seed_MetaData) };
#if WITH_EDITORONLY_DATA
void Z_Construct_UClass_AASCustomClassSpline_Statics::NewProp_bCopyASpline_SetBit(void* Obj)
{
	((AASCustomClassSpline*)Obj)->bCopyASpline = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AASCustomClassSpline_Statics::NewProp_bCopyASpline = { "bCopyASpline", nullptr, (EPropertyFlags)0x00200c0800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AASCustomClassSpline), &Z_Construct_UClass_AASCustomClassSpline_Statics::NewProp_bCopyASpline_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCopyASpline_MetaData), NewProp_bCopyASpline_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AASCustomClassSpline_Statics::NewProp_CopyASpline = { "CopyASpline", nullptr, (EPropertyFlags)0x01240c0800000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AASCustomClassSpline, CopyASpline), Z_Construct_UClass_AASAutoSplineBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CopyASpline_MetaData), NewProp_CopyASpline_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AASCustomClassSpline_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AASCustomClassSpline_Statics::NewProp_RandomStream,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AASCustomClassSpline_Statics::NewProp_DynamicSplineObjects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AASCustomClassSpline_Statics::NewProp_DynamicSplineObjects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AASCustomClassSpline_Statics::NewProp_InstanceType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AASCustomClassSpline_Statics::NewProp_InstanceType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AASCustomClassSpline_Statics::NewProp_SplineActorClasses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AASCustomClassSpline_Statics::NewProp_SplineActorClasses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AASCustomClassSpline_Statics::NewProp_SplineComponentClasses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AASCustomClassSpline_Statics::NewProp_SplineComponentClasses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AASCustomClassSpline_Statics::NewProp_NumberOfInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AASCustomClassSpline_Statics::NewProp_bSelectRandom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AASCustomClassSpline_Statics::NewProp_InitialRotationOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AASCustomClassSpline_Statics::NewProp_bRandomPositionOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AASCustomClassSpline_Statics::NewProp_RandomPositionOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AASCustomClassSpline_Statics::NewProp_bRandomRotationOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AASCustomClassSpline_Statics::NewProp_RandomRotationOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AASCustomClassSpline_Statics::NewProp_bInnerSplineOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AASCustomClassSpline_Statics::NewProp_InnerSplineOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AASCustomClassSpline_Statics::NewProp_RotationType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AASCustomClassSpline_Statics::NewProp_RotationType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AASCustomClassSpline_Statics::NewProp_SnapToSurface,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AASCustomClassSpline_Statics::NewProp_bRandomZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AASCustomClassSpline_Statics::NewProp_RandomRotationRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AASCustomClassSpline_Statics::NewProp_bAutoCloseTheSpline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AASCustomClassSpline_Statics::NewProp_AutoCloseTheSpline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AASCustomClassSpline_Statics::NewProp_Seed,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AASCustomClassSpline_Statics::NewProp_bCopyASpline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AASCustomClassSpline_Statics::NewProp_CopyASpline,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AASCustomClassSpline_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AASCustomClassSpline_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AASAutoSplineBase,
	(UObject* (*)())Z_Construct_UPackage__Script_AutoSpline,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AASCustomClassSpline_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AASCustomClassSpline_Statics::ClassParams = {
	&AASCustomClassSpline::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AASCustomClassSpline_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AASCustomClassSpline_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AASCustomClassSpline_Statics::Class_MetaDataParams), Z_Construct_UClass_AASCustomClassSpline_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AASCustomClassSpline()
{
	if (!Z_Registration_Info_UClass_AASCustomClassSpline.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AASCustomClassSpline.OuterSingleton, Z_Construct_UClass_AASCustomClassSpline_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AASCustomClassSpline.OuterSingleton;
}
template<> AUTOSPLINE_API UClass* StaticClass<AASCustomClassSpline>()
{
	return AASCustomClassSpline::StaticClass();
}
AASCustomClassSpline::AASCustomClassSpline() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AASCustomClassSpline);
AASCustomClassSpline::~AASCustomClassSpline() {}
// End Class AASCustomClassSpline

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_AutoSpline_Public_Spline_ASCustomClassSpline_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESplineClassInstType_StaticEnum, TEXT("ESplineClassInstType"), &Z_Registration_Info_UEnum_ESplineClassInstType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1999996510U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AASCustomClassSpline, AASCustomClassSpline::StaticClass, TEXT("AASCustomClassSpline"), &Z_Registration_Info_UClass_AASCustomClassSpline, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AASCustomClassSpline), 1380357041U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_AutoSpline_Public_Spline_ASCustomClassSpline_h_2071403791(TEXT("/Script/AutoSpline"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_AutoSpline_Public_Spline_ASCustomClassSpline_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_AutoSpline_Public_Spline_ASCustomClassSpline_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_AutoSpline_Public_Spline_ASCustomClassSpline_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_AutoSpline_Public_Spline_ASCustomClassSpline_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
