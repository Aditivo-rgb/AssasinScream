// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LightingTool/Public/UI/LTUserPathPicker.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLTUserPathPicker() {}

// Begin Cross Module References
LIGHTINGTOOL_API UClass* Z_Construct_UClass_ULTUserPathPicker();
LIGHTINGTOOL_API UClass* Z_Construct_UClass_ULTUserPathPicker_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_LightingTool();
// End Cross Module References

// Begin Class ULTUserPathPicker Function CreateAFolderPicker
struct Z_Construct_UFunction_ULTUserPathPicker_CreateAFolderPicker_Statics
{
	struct LTUserPathPicker_eventCreateAFolderPicker_Parms
	{
		FName InTitle;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lighting Tool" },
		{ "ModuleRelativePath", "Public/UI/LTUserPathPicker.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InTitle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InTitle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULTUserPathPicker_CreateAFolderPicker_Statics::NewProp_InTitle = { "InTitle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LTUserPathPicker_eventCreateAFolderPicker_Parms, InTitle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InTitle_MetaData), NewProp_InTitle_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULTUserPathPicker_CreateAFolderPicker_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LTUserPathPicker_eventCreateAFolderPicker_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULTUserPathPicker_CreateAFolderPicker_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTUserPathPicker_CreateAFolderPicker_Statics::NewProp_InTitle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTUserPathPicker_CreateAFolderPicker_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTUserPathPicker_CreateAFolderPicker_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULTUserPathPicker_CreateAFolderPicker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULTUserPathPicker, nullptr, "CreateAFolderPicker", nullptr, nullptr, Z_Construct_UFunction_ULTUserPathPicker_CreateAFolderPicker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULTUserPathPicker_CreateAFolderPicker_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULTUserPathPicker_CreateAFolderPicker_Statics::LTUserPathPicker_eventCreateAFolderPicker_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTUserPathPicker_CreateAFolderPicker_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULTUserPathPicker_CreateAFolderPicker_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULTUserPathPicker_CreateAFolderPicker_Statics::LTUserPathPicker_eventCreateAFolderPicker_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULTUserPathPicker_CreateAFolderPicker()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULTUserPathPicker_CreateAFolderPicker_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULTUserPathPicker::execCreateAFolderPicker)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InTitle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=ULTUserPathPicker::CreateAFolderPicker(Z_Param_Out_InTitle);
	P_NATIVE_END;
}
// End Class ULTUserPathPicker Function CreateAFolderPicker

// Begin Class ULTUserPathPicker
void ULTUserPathPicker::StaticRegisterNativesULTUserPathPicker()
{
	UClass* Class = ULTUserPathPicker::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateAFolderPicker", &ULTUserPathPicker::execCreateAFolderPicker },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULTUserPathPicker);
UClass* Z_Construct_UClass_ULTUserPathPicker_NoRegister()
{
	return ULTUserPathPicker::StaticClass();
}
struct Z_Construct_UClass_ULTUserPathPicker_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/LTUserPathPicker.h" },
		{ "ModuleRelativePath", "Public/UI/LTUserPathPicker.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULTUserPathPicker_CreateAFolderPicker, "CreateAFolderPicker" }, // 816893571
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULTUserPathPicker>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULTUserPathPicker_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_LightingTool,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULTUserPathPicker_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULTUserPathPicker_Statics::ClassParams = {
	&ULTUserPathPicker::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULTUserPathPicker_Statics::Class_MetaDataParams), Z_Construct_UClass_ULTUserPathPicker_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULTUserPathPicker()
{
	if (!Z_Registration_Info_UClass_ULTUserPathPicker.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULTUserPathPicker.OuterSingleton, Z_Construct_UClass_ULTUserPathPicker_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULTUserPathPicker.OuterSingleton;
}
template<> LIGHTINGTOOL_API UClass* StaticClass<ULTUserPathPicker>()
{
	return ULTUserPathPicker::StaticClass();
}
ULTUserPathPicker::ULTUserPathPicker(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULTUserPathPicker);
ULTUserPathPicker::~ULTUserPathPicker() {}
// End Class ULTUserPathPicker

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_UI_LTUserPathPicker_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULTUserPathPicker, ULTUserPathPicker::StaticClass, TEXT("ULTUserPathPicker"), &Z_Registration_Info_UClass_ULTUserPathPicker, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULTUserPathPicker), 2229226018U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_UI_LTUserPathPicker_h_281119709(TEXT("/Script/LightingTool"),
	Z_CompiledInDeferFile_FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_UI_LTUserPathPicker_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_UI_LTUserPathPicker_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
