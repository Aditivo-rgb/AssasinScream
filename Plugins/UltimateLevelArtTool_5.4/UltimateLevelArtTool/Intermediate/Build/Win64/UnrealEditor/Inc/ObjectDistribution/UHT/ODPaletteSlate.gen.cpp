// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObjectDistribution/Public/UI/ODPaletteSlate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeODPaletteSlate() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
OBJECTDISTRIBUTION_API UClass* Z_Construct_UClass_UODPaletteDataObject_NoRegister();
OBJECTDISTRIBUTION_API UClass* Z_Construct_UClass_UODPaletteSlate();
OBJECTDISTRIBUTION_API UClass* Z_Construct_UClass_UODPaletteSlate_NoRegister();
OBJECTDISTRIBUTION_API UClass* Z_Construct_UClass_UODToolSubsystem_NoRegister();
SCRIPTABLEEDITORWIDGETS_API UClass* Z_Construct_UClass_UDetailsView_NoRegister();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EHorizontalAlignment();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EOrientation();
UMG_API UClass* Z_Construct_UClass_UPanelWidget();
UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWrapBoxSlot_NoRegister();
UPackage* Z_Construct_UPackage__Script_ObjectDistribution();
// End Cross Module References

// Begin Class UODPaletteSlate Function AddChildToWrapBox
struct Z_Construct_UFunction_UODPaletteSlate_AddChildToWrapBox_Statics
{
	struct ODPaletteSlate_eventAddChildToWrapBox_Parms
	{
		UWidget* Content;
		UWrapBoxSlot* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Panel" },
		{ "ModuleRelativePath", "Public/UI/ODPaletteSlate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Content_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Content;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UODPaletteSlate_AddChildToWrapBox_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ODPaletteSlate_eventAddChildToWrapBox_Parms, Content), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Content_MetaData), NewProp_Content_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UODPaletteSlate_AddChildToWrapBox_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ODPaletteSlate_eventAddChildToWrapBox_Parms, ReturnValue), Z_Construct_UClass_UWrapBoxSlot_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UODPaletteSlate_AddChildToWrapBox_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UODPaletteSlate_AddChildToWrapBox_Statics::NewProp_Content,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UODPaletteSlate_AddChildToWrapBox_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UODPaletteSlate_AddChildToWrapBox_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UODPaletteSlate_AddChildToWrapBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UODPaletteSlate, nullptr, "AddChildToWrapBox", nullptr, nullptr, Z_Construct_UFunction_UODPaletteSlate_AddChildToWrapBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UODPaletteSlate_AddChildToWrapBox_Statics::PropPointers), sizeof(Z_Construct_UFunction_UODPaletteSlate_AddChildToWrapBox_Statics::ODPaletteSlate_eventAddChildToWrapBox_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UODPaletteSlate_AddChildToWrapBox_Statics::Function_MetaDataParams), Z_Construct_UFunction_UODPaletteSlate_AddChildToWrapBox_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UODPaletteSlate_AddChildToWrapBox_Statics::ODPaletteSlate_eventAddChildToWrapBox_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UODPaletteSlate_AddChildToWrapBox()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UODPaletteSlate_AddChildToWrapBox_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UODPaletteSlate::execAddChildToWrapBox)
{
	P_GET_OBJECT(UWidget,Z_Param_Content);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UWrapBoxSlot**)Z_Param__Result=P_THIS->AddChildToWrapBox(Z_Param_Content);
	P_NATIVE_END;
}
// End Class UODPaletteSlate Function AddChildToWrapBox

// Begin Class UODPaletteSlate Function SetHorizontalAlignment
struct Z_Construct_UFunction_UODPaletteSlate_SetHorizontalAlignment_Statics
{
	struct ODPaletteSlate_eventSetHorizontalAlignment_Parms
	{
		TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Content Layout" },
		{ "ModuleRelativePath", "Public/UI/ODPaletteSlate.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InHorizontalAlignment;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UODPaletteSlate_SetHorizontalAlignment_Statics::NewProp_InHorizontalAlignment = { "InHorizontalAlignment", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ODPaletteSlate_eventSetHorizontalAlignment_Parms, InHorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(0, nullptr) }; // 1062133256
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UODPaletteSlate_SetHorizontalAlignment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UODPaletteSlate_SetHorizontalAlignment_Statics::NewProp_InHorizontalAlignment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UODPaletteSlate_SetHorizontalAlignment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UODPaletteSlate_SetHorizontalAlignment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UODPaletteSlate, nullptr, "SetHorizontalAlignment", nullptr, nullptr, Z_Construct_UFunction_UODPaletteSlate_SetHorizontalAlignment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UODPaletteSlate_SetHorizontalAlignment_Statics::PropPointers), sizeof(Z_Construct_UFunction_UODPaletteSlate_SetHorizontalAlignment_Statics::ODPaletteSlate_eventSetHorizontalAlignment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UODPaletteSlate_SetHorizontalAlignment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UODPaletteSlate_SetHorizontalAlignment_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UODPaletteSlate_SetHorizontalAlignment_Statics::ODPaletteSlate_eventSetHorizontalAlignment_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UODPaletteSlate_SetHorizontalAlignment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UODPaletteSlate_SetHorizontalAlignment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UODPaletteSlate::execSetHorizontalAlignment)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_InHorizontalAlignment);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHorizontalAlignment(EHorizontalAlignment(Z_Param_InHorizontalAlignment));
	P_NATIVE_END;
}
// End Class UODPaletteSlate Function SetHorizontalAlignment

// Begin Class UODPaletteSlate Function SetInnerSlotPadding
struct Z_Construct_UFunction_UODPaletteSlate_SetInnerSlotPadding_Statics
{
	struct ODPaletteSlate_eventSetInnerSlotPadding_Parms
	{
		FVector2D InPadding;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Content Layout" },
		{ "Comment", "/** Sets the inner slot padding goes between slots sharing borders */" },
		{ "ModuleRelativePath", "Public/UI/ODPaletteSlate.h" },
		{ "ToolTip", "Sets the inner slot padding goes between slots sharing borders" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InPadding;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UODPaletteSlate_SetInnerSlotPadding_Statics::NewProp_InPadding = { "InPadding", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ODPaletteSlate_eventSetInnerSlotPadding_Parms, InPadding), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UODPaletteSlate_SetInnerSlotPadding_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UODPaletteSlate_SetInnerSlotPadding_Statics::NewProp_InPadding,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UODPaletteSlate_SetInnerSlotPadding_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UODPaletteSlate_SetInnerSlotPadding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UODPaletteSlate, nullptr, "SetInnerSlotPadding", nullptr, nullptr, Z_Construct_UFunction_UODPaletteSlate_SetInnerSlotPadding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UODPaletteSlate_SetInnerSlotPadding_Statics::PropPointers), sizeof(Z_Construct_UFunction_UODPaletteSlate_SetInnerSlotPadding_Statics::ODPaletteSlate_eventSetInnerSlotPadding_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UODPaletteSlate_SetInnerSlotPadding_Statics::Function_MetaDataParams), Z_Construct_UFunction_UODPaletteSlate_SetInnerSlotPadding_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UODPaletteSlate_SetInnerSlotPadding_Statics::ODPaletteSlate_eventSetInnerSlotPadding_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UODPaletteSlate_SetInnerSlotPadding()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UODPaletteSlate_SetInnerSlotPadding_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UODPaletteSlate::execSetInnerSlotPadding)
{
	P_GET_STRUCT(FVector2D,Z_Param_InPadding);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetInnerSlotPadding(Z_Param_InPadding);
	P_NATIVE_END;
}
// End Class UODPaletteSlate Function SetInnerSlotPadding

// Begin Class UODPaletteSlate
void UODPaletteSlate::StaticRegisterNativesUODPaletteSlate()
{
	UClass* Class = UODPaletteSlate::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddChildToWrapBox", &UODPaletteSlate::execAddChildToWrapBox },
		{ "SetHorizontalAlignment", &UODPaletteSlate::execSetHorizontalAlignment },
		{ "SetInnerSlotPadding", &UODPaletteSlate::execSetInnerSlotPadding },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UODPaletteSlate);
UClass* Z_Construct_UClass_UODPaletteSlate_NoRegister()
{
	return UODPaletteSlate::StaticClass();
}
struct Z_Construct_UClass_UODPaletteSlate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/ODPaletteSlate.h" },
		{ "ModuleRelativePath", "Public/UI/ODPaletteSlate.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToolSubsystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/ODPaletteSlate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InnerSlotPadding_MetaData[] = {
		{ "Category", "Content Layout" },
		{ "Comment", "/** The inner slot padding goes between slots sharing borders */" },
		{ "ModuleRelativePath", "Public/UI/ODPaletteSlate.h" },
		{ "ToolTip", "The inner slot padding goes between slots sharing borders" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WrapSize_MetaData[] = {
		{ "Category", "Content Layout" },
		{ "Comment", "/** When this size is exceeded, elements will start appearing on the next line. */" },
		{ "EditCondition", "bExplicitWrapSize" },
		{ "ModuleRelativePath", "Public/UI/ODPaletteSlate.h" },
		{ "ToolTip", "When this size is exceeded, elements will start appearing on the next line." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExplicitWrapSize_MetaData[] = {
		{ "Category", "Content Layout" },
		{ "Comment", "/** Use explicit wrap size whenever possible. It greatly simplifies layout calculations and reduces likelihood of \"wiggling UI\" */" },
		{ "ModuleRelativePath", "Public/UI/ODPaletteSlate.h" },
		{ "ToolTip", "Use explicit wrap size whenever possible. It greatly simplifies layout calculations and reduces likelihood of \"wiggling UI\"" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalAlignment_MetaData[] = {
		{ "Category", "Content Layout" },
		{ "Comment", "/** The alignment of each line of wrapped content. */" },
		{ "ModuleRelativePath", "Public/UI/ODPaletteSlate.h" },
		{ "ToolTip", "The alignment of each line of wrapped content." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Orientation_MetaData[] = {
		{ "Category", "Content Layout" },
		{ "Comment", "/** Determines if the Wrap Box should arranges the widgets left-to-right or top-to-bottom */" },
		{ "ModuleRelativePath", "Public/UI/ODPaletteSlate.h" },
		{ "ToolTip", "Determines if the Wrap Box should arranges the widgets left-to-right or top-to-bottom" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PaletteDataObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/ODPaletteSlate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PaletteObjectDataDetails_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ODPaletteSlate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropDistributionDetails_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ODPaletteSlate.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ToolSubsystem;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InnerSlotPadding;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WrapSize;
	static void NewProp_bExplicitWrapSize_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExplicitWrapSize;
	static const UECodeGen_Private::FBytePropertyParams NewProp_HorizontalAlignment;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Orientation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PaletteDataObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PaletteObjectDataDetails;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PropDistributionDetails;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UODPaletteSlate_AddChildToWrapBox, "AddChildToWrapBox" }, // 4127370360
		{ &Z_Construct_UFunction_UODPaletteSlate_SetHorizontalAlignment, "SetHorizontalAlignment" }, // 1415761813
		{ &Z_Construct_UFunction_UODPaletteSlate_SetInnerSlotPadding, "SetInnerSlotPadding" }, // 2985935620
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UODPaletteSlate>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UODPaletteSlate_Statics::NewProp_ToolSubsystem = { "ToolSubsystem", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UODPaletteSlate, ToolSubsystem), Z_Construct_UClass_UODToolSubsystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToolSubsystem_MetaData), NewProp_ToolSubsystem_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UODPaletteSlate_Statics::NewProp_InnerSlotPadding = { "InnerSlotPadding", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UODPaletteSlate, InnerSlotPadding), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InnerSlotPadding_MetaData), NewProp_InnerSlotPadding_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UODPaletteSlate_Statics::NewProp_WrapSize = { "WrapSize", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UODPaletteSlate, WrapSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WrapSize_MetaData), NewProp_WrapSize_MetaData) };
void Z_Construct_UClass_UODPaletteSlate_Statics::NewProp_bExplicitWrapSize_SetBit(void* Obj)
{
	((UODPaletteSlate*)Obj)->bExplicitWrapSize = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UODPaletteSlate_Statics::NewProp_bExplicitWrapSize = { "bExplicitWrapSize", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UODPaletteSlate), &Z_Construct_UClass_UODPaletteSlate_Statics::NewProp_bExplicitWrapSize_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExplicitWrapSize_MetaData), NewProp_bExplicitWrapSize_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UODPaletteSlate_Statics::NewProp_HorizontalAlignment = { "HorizontalAlignment", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UODPaletteSlate, HorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HorizontalAlignment_MetaData), NewProp_HorizontalAlignment_MetaData) }; // 1062133256
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UODPaletteSlate_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UODPaletteSlate, Orientation), Z_Construct_UEnum_SlateCore_EOrientation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Orientation_MetaData), NewProp_Orientation_MetaData) }; // 349032367
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UODPaletteSlate_Statics::NewProp_PaletteDataObject = { "PaletteDataObject", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UODPaletteSlate, PaletteDataObject), Z_Construct_UClass_UODPaletteDataObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PaletteDataObject_MetaData), NewProp_PaletteDataObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UODPaletteSlate_Statics::NewProp_PaletteObjectDataDetails = { "PaletteObjectDataDetails", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UODPaletteSlate, PaletteObjectDataDetails), Z_Construct_UClass_UDetailsView_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PaletteObjectDataDetails_MetaData), NewProp_PaletteObjectDataDetails_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UODPaletteSlate_Statics::NewProp_PropDistributionDetails = { "PropDistributionDetails", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UODPaletteSlate, PropDistributionDetails), Z_Construct_UClass_UDetailsView_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropDistributionDetails_MetaData), NewProp_PropDistributionDetails_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UODPaletteSlate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODPaletteSlate_Statics::NewProp_ToolSubsystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODPaletteSlate_Statics::NewProp_InnerSlotPadding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODPaletteSlate_Statics::NewProp_WrapSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODPaletteSlate_Statics::NewProp_bExplicitWrapSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODPaletteSlate_Statics::NewProp_HorizontalAlignment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODPaletteSlate_Statics::NewProp_Orientation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODPaletteSlate_Statics::NewProp_PaletteDataObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODPaletteSlate_Statics::NewProp_PaletteObjectDataDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODPaletteSlate_Statics::NewProp_PropDistributionDetails,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UODPaletteSlate_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UODPaletteSlate_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPanelWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ObjectDistribution,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UODPaletteSlate_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UODPaletteSlate_Statics::ClassParams = {
	&UODPaletteSlate::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UODPaletteSlate_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UODPaletteSlate_Statics::PropPointers),
	0,
	0x00B000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UODPaletteSlate_Statics::Class_MetaDataParams), Z_Construct_UClass_UODPaletteSlate_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UODPaletteSlate()
{
	if (!Z_Registration_Info_UClass_UODPaletteSlate.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UODPaletteSlate.OuterSingleton, Z_Construct_UClass_UODPaletteSlate_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UODPaletteSlate.OuterSingleton;
}
template<> OBJECTDISTRIBUTION_API UClass* StaticClass<UODPaletteSlate>()
{
	return UODPaletteSlate::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UODPaletteSlate);
UODPaletteSlate::~UODPaletteSlate() {}
// End Class UODPaletteSlate

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ObjectDistribution_Public_UI_ODPaletteSlate_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UODPaletteSlate, UODPaletteSlate::StaticClass, TEXT("UODPaletteSlate"), &Z_Registration_Info_UClass_UODPaletteSlate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UODPaletteSlate), 314367293U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ObjectDistribution_Public_UI_ODPaletteSlate_h_3858273045(TEXT("/Script/ObjectDistribution"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ObjectDistribution_Public_UI_ODPaletteSlate_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ObjectDistribution_Public_UI_ODPaletteSlate_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
