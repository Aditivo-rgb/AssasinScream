// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularBuilding/Public/UI/MBCollectionButton.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMBCollectionButton() {}

// Begin Cross Module References
MODULARBUILDING_API UClass* Z_Construct_UClass_UMBCollectionButton();
MODULARBUILDING_API UClass* Z_Construct_UClass_UMBCollectionButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_ModularBuilding();
// End Cross Module References

// Begin Class UMBCollectionButton Function ModularCollectionBtnPressed
struct Z_Construct_UFunction_UMBCollectionButton_ModularCollectionBtnPressed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/MBCollectionButton.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMBCollectionButton_ModularCollectionBtnPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMBCollectionButton, nullptr, "ModularCollectionBtnPressed", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBCollectionButton_ModularCollectionBtnPressed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMBCollectionButton_ModularCollectionBtnPressed_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMBCollectionButton_ModularCollectionBtnPressed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMBCollectionButton_ModularCollectionBtnPressed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMBCollectionButton::execModularCollectionBtnPressed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ModularCollectionBtnPressed();
	P_NATIVE_END;
}
// End Class UMBCollectionButton Function ModularCollectionBtnPressed

// Begin Class UMBCollectionButton Function OnTimerFinished
struct Z_Construct_UFunction_UMBCollectionButton_OnTimerFinished_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/MBCollectionButton.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMBCollectionButton_OnTimerFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMBCollectionButton, nullptr, "OnTimerFinished", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBCollectionButton_OnTimerFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMBCollectionButton_OnTimerFinished_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMBCollectionButton_OnTimerFinished()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMBCollectionButton_OnTimerFinished_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMBCollectionButton::execOnTimerFinished)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnTimerFinished();
	P_NATIVE_END;
}
// End Class UMBCollectionButton Function OnTimerFinished

// Begin Class UMBCollectionButton Function SetSelectionState
struct Z_Construct_UFunction_UMBCollectionButton_SetSelectionState_Statics
{
	struct MBCollectionButton_eventSetSelectionState_Parms
	{
		bool InSelectionState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/MBCollectionButton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSelectionState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_InSelectionState_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InSelectionState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMBCollectionButton_SetSelectionState_Statics::NewProp_InSelectionState_SetBit(void* Obj)
{
	((MBCollectionButton_eventSetSelectionState_Parms*)Obj)->InSelectionState = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMBCollectionButton_SetSelectionState_Statics::NewProp_InSelectionState = { "InSelectionState", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MBCollectionButton_eventSetSelectionState_Parms), &Z_Construct_UFunction_UMBCollectionButton_SetSelectionState_Statics::NewProp_InSelectionState_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSelectionState_MetaData), NewProp_InSelectionState_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMBCollectionButton_SetSelectionState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMBCollectionButton_SetSelectionState_Statics::NewProp_InSelectionState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBCollectionButton_SetSelectionState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMBCollectionButton_SetSelectionState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMBCollectionButton, nullptr, "SetSelectionState", nullptr, nullptr, Z_Construct_UFunction_UMBCollectionButton_SetSelectionState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMBCollectionButton_SetSelectionState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMBCollectionButton_SetSelectionState_Statics::MBCollectionButton_eventSetSelectionState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBCollectionButton_SetSelectionState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMBCollectionButton_SetSelectionState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMBCollectionButton_SetSelectionState_Statics::MBCollectionButton_eventSetSelectionState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMBCollectionButton_SetSelectionState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMBCollectionButton_SetSelectionState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMBCollectionButton::execSetSelectionState)
{
	P_GET_UBOOL(Z_Param_InSelectionState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSelectionState(Z_Param_InSelectionState);
	P_NATIVE_END;
}
// End Class UMBCollectionButton Function SetSelectionState

// Begin Class UMBCollectionButton
void UMBCollectionButton::StaticRegisterNativesUMBCollectionButton()
{
	UClass* Class = UMBCollectionButton::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ModularCollectionBtnPressed", &UMBCollectionButton::execModularCollectionBtnPressed },
		{ "OnTimerFinished", &UMBCollectionButton::execOnTimerFinished },
		{ "SetSelectionState", &UMBCollectionButton::execSetSelectionState },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMBCollectionButton);
UClass* Z_Construct_UClass_UMBCollectionButton_NoRegister()
{
	return UMBCollectionButton::StaticClass();
}
struct Z_Construct_UClass_UMBCollectionButton_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/MBCollectionButton.h" },
		{ "ModuleRelativePath", "Public/UI/MBCollectionButton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollectionName_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/MBCollectionButton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModularCollectionBtn_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MBCollectionButton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollectionText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MBCollectionButton.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_CollectionName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ModularCollectionBtn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CollectionText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMBCollectionButton_ModularCollectionBtnPressed, "ModularCollectionBtnPressed" }, // 156522593
		{ &Z_Construct_UFunction_UMBCollectionButton_OnTimerFinished, "OnTimerFinished" }, // 388587414
		{ &Z_Construct_UFunction_UMBCollectionButton_SetSelectionState, "SetSelectionState" }, // 3005068187
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMBCollectionButton>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMBCollectionButton_Statics::NewProp_CollectionName = { "CollectionName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBCollectionButton, CollectionName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollectionName_MetaData), NewProp_CollectionName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMBCollectionButton_Statics::NewProp_ModularCollectionBtn = { "ModularCollectionBtn", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBCollectionButton, ModularCollectionBtn), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModularCollectionBtn_MetaData), NewProp_ModularCollectionBtn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMBCollectionButton_Statics::NewProp_CollectionText = { "CollectionText", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBCollectionButton, CollectionText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollectionText_MetaData), NewProp_CollectionText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMBCollectionButton_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBCollectionButton_Statics::NewProp_CollectionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBCollectionButton_Statics::NewProp_ModularCollectionBtn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBCollectionButton_Statics::NewProp_CollectionText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMBCollectionButton_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMBCollectionButton_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ModularBuilding,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMBCollectionButton_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMBCollectionButton_Statics::ClassParams = {
	&UMBCollectionButton::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMBCollectionButton_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMBCollectionButton_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMBCollectionButton_Statics::Class_MetaDataParams), Z_Construct_UClass_UMBCollectionButton_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMBCollectionButton()
{
	if (!Z_Registration_Info_UClass_UMBCollectionButton.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMBCollectionButton.OuterSingleton, Z_Construct_UClass_UMBCollectionButton_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMBCollectionButton.OuterSingleton;
}
template<> MODULARBUILDING_API UClass* StaticClass<UMBCollectionButton>()
{
	return UMBCollectionButton::StaticClass();
}
UMBCollectionButton::UMBCollectionButton(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMBCollectionButton);
UMBCollectionButton::~UMBCollectionButton() {}
// End Class UMBCollectionButton

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBCollectionButton_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMBCollectionButton, UMBCollectionButton::StaticClass, TEXT("UMBCollectionButton"), &Z_Registration_Info_UClass_UMBCollectionButton, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMBCollectionButton), 290716471U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBCollectionButton_h_3097378068(TEXT("/Script/ModularBuilding"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBCollectionButton_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBCollectionButton_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
