// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularBuilding/Public/UI/MBMaterialAssignmentSlot.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMBMaterialAssignmentSlot() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
MODULARBUILDING_API UClass* Z_Construct_UClass_UMBMaterialAssignmentSlot();
MODULARBUILDING_API UClass* Z_Construct_UClass_UMBMaterialAssignmentSlot_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_ModularBuilding();
// End Cross Module References

// Begin Class UMBMaterialAssignmentSlot Function MaterialSelectionBtnPressed
struct Z_Construct_UFunction_UMBMaterialAssignmentSlot_MaterialSelectionBtnPressed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/MBMaterialAssignmentSlot.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMBMaterialAssignmentSlot_MaterialSelectionBtnPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMBMaterialAssignmentSlot, nullptr, "MaterialSelectionBtnPressed", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMBMaterialAssignmentSlot_MaterialSelectionBtnPressed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMBMaterialAssignmentSlot_MaterialSelectionBtnPressed_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMBMaterialAssignmentSlot_MaterialSelectionBtnPressed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMBMaterialAssignmentSlot_MaterialSelectionBtnPressed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMBMaterialAssignmentSlot::execMaterialSelectionBtnPressed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MaterialSelectionBtnPressed();
	P_NATIVE_END;
}
// End Class UMBMaterialAssignmentSlot Function MaterialSelectionBtnPressed

// Begin Class UMBMaterialAssignmentSlot
void UMBMaterialAssignmentSlot::StaticRegisterNativesUMBMaterialAssignmentSlot()
{
	UClass* Class = UMBMaterialAssignmentSlot::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "MaterialSelectionBtnPressed", &UMBMaterialAssignmentSlot::execMaterialSelectionBtnPressed },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMBMaterialAssignmentSlot);
UClass* Z_Construct_UClass_UMBMaterialAssignmentSlot_NoRegister()
{
	return UMBMaterialAssignmentSlot::StaticClass();
}
struct Z_Construct_UClass_UMBMaterialAssignmentSlot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/MBMaterialAssignmentSlot.h" },
		{ "ModuleRelativePath", "Public/UI/MBMaterialAssignmentSlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialInterface_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/MBMaterialAssignmentSlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialSelectionBtn_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MBMaterialAssignmentSlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MBMaterialAssignmentSlot.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialInterface;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialSelectionBtn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialImage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMBMaterialAssignmentSlot_MaterialSelectionBtnPressed, "MaterialSelectionBtnPressed" }, // 4088500566
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMBMaterialAssignmentSlot>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMBMaterialAssignmentSlot_Statics::NewProp_MaterialInterface = { "MaterialInterface", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBMaterialAssignmentSlot, MaterialInterface), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialInterface_MetaData), NewProp_MaterialInterface_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMBMaterialAssignmentSlot_Statics::NewProp_MaterialSelectionBtn = { "MaterialSelectionBtn", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBMaterialAssignmentSlot, MaterialSelectionBtn), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialSelectionBtn_MetaData), NewProp_MaterialSelectionBtn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMBMaterialAssignmentSlot_Statics::NewProp_MaterialImage = { "MaterialImage", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMBMaterialAssignmentSlot, MaterialImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialImage_MetaData), NewProp_MaterialImage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMBMaterialAssignmentSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBMaterialAssignmentSlot_Statics::NewProp_MaterialInterface,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBMaterialAssignmentSlot_Statics::NewProp_MaterialSelectionBtn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMBMaterialAssignmentSlot_Statics::NewProp_MaterialImage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMBMaterialAssignmentSlot_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMBMaterialAssignmentSlot_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ModularBuilding,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMBMaterialAssignmentSlot_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMBMaterialAssignmentSlot_Statics::ClassParams = {
	&UMBMaterialAssignmentSlot::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMBMaterialAssignmentSlot_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMBMaterialAssignmentSlot_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMBMaterialAssignmentSlot_Statics::Class_MetaDataParams), Z_Construct_UClass_UMBMaterialAssignmentSlot_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMBMaterialAssignmentSlot()
{
	if (!Z_Registration_Info_UClass_UMBMaterialAssignmentSlot.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMBMaterialAssignmentSlot.OuterSingleton, Z_Construct_UClass_UMBMaterialAssignmentSlot_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMBMaterialAssignmentSlot.OuterSingleton;
}
template<> MODULARBUILDING_API UClass* StaticClass<UMBMaterialAssignmentSlot>()
{
	return UMBMaterialAssignmentSlot::StaticClass();
}
UMBMaterialAssignmentSlot::UMBMaterialAssignmentSlot(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMBMaterialAssignmentSlot);
UMBMaterialAssignmentSlot::~UMBMaterialAssignmentSlot() {}
// End Class UMBMaterialAssignmentSlot

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBMaterialAssignmentSlot_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMBMaterialAssignmentSlot, UMBMaterialAssignmentSlot::StaticClass, TEXT("UMBMaterialAssignmentSlot"), &Z_Registration_Info_UClass_UMBMaterialAssignmentSlot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMBMaterialAssignmentSlot), 3652517091U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBMaterialAssignmentSlot_h_2249124995(TEXT("/Script/ModularBuilding"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBMaterialAssignmentSlot_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_UI_MBMaterialAssignmentSlot_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
