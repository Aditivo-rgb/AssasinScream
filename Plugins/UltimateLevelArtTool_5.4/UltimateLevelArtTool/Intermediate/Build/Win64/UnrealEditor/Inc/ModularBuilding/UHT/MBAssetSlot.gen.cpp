// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularBuilding/Public/UI/MBAssetSlot.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMBAssetSlot() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
MODULARBUILDING_API UClass* Z_Construct_UClass_UMBAssetSlot();
MODULARBUILDING_API UClass* Z_Construct_UClass_UMBAssetSlot_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_ModularBuilding();
// End Cross Module References

// Begin Class UMBAssetSlot Function AssetSelectionBtnPressed
struct Z_Construct_UFunction_UMBAssetSlot_AssetSelectionBtnPressed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/MBAssetSlot.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMBAssetSlot_AssetSelectionBtnPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMBAssetSlot, nullptr, "AssetSelectionBtnPressed", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBAssetSlot_AssetSelectionBtnPressed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMBAssetSlot_AssetSelectionBtnPressed_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMBAssetSlot_AssetSelectionBtnPressed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMBAssetSlot_AssetSelectionBtnPressed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMBAssetSlot::execAssetSelectionBtnPressed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AssetSelectionBtnPressed();
	P_NATIVE_END;
}
// End Class UMBAssetSlot Function AssetSelectionBtnPressed

// Begin Class UMBAssetSlot Function SetSelectionState
struct Z_Construct_UFunction_UMBAssetSlot_SetSelectionState_Statics
{
	struct MBAssetSlot_eventSetSelectionState_Parms
	{
		bool InSelectionState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/MBAssetSlot.h" },
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
void Z_Construct_UFunction_UMBAssetSlot_SetSelectionState_Statics::NewProp_InSelectionState_SetBit(void* Obj)
{
	((MBAssetSlot_eventSetSelectionState_Parms*)Obj)->InSelectionState = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMBAssetSlot_SetSelectionState_Statics::NewProp_InSelectionState = { "InSelectionState", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MBAssetSlot_eventSetSelectionState_Parms), &Z_Construct_UFunction_UMBAssetSlot_SetSelectionState_Statics::NewProp_InSelectionState_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSelectionState_MetaData), NewProp_InSelectionState_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMBAssetSlot_SetSelectionState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMBAssetSlot_SetSelectionState_Statics::NewProp_InSelectionState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBAssetSlot_SetSelectionState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMBAssetSlot_SetSelectionState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMBAssetSlot, nullptr, "SetSelectionState", nullptr, nullptr, Z_Construct_UFunction_UMBAssetSlot_SetSelectionState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMBAssetSlot_SetSelectionState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMBAssetSlot_SetSelectionState_Statics::MBAssetSlot_eventSetSelectionState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBAssetSlot_SetSelectionState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMBAssetSlot_SetSelectionState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMBAssetSlot_SetSelectionState_Statics::MBAssetSlot_eventSetSelectionState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMBAssetSlot_SetSelectionState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMBAssetSlot_SetSelectionState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMBAssetSlot::execSetSelectionState)
{
	P_GET_UBOOL(Z_Param_InSelectionState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSelectionState(Z_Param_InSelectionState);
	P_NATIVE_END;
}
// End Class UMBAssetSlot Function SetSelectionState

// Begin Class UMBAssetSlot
void UMBAssetSlot::StaticRegisterNativesUMBAssetSlot()
{
	UClass* Class = UMBAssetSlot::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AssetSelectionBtnPressed", &UMBAssetSlot::execAssetSelectionBtnPressed },
		{ "SetSelectionState", &UMBAssetSlot::execSetSelectionState },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMBAssetSlot);
UClass* Z_Construct_UClass_UMBAssetSlot_NoRegister()
{
	return UMBAssetSlot::StaticClass();
}
struct Z_Construct_UClass_UMBAssetSlot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/MBAssetSlot.h" },
		{ "ModuleRelativePath", "Public/UI/MBAssetSlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetSelectionBtn_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MBAssetSlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshNameText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MBAssetSlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MBAssetSlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/MBAssetSlot.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AssetSelectionBtn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshNameText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshImage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AssetPath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMBAssetSlot_AssetSelectionBtnPressed, "AssetSelectionBtnPressed" }, // 848145953
		{ &Z_Construct_UFunction_UMBAssetSlot_SetSelectionState, "SetSelectionState" }, // 3157918682
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMBAssetSlot>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMBAssetSlot_Statics::NewProp_AssetSelectionBtn = { "AssetSelectionBtn", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBAssetSlot, AssetSelectionBtn), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetSelectionBtn_MetaData), NewProp_AssetSelectionBtn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMBAssetSlot_Statics::NewProp_MeshNameText = { "MeshNameText", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBAssetSlot, MeshNameText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshNameText_MetaData), NewProp_MeshNameText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMBAssetSlot_Statics::NewProp_MeshImage = { "MeshImage", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBAssetSlot, MeshImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshImage_MetaData), NewProp_MeshImage_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMBAssetSlot_Statics::NewProp_AssetPath = { "AssetPath", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBAssetSlot, AssetPath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetPath_MetaData), NewProp_AssetPath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMBAssetSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBAssetSlot_Statics::NewProp_AssetSelectionBtn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBAssetSlot_Statics::NewProp_MeshNameText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBAssetSlot_Statics::NewProp_MeshImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBAssetSlot_Statics::NewProp_AssetPath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMBAssetSlot_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMBAssetSlot_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ModularBuilding,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMBAssetSlot_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMBAssetSlot_Statics::ClassParams = {
	&UMBAssetSlot::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMBAssetSlot_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMBAssetSlot_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMBAssetSlot_Statics::Class_MetaDataParams), Z_Construct_UClass_UMBAssetSlot_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMBAssetSlot()
{
	if (!Z_Registration_Info_UClass_UMBAssetSlot.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMBAssetSlot.OuterSingleton, Z_Construct_UClass_UMBAssetSlot_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMBAssetSlot.OuterSingleton;
}
template<> MODULARBUILDING_API UClass* StaticClass<UMBAssetSlot>()
{
	return UMBAssetSlot::StaticClass();
}
UMBAssetSlot::UMBAssetSlot(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMBAssetSlot);
UMBAssetSlot::~UMBAssetSlot() {}
// End Class UMBAssetSlot

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBAssetSlot_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMBAssetSlot, UMBAssetSlot::StaticClass, TEXT("UMBAssetSlot"), &Z_Registration_Info_UClass_UMBAssetSlot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMBAssetSlot), 334534253U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBAssetSlot_h_2785694691(TEXT("/Script/ModularBuilding"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBAssetSlot_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBAssetSlot_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
