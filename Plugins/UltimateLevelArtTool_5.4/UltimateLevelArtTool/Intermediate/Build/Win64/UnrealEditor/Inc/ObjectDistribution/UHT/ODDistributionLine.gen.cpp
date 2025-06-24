// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObjectDistribution/Public/ObjectDistribution/ODDistributionLine.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeODDistributionLine() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
OBJECTDISTRIBUTION_API UClass* Z_Construct_UClass_UODDistributionBase();
OBJECTDISTRIBUTION_API UClass* Z_Construct_UClass_UODDistributionLine();
OBJECTDISTRIBUTION_API UClass* Z_Construct_UClass_UODDistributionLine_NoRegister();
OBJECTDISTRIBUTION_API UEnum* Z_Construct_UEnum_ObjectDistribution_EODLineAxis();
UPackage* Z_Construct_UPackage__Script_ObjectDistribution();
// End Cross Module References

// Begin Class UODDistributionLine
void UODDistributionLine::StaticRegisterNativesUODDistributionLine()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UODDistributionLine);
UClass* Z_Construct_UClass_UODDistributionLine_NoRegister()
{
	return UODDistributionLine::StaticClass();
}
struct Z_Construct_UClass_UODDistributionLine_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ObjectDistribution/ODDistributionLine.h" },
		{ "ModuleRelativePath", "Public/ObjectDistribution/ODDistributionLine.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineAxis_MetaData[] = {
		{ "Category", "Distribution" },
		{ "ModuleRelativePath", "Public/ObjectDistribution/ODDistributionLine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineLength_MetaData[] = {
		{ "Category", "Distribution" },
		{ "ClampMin", "1.000000" },
		{ "ModuleRelativePath", "Public/ObjectDistribution/ODDistributionLine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRandomOffset_MetaData[] = {
		{ "Category", "Distribution" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/ObjectDistribution/ODDistributionLine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomOffset_MetaData[] = {
		{ "Category", "Distribution" },
		{ "EditCondition", "bRandomOffset" },
		{ "ModuleRelativePath", "Public/ObjectDistribution/ODDistributionLine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PivotCentered_MetaData[] = {
		{ "Category", "Distribution" },
		{ "DisplayName", "Pivot Centered Distribution" },
		{ "ModuleRelativePath", "Public/ObjectDistribution/ODDistributionLine.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_LineAxis_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LineAxis;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LineLength;
	static void NewProp_bRandomOffset_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRandomOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RandomOffset;
	static void NewProp_PivotCentered_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_PivotCentered;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UODDistributionLine>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UODDistributionLine_Statics::NewProp_LineAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UODDistributionLine_Statics::NewProp_LineAxis = { "LineAxis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UODDistributionLine, LineAxis), Z_Construct_UEnum_ObjectDistribution_EODLineAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineAxis_MetaData), NewProp_LineAxis_MetaData) }; // 1577191740
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UODDistributionLine_Statics::NewProp_LineLength = { "LineLength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UODDistributionLine, LineLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineLength_MetaData), NewProp_LineLength_MetaData) };
void Z_Construct_UClass_UODDistributionLine_Statics::NewProp_bRandomOffset_SetBit(void* Obj)
{
	((UODDistributionLine*)Obj)->bRandomOffset = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UODDistributionLine_Statics::NewProp_bRandomOffset = { "bRandomOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UODDistributionLine), &Z_Construct_UClass_UODDistributionLine_Statics::NewProp_bRandomOffset_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRandomOffset_MetaData), NewProp_bRandomOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UODDistributionLine_Statics::NewProp_RandomOffset = { "RandomOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UODDistributionLine, RandomOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomOffset_MetaData), NewProp_RandomOffset_MetaData) };
void Z_Construct_UClass_UODDistributionLine_Statics::NewProp_PivotCentered_SetBit(void* Obj)
{
	((UODDistributionLine*)Obj)->PivotCentered = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UODDistributionLine_Statics::NewProp_PivotCentered = { "PivotCentered", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UODDistributionLine), &Z_Construct_UClass_UODDistributionLine_Statics::NewProp_PivotCentered_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PivotCentered_MetaData), NewProp_PivotCentered_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UODDistributionLine_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODDistributionLine_Statics::NewProp_LineAxis_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODDistributionLine_Statics::NewProp_LineAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODDistributionLine_Statics::NewProp_LineLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODDistributionLine_Statics::NewProp_bRandomOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODDistributionLine_Statics::NewProp_RandomOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODDistributionLine_Statics::NewProp_PivotCentered,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UODDistributionLine_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UODDistributionLine_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UODDistributionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ObjectDistribution,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UODDistributionLine_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UODDistributionLine_Statics::ClassParams = {
	&UODDistributionLine::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UODDistributionLine_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UODDistributionLine_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UODDistributionLine_Statics::Class_MetaDataParams), Z_Construct_UClass_UODDistributionLine_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UODDistributionLine()
{
	if (!Z_Registration_Info_UClass_UODDistributionLine.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UODDistributionLine.OuterSingleton, Z_Construct_UClass_UODDistributionLine_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UODDistributionLine.OuterSingleton;
}
template<> OBJECTDISTRIBUTION_API UClass* StaticClass<UODDistributionLine>()
{
	return UODDistributionLine::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UODDistributionLine);
UODDistributionLine::~UODDistributionLine() {}
// End Class UODDistributionLine

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ObjectDistribution_Public_ObjectDistribution_ODDistributionLine_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UODDistributionLine, UODDistributionLine::StaticClass, TEXT("UODDistributionLine"), &Z_Registration_Info_UClass_UODDistributionLine, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UODDistributionLine), 2238943867U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ObjectDistribution_Public_ObjectDistribution_ODDistributionLine_h_3777954663(TEXT("/Script/ObjectDistribution"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ObjectDistribution_Public_ObjectDistribution_ODDistributionLine_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ObjectDistribution_Public_ObjectDistribution_ODDistributionLine_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
