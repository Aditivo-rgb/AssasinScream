// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LightingTool/Public/UI/LTNumericEntry.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLTNumericEntry() {}

// Begin Cross Module References
LIGHTINGTOOL_API UClass* Z_Construct_UClass_ULTNumericEntry();
LIGHTINGTOOL_API UClass* Z_Construct_UClass_ULTNumericEntry_NoRegister();
LIGHTINGTOOL_API UFunction* Z_Construct_UDelegateFunction_LightingTool_OnValueChanged__DelegateSignature();
UMG_API UClass* Z_Construct_UClass_UWidget();
UPackage* Z_Construct_UPackage__Script_LightingTool();
// End Cross Module References

// Begin Delegate FOnValueChanged
struct Z_Construct_UDelegateFunction_LightingTool_OnValueChanged__DelegateSignature_Statics
{
	struct _Script_LightingTool_eventOnValueChanged_Parms
	{
		float OutValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/LTNumericEntry.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_LightingTool_OnValueChanged__DelegateSignature_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LightingTool_eventOnValueChanged_Parms, OutValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LightingTool_OnValueChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LightingTool_OnValueChanged__DelegateSignature_Statics::NewProp_OutValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LightingTool_OnValueChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LightingTool_OnValueChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LightingTool, nullptr, "OnValueChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LightingTool_OnValueChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LightingTool_OnValueChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LightingTool_OnValueChanged__DelegateSignature_Statics::_Script_LightingTool_eventOnValueChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LightingTool_OnValueChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LightingTool_OnValueChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_LightingTool_OnValueChanged__DelegateSignature_Statics::_Script_LightingTool_eventOnValueChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_LightingTool_OnValueChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LightingTool_OnValueChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnValueChanged_DelegateWrapper(const FMulticastScriptDelegate& OnValueChanged, float OutValue)
{
	struct _Script_LightingTool_eventOnValueChanged_Parms
	{
		float OutValue;
	};
	_Script_LightingTool_eventOnValueChanged_Parms Parms;
	Parms.OutValue=OutValue;
	OnValueChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnValueChanged

// Begin Class ULTNumericEntry Function SetInitialValue
struct Z_Construct_UFunction_ULTNumericEntry_SetInitialValue_Statics
{
	struct LTNumericEntry_eventSetInitialValue_Parms
	{
		float InValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lighting Tool" },
		{ "ModuleRelativePath", "Public/UI/LTNumericEntry.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULTNumericEntry_SetInitialValue_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LTNumericEntry_eventSetInitialValue_Parms, InValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULTNumericEntry_SetInitialValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTNumericEntry_SetInitialValue_Statics::NewProp_InValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTNumericEntry_SetInitialValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULTNumericEntry_SetInitialValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULTNumericEntry, nullptr, "SetInitialValue", nullptr, nullptr, Z_Construct_UFunction_ULTNumericEntry_SetInitialValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULTNumericEntry_SetInitialValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULTNumericEntry_SetInitialValue_Statics::LTNumericEntry_eventSetInitialValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTNumericEntry_SetInitialValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULTNumericEntry_SetInitialValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULTNumericEntry_SetInitialValue_Statics::LTNumericEntry_eventSetInitialValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULTNumericEntry_SetInitialValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULTNumericEntry_SetInitialValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULTNumericEntry::execSetInitialValue)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetInitialValue(Z_Param_InValue);
	P_NATIVE_END;
}
// End Class ULTNumericEntry Function SetInitialValue

// Begin Class ULTNumericEntry
void ULTNumericEntry::StaticRegisterNativesULTNumericEntry()
{
	UClass* Class = ULTNumericEntry::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetInitialValue", &ULTNumericEntry::execSetInitialValue },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULTNumericEntry);
UClass* Z_Construct_UClass_ULTNumericEntry_NoRegister()
{
	return ULTNumericEntry::StaticClass();
}
struct Z_Construct_UClass_ULTNumericEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/LTNumericEntry.h" },
		{ "ModuleRelativePath", "Public/UI/LTNumericEntry.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeaderName_MetaData[] = {
		{ "Category", "Lighting Tool" },
		{ "Comment", "// Property to be set in the UMG editor\n" },
		{ "ModuleRelativePath", "Public/UI/LTNumericEntry.h" },
		{ "ToolTip", "Property to be set in the UMG editor" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeaderToolTipText_MetaData[] = {
		{ "Category", "Lighting Tool" },
		{ "ModuleRelativePath", "Public/UI/LTNumericEntry.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinValue_MetaData[] = {
		{ "Category", "Lighting Tool" },
		{ "Comment", "// Property to be set in the UMG editor\n" },
		{ "ModuleRelativePath", "Public/UI/LTNumericEntry.h" },
		{ "ToolTip", "Property to be set in the UMG editor" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxValue_MetaData[] = {
		{ "Category", "Lighting Tool" },
		{ "Comment", "// Property to be set in the UMG editor\n" },
		{ "ModuleRelativePath", "Public/UI/LTNumericEntry.h" },
		{ "ToolTip", "Property to be set in the UMG editor" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnValueChangedSignature_MetaData[] = {
		{ "Category", "Lighting Tool" },
		{ "ModuleRelativePath", "Public/UI/LTNumericEntry.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_HeaderName;
	static const UECodeGen_Private::FTextPropertyParams NewProp_HeaderToolTipText;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxValue;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnValueChangedSignature;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULTNumericEntry_SetInitialValue, "SetInitialValue" }, // 3305713132
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULTNumericEntry>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_ULTNumericEntry_Statics::NewProp_HeaderName = { "HeaderName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULTNumericEntry, HeaderName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeaderName_MetaData), NewProp_HeaderName_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_ULTNumericEntry_Statics::NewProp_HeaderToolTipText = { "HeaderToolTipText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULTNumericEntry, HeaderToolTipText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeaderToolTipText_MetaData), NewProp_HeaderToolTipText_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULTNumericEntry_Statics::NewProp_MinValue = { "MinValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULTNumericEntry, MinValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinValue_MetaData), NewProp_MinValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULTNumericEntry_Statics::NewProp_MaxValue = { "MaxValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULTNumericEntry, MaxValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxValue_MetaData), NewProp_MaxValue_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULTNumericEntry_Statics::NewProp_OnValueChangedSignature = { "OnValueChangedSignature", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULTNumericEntry, OnValueChangedSignature), Z_Construct_UDelegateFunction_LightingTool_OnValueChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnValueChangedSignature_MetaData), NewProp_OnValueChangedSignature_MetaData) }; // 2937221818
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULTNumericEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULTNumericEntry_Statics::NewProp_HeaderName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULTNumericEntry_Statics::NewProp_HeaderToolTipText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULTNumericEntry_Statics::NewProp_MinValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULTNumericEntry_Statics::NewProp_MaxValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULTNumericEntry_Statics::NewProp_OnValueChangedSignature,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULTNumericEntry_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULTNumericEntry_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_LightingTool,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULTNumericEntry_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULTNumericEntry_Statics::ClassParams = {
	&ULTNumericEntry::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULTNumericEntry_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULTNumericEntry_Statics::PropPointers),
	0,
	0x00B000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULTNumericEntry_Statics::Class_MetaDataParams), Z_Construct_UClass_ULTNumericEntry_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULTNumericEntry()
{
	if (!Z_Registration_Info_UClass_ULTNumericEntry.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULTNumericEntry.OuterSingleton, Z_Construct_UClass_ULTNumericEntry_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULTNumericEntry.OuterSingleton;
}
template<> LIGHTINGTOOL_API UClass* StaticClass<ULTNumericEntry>()
{
	return ULTNumericEntry::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULTNumericEntry);
ULTNumericEntry::~ULTNumericEntry() {}
// End Class ULTNumericEntry

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_UI_LTNumericEntry_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULTNumericEntry, ULTNumericEntry::StaticClass, TEXT("ULTNumericEntry"), &Z_Registration_Info_UClass_ULTNumericEntry, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULTNumericEntry), 2749835473U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_UI_LTNumericEntry_h_283632406(TEXT("/Script/LightingTool"),
	Z_CompiledInDeferFile_FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_UI_LTNumericEntry_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_UI_LTNumericEntry_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
