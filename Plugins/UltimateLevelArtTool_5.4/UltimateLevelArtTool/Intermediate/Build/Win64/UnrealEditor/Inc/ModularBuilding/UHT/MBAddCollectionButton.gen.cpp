// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularBuilding/Public/UI/MBAddCollectionButton.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMBAddCollectionButton() {}

// Begin Cross Module References
MODULARBUILDING_API UClass* Z_Construct_UClass_UMBAddCollectionButton();
MODULARBUILDING_API UClass* Z_Construct_UClass_UMBAddCollectionButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_ModularBuilding();
// End Cross Module References

// Begin Class UMBAddCollectionButton Function AddCollectionBtnPressed
struct Z_Construct_UFunction_UMBAddCollectionButton_AddCollectionBtnPressed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/MBAddCollectionButton.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMBAddCollectionButton_AddCollectionBtnPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMBAddCollectionButton, nullptr, "AddCollectionBtnPressed", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBAddCollectionButton_AddCollectionBtnPressed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMBAddCollectionButton_AddCollectionBtnPressed_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMBAddCollectionButton_AddCollectionBtnPressed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMBAddCollectionButton_AddCollectionBtnPressed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMBAddCollectionButton::execAddCollectionBtnPressed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddCollectionBtnPressed();
	P_NATIVE_END;
}
// End Class UMBAddCollectionButton Function AddCollectionBtnPressed

// Begin Class UMBAddCollectionButton
void UMBAddCollectionButton::StaticRegisterNativesUMBAddCollectionButton()
{
	UClass* Class = UMBAddCollectionButton::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddCollectionBtnPressed", &UMBAddCollectionButton::execAddCollectionBtnPressed },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMBAddCollectionButton);
UClass* Z_Construct_UClass_UMBAddCollectionButton_NoRegister()
{
	return UMBAddCollectionButton::StaticClass();
}
struct Z_Construct_UClass_UMBAddCollectionButton_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/MBAddCollectionButton.h" },
		{ "ModuleRelativePath", "Public/UI/MBAddCollectionButton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AddCollectionBtn_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MBAddCollectionButton.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AddCollectionBtn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMBAddCollectionButton_AddCollectionBtnPressed, "AddCollectionBtnPressed" }, // 3443202232
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMBAddCollectionButton>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMBAddCollectionButton_Statics::NewProp_AddCollectionBtn = { "AddCollectionBtn", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBAddCollectionButton, AddCollectionBtn), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AddCollectionBtn_MetaData), NewProp_AddCollectionBtn_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMBAddCollectionButton_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBAddCollectionButton_Statics::NewProp_AddCollectionBtn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMBAddCollectionButton_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMBAddCollectionButton_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ModularBuilding,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMBAddCollectionButton_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMBAddCollectionButton_Statics::ClassParams = {
	&UMBAddCollectionButton::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMBAddCollectionButton_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMBAddCollectionButton_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMBAddCollectionButton_Statics::Class_MetaDataParams), Z_Construct_UClass_UMBAddCollectionButton_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMBAddCollectionButton()
{
	if (!Z_Registration_Info_UClass_UMBAddCollectionButton.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMBAddCollectionButton.OuterSingleton, Z_Construct_UClass_UMBAddCollectionButton_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMBAddCollectionButton.OuterSingleton;
}
template<> MODULARBUILDING_API UClass* StaticClass<UMBAddCollectionButton>()
{
	return UMBAddCollectionButton::StaticClass();
}
UMBAddCollectionButton::UMBAddCollectionButton(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMBAddCollectionButton);
UMBAddCollectionButton::~UMBAddCollectionButton() {}
// End Class UMBAddCollectionButton

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBAddCollectionButton_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMBAddCollectionButton, UMBAddCollectionButton::StaticClass, TEXT("UMBAddCollectionButton"), &Z_Registration_Info_UClass_UMBAddCollectionButton, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMBAddCollectionButton), 2894504824U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBAddCollectionButton_h_553526718(TEXT("/Script/ModularBuilding"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBAddCollectionButton_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBAddCollectionButton_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
