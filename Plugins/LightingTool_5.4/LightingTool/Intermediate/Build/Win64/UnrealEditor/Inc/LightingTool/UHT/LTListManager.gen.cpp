// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LightingTool/Public/UI/LTListManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLTListManager() {}

// Begin Cross Module References
LIGHTINGTOOL_API UClass* Z_Construct_UClass_ULTListManager();
LIGHTINGTOOL_API UClass* Z_Construct_UClass_ULTListManager_NoRegister();
LIGHTINGTOOL_API UFunction* Z_Construct_UDelegateFunction_LightingTool_OnItemSelected__DelegateSignature();
UMG_API UClass* Z_Construct_UClass_UWidget();
UPackage* Z_Construct_UPackage__Script_LightingTool();
// End Cross Module References

// Begin Delegate FOnItemSelected
struct Z_Construct_UDelegateFunction_LightingTool_OnItemSelected__DelegateSignature_Statics
{
	struct _Script_LightingTool_eventOnItemSelected_Parms
	{
		FName OutItemName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/LTListManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_OutItemName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_LightingTool_OnItemSelected__DelegateSignature_Statics::NewProp_OutItemName = { "OutItemName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LightingTool_eventOnItemSelected_Parms, OutItemName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LightingTool_OnItemSelected__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LightingTool_OnItemSelected__DelegateSignature_Statics::NewProp_OutItemName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LightingTool_OnItemSelected__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LightingTool_OnItemSelected__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LightingTool, nullptr, "OnItemSelected__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LightingTool_OnItemSelected__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LightingTool_OnItemSelected__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LightingTool_OnItemSelected__DelegateSignature_Statics::_Script_LightingTool_eventOnItemSelected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LightingTool_OnItemSelected__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LightingTool_OnItemSelected__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_LightingTool_OnItemSelected__DelegateSignature_Statics::_Script_LightingTool_eventOnItemSelected_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_LightingTool_OnItemSelected__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LightingTool_OnItemSelected__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnItemSelected_DelegateWrapper(const FMulticastScriptDelegate& OnItemSelected, FName OutItemName)
{
	struct _Script_LightingTool_eventOnItemSelected_Parms
	{
		FName OutItemName;
	};
	_Script_LightingTool_eventOnItemSelected_Parms Parms;
	Parms.OutItemName=OutItemName;
	OnItemSelected.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnItemSelected

// Begin Class ULTListManager Function ChangeSelectedItemName
struct Z_Construct_UFunction_ULTListManager_ChangeSelectedItemName_Statics
{
	struct LTListManager_eventChangeSelectedItemName_Parms
	{
		FName InItemName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lighting Tool" },
		{ "ModuleRelativePath", "Public/UI/LTListManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InItemName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InItemName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULTListManager_ChangeSelectedItemName_Statics::NewProp_InItemName = { "InItemName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LTListManager_eventChangeSelectedItemName_Parms, InItemName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InItemName_MetaData), NewProp_InItemName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULTListManager_ChangeSelectedItemName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTListManager_ChangeSelectedItemName_Statics::NewProp_InItemName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTListManager_ChangeSelectedItemName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULTListManager_ChangeSelectedItemName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULTListManager, nullptr, "ChangeSelectedItemName", nullptr, nullptr, Z_Construct_UFunction_ULTListManager_ChangeSelectedItemName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULTListManager_ChangeSelectedItemName_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULTListManager_ChangeSelectedItemName_Statics::LTListManager_eventChangeSelectedItemName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTListManager_ChangeSelectedItemName_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULTListManager_ChangeSelectedItemName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULTListManager_ChangeSelectedItemName_Statics::LTListManager_eventChangeSelectedItemName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULTListManager_ChangeSelectedItemName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULTListManager_ChangeSelectedItemName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULTListManager::execChangeSelectedItemName)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InItemName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ChangeSelectedItemName(Z_Param_Out_InItemName);
	P_NATIVE_END;
}
// End Class ULTListManager Function ChangeSelectedItemName

// Begin Class ULTListManager Function GetSelectedItemName
struct Z_Construct_UFunction_ULTListManager_GetSelectedItemName_Statics
{
	struct LTListManager_eventGetSelectedItemName_Parms
	{
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lighting Tool" },
		{ "ModuleRelativePath", "Public/UI/LTListManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULTListManager_GetSelectedItemName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LTListManager_eventGetSelectedItemName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULTListManager_GetSelectedItemName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTListManager_GetSelectedItemName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTListManager_GetSelectedItemName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULTListManager_GetSelectedItemName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULTListManager, nullptr, "GetSelectedItemName", nullptr, nullptr, Z_Construct_UFunction_ULTListManager_GetSelectedItemName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULTListManager_GetSelectedItemName_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULTListManager_GetSelectedItemName_Statics::LTListManager_eventGetSelectedItemName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTListManager_GetSelectedItemName_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULTListManager_GetSelectedItemName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULTListManager_GetSelectedItemName_Statics::LTListManager_eventGetSelectedItemName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULTListManager_GetSelectedItemName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULTListManager_GetSelectedItemName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULTListManager::execGetSelectedItemName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=P_THIS->GetSelectedItemName();
	P_NATIVE_END;
}
// End Class ULTListManager Function GetSelectedItemName

// Begin Class ULTListManager Function ReGenerateItemList
struct Z_Construct_UFunction_ULTListManager_ReGenerateItemList_Statics
{
	struct LTListManager_eventReGenerateItemList_Parms
	{
		TArray<FName> InItemList;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lighting Tool" },
		{ "ModuleRelativePath", "Public/UI/LTListManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InItemList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InItemList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InItemList;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULTListManager_ReGenerateItemList_Statics::NewProp_InItemList_Inner = { "InItemList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULTListManager_ReGenerateItemList_Statics::NewProp_InItemList = { "InItemList", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LTListManager_eventReGenerateItemList_Parms, InItemList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InItemList_MetaData), NewProp_InItemList_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULTListManager_ReGenerateItemList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTListManager_ReGenerateItemList_Statics::NewProp_InItemList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTListManager_ReGenerateItemList_Statics::NewProp_InItemList,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTListManager_ReGenerateItemList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULTListManager_ReGenerateItemList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULTListManager, nullptr, "ReGenerateItemList", nullptr, nullptr, Z_Construct_UFunction_ULTListManager_ReGenerateItemList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULTListManager_ReGenerateItemList_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULTListManager_ReGenerateItemList_Statics::LTListManager_eventReGenerateItemList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTListManager_ReGenerateItemList_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULTListManager_ReGenerateItemList_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULTListManager_ReGenerateItemList_Statics::LTListManager_eventReGenerateItemList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULTListManager_ReGenerateItemList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULTListManager_ReGenerateItemList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULTListManager::execReGenerateItemList)
{
	P_GET_TARRAY_REF(FName,Z_Param_Out_InItemList);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReGenerateItemList(Z_Param_Out_InItemList);
	P_NATIVE_END;
}
// End Class ULTListManager Function ReGenerateItemList

// Begin Class ULTListManager Function SwitchToNextItem
struct Z_Construct_UFunction_ULTListManager_SwitchToNextItem_Statics
{
	struct LTListManager_eventSwitchToNextItem_Parms
	{
		bool bSwitchToNext;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lighting Tool" },
		{ "ModuleRelativePath", "Public/UI/LTListManager.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bSwitchToNext_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSwitchToNext;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ULTListManager_SwitchToNextItem_Statics::NewProp_bSwitchToNext_SetBit(void* Obj)
{
	((LTListManager_eventSwitchToNextItem_Parms*)Obj)->bSwitchToNext = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULTListManager_SwitchToNextItem_Statics::NewProp_bSwitchToNext = { "bSwitchToNext", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LTListManager_eventSwitchToNextItem_Parms), &Z_Construct_UFunction_ULTListManager_SwitchToNextItem_Statics::NewProp_bSwitchToNext_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULTListManager_SwitchToNextItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTListManager_SwitchToNextItem_Statics::NewProp_bSwitchToNext,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTListManager_SwitchToNextItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULTListManager_SwitchToNextItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULTListManager, nullptr, "SwitchToNextItem", nullptr, nullptr, Z_Construct_UFunction_ULTListManager_SwitchToNextItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULTListManager_SwitchToNextItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULTListManager_SwitchToNextItem_Statics::LTListManager_eventSwitchToNextItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTListManager_SwitchToNextItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULTListManager_SwitchToNextItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULTListManager_SwitchToNextItem_Statics::LTListManager_eventSwitchToNextItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULTListManager_SwitchToNextItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULTListManager_SwitchToNextItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULTListManager::execSwitchToNextItem)
{
	P_GET_UBOOL(Z_Param_bSwitchToNext);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SwitchToNextItem(Z_Param_bSwitchToNext);
	P_NATIVE_END;
}
// End Class ULTListManager Function SwitchToNextItem

// Begin Class ULTListManager
void ULTListManager::StaticRegisterNativesULTListManager()
{
	UClass* Class = ULTListManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ChangeSelectedItemName", &ULTListManager::execChangeSelectedItemName },
		{ "GetSelectedItemName", &ULTListManager::execGetSelectedItemName },
		{ "ReGenerateItemList", &ULTListManager::execReGenerateItemList },
		{ "SwitchToNextItem", &ULTListManager::execSwitchToNextItem },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULTListManager);
UClass* Z_Construct_UClass_ULTListManager_NoRegister()
{
	return ULTListManager::StaticClass();
}
struct Z_Construct_UClass_ULTListManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/LTListManager.h" },
		{ "ModuleRelativePath", "Public/UI/LTListManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnItemSelected_MetaData[] = {
		{ "Category", "Lighting Tool" },
		{ "ModuleRelativePath", "Public/UI/LTListManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnItemSelected;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULTListManager_ChangeSelectedItemName, "ChangeSelectedItemName" }, // 1928256401
		{ &Z_Construct_UFunction_ULTListManager_GetSelectedItemName, "GetSelectedItemName" }, // 1317107590
		{ &Z_Construct_UFunction_ULTListManager_ReGenerateItemList, "ReGenerateItemList" }, // 301390202
		{ &Z_Construct_UFunction_ULTListManager_SwitchToNextItem, "SwitchToNextItem" }, // 1419133704
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULTListManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULTListManager_Statics::NewProp_OnItemSelected = { "OnItemSelected", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULTListManager, OnItemSelected), Z_Construct_UDelegateFunction_LightingTool_OnItemSelected__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnItemSelected_MetaData), NewProp_OnItemSelected_MetaData) }; // 310023709
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULTListManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULTListManager_Statics::NewProp_OnItemSelected,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULTListManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULTListManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_LightingTool,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULTListManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULTListManager_Statics::ClassParams = {
	&ULTListManager::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULTListManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULTListManager_Statics::PropPointers),
	0,
	0x00B000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULTListManager_Statics::Class_MetaDataParams), Z_Construct_UClass_ULTListManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULTListManager()
{
	if (!Z_Registration_Info_UClass_ULTListManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULTListManager.OuterSingleton, Z_Construct_UClass_ULTListManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULTListManager.OuterSingleton;
}
template<> LIGHTINGTOOL_API UClass* StaticClass<ULTListManager>()
{
	return ULTListManager::StaticClass();
}
ULTListManager::ULTListManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULTListManager);
ULTListManager::~ULTListManager() {}
// End Class ULTListManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_UI_LTListManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULTListManager, ULTListManager::StaticClass, TEXT("ULTListManager"), &Z_Registration_Info_UClass_ULTListManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULTListManager), 4134405845U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_UI_LTListManager_h_3260420345(TEXT("/Script/LightingTool"),
	Z_CompiledInDeferFile_FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_UI_LTListManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_UI_LTListManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
