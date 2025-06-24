// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LightingGame/Public/Tools/LTLightSensor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLTLightSensor() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_ALight_NoRegister();
LIGHTINGGAME_API UClass* Z_Construct_UClass_ALTLightSensor();
LIGHTINGGAME_API UClass* Z_Construct_UClass_ALTLightSensor_NoRegister();
LIGHTINGGAME_API UEnum* Z_Construct_UEnum_LightingGame_ELightSensorBehavior();
UPackage* Z_Construct_UPackage__Script_LightingGame();
// End Cross Module References

// Begin Enum ELightSensorBehavior
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELightSensorBehavior;
static UEnum* ELightSensorBehavior_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELightSensorBehavior.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELightSensorBehavior.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LightingGame_ELightSensorBehavior, (UObject*)Z_Construct_UPackage__Script_LightingGame(), TEXT("ELightSensorBehavior"));
	}
	return Z_Registration_Info_UEnum_ELightSensorBehavior.OuterSingleton;
}
template<> LIGHTINGGAME_API UEnum* StaticEnum<ELightSensorBehavior>()
{
	return ELightSensorBehavior_StaticEnum();
}
struct Z_Construct_UEnum_LightingGame_ELightSensorBehavior_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Lighting Tool" },
		{ "ModuleRelativePath", "Public/Tools/LTLightSensor.h" },
		{ "OnOff.DisplayName", "On & Off" },
		{ "OnOff.Name", "ELightSensorBehavior::OnOff" },
		{ "OnOff.ToolTip", "Turns of the light when the objective leaves the detection area" },
		{ "Permanent.DisplayName", "Permanent" },
		{ "Permanent.Name", "ELightSensorBehavior::Permanent" },
		{ "Permanent.ToolTip", "Permanently turns the light on" },
		{ "Timer.DisplayName", "Timer" },
		{ "Timer.Name", "ELightSensorBehavior::Timer" },
		{ "Timer.ToolTip", "Turns on the lights for the set time" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELightSensorBehavior::Permanent", (int64)ELightSensorBehavior::Permanent },
		{ "ELightSensorBehavior::OnOff", (int64)ELightSensorBehavior::OnOff },
		{ "ELightSensorBehavior::Timer", (int64)ELightSensorBehavior::Timer },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LightingGame_ELightSensorBehavior_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_LightingGame,
	nullptr,
	"ELightSensorBehavior",
	"ELightSensorBehavior",
	Z_Construct_UEnum_LightingGame_ELightSensorBehavior_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_LightingGame_ELightSensorBehavior_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_LightingGame_ELightSensorBehavior_Statics::Enum_MetaDataParams), Z_Construct_UEnum_LightingGame_ELightSensorBehavior_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_LightingGame_ELightSensorBehavior()
{
	if (!Z_Registration_Info_UEnum_ELightSensorBehavior.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELightSensorBehavior.InnerSingleton, Z_Construct_UEnum_LightingGame_ELightSensorBehavior_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELightSensorBehavior.InnerSingleton;
}
// End Enum ELightSensorBehavior

// Begin Class ALTLightSensor Function IsPlayerMoving
struct Z_Construct_UFunction_ALTLightSensor_IsPlayerMoving_Statics
{
	struct LTLightSensor_eventIsPlayerMoving_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LightingTool|Lightmap" },
		{ "ModuleRelativePath", "Public/Tools/LTLightSensor.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ALTLightSensor_IsPlayerMoving_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LTLightSensor_eventIsPlayerMoving_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALTLightSensor_IsPlayerMoving_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LTLightSensor_eventIsPlayerMoving_Parms), &Z_Construct_UFunction_ALTLightSensor_IsPlayerMoving_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALTLightSensor_IsPlayerMoving_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALTLightSensor_IsPlayerMoving_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALTLightSensor_IsPlayerMoving_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALTLightSensor_IsPlayerMoving_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALTLightSensor, nullptr, "IsPlayerMoving", nullptr, nullptr, Z_Construct_UFunction_ALTLightSensor_IsPlayerMoving_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALTLightSensor_IsPlayerMoving_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALTLightSensor_IsPlayerMoving_Statics::LTLightSensor_eventIsPlayerMoving_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALTLightSensor_IsPlayerMoving_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALTLightSensor_IsPlayerMoving_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALTLightSensor_IsPlayerMoving_Statics::LTLightSensor_eventIsPlayerMoving_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALTLightSensor_IsPlayerMoving()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALTLightSensor_IsPlayerMoving_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALTLightSensor::execIsPlayerMoving)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPlayerMoving();
	P_NATIVE_END;
}
// End Class ALTLightSensor Function IsPlayerMoving

// Begin Class ALTLightSensor Function IsTargetInFOV
struct Z_Construct_UFunction_ALTLightSensor_IsTargetInFOV_Statics
{
	struct LTLightSensor_eventIsTargetInFOV_Parms
	{
		FVector InTargetLocation;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Light Functions" },
		{ "ModuleRelativePath", "Public/Tools/LTLightSensor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InTargetLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InTargetLocation;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALTLightSensor_IsTargetInFOV_Statics::NewProp_InTargetLocation = { "InTargetLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LTLightSensor_eventIsTargetInFOV_Parms, InTargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InTargetLocation_MetaData), NewProp_InTargetLocation_MetaData) };
void Z_Construct_UFunction_ALTLightSensor_IsTargetInFOV_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LTLightSensor_eventIsTargetInFOV_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALTLightSensor_IsTargetInFOV_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LTLightSensor_eventIsTargetInFOV_Parms), &Z_Construct_UFunction_ALTLightSensor_IsTargetInFOV_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALTLightSensor_IsTargetInFOV_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALTLightSensor_IsTargetInFOV_Statics::NewProp_InTargetLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALTLightSensor_IsTargetInFOV_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALTLightSensor_IsTargetInFOV_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALTLightSensor_IsTargetInFOV_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALTLightSensor, nullptr, "IsTargetInFOV", nullptr, nullptr, Z_Construct_UFunction_ALTLightSensor_IsTargetInFOV_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALTLightSensor_IsTargetInFOV_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALTLightSensor_IsTargetInFOV_Statics::LTLightSensor_eventIsTargetInFOV_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C40401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALTLightSensor_IsTargetInFOV_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALTLightSensor_IsTargetInFOV_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALTLightSensor_IsTargetInFOV_Statics::LTLightSensor_eventIsTargetInFOV_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALTLightSensor_IsTargetInFOV()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALTLightSensor_IsTargetInFOV_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALTLightSensor::execIsTargetInFOV)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_InTargetLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsTargetInFOV(Z_Param_Out_InTargetLocation);
	P_NATIVE_END;
}
// End Class ALTLightSensor Function IsTargetInFOV

// Begin Class ALTLightSensor Function LightTick
static FName NAME_ALTLightSensor_LightTick = FName(TEXT("LightTick"));
void ALTLightSensor::LightTick()
{
	ProcessEvent(FindFunctionChecked(NAME_ALTLightSensor_LightTick),NULL);
}
struct Z_Construct_UFunction_ALTLightSensor_LightTick_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Light Functions" },
		{ "ModuleRelativePath", "Public/Tools/LTLightSensor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALTLightSensor_LightTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALTLightSensor, nullptr, "LightTick", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALTLightSensor_LightTick_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALTLightSensor_LightTick_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ALTLightSensor_LightTick()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALTLightSensor_LightTick_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ALTLightSensor Function LightTick

// Begin Class ALTLightSensor
void ALTLightSensor::StaticRegisterNativesALTLightSensor()
{
	UClass* Class = ALTLightSensor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "IsPlayerMoving", &ALTLightSensor::execIsPlayerMoving },
		{ "IsTargetInFOV", &ALTLightSensor::execIsTargetInFOV },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALTLightSensor);
UClass* Z_Construct_UClass_ALTLightSensor_NoRegister()
{
	return ALTLightSensor::StaticClass();
}
struct Z_Construct_UClass_ALTLightSensor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Tools/LTLightSensor.h" },
		{ "ModuleRelativePath", "Public/Tools/LTLightSensor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFollowPlayer_MetaData[] = {
		{ "Category", "Sensor Settings|Detection" },
		{ "DisplayName", "Follow Player" },
		{ "ModuleRelativePath", "Public/Tools/LTLightSensor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightsToControl_MetaData[] = {
		{ "Category", "Sensor Settings|Detection" },
		{ "ModuleRelativePath", "Public/Tools/LTLightSensor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SensorBehavior_MetaData[] = {
		{ "Category", "Sensor Settings|Behavior" },
		{ "ModuleRelativePath", "Public/Tools/LTLightSensor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightingTime_MetaData[] = {
		{ "Category", "Sensor Settings|Behavior" },
		{ "EditCondition", "SensorBehavior == ELightSensorBehavior::Timer" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Tools/LTLightSensor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MotionDetectionSensitivity_MetaData[] = {
		{ "Category", "Sensor Settings|Behavior" },
		{ "EditCondition", "SensorBehavior == ELightSensorBehavior::Timer" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Tools/LTLightSensor.h" },
		{ "ToolTip", "Minimum velocity required to detect motion" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[] = {
		{ "Category", "Sensor Settings|Sensor" },
		{ "ModuleRelativePath", "Public/Tools/LTLightSensor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngleWidth_MetaData[] = {
		{ "Category", "Sensor Settings|Sensor" },
		{ "ModuleRelativePath", "Public/Tools/LTLightSensor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CheckFrequency_MetaData[] = {
		{ "Category", "Sensor Settings|Optimization" },
		{ "ModuleRelativePath", "Public/Tools/LTLightSensor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanLightTick_MetaData[] = {
		{ "Category", "LightingTool|Sensor Settings" },
		{ "ModuleRelativePath", "Public/Tools/LTLightSensor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsDetected_MetaData[] = {
		{ "Category", "LightingTool|Sensor Settings" },
		{ "ModuleRelativePath", "Public/Tools/LTLightSensor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsLightsOn_MetaData[] = {
		{ "Category", "LightingTool|Sensor Settings" },
		{ "ModuleRelativePath", "Public/Tools/LTLightSensor.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bFollowPlayer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFollowPlayer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LightsToControl_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LightsToControl;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SensorBehavior_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SensorBehavior;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LightingTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MotionDetectionSensitivity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Height;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AngleWidth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CheckFrequency;
	static void NewProp_bCanLightTick_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanLightTick;
	static void NewProp_bIsDetected_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDetected;
	static void NewProp_bIsLightsOn_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLightsOn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ALTLightSensor_IsPlayerMoving, "IsPlayerMoving" }, // 3227320465
		{ &Z_Construct_UFunction_ALTLightSensor_IsTargetInFOV, "IsTargetInFOV" }, // 3618186638
		{ &Z_Construct_UFunction_ALTLightSensor_LightTick, "LightTick" }, // 3603174090
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALTLightSensor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_ALTLightSensor_Statics::NewProp_bFollowPlayer_SetBit(void* Obj)
{
	((ALTLightSensor*)Obj)->bFollowPlayer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALTLightSensor_Statics::NewProp_bFollowPlayer = { "bFollowPlayer", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALTLightSensor), &Z_Construct_UClass_ALTLightSensor_Statics::NewProp_bFollowPlayer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFollowPlayer_MetaData), NewProp_bFollowPlayer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALTLightSensor_Statics::NewProp_LightsToControl_Inner = { "LightsToControl", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ALight_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALTLightSensor_Statics::NewProp_LightsToControl = { "LightsToControl", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALTLightSensor, LightsToControl), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightsToControl_MetaData), NewProp_LightsToControl_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ALTLightSensor_Statics::NewProp_SensorBehavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ALTLightSensor_Statics::NewProp_SensorBehavior = { "SensorBehavior", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALTLightSensor, SensorBehavior), Z_Construct_UEnum_LightingGame_ELightSensorBehavior, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SensorBehavior_MetaData), NewProp_SensorBehavior_MetaData) }; // 2783462830
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALTLightSensor_Statics::NewProp_LightingTime = { "LightingTime", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALTLightSensor, LightingTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightingTime_MetaData), NewProp_LightingTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALTLightSensor_Statics::NewProp_MotionDetectionSensitivity = { "MotionDetectionSensitivity", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALTLightSensor, MotionDetectionSensitivity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MotionDetectionSensitivity_MetaData), NewProp_MotionDetectionSensitivity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALTLightSensor_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALTLightSensor, Height), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Height_MetaData), NewProp_Height_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALTLightSensor_Statics::NewProp_AngleWidth = { "AngleWidth", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALTLightSensor, AngleWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngleWidth_MetaData), NewProp_AngleWidth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALTLightSensor_Statics::NewProp_CheckFrequency = { "CheckFrequency", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALTLightSensor, CheckFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CheckFrequency_MetaData), NewProp_CheckFrequency_MetaData) };
void Z_Construct_UClass_ALTLightSensor_Statics::NewProp_bCanLightTick_SetBit(void* Obj)
{
	((ALTLightSensor*)Obj)->bCanLightTick = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALTLightSensor_Statics::NewProp_bCanLightTick = { "bCanLightTick", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALTLightSensor), &Z_Construct_UClass_ALTLightSensor_Statics::NewProp_bCanLightTick_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanLightTick_MetaData), NewProp_bCanLightTick_MetaData) };
void Z_Construct_UClass_ALTLightSensor_Statics::NewProp_bIsDetected_SetBit(void* Obj)
{
	((ALTLightSensor*)Obj)->bIsDetected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALTLightSensor_Statics::NewProp_bIsDetected = { "bIsDetected", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALTLightSensor), &Z_Construct_UClass_ALTLightSensor_Statics::NewProp_bIsDetected_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsDetected_MetaData), NewProp_bIsDetected_MetaData) };
void Z_Construct_UClass_ALTLightSensor_Statics::NewProp_bIsLightsOn_SetBit(void* Obj)
{
	((ALTLightSensor*)Obj)->bIsLightsOn = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALTLightSensor_Statics::NewProp_bIsLightsOn = { "bIsLightsOn", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALTLightSensor), &Z_Construct_UClass_ALTLightSensor_Statics::NewProp_bIsLightsOn_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsLightsOn_MetaData), NewProp_bIsLightsOn_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALTLightSensor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALTLightSensor_Statics::NewProp_bFollowPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALTLightSensor_Statics::NewProp_LightsToControl_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALTLightSensor_Statics::NewProp_LightsToControl,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALTLightSensor_Statics::NewProp_SensorBehavior_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALTLightSensor_Statics::NewProp_SensorBehavior,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALTLightSensor_Statics::NewProp_LightingTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALTLightSensor_Statics::NewProp_MotionDetectionSensitivity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALTLightSensor_Statics::NewProp_Height,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALTLightSensor_Statics::NewProp_AngleWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALTLightSensor_Statics::NewProp_CheckFrequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALTLightSensor_Statics::NewProp_bCanLightTick,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALTLightSensor_Statics::NewProp_bIsDetected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALTLightSensor_Statics::NewProp_bIsLightsOn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALTLightSensor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ALTLightSensor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_LightingGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALTLightSensor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALTLightSensor_Statics::ClassParams = {
	&ALTLightSensor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ALTLightSensor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ALTLightSensor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALTLightSensor_Statics::Class_MetaDataParams), Z_Construct_UClass_ALTLightSensor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALTLightSensor()
{
	if (!Z_Registration_Info_UClass_ALTLightSensor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALTLightSensor.OuterSingleton, Z_Construct_UClass_ALTLightSensor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALTLightSensor.OuterSingleton;
}
template<> LIGHTINGGAME_API UClass* StaticClass<ALTLightSensor>()
{
	return ALTLightSensor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALTLightSensor);
ALTLightSensor::~ALTLightSensor() {}
// End Class ALTLightSensor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingGame_Public_Tools_LTLightSensor_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ELightSensorBehavior_StaticEnum, TEXT("ELightSensorBehavior"), &Z_Registration_Info_UEnum_ELightSensorBehavior, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2783462830U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALTLightSensor, ALTLightSensor::StaticClass, TEXT("ALTLightSensor"), &Z_Registration_Info_UClass_ALTLightSensor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALTLightSensor), 482891194U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingGame_Public_Tools_LTLightSensor_h_3410849488(TEXT("/Script/LightingGame"),
	Z_CompiledInDeferFile_FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingGame_Public_Tools_LTLightSensor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingGame_Public_Tools_LTLightSensor_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingGame_Public_Tools_LTLightSensor_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Pullsar_Desktop_LightingToolOutputs_5_4_LightingTool_HostProject_Plugins_LightingTool_Source_LightingGame_Public_Tools_LTLightSensor_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
