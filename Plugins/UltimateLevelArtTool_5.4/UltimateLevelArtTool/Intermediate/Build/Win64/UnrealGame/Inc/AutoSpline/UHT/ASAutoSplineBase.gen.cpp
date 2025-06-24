// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoSpline/Public/Spline/ASAutoSplineBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeASAutoSplineBase() {}

// Begin Cross Module References
AUTOSPLINE_API UClass* Z_Construct_UClass_AASAutoSplineBase();
AUTOSPLINE_API UClass* Z_Construct_UClass_AASAutoSplineBase_NoRegister();
AUTOSPLINE_API UClass* Z_Construct_UClass_UASSplineComponent_NoRegister();
AUTOSPLINE_API UEnum* Z_Construct_UEnum_AutoSpline_EASMeshAxis();
AUTOSPLINE_API UEnum* Z_Construct_UEnum_AutoSpline_ESplineObjectRotationType();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_AutoSpline();
// End Cross Module References

// Begin Enum ESplineObjectRotationType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESplineObjectRotationType;
static UEnum* ESplineObjectRotationType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESplineObjectRotationType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESplineObjectRotationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AutoSpline_ESplineObjectRotationType, (UObject*)Z_Construct_UPackage__Script_AutoSpline(), TEXT("ESplineObjectRotationType"));
	}
	return Z_Registration_Info_UEnum_ESplineObjectRotationType.OuterSingleton;
}
template<> AUTOSPLINE_API UEnum* StaticEnum<ESplineObjectRotationType>()
{
	return ESplineObjectRotationType_StaticEnum();
}
struct Z_Construct_UEnum_AutoSpline_ESplineObjectRotationType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Auto Plugin Tool Settings" },
		{ "FollowSpline.DisplayName", "Follow The Spline" },
		{ "FollowSpline.Name", "ESplineObjectRotationType::FollowSpline" },
		{ "FollowSplineAndSurface.DisplayName", "Follow The Spline & Surface" },
		{ "FollowSplineAndSurface.Name", "ESplineObjectRotationType::FollowSplineAndSurface" },
		{ "Keep.DisplayName", "Keep Rotation" },
		{ "Keep.Name", "ESplineObjectRotationType::Keep" },
		{ "ModuleRelativePath", "Public/Spline/ASAutoSplineBase.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESplineObjectRotationType::Keep", (int64)ESplineObjectRotationType::Keep },
		{ "ESplineObjectRotationType::FollowSpline", (int64)ESplineObjectRotationType::FollowSpline },
		{ "ESplineObjectRotationType::FollowSplineAndSurface", (int64)ESplineObjectRotationType::FollowSplineAndSurface },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AutoSpline_ESplineObjectRotationType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AutoSpline,
	nullptr,
	"ESplineObjectRotationType",
	"ESplineObjectRotationType",
	Z_Construct_UEnum_AutoSpline_ESplineObjectRotationType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AutoSpline_ESplineObjectRotationType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AutoSpline_ESplineObjectRotationType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AutoSpline_ESplineObjectRotationType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AutoSpline_ESplineObjectRotationType()
{
	if (!Z_Registration_Info_UEnum_ESplineObjectRotationType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESplineObjectRotationType.InnerSingleton, Z_Construct_UEnum_AutoSpline_ESplineObjectRotationType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESplineObjectRotationType.InnerSingleton;
}
// End Enum ESplineObjectRotationType

// Begin Enum EASMeshAxis
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EASMeshAxis;
static UEnum* EASMeshAxis_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EASMeshAxis.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EASMeshAxis.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AutoSpline_EASMeshAxis, (UObject*)Z_Construct_UPackage__Script_AutoSpline(), TEXT("EASMeshAxis"));
	}
	return Z_Registration_Info_UEnum_EASMeshAxis.OuterSingleton;
}
template<> AUTOSPLINE_API UEnum* StaticEnum<EASMeshAxis>()
{
	return EASMeshAxis_StaticEnum();
}
struct Z_Construct_UEnum_AutoSpline_EASMeshAxis_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AxisX.DisplayName", "X" },
		{ "AxisX.Name", "EASMeshAxis::AxisX" },
		{ "AxisY.DisplayName", "Y" },
		{ "AxisY.Name", "EASMeshAxis::AxisY" },
		{ "AxisZ.DisplayName", "Z" },
		{ "AxisZ.Name", "EASMeshAxis::AxisZ" },
		{ "BlueprintType", "true" },
		{ "Category", "Auto Plugin Tool Settings" },
		{ "ModuleRelativePath", "Public/Spline/ASAutoSplineBase.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EASMeshAxis::AxisX", (int64)EASMeshAxis::AxisX },
		{ "EASMeshAxis::AxisY", (int64)EASMeshAxis::AxisY },
		{ "EASMeshAxis::AxisZ", (int64)EASMeshAxis::AxisZ },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AutoSpline_EASMeshAxis_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AutoSpline,
	nullptr,
	"EASMeshAxis",
	"EASMeshAxis",
	Z_Construct_UEnum_AutoSpline_EASMeshAxis_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AutoSpline_EASMeshAxis_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AutoSpline_EASMeshAxis_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AutoSpline_EASMeshAxis_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AutoSpline_EASMeshAxis()
{
	if (!Z_Registration_Info_UEnum_EASMeshAxis.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EASMeshAxis.InnerSingleton, Z_Construct_UEnum_AutoSpline_EASMeshAxis_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EASMeshAxis.InnerSingleton;
}
// End Enum EASMeshAxis

// Begin Class AASAutoSplineBase
void AASAutoSplineBase::StaticRegisterNativesAASAutoSplineBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AASAutoSplineBase);
UClass* Z_Construct_UClass_AASAutoSplineBase_NoRegister()
{
	return AASAutoSplineBase::StaticClass();
}
struct Z_Construct_UClass_AASAutoSplineBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Spline/ASAutoSplineBase.h" },
		{ "ModuleRelativePath", "Public/Spline/ASAutoSplineBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneRoot_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Spline/ASAutoSplineBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplineComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Spline/ASAutoSplineBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneRoot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SplineComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AASAutoSplineBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AASAutoSplineBase_Statics::NewProp_SceneRoot = { "SceneRoot", nullptr, (EPropertyFlags)0x01440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AASAutoSplineBase, SceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneRoot_MetaData), NewProp_SceneRoot_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AASAutoSplineBase_Statics::NewProp_SplineComponent = { "SplineComponent", nullptr, (EPropertyFlags)0x01440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AASAutoSplineBase, SplineComponent), Z_Construct_UClass_UASSplineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplineComponent_MetaData), NewProp_SplineComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AASAutoSplineBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AASAutoSplineBase_Statics::NewProp_SceneRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AASAutoSplineBase_Statics::NewProp_SplineComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AASAutoSplineBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AASAutoSplineBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_AutoSpline,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AASAutoSplineBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AASAutoSplineBase_Statics::ClassParams = {
	&AASAutoSplineBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AASAutoSplineBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AASAutoSplineBase_Statics::PropPointers),
	0,
	0x009000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AASAutoSplineBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AASAutoSplineBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AASAutoSplineBase()
{
	if (!Z_Registration_Info_UClass_AASAutoSplineBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AASAutoSplineBase.OuterSingleton, Z_Construct_UClass_AASAutoSplineBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AASAutoSplineBase.OuterSingleton;
}
template<> AUTOSPLINE_API UClass* StaticClass<AASAutoSplineBase>()
{
	return AASAutoSplineBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AASAutoSplineBase);
AASAutoSplineBase::~AASAutoSplineBase() {}
// End Class AASAutoSplineBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_AutoSpline_Public_Spline_ASAutoSplineBase_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESplineObjectRotationType_StaticEnum, TEXT("ESplineObjectRotationType"), &Z_Registration_Info_UEnum_ESplineObjectRotationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 880155797U) },
		{ EASMeshAxis_StaticEnum, TEXT("EASMeshAxis"), &Z_Registration_Info_UEnum_EASMeshAxis, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 133580503U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AASAutoSplineBase, AASAutoSplineBase::StaticClass, TEXT("AASAutoSplineBase"), &Z_Registration_Info_UClass_AASAutoSplineBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AASAutoSplineBase), 1138816342U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_AutoSpline_Public_Spline_ASAutoSplineBase_h_716661879(TEXT("/Script/AutoSpline"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_AutoSpline_Public_Spline_ASAutoSplineBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_AutoSpline_Public_Spline_ASAutoSplineBase_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_AutoSpline_Public_Spline_ASAutoSplineBase_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_AutoSpline_Public_Spline_ASAutoSplineBase_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
