// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularBuilding/Public/Slate/MBBorderSlot.h"
#include "Runtime/SlateCore/Public/Layout/Margin.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMBBorderSlot() {}

// Begin Cross Module References
MODULARBUILDING_API UClass* Z_Construct_UClass_UMBBorderSlot();
MODULARBUILDING_API UClass* Z_Construct_UClass_UMBBorderSlot_NoRegister();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EHorizontalAlignment();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EVerticalAlignment();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
UMG_API UClass* Z_Construct_UClass_UPanelSlot();
UPackage* Z_Construct_UPackage__Script_ModularBuilding();
// End Cross Module References

// Begin Class UMBBorderSlot Function SetHorizontalAlignment
struct Z_Construct_UFunction_UMBBorderSlot_SetHorizontalAlignment_Statics
{
	struct MBBorderSlot_eventSetHorizontalAlignment_Parms
	{
		TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Layout|Border Slot" },
		{ "ModuleRelativePath", "Public/Slate/MBBorderSlot.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InHorizontalAlignment;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMBBorderSlot_SetHorizontalAlignment_Statics::NewProp_InHorizontalAlignment = { "InHorizontalAlignment", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MBBorderSlot_eventSetHorizontalAlignment_Parms, InHorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(0, nullptr) }; // 1062133256
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMBBorderSlot_SetHorizontalAlignment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMBBorderSlot_SetHorizontalAlignment_Statics::NewProp_InHorizontalAlignment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBBorderSlot_SetHorizontalAlignment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMBBorderSlot_SetHorizontalAlignment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMBBorderSlot, nullptr, "SetHorizontalAlignment", nullptr, nullptr, Z_Construct_UFunction_UMBBorderSlot_SetHorizontalAlignment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMBBorderSlot_SetHorizontalAlignment_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMBBorderSlot_SetHorizontalAlignment_Statics::MBBorderSlot_eventSetHorizontalAlignment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBBorderSlot_SetHorizontalAlignment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMBBorderSlot_SetHorizontalAlignment_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMBBorderSlot_SetHorizontalAlignment_Statics::MBBorderSlot_eventSetHorizontalAlignment_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMBBorderSlot_SetHorizontalAlignment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMBBorderSlot_SetHorizontalAlignment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMBBorderSlot::execSetHorizontalAlignment)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_InHorizontalAlignment);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHorizontalAlignment(EHorizontalAlignment(Z_Param_InHorizontalAlignment));
	P_NATIVE_END;
}
// End Class UMBBorderSlot Function SetHorizontalAlignment

// Begin Class UMBBorderSlot Function SetPadding
struct Z_Construct_UFunction_UMBBorderSlot_SetPadding_Statics
{
	struct MBBorderSlot_eventSetPadding_Parms
	{
		FMargin InPadding;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Layout|Border Slot" },
		{ "ModuleRelativePath", "Public/Slate/MBBorderSlot.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InPadding;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMBBorderSlot_SetPadding_Statics::NewProp_InPadding = { "InPadding", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MBBorderSlot_eventSetPadding_Parms, InPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(0, nullptr) }; // 2986890016
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMBBorderSlot_SetPadding_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMBBorderSlot_SetPadding_Statics::NewProp_InPadding,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBBorderSlot_SetPadding_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMBBorderSlot_SetPadding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMBBorderSlot, nullptr, "SetPadding", nullptr, nullptr, Z_Construct_UFunction_UMBBorderSlot_SetPadding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMBBorderSlot_SetPadding_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMBBorderSlot_SetPadding_Statics::MBBorderSlot_eventSetPadding_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBBorderSlot_SetPadding_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMBBorderSlot_SetPadding_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMBBorderSlot_SetPadding_Statics::MBBorderSlot_eventSetPadding_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMBBorderSlot_SetPadding()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMBBorderSlot_SetPadding_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMBBorderSlot::execSetPadding)
{
	P_GET_STRUCT(FMargin,Z_Param_InPadding);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPadding(Z_Param_InPadding);
	P_NATIVE_END;
}
// End Class UMBBorderSlot Function SetPadding

// Begin Class UMBBorderSlot Function SetVerticalAlignment
struct Z_Construct_UFunction_UMBBorderSlot_SetVerticalAlignment_Statics
{
	struct MBBorderSlot_eventSetVerticalAlignment_Parms
	{
		TEnumAsByte<EVerticalAlignment> InVerticalAlignment;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Layout|Border Slot" },
		{ "ModuleRelativePath", "Public/Slate/MBBorderSlot.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InVerticalAlignment;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMBBorderSlot_SetVerticalAlignment_Statics::NewProp_InVerticalAlignment = { "InVerticalAlignment", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MBBorderSlot_eventSetVerticalAlignment_Parms, InVerticalAlignment), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(0, nullptr) }; // 550775363
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMBBorderSlot_SetVerticalAlignment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMBBorderSlot_SetVerticalAlignment_Statics::NewProp_InVerticalAlignment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBBorderSlot_SetVerticalAlignment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMBBorderSlot_SetVerticalAlignment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMBBorderSlot, nullptr, "SetVerticalAlignment", nullptr, nullptr, Z_Construct_UFunction_UMBBorderSlot_SetVerticalAlignment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMBBorderSlot_SetVerticalAlignment_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMBBorderSlot_SetVerticalAlignment_Statics::MBBorderSlot_eventSetVerticalAlignment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBBorderSlot_SetVerticalAlignment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMBBorderSlot_SetVerticalAlignment_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMBBorderSlot_SetVerticalAlignment_Statics::MBBorderSlot_eventSetVerticalAlignment_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMBBorderSlot_SetVerticalAlignment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMBBorderSlot_SetVerticalAlignment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMBBorderSlot::execSetVerticalAlignment)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_InVerticalAlignment);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetVerticalAlignment(EVerticalAlignment(Z_Param_InVerticalAlignment));
	P_NATIVE_END;
}
// End Class UMBBorderSlot Function SetVerticalAlignment

// Begin Class UMBBorderSlot
void UMBBorderSlot::StaticRegisterNativesUMBBorderSlot()
{
	UClass* Class = UMBBorderSlot::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetHorizontalAlignment", &UMBBorderSlot::execSetHorizontalAlignment },
		{ "SetPadding", &UMBBorderSlot::execSetPadding },
		{ "SetVerticalAlignment", &UMBBorderSlot::execSetVerticalAlignment },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMBBorderSlot);
UClass* Z_Construct_UClass_UMBBorderSlot_NoRegister()
{
	return UMBBorderSlot::StaticClass();
}
struct Z_Construct_UClass_UMBBorderSlot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The Slot for the UBorderSlot, contains the widget displayed in a border's single slot\n */" },
		{ "IncludePath", "Slate/MBBorderSlot.h" },
		{ "ModuleRelativePath", "Public/Slate/MBBorderSlot.h" },
		{ "ToolTip", "The Slot for the UBorderSlot, contains the widget displayed in a border's single slot" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Padding_MetaData[] = {
		{ "Category", "Layout|Border Slot" },
		{ "Comment", "/** The padding area between the slot and the content it contains. */" },
		{ "ModuleRelativePath", "Public/Slate/MBBorderSlot.h" },
		{ "ToolTip", "The padding area between the slot and the content it contains." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalAlignment_MetaData[] = {
		{ "Category", "Layout|Border Slot" },
		{ "Comment", "/** The alignment of the object horizontally. */" },
		{ "ModuleRelativePath", "Public/Slate/MBBorderSlot.h" },
		{ "ToolTip", "The alignment of the object horizontally." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VerticalAlignment_MetaData[] = {
		{ "Category", "Layout|Border Slot" },
		{ "Comment", "/** The alignment of the object vertically. */" },
		{ "ModuleRelativePath", "Public/Slate/MBBorderSlot.h" },
		{ "ToolTip", "The alignment of the object vertically." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Padding;
	static const UECodeGen_Private::FBytePropertyParams NewProp_HorizontalAlignment;
	static const UECodeGen_Private::FBytePropertyParams NewProp_VerticalAlignment;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMBBorderSlot_SetHorizontalAlignment, "SetHorizontalAlignment" }, // 626064513
		{ &Z_Construct_UFunction_UMBBorderSlot_SetPadding, "SetPadding" }, // 3141144260
		{ &Z_Construct_UFunction_UMBBorderSlot_SetVerticalAlignment, "SetVerticalAlignment" }, // 3900309619
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMBBorderSlot>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMBBorderSlot_Statics::NewProp_Padding = { "Padding", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBBorderSlot, Padding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Padding_MetaData), NewProp_Padding_MetaData) }; // 2986890016
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMBBorderSlot_Statics::NewProp_HorizontalAlignment = { "HorizontalAlignment", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBBorderSlot, HorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HorizontalAlignment_MetaData), NewProp_HorizontalAlignment_MetaData) }; // 1062133256
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMBBorderSlot_Statics::NewProp_VerticalAlignment = { "VerticalAlignment", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBBorderSlot, VerticalAlignment), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VerticalAlignment_MetaData), NewProp_VerticalAlignment_MetaData) }; // 550775363
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMBBorderSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBBorderSlot_Statics::NewProp_Padding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBBorderSlot_Statics::NewProp_HorizontalAlignment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBBorderSlot_Statics::NewProp_VerticalAlignment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMBBorderSlot_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMBBorderSlot_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPanelSlot,
	(UObject* (*)())Z_Construct_UPackage__Script_ModularBuilding,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMBBorderSlot_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMBBorderSlot_Statics::ClassParams = {
	&UMBBorderSlot::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMBBorderSlot_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMBBorderSlot_Statics::PropPointers),
	0,
	0x00B000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMBBorderSlot_Statics::Class_MetaDataParams), Z_Construct_UClass_UMBBorderSlot_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMBBorderSlot()
{
	if (!Z_Registration_Info_UClass_UMBBorderSlot.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMBBorderSlot.OuterSingleton, Z_Construct_UClass_UMBBorderSlot_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMBBorderSlot.OuterSingleton;
}
template<> MODULARBUILDING_API UClass* StaticClass<UMBBorderSlot>()
{
	return UMBBorderSlot::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMBBorderSlot);
UMBBorderSlot::~UMBBorderSlot() {}
// End Class UMBBorderSlot

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Slate_MBBorderSlot_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMBBorderSlot, UMBBorderSlot::StaticClass, TEXT("UMBBorderSlot"), &Z_Registration_Info_UClass_UMBBorderSlot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMBBorderSlot), 1594713239U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Slate_MBBorderSlot_h_3767598994(TEXT("/Script/ModularBuilding"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Slate_MBBorderSlot_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Slate_MBBorderSlot_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
