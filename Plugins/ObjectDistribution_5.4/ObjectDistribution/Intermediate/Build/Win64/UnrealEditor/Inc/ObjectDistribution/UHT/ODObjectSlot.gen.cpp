// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObjectDistribution/Public/UI/ODObjectSlot.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeODObjectSlot() {}

// Begin Cross Module References
OBJECTDISTRIBUTION_API UClass* Z_Construct_UClass_UODObjectSlot();
OBJECTDISTRIBUTION_API UClass* Z_Construct_UClass_UODObjectSlot_NoRegister();
UMG_API UClass* Z_Construct_UClass_UBorder_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UCheckBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_ObjectDistribution();
// End Cross Module References

// Begin Class UODObjectSlot Function OnActivateCheckBoxChanged
struct Z_Construct_UFunction_UODObjectSlot_OnActivateCheckBoxChanged_Statics
{
	struct ODObjectSlot_eventOnActivateCheckBoxChanged_Parms
	{
		bool bInNewCondition;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ODObjectSlot.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bInNewCondition_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInNewCondition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UODObjectSlot_OnActivateCheckBoxChanged_Statics::NewProp_bInNewCondition_SetBit(void* Obj)
{
	((ODObjectSlot_eventOnActivateCheckBoxChanged_Parms*)Obj)->bInNewCondition = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UODObjectSlot_OnActivateCheckBoxChanged_Statics::NewProp_bInNewCondition = { "bInNewCondition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ODObjectSlot_eventOnActivateCheckBoxChanged_Parms), &Z_Construct_UFunction_UODObjectSlot_OnActivateCheckBoxChanged_Statics::NewProp_bInNewCondition_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UODObjectSlot_OnActivateCheckBoxChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UODObjectSlot_OnActivateCheckBoxChanged_Statics::NewProp_bInNewCondition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UODObjectSlot_OnActivateCheckBoxChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UODObjectSlot_OnActivateCheckBoxChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UODObjectSlot, nullptr, "OnActivateCheckBoxChanged", nullptr, nullptr, Z_Construct_UFunction_UODObjectSlot_OnActivateCheckBoxChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UODObjectSlot_OnActivateCheckBoxChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UODObjectSlot_OnActivateCheckBoxChanged_Statics::ODObjectSlot_eventOnActivateCheckBoxChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UODObjectSlot_OnActivateCheckBoxChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UODObjectSlot_OnActivateCheckBoxChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UODObjectSlot_OnActivateCheckBoxChanged_Statics::ODObjectSlot_eventOnActivateCheckBoxChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UODObjectSlot_OnActivateCheckBoxChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UODObjectSlot_OnActivateCheckBoxChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UODObjectSlot::execOnActivateCheckBoxChanged)
{
	P_GET_UBOOL(Z_Param_bInNewCondition);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnActivateCheckBoxChanged(Z_Param_bInNewCondition);
	P_NATIVE_END;
}
// End Class UODObjectSlot Function OnActivateCheckBoxChanged

// Begin Class UODObjectSlot Function SlotSelectBtnPressed
struct Z_Construct_UFunction_UODObjectSlot_SlotSelectBtnPressed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ODObjectSlot.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UODObjectSlot_SlotSelectBtnPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UODObjectSlot, nullptr, "SlotSelectBtnPressed", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UODObjectSlot_SlotSelectBtnPressed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UODObjectSlot_SlotSelectBtnPressed_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UODObjectSlot_SlotSelectBtnPressed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UODObjectSlot_SlotSelectBtnPressed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UODObjectSlot::execSlotSelectBtnPressed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SlotSelectBtnPressed();
	P_NATIVE_END;
}
// End Class UODObjectSlot Function SlotSelectBtnPressed

// Begin Class UODObjectSlot
void UODObjectSlot::StaticRegisterNativesUODObjectSlot()
{
	UClass* Class = UODObjectSlot::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnActivateCheckBoxChanged", &UODObjectSlot::execOnActivateCheckBoxChanged },
		{ "SlotSelectBtnPressed", &UODObjectSlot::execSlotSelectBtnPressed },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UODObjectSlot);
UClass* Z_Construct_UClass_UODObjectSlot_NoRegister()
{
	return UODObjectSlot::StaticClass();
}
struct Z_Construct_UClass_UODObjectSlot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/ODObjectSlot.h" },
		{ "ModuleRelativePath", "Public/UI/ODObjectSlot.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotSelectBtn_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ODObjectSlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ODObjectSlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnCountText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ODObjectSlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PresetBorder_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ODObjectSlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CheckBoxBorder_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ODObjectSlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivateCheckBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ODObjectSlot.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SlotSelectBtn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SlotImage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnCountText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PresetBorder;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CheckBoxBorder;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActivateCheckBox;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UODObjectSlot_OnActivateCheckBoxChanged, "OnActivateCheckBoxChanged" }, // 1843363240
		{ &Z_Construct_UFunction_UODObjectSlot_SlotSelectBtnPressed, "SlotSelectBtnPressed" }, // 544966232
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UODObjectSlot>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UODObjectSlot_Statics::NewProp_SlotSelectBtn = { "SlotSelectBtn", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UODObjectSlot, SlotSelectBtn), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotSelectBtn_MetaData), NewProp_SlotSelectBtn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UODObjectSlot_Statics::NewProp_SlotImage = { "SlotImage", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UODObjectSlot, SlotImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotImage_MetaData), NewProp_SlotImage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UODObjectSlot_Statics::NewProp_SpawnCountText = { "SpawnCountText", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UODObjectSlot, SpawnCountText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnCountText_MetaData), NewProp_SpawnCountText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UODObjectSlot_Statics::NewProp_PresetBorder = { "PresetBorder", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UODObjectSlot, PresetBorder), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PresetBorder_MetaData), NewProp_PresetBorder_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UODObjectSlot_Statics::NewProp_CheckBoxBorder = { "CheckBoxBorder", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UODObjectSlot, CheckBoxBorder), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CheckBoxBorder_MetaData), NewProp_CheckBoxBorder_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UODObjectSlot_Statics::NewProp_ActivateCheckBox = { "ActivateCheckBox", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UODObjectSlot, ActivateCheckBox), Z_Construct_UClass_UCheckBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivateCheckBox_MetaData), NewProp_ActivateCheckBox_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UODObjectSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODObjectSlot_Statics::NewProp_SlotSelectBtn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODObjectSlot_Statics::NewProp_SlotImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODObjectSlot_Statics::NewProp_SpawnCountText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODObjectSlot_Statics::NewProp_PresetBorder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODObjectSlot_Statics::NewProp_CheckBoxBorder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UODObjectSlot_Statics::NewProp_ActivateCheckBox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UODObjectSlot_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UODObjectSlot_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ObjectDistribution,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UODObjectSlot_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UODObjectSlot_Statics::ClassParams = {
	&UODObjectSlot::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UODObjectSlot_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UODObjectSlot_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UODObjectSlot_Statics::Class_MetaDataParams), Z_Construct_UClass_UODObjectSlot_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UODObjectSlot()
{
	if (!Z_Registration_Info_UClass_UODObjectSlot.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UODObjectSlot.OuterSingleton, Z_Construct_UClass_UODObjectSlot_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UODObjectSlot.OuterSingleton;
}
template<> OBJECTDISTRIBUTION_API UClass* StaticClass<UODObjectSlot>()
{
	return UODObjectSlot::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UODObjectSlot);
UODObjectSlot::~UODObjectSlot() {}
// End Class UODObjectSlot

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ObjectDistribution_Source_ObjectDistribution_Public_UI_ODObjectSlot_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UODObjectSlot, UODObjectSlot::StaticClass, TEXT("UODObjectSlot"), &Z_Registration_Info_UClass_UODObjectSlot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UODObjectSlot), 4071524474U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ObjectDistribution_Source_ObjectDistribution_Public_UI_ODObjectSlot_h_19159883(TEXT("/Script/ObjectDistribution"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_ObjectDistribution_Source_ObjectDistribution_Public_UI_ODObjectSlot_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ObjectDistribution_Source_ObjectDistribution_Public_UI_ODObjectSlot_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
