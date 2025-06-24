// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoSpline/Public/Spline/ASDeformMeshSpline.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeASDeformMeshSpline() {}

// Begin Cross Module References
AUTOSPLINE_API UClass* Z_Construct_UClass_AASAutoSplineBase();
AUTOSPLINE_API UClass* Z_Construct_UClass_AASAutoSplineBase_NoRegister();
AUTOSPLINE_API UClass* Z_Construct_UClass_AASDeformMeshSpline();
AUTOSPLINE_API UClass* Z_Construct_UClass_AASDeformMeshSpline_NoRegister();
AUTOSPLINE_API UEnum* Z_Construct_UEnum_AutoSpline_EASMeshAxis();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRandomStream();
ENGINE_API UClass* Z_Construct_UClass_USplineMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionEnabled();
UPackage* Z_Construct_UPackage__Script_AutoSpline();
// End Cross Module References

// Begin Class AASDeformMeshSpline
void AASDeformMeshSpline::StaticRegisterNativesAASDeformMeshSpline()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AASDeformMeshSpline);
UClass* Z_Construct_UClass_AASDeformMeshSpline_NoRegister()
{
	return AASDeformMeshSpline::StaticClass();
}
struct Z_Construct_UClass_AASDeformMeshSpline_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Spline/ASDeformMeshSpline.h" },
		{ "ModuleRelativePath", "Public/Spline/ASDeformMeshSpline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplineMeshComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Spline/ASDeformMeshSpline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomStream_MetaData[] = {
		{ "ModuleRelativePath", "Public/Spline/ASDeformMeshSpline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshes_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "ModuleRelativePath", "Public/Spline/ASDeformMeshSpline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSelectRandom_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "DisplayName", "Random Placement" },
		{ "ModuleRelativePath", "Public/Spline/ASDeformMeshSpline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OffsetOnSpline_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "ModuleRelativePath", "Public/Spline/ASDeformMeshSpline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForwardAxis_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "ModuleRelativePath", "Public/Spline/ASDeformMeshSpline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForwardScale_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "ClampMin", "0.010000" },
		{ "ModuleRelativePath", "Public/Spline/ASDeformMeshSpline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionEnabled_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "ModuleRelativePath", "Public/Spline/ASDeformMeshSpline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoCloseTheSpline_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "DisplayName", "Auto Close The Spline" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Spline/ASDeformMeshSpline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoCloseTheSpline_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "EditCondition", "bAutoCloseTheSpline" },
		{ "ModuleRelativePath", "Public/Spline/ASDeformMeshSpline.h" },
		{ "ToolTip", "The spline closes automatically when the first and last point are close enough" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Seed_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "ModuleRelativePath", "Public/Spline/ASDeformMeshSpline.h" },
		{ "ToolTip", "Stream value for random actions" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCopyASpline_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Spline/ASDeformMeshSpline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CopyASpline_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "EditCondition", "bCopyASpline" },
		{ "ModuleRelativePath", "Public/Spline/ASDeformMeshSpline.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SplineMeshComponents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SplineMeshComponents;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RandomStream;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StaticMeshes;
	static void NewProp_bSelectRandom_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelectRandom;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OffsetOnSpline;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ForwardAxis_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ForwardAxis;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ForwardScale;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionEnabled;
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
		TCppClassTypeTraits<AASDeformMeshSpline>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AASDeformMeshSpline_Statics::NewProp_SplineMeshComponents_Inner = { "SplineMeshComponents", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USplineMeshComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AASDeformMeshSpline_Statics::NewProp_SplineMeshComponents = { "SplineMeshComponents", nullptr, (EPropertyFlags)0x0144008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AASDeformMeshSpline, SplineMeshComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplineMeshComponents_MetaData), NewProp_SplineMeshComponents_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AASDeformMeshSpline_Statics::NewProp_RandomStream = { "RandomStream", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AASDeformMeshSpline, RandomStream), Z_Construct_UScriptStruct_FRandomStream, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomStream_MetaData), NewProp_RandomStream_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AASDeformMeshSpline_Statics::NewProp_StaticMeshes_Inner = { "StaticMeshes", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AASDeformMeshSpline_Statics::NewProp_StaticMeshes = { "StaticMeshes", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AASDeformMeshSpline, StaticMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshes_MetaData), NewProp_StaticMeshes_MetaData) };
void Z_Construct_UClass_AASDeformMeshSpline_Statics::NewProp_bSelectRandom_SetBit(void* Obj)
{
	((AASDeformMeshSpline*)Obj)->bSelectRandom = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AASDeformMeshSpline_Statics::NewProp_bSelectRandom = { "bSelectRandom", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AASDeformMeshSpline), &Z_Construct_UClass_AASDeformMeshSpline_Statics::NewProp_bSelectRandom_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSelectRandom_MetaData), NewProp_bSelectRandom_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AASDeformMeshSpline_Statics::NewProp_OffsetOnSpline = { "OffsetOnSpline", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AASDeformMeshSpline, OffsetOnSpline), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OffsetOnSpline_MetaData), NewProp_OffsetOnSpline_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AASDeformMeshSpline_Statics::NewProp_ForwardAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AASDeformMeshSpline_Statics::NewProp_ForwardAxis = { "ForwardAxis", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AASDeformMeshSpline, ForwardAxis), Z_Construct_UEnum_AutoSpline_EASMeshAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForwardAxis_MetaData), NewProp_ForwardAxis_MetaData) }; // 133580503
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AASDeformMeshSpline_Statics::NewProp_ForwardScale = { "ForwardScale", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AASDeformMeshSpline, ForwardScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForwardScale_MetaData), NewProp_ForwardScale_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AASDeformMeshSpline_Statics::NewProp_CollisionEnabled = { "CollisionEnabled", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AASDeformMeshSpline, CollisionEnabled), Z_Construct_UEnum_Engine_ECollisionEnabled, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionEnabled_MetaData), NewProp_CollisionEnabled_MetaData) }; // 2362857466
void Z_Construct_UClass_AASDeformMeshSpline_Statics::NewProp_bAutoCloseTheSpline_SetBit(void* Obj)
{
	((AASDeformMeshSpline*)Obj)->bAutoCloseTheSpline = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AASDeformMeshSpline_Statics::NewProp_bAutoCloseTheSpline = { "bAutoCloseTheSpline", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AASDeformMeshSpline), &Z_Construct_UClass_AASDeformMeshSpline_Statics::NewProp_bAutoCloseTheSpline_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoCloseTheSpline_MetaData), NewProp_bAutoCloseTheSpline_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AASDeformMeshSpline_Statics::NewProp_AutoCloseTheSpline = { "AutoCloseTheSpline", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AASDeformMeshSpline, AutoCloseTheSpline), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoCloseTheSpline_MetaData), NewProp_AutoCloseTheSpline_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AASDeformMeshSpline_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AASDeformMeshSpline, Seed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Seed_MetaData), NewProp_Seed_MetaData) };
#if WITH_EDITORONLY_DATA
void Z_Construct_UClass_AASDeformMeshSpline_Statics::NewProp_bCopyASpline_SetBit(void* Obj)
{
	((AASDeformMeshSpline*)Obj)->bCopyASpline = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AASDeformMeshSpline_Statics::NewProp_bCopyASpline = { "bCopyASpline", nullptr, (EPropertyFlags)0x0010040800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AASDeformMeshSpline), &Z_Construct_UClass_AASDeformMeshSpline_Statics::NewProp_bCopyASpline_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCopyASpline_MetaData), NewProp_bCopyASpline_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AASDeformMeshSpline_Statics::NewProp_CopyASpline = { "CopyASpline", nullptr, (EPropertyFlags)0x0114040800000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AASDeformMeshSpline, CopyASpline), Z_Construct_UClass_AASAutoSplineBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CopyASpline_MetaData), NewProp_CopyASpline_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AASDeformMeshSpline_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AASDeformMeshSpline_Statics::NewProp_SplineMeshComponents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AASDeformMeshSpline_Statics::NewProp_SplineMeshComponents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AASDeformMeshSpline_Statics::NewProp_RandomStream,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AASDeformMeshSpline_Statics::NewProp_StaticMeshes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AASDeformMeshSpline_Statics::NewProp_StaticMeshes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AASDeformMeshSpline_Statics::NewProp_bSelectRandom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AASDeformMeshSpline_Statics::NewProp_OffsetOnSpline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AASDeformMeshSpline_Statics::NewProp_ForwardAxis_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AASDeformMeshSpline_Statics::NewProp_ForwardAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AASDeformMeshSpline_Statics::NewProp_ForwardScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AASDeformMeshSpline_Statics::NewProp_CollisionEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AASDeformMeshSpline_Statics::NewProp_bAutoCloseTheSpline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AASDeformMeshSpline_Statics::NewProp_AutoCloseTheSpline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AASDeformMeshSpline_Statics::NewProp_Seed,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AASDeformMeshSpline_Statics::NewProp_bCopyASpline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AASDeformMeshSpline_Statics::NewProp_CopyASpline,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AASDeformMeshSpline_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AASDeformMeshSpline_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AASAutoSplineBase,
	(UObject* (*)())Z_Construct_UPackage__Script_AutoSpline,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AASDeformMeshSpline_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AASDeformMeshSpline_Statics::ClassParams = {
	&AASDeformMeshSpline::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AASDeformMeshSpline_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AASDeformMeshSpline_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AASDeformMeshSpline_Statics::Class_MetaDataParams), Z_Construct_UClass_AASDeformMeshSpline_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AASDeformMeshSpline()
{
	if (!Z_Registration_Info_UClass_AASDeformMeshSpline.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AASDeformMeshSpline.OuterSingleton, Z_Construct_UClass_AASDeformMeshSpline_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AASDeformMeshSpline.OuterSingleton;
}
template<> AUTOSPLINE_API UClass* StaticClass<AASDeformMeshSpline>()
{
	return AASDeformMeshSpline::StaticClass();
}
AASDeformMeshSpline::AASDeformMeshSpline() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AASDeformMeshSpline);
AASDeformMeshSpline::~AASDeformMeshSpline() {}
// End Class AASDeformMeshSpline

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_AutoSpline_Public_Spline_ASDeformMeshSpline_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AASDeformMeshSpline, AASDeformMeshSpline::StaticClass, TEXT("AASDeformMeshSpline"), &Z_Registration_Info_UClass_AASDeformMeshSpline, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AASDeformMeshSpline), 4294775791U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_AutoSpline_Public_Spline_ASDeformMeshSpline_h_2422032859(TEXT("/Script/AutoSpline"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_AutoSpline_Public_Spline_ASDeformMeshSpline_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_AutoSpline_Public_Spline_ASDeformMeshSpline_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
