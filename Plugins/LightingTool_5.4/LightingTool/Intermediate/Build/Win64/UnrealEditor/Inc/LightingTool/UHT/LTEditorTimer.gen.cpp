// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LightingTool/Public/Data/LTEditorTimer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLTEditorTimer() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
LIGHTINGTOOL_API UClass* Z_Construct_UClass_ULTEditorTimer();
LIGHTINGTOOL_API UClass* Z_Construct_UClass_ULTEditorTimer_NoRegister();
LIGHTINGTOOL_API UFunction* Z_Construct_UDelegateFunction_LightingTool_LTEditorTimerFinishSignature__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_LightingTool();
// End Cross Module References

// Begin Delegate FLTEditorTimerFinishSignature
struct Z_Construct_UDelegateFunction_LightingTool_LTEditorTimerFinishSignature__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Data/LTEditorTimer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LightingTool_LTEditorTimerFinishSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LightingTool, nullptr, "LTEditorTimerFinishSignature__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LightingTool_LTEditorTimerFinishSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LightingTool_LTEditorTimerFinishSignature__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_LightingTool_LTEditorTimerFinishSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LightingTool_LTEditorTimerFinishSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FLTEditorTimerFinishSignature_DelegateWrapper(const FMulticastScriptDelegate& LTEditorTimerFinishSignature)
{
	LTEditorTimerFinishSignature.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FLTEditorTimerFinishSignature

// Begin Class ULTEditorTimer Function StartTimer
struct Z_Construct_UFunction_ULTEditorTimer_StartTimer_Statics
{
	struct LTEditorTimer_eventStartTimer_Parms
	{
		float InTime;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lighting Tool" },
		{ "ModuleRelativePath", "Public/Data/LTEditorTimer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InTime;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULTEditorTimer_StartTimer_Statics::NewProp_InTime = { "InTime", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LTEditorTimer_eventStartTimer_Parms, InTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InTime_MetaData), NewProp_InTime_MetaData) };
void Z_Construct_UFunction_ULTEditorTimer_StartTimer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LTEditorTimer_eventStartTimer_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULTEditorTimer_StartTimer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LTEditorTimer_eventStartTimer_Parms), &Z_Construct_UFunction_ULTEditorTimer_StartTimer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULTEditorTimer_StartTimer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTEditorTimer_StartTimer_Statics::NewProp_InTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULTEditorTimer_StartTimer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTEditorTimer_StartTimer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULTEditorTimer_StartTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULTEditorTimer, nullptr, "StartTimer", nullptr, nullptr, Z_Construct_UFunction_ULTEditorTimer_StartTimer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULTEditorTimer_StartTimer_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULTEditorTimer_StartTimer_Statics::LTEditorTimer_eventStartTimer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTEditorTimer_StartTimer_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULTEditorTimer_StartTimer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULTEditorTimer_StartTimer_Statics::LTEditorTimer_eventStartTimer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULTEditorTimer_StartTimer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULTEditorTimer_StartTimer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULTEditorTimer::execStartTimer)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->StartTimer(Z_Param_InTime);
	P_NATIVE_END;
}
// End Class ULTEditorTimer Function StartTimer

// Begin Class ULTEditorTimer Function StopTimer
struct Z_Construct_UFunction_ULTEditorTimer_StopTimer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lighting Tool" },
		{ "ModuleRelativePath", "Public/Data/LTEditorTimer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULTEditorTimer_StopTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULTEditorTimer, nullptr, "StopTimer", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULTEditorTimer_StopTimer_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULTEditorTimer_StopTimer_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ULTEditorTimer_StopTimer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULTEditorTimer_StopTimer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULTEditorTimer::execStopTimer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopTimer();
	P_NATIVE_END;
}
// End Class ULTEditorTimer Function StopTimer

// Begin Class ULTEditorTimer
void ULTEditorTimer::StaticRegisterNativesULTEditorTimer()
{
	UClass* Class = ULTEditorTimer::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "StartTimer", &ULTEditorTimer::execStartTimer },
		{ "StopTimer", &ULTEditorTimer::execStopTimer },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULTEditorTimer);
UClass* Z_Construct_UClass_ULTEditorTimer_NoRegister()
{
	return ULTEditorTimer::StaticClass();
}
struct Z_Construct_UClass_ULTEditorTimer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Editor Timer" },
		{ "IncludePath", "Data/LTEditorTimer.h" },
		{ "ModuleRelativePath", "Public/Data/LTEditorTimer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnEditorTimerFinished_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/LTEditorTimer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEditorTimerFinished;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULTEditorTimer_StartTimer, "StartTimer" }, // 954713590
		{ &Z_Construct_UFunction_ULTEditorTimer_StopTimer, "StopTimer" }, // 2177704880
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULTEditorTimer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULTEditorTimer_Statics::NewProp_OnEditorTimerFinished = { "OnEditorTimerFinished", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULTEditorTimer, OnEditorTimerFinished), Z_Construct_UDelegateFunction_LightingTool_LTEditorTimerFinishSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnEditorTimerFinished_MetaData), NewProp_OnEditorTimerFinished_MetaData) }; // 1294150998
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULTEditorTimer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULTEditorTimer_Statics::NewProp_OnEditorTimerFinished,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULTEditorTimer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULTEditorTimer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_LightingTool,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULTEditorTimer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULTEditorTimer_Statics::ClassParams = {
	&ULTEditorTimer::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULTEditorTimer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULTEditorTimer_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULTEditorTimer_Statics::Class_MetaDataParams), Z_Construct_UClass_ULTEditorTimer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULTEditorTimer()
{
	if (!Z_Registration_Info_UClass_ULTEditorTimer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULTEditorTimer.OuterSingleton, Z_Construct_UClass_ULTEditorTimer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULTEditorTimer.OuterSingleton;
}
template<> LIGHTINGTOOL_API UClass* StaticClass<ULTEditorTimer>()
{
	return ULTEditorTimer::StaticClass();
}
ULTEditorTimer::ULTEditorTimer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULTEditorTimer);
ULTEditorTimer::~ULTEditorTimer() {}
// End Class ULTEditorTimer

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_Data_LTEditorTimer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULTEditorTimer, ULTEditorTimer::StaticClass, TEXT("ULTEditorTimer"), &Z_Registration_Info_UClass_ULTEditorTimer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULTEditorTimer), 34308871U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_Data_LTEditorTimer_h_4132311768(TEXT("/Script/LightingTool"),
	Z_CompiledInDeferFile_FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_Data_LTEditorTimer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingTool_Public_Data_LTEditorTimer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
