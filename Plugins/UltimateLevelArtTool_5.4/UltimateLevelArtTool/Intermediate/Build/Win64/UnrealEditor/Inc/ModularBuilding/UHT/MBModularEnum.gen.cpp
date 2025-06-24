// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularBuilding/Public/Data/MBModularEnum.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMBModularEnum() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
MODULARBUILDING_API UEnum* Z_Construct_UEnum_ModularBuilding_EBuildingCategory();
MODULARBUILDING_API UEnum* Z_Construct_UEnum_ModularBuilding_EMBAxis();
MODULARBUILDING_API UEnum* Z_Construct_UEnum_ModularBuilding_EMBDistributionType();
MODULARBUILDING_API UEnum* Z_Construct_UEnum_ModularBuilding_EMBMeshConversionType();
MODULARBUILDING_API UEnum* Z_Construct_UEnum_ModularBuilding_EMBModularSnapType();
MODULARBUILDING_API UEnum* Z_Construct_UEnum_ModularBuilding_EMBPropOrientation();
MODULARBUILDING_API UEnum* Z_Construct_UEnum_ModularBuilding_EMBWorkingMode();
MODULARBUILDING_API UEnum* Z_Construct_UEnum_ModularBuilding_EModularDirection();
MODULARBUILDING_API UEnum* Z_Construct_UEnum_ModularBuilding_EPlacementMode();
MODULARBUILDING_API UEnum* Z_Construct_UEnum_ModularBuilding_EPlacementStatus();
MODULARBUILDING_API UEnum* Z_Construct_UEnum_ModularBuilding_EPlacementType();
MODULARBUILDING_API UEnum* Z_Construct_UEnum_ModularBuilding_ESettingsMenuType();
MODULARBUILDING_API UScriptStruct* Z_Construct_UScriptStruct_FDistributionBaseData();
UPackage* Z_Construct_UPackage__Script_ModularBuilding();
// End Cross Module References

// Begin Enum EBuildingCategory
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBuildingCategory;
static UEnum* EBuildingCategory_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBuildingCategory.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBuildingCategory.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ModularBuilding_EBuildingCategory, (UObject*)Z_Construct_UPackage__Script_ModularBuilding(), TEXT("EBuildingCategory"));
	}
	return Z_Registration_Info_UEnum_EBuildingCategory.OuterSingleton;
}
template<> MODULARBUILDING_API UEnum* StaticEnum<EBuildingCategory>()
{
	return EBuildingCategory_StaticEnum();
}
struct Z_Construct_UEnum_ModularBuilding_EBuildingCategory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Modular Building Tool" },
		{ "Modular.DisplayName", "Modular" },
		{ "Modular.Name", "EBuildingCategory::Modular" },
		{ "ModuleRelativePath", "Public/Data/MBModularEnum.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EBuildingCategory::None" },
		{ "Prop.DisplayName", "Prop" },
		{ "Prop.Name", "EBuildingCategory::Prop" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EBuildingCategory::None", (int64)EBuildingCategory::None },
		{ "EBuildingCategory::Modular", (int64)EBuildingCategory::Modular },
		{ "EBuildingCategory::Prop", (int64)EBuildingCategory::Prop },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ModularBuilding_EBuildingCategory_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ModularBuilding,
	nullptr,
	"EBuildingCategory",
	"EBuildingCategory",
	Z_Construct_UEnum_ModularBuilding_EBuildingCategory_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ModularBuilding_EBuildingCategory_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ModularBuilding_EBuildingCategory_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ModularBuilding_EBuildingCategory_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ModularBuilding_EBuildingCategory()
{
	if (!Z_Registration_Info_UEnum_EBuildingCategory.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBuildingCategory.InnerSingleton, Z_Construct_UEnum_ModularBuilding_EBuildingCategory_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBuildingCategory.InnerSingleton;
}
// End Enum EBuildingCategory

// Begin Enum EPlacementMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPlacementMode;
static UEnum* EPlacementMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPlacementMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPlacementMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ModularBuilding_EPlacementMode, (UObject*)Z_Construct_UPackage__Script_ModularBuilding(), TEXT("EPlacementMode"));
	}
	return Z_Registration_Info_UEnum_EPlacementMode.OuterSingleton;
}
template<> MODULARBUILDING_API UEnum* StaticEnum<EPlacementMode>()
{
	return EPlacementMode_StaticEnum();
}
struct Z_Construct_UEnum_ModularBuilding_EPlacementMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Modular Building Tool" },
		{ "ModuleRelativePath", "Public/Data/MBModularEnum.h" },
		{ "MultiModular.DisplayName", "MultiModular" },
		{ "MultiModular.Name", "EPlacementMode::MultiModular" },
		{ "MultiProp.DisplayName", "Right" },
		{ "MultiProp.Name", "EPlacementMode::MultiProp" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EPlacementMode::None" },
		{ "SingleModular.DisplayName", "SingleModular" },
		{ "SingleModular.Name", "EPlacementMode::SingleModular" },
		{ "SingleProp.DisplayName", "Left" },
		{ "SingleProp.Name", "EPlacementMode::SingleProp" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPlacementMode::None", (int64)EPlacementMode::None },
		{ "EPlacementMode::SingleModular", (int64)EPlacementMode::SingleModular },
		{ "EPlacementMode::MultiModular", (int64)EPlacementMode::MultiModular },
		{ "EPlacementMode::SingleProp", (int64)EPlacementMode::SingleProp },
		{ "EPlacementMode::MultiProp", (int64)EPlacementMode::MultiProp },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ModularBuilding_EPlacementMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ModularBuilding,
	nullptr,
	"EPlacementMode",
	"EPlacementMode",
	Z_Construct_UEnum_ModularBuilding_EPlacementMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ModularBuilding_EPlacementMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ModularBuilding_EPlacementMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ModularBuilding_EPlacementMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ModularBuilding_EPlacementMode()
{
	if (!Z_Registration_Info_UEnum_EPlacementMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPlacementMode.InnerSingleton, Z_Construct_UEnum_ModularBuilding_EPlacementMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPlacementMode.InnerSingleton;
}
// End Enum EPlacementMode

// Begin Enum EPlacementType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPlacementType;
static UEnum* EPlacementType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPlacementType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPlacementType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ModularBuilding_EPlacementType, (UObject*)Z_Construct_UPackage__Script_ModularBuilding(), TEXT("EPlacementType"));
	}
	return Z_Registration_Info_UEnum_EPlacementType.OuterSingleton;
}
template<> MODULARBUILDING_API UEnum* StaticEnum<EPlacementType>()
{
	return EPlacementType_StaticEnum();
}
struct Z_Construct_UEnum_ModularBuilding_EPlacementType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Modular Building Tool" },
		{ "ModuleRelativePath", "Public/Data/MBModularEnum.h" },
		{ "Multiple.DisplayName", "Multiple" },
		{ "Multiple.Name", "EPlacementType::Multiple" },
		{ "Single.DisplayName", "Single" },
		{ "Single.Name", "EPlacementType::Single" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPlacementType::Single", (int64)EPlacementType::Single },
		{ "EPlacementType::Multiple", (int64)EPlacementType::Multiple },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ModularBuilding_EPlacementType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ModularBuilding,
	nullptr,
	"EPlacementType",
	"EPlacementType",
	Z_Construct_UEnum_ModularBuilding_EPlacementType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ModularBuilding_EPlacementType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ModularBuilding_EPlacementType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ModularBuilding_EPlacementType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ModularBuilding_EPlacementType()
{
	if (!Z_Registration_Info_UEnum_EPlacementType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPlacementType.InnerSingleton, Z_Construct_UEnum_ModularBuilding_EPlacementType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPlacementType.InnerSingleton;
}
// End Enum EPlacementType

// Begin Enum EMBWorkingMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMBWorkingMode;
static UEnum* EMBWorkingMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMBWorkingMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMBWorkingMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ModularBuilding_EMBWorkingMode, (UObject*)Z_Construct_UPackage__Script_ModularBuilding(), TEXT("EMBWorkingMode"));
	}
	return Z_Registration_Info_UEnum_EMBWorkingMode.OuterSingleton;
}
template<> MODULARBUILDING_API UEnum* StaticEnum<EMBWorkingMode>()
{
	return EMBWorkingMode_StaticEnum();
}
struct Z_Construct_UEnum_ModularBuilding_EMBWorkingMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Modular Building Tool" },
		{ "ModActorAction.DisplayName", "ModActorAction" },
		{ "ModActorAction.Name", "EMBWorkingMode::ModActorAction" },
		{ "ModuleRelativePath", "Public/Data/MBModularEnum.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EMBWorkingMode::None" },
		{ "Placement.DisplayName", "Placement" },
		{ "Placement.Name", "EMBWorkingMode::Placement" },
		{ "PropActorAction.DisplayName", "PropActorAction" },
		{ "PropActorAction.Name", "EMBWorkingMode::PropActorAction" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMBWorkingMode::None", (int64)EMBWorkingMode::None },
		{ "EMBWorkingMode::Placement", (int64)EMBWorkingMode::Placement },
		{ "EMBWorkingMode::ModActorAction", (int64)EMBWorkingMode::ModActorAction },
		{ "EMBWorkingMode::PropActorAction", (int64)EMBWorkingMode::PropActorAction },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ModularBuilding_EMBWorkingMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ModularBuilding,
	nullptr,
	"EMBWorkingMode",
	"EMBWorkingMode",
	Z_Construct_UEnum_ModularBuilding_EMBWorkingMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ModularBuilding_EMBWorkingMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ModularBuilding_EMBWorkingMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ModularBuilding_EMBWorkingMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ModularBuilding_EMBWorkingMode()
{
	if (!Z_Registration_Info_UEnum_EMBWorkingMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMBWorkingMode.InnerSingleton, Z_Construct_UEnum_ModularBuilding_EMBWorkingMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMBWorkingMode.InnerSingleton;
}
// End Enum EMBWorkingMode

// Begin Enum EPlacementStatus
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPlacementStatus;
static UEnum* EPlacementStatus_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPlacementStatus.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPlacementStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ModularBuilding_EPlacementStatus, (UObject*)Z_Construct_UPackage__Script_ModularBuilding(), TEXT("EPlacementStatus"));
	}
	return Z_Registration_Info_UEnum_EPlacementStatus.OuterSingleton;
}
template<> MODULARBUILDING_API UEnum* StaticEnum<EPlacementStatus>()
{
	return EPlacementStatus_StaticEnum();
}
struct Z_Construct_UEnum_ModularBuilding_EPlacementStatus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Modular Building Tool" },
		{ "ModuleRelativePath", "Public/Data/MBModularEnum.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EPlacementStatus::None" },
		{ "NotPlaceable.DisplayName", "NotPlaceable" },
		{ "NotPlaceable.Name", "EPlacementStatus::NotPlaceable" },
		{ "Placeable.DisplayName", "Placeable" },
		{ "Placeable.Name", "EPlacementStatus::Placeable" },
		{ "Replaceable.DisplayName", "Replaceable" },
		{ "Replaceable.Name", "EPlacementStatus::Replaceable" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPlacementStatus::None", (int64)EPlacementStatus::None },
		{ "EPlacementStatus::NotPlaceable", (int64)EPlacementStatus::NotPlaceable },
		{ "EPlacementStatus::Placeable", (int64)EPlacementStatus::Placeable },
		{ "EPlacementStatus::Replaceable", (int64)EPlacementStatus::Replaceable },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ModularBuilding_EPlacementStatus_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ModularBuilding,
	nullptr,
	"EPlacementStatus",
	"EPlacementStatus",
	Z_Construct_UEnum_ModularBuilding_EPlacementStatus_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ModularBuilding_EPlacementStatus_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ModularBuilding_EPlacementStatus_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ModularBuilding_EPlacementStatus_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ModularBuilding_EPlacementStatus()
{
	if (!Z_Registration_Info_UEnum_EPlacementStatus.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPlacementStatus.InnerSingleton, Z_Construct_UEnum_ModularBuilding_EPlacementStatus_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPlacementStatus.InnerSingleton;
}
// End Enum EPlacementStatus

// Begin Enum EModularDirection
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EModularDirection;
static UEnum* EModularDirection_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EModularDirection.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EModularDirection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ModularBuilding_EModularDirection, (UObject*)Z_Construct_UPackage__Script_ModularBuilding(), TEXT("EModularDirection"));
	}
	return Z_Registration_Info_UEnum_EModularDirection.OuterSingleton;
}
template<> MODULARBUILDING_API UEnum* StaticEnum<EModularDirection>()
{
	return EModularDirection_StaticEnum();
}
struct Z_Construct_UEnum_ModularBuilding_EModularDirection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Back.DisplayName", "Back" },
		{ "Back.Name", "EModularDirection::Back" },
		{ "BlueprintType", "true" },
		{ "Category", "Modular Building Tool" },
		{ "Front.DisplayName", "Front" },
		{ "Front.Name", "EModularDirection::Front" },
		{ "Left.DisplayName", "Left" },
		{ "Left.Name", "EModularDirection::Left" },
		{ "ModuleRelativePath", "Public/Data/MBModularEnum.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EModularDirection::None" },
		{ "Right.DisplayName", "Right" },
		{ "Right.Name", "EModularDirection::Right" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EModularDirection::None", (int64)EModularDirection::None },
		{ "EModularDirection::Front", (int64)EModularDirection::Front },
		{ "EModularDirection::Back", (int64)EModularDirection::Back },
		{ "EModularDirection::Left", (int64)EModularDirection::Left },
		{ "EModularDirection::Right", (int64)EModularDirection::Right },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ModularBuilding_EModularDirection_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ModularBuilding,
	nullptr,
	"EModularDirection",
	"EModularDirection",
	Z_Construct_UEnum_ModularBuilding_EModularDirection_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ModularBuilding_EModularDirection_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ModularBuilding_EModularDirection_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ModularBuilding_EModularDirection_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ModularBuilding_EModularDirection()
{
	if (!Z_Registration_Info_UEnum_EModularDirection.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EModularDirection.InnerSingleton, Z_Construct_UEnum_ModularBuilding_EModularDirection_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EModularDirection.InnerSingleton;
}
// End Enum EModularDirection

// Begin Enum ESettingsMenuType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESettingsMenuType;
static UEnum* ESettingsMenuType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESettingsMenuType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESettingsMenuType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ModularBuilding_ESettingsMenuType, (UObject*)Z_Construct_UPackage__Script_ModularBuilding(), TEXT("ESettingsMenuType"));
	}
	return Z_Registration_Info_UEnum_ESettingsMenuType.OuterSingleton;
}
template<> MODULARBUILDING_API UEnum* StaticEnum<ESettingsMenuType>()
{
	return ESettingsMenuType_StaticEnum();
}
struct Z_Construct_UEnum_ModularBuilding_ESettingsMenuType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Modular Building Tool" },
		{ "ModActorAction.DisplayName", "Left" },
		{ "ModActorAction.Name", "ESettingsMenuType::ModActorAction" },
		{ "ModBuilding.DisplayName", "Front" },
		{ "ModBuilding.Name", "ESettingsMenuType::ModBuilding" },
		{ "ModPropAction.DisplayName", "Right" },
		{ "ModPropAction.Name", "ESettingsMenuType::ModPropAction" },
		{ "ModuleRelativePath", "Public/Data/MBModularEnum.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "ESettingsMenuType::None" },
		{ "PropBuilding.DisplayName", "Back" },
		{ "PropBuilding.Name", "ESettingsMenuType::PropBuilding" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESettingsMenuType::None", (int64)ESettingsMenuType::None },
		{ "ESettingsMenuType::ModBuilding", (int64)ESettingsMenuType::ModBuilding },
		{ "ESettingsMenuType::PropBuilding", (int64)ESettingsMenuType::PropBuilding },
		{ "ESettingsMenuType::ModActorAction", (int64)ESettingsMenuType::ModActorAction },
		{ "ESettingsMenuType::ModPropAction", (int64)ESettingsMenuType::ModPropAction },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ModularBuilding_ESettingsMenuType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ModularBuilding,
	nullptr,
	"ESettingsMenuType",
	"ESettingsMenuType",
	Z_Construct_UEnum_ModularBuilding_ESettingsMenuType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ModularBuilding_ESettingsMenuType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ModularBuilding_ESettingsMenuType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ModularBuilding_ESettingsMenuType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ModularBuilding_ESettingsMenuType()
{
	if (!Z_Registration_Info_UEnum_ESettingsMenuType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESettingsMenuType.InnerSingleton, Z_Construct_UEnum_ModularBuilding_ESettingsMenuType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESettingsMenuType.InnerSingleton;
}
// End Enum ESettingsMenuType

// Begin Enum EMBAxis
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMBAxis;
static UEnum* EMBAxis_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMBAxis.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMBAxis.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ModularBuilding_EMBAxis, (UObject*)Z_Construct_UPackage__Script_ModularBuilding(), TEXT("EMBAxis"));
	}
	return Z_Registration_Info_UEnum_EMBAxis.OuterSingleton;
}
template<> MODULARBUILDING_API UEnum* StaticEnum<EMBAxis>()
{
	return EMBAxis_StaticEnum();
}
struct Z_Construct_UEnum_ModularBuilding_EMBAxis_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AxisX.DisplayName", "X" },
		{ "AxisX.Name", "EMBAxis::AxisX" },
		{ "AxisY.DisplayName", "Y" },
		{ "AxisY.Name", "EMBAxis::AxisY" },
		{ "AxisZ.DisplayName", "Z" },
		{ "AxisZ.Name", "EMBAxis::AxisZ" },
		{ "BlueprintType", "true" },
		{ "Category", "Modular Building Tool" },
		{ "ModuleRelativePath", "Public/Data/MBModularEnum.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EMBAxis::None" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMBAxis::None", (int64)EMBAxis::None },
		{ "EMBAxis::AxisX", (int64)EMBAxis::AxisX },
		{ "EMBAxis::AxisY", (int64)EMBAxis::AxisY },
		{ "EMBAxis::AxisZ", (int64)EMBAxis::AxisZ },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ModularBuilding_EMBAxis_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ModularBuilding,
	nullptr,
	"EMBAxis",
	"EMBAxis",
	Z_Construct_UEnum_ModularBuilding_EMBAxis_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ModularBuilding_EMBAxis_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ModularBuilding_EMBAxis_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ModularBuilding_EMBAxis_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ModularBuilding_EMBAxis()
{
	if (!Z_Registration_Info_UEnum_EMBAxis.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMBAxis.InnerSingleton, Z_Construct_UEnum_ModularBuilding_EMBAxis_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMBAxis.InnerSingleton;
}
// End Enum EMBAxis

// Begin Enum EMBDistributionType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMBDistributionType;
static UEnum* EMBDistributionType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMBDistributionType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMBDistributionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ModularBuilding_EMBDistributionType, (UObject*)Z_Construct_UPackage__Script_ModularBuilding(), TEXT("EMBDistributionType"));
	}
	return Z_Registration_Info_UEnum_EMBDistributionType.OuterSingleton;
}
template<> MODULARBUILDING_API UEnum* StaticEnum<EMBDistributionType>()
{
	return EMBDistributionType_StaticEnum();
}
struct Z_Construct_UEnum_ModularBuilding_EMBDistributionType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Box.DisplayName", "Box" },
		{ "Box.Name", "EMBDistributionType::Box" },
		{ "Category", "Modular Building Tool" },
		{ "Circle.DisplayName", "Circle" },
		{ "Circle.Name", "EMBDistributionType::Circle" },
		{ "ModuleRelativePath", "Public/Data/MBModularEnum.h" },
		{ "Sphere.DisplayName", "Sphere" },
		{ "Sphere.Name", "EMBDistributionType::Sphere" },
		{ "TDGrid.DisplayName", "3DGrid" },
		{ "TDGrid.Name", "EMBDistributionType::TDGrid" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMBDistributionType::Box", (int64)EMBDistributionType::Box },
		{ "EMBDistributionType::Circle", (int64)EMBDistributionType::Circle },
		{ "EMBDistributionType::Sphere", (int64)EMBDistributionType::Sphere },
		{ "EMBDistributionType::TDGrid", (int64)EMBDistributionType::TDGrid },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ModularBuilding_EMBDistributionType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ModularBuilding,
	nullptr,
	"EMBDistributionType",
	"EMBDistributionType",
	Z_Construct_UEnum_ModularBuilding_EMBDistributionType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ModularBuilding_EMBDistributionType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ModularBuilding_EMBDistributionType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ModularBuilding_EMBDistributionType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ModularBuilding_EMBDistributionType()
{
	if (!Z_Registration_Info_UEnum_EMBDistributionType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMBDistributionType.InnerSingleton, Z_Construct_UEnum_ModularBuilding_EMBDistributionType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMBDistributionType.InnerSingleton;
}
// End Enum EMBDistributionType

// Begin Enum EMBPropOrientation
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMBPropOrientation;
static UEnum* EMBPropOrientation_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMBPropOrientation.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMBPropOrientation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ModularBuilding_EMBPropOrientation, (UObject*)Z_Construct_UPackage__Script_ModularBuilding(), TEXT("EMBPropOrientation"));
	}
	return Z_Registration_Info_UEnum_EMBPropOrientation.OuterSingleton;
}
template<> MODULARBUILDING_API UEnum* StaticEnum<EMBPropOrientation>()
{
	return EMBPropOrientation_StaticEnum();
}
struct Z_Construct_UEnum_ModularBuilding_EMBPropOrientation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Modular Building Tool" },
		{ "Inside.DisplayName", "Inside" },
		{ "Inside.Name", "EMBPropOrientation::Inside" },
		{ "Keep.DisplayName", "Keep" },
		{ "Keep.Name", "EMBPropOrientation::Keep" },
		{ "ModuleRelativePath", "Public/Data/MBModularEnum.h" },
		{ "Outside.DisplayName", "Outside" },
		{ "Outside.Name", "EMBPropOrientation::Outside" },
		{ "Random.DisplayName", "Random" },
		{ "Random.Name", "EMBPropOrientation::Random" },
		{ "RandomZ.DisplayName", "Random Around" },
		{ "RandomZ.Name", "EMBPropOrientation::RandomZ" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMBPropOrientation::Keep", (int64)EMBPropOrientation::Keep },
		{ "EMBPropOrientation::Inside", (int64)EMBPropOrientation::Inside },
		{ "EMBPropOrientation::Outside", (int64)EMBPropOrientation::Outside },
		{ "EMBPropOrientation::RandomZ", (int64)EMBPropOrientation::RandomZ },
		{ "EMBPropOrientation::Random", (int64)EMBPropOrientation::Random },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ModularBuilding_EMBPropOrientation_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ModularBuilding,
	nullptr,
	"EMBPropOrientation",
	"EMBPropOrientation",
	Z_Construct_UEnum_ModularBuilding_EMBPropOrientation_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ModularBuilding_EMBPropOrientation_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ModularBuilding_EMBPropOrientation_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ModularBuilding_EMBPropOrientation_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ModularBuilding_EMBPropOrientation()
{
	if (!Z_Registration_Info_UEnum_EMBPropOrientation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMBPropOrientation.InnerSingleton, Z_Construct_UEnum_ModularBuilding_EMBPropOrientation_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMBPropOrientation.InnerSingleton;
}
// End Enum EMBPropOrientation

// Begin Enum EMBMeshConversionType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMBMeshConversionType;
static UEnum* EMBMeshConversionType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMBMeshConversionType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMBMeshConversionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ModularBuilding_EMBMeshConversionType, (UObject*)Z_Construct_UPackage__Script_ModularBuilding(), TEXT("EMBMeshConversionType"));
	}
	return Z_Registration_Info_UEnum_EMBMeshConversionType.OuterSingleton;
}
template<> MODULARBUILDING_API UEnum* StaticEnum<EMBMeshConversionType>()
{
	return EMBMeshConversionType_StaticEnum();
}
struct Z_Construct_UEnum_ModularBuilding_EMBMeshConversionType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Modular Building Tool" },
		{ "HIsm.DisplayName", "HISM Component" },
		{ "HIsm.Name", "EMBMeshConversionType::HIsm" },
		{ "Ism.DisplayName", "ISM Component" },
		{ "Ism.Name", "EMBMeshConversionType::Ism" },
		{ "ModuleRelativePath", "Public/Data/MBModularEnum.h" },
		{ "Sm.DisplayName", "SM Component" },
		{ "Sm.Name", "EMBMeshConversionType::Sm" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMBMeshConversionType::Sm", (int64)EMBMeshConversionType::Sm },
		{ "EMBMeshConversionType::Ism", (int64)EMBMeshConversionType::Ism },
		{ "EMBMeshConversionType::HIsm", (int64)EMBMeshConversionType::HIsm },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ModularBuilding_EMBMeshConversionType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ModularBuilding,
	nullptr,
	"EMBMeshConversionType",
	"EMBMeshConversionType",
	Z_Construct_UEnum_ModularBuilding_EMBMeshConversionType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ModularBuilding_EMBMeshConversionType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ModularBuilding_EMBMeshConversionType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ModularBuilding_EMBMeshConversionType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ModularBuilding_EMBMeshConversionType()
{
	if (!Z_Registration_Info_UEnum_EMBMeshConversionType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMBMeshConversionType.InnerSingleton, Z_Construct_UEnum_ModularBuilding_EMBMeshConversionType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMBMeshConversionType.InnerSingleton;
}
// End Enum EMBMeshConversionType

// Begin Enum EMBModularSnapType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMBModularSnapType;
static UEnum* EMBModularSnapType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMBModularSnapType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMBModularSnapType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ModularBuilding_EMBModularSnapType, (UObject*)Z_Construct_UPackage__Script_ModularBuilding(), TEXT("EMBModularSnapType"));
	}
	return Z_Registration_Info_UEnum_EMBModularSnapType.OuterSingleton;
}
template<> MODULARBUILDING_API UEnum* StaticEnum<EMBModularSnapType>()
{
	return EMBModularSnapType_StaticEnum();
}
struct Z_Construct_UEnum_ModularBuilding_EMBModularSnapType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "BoundCorrection.DisplayName", "Bound Correction Sensitivity" },
		{ "BoundCorrection.Name", "EMBModularSnapType::BoundCorrection" },
		{ "Category", "Modular Building Tool" },
		{ "ModuleRelativePath", "Public/Data/MBModularEnum.h" },
		{ "SMBounds.DisplayName", "Static Mesh Bounds" },
		{ "SMBounds.Name", "EMBModularSnapType::SMBounds" },
		{ "SMCollision.DisplayName", "Static Mesh Collision" },
		{ "SMCollision.Name", "EMBModularSnapType::SMCollision" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMBModularSnapType::SMBounds", (int64)EMBModularSnapType::SMBounds },
		{ "EMBModularSnapType::BoundCorrection", (int64)EMBModularSnapType::BoundCorrection },
		{ "EMBModularSnapType::SMCollision", (int64)EMBModularSnapType::SMCollision },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ModularBuilding_EMBModularSnapType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ModularBuilding,
	nullptr,
	"EMBModularSnapType",
	"EMBModularSnapType",
	Z_Construct_UEnum_ModularBuilding_EMBModularSnapType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ModularBuilding_EMBModularSnapType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ModularBuilding_EMBModularSnapType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ModularBuilding_EMBModularSnapType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ModularBuilding_EMBModularSnapType()
{
	if (!Z_Registration_Info_UEnum_EMBModularSnapType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMBModularSnapType.InnerSingleton, Z_Construct_UEnum_ModularBuilding_EMBModularSnapType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMBModularSnapType.InnerSingleton;
}
// End Enum EMBModularSnapType

// Begin ScriptStruct FDistributionBaseData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DistributionBaseData;
class UScriptStruct* FDistributionBaseData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DistributionBaseData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DistributionBaseData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDistributionBaseData, (UObject*)Z_Construct_UPackage__Script_ModularBuilding(), TEXT("DistributionBaseData"));
	}
	return Z_Registration_Info_UScriptStruct_DistributionBaseData.OuterSingleton;
}
template<> MODULARBUILDING_API UScriptStruct* StaticStruct<FDistributionBaseData>()
{
	return FDistributionBaseData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDistributionBaseData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Data/MBModularEnum.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bActorSelected_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/MBModularEnum.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOneActorDistribution_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/MBModularEnum.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistributionType_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/MBModularEnum.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorToFollow_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/MBModularEnum.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/MBModularEnum.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Orientation_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/MBModularEnum.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bActorSelected_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bActorSelected;
	static void NewProp_bOneActorDistribution_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOneActorDistribution;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DistributionType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DistributionType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorToFollow;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Orientation_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Orientation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDistributionBaseData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FDistributionBaseData_Statics::NewProp_bActorSelected_SetBit(void* Obj)
{
	((FDistributionBaseData*)Obj)->bActorSelected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDistributionBaseData_Statics::NewProp_bActorSelected = { "bActorSelected", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDistributionBaseData), &Z_Construct_UScriptStruct_FDistributionBaseData_Statics::NewProp_bActorSelected_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bActorSelected_MetaData), NewProp_bActorSelected_MetaData) };
void Z_Construct_UScriptStruct_FDistributionBaseData_Statics::NewProp_bOneActorDistribution_SetBit(void* Obj)
{
	((FDistributionBaseData*)Obj)->bOneActorDistribution = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDistributionBaseData_Statics::NewProp_bOneActorDistribution = { "bOneActorDistribution", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDistributionBaseData), &Z_Construct_UScriptStruct_FDistributionBaseData_Statics::NewProp_bOneActorDistribution_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOneActorDistribution_MetaData), NewProp_bOneActorDistribution_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDistributionBaseData_Statics::NewProp_DistributionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDistributionBaseData_Statics::NewProp_DistributionType = { "DistributionType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDistributionBaseData, DistributionType), Z_Construct_UEnum_ModularBuilding_EMBDistributionType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistributionType_MetaData), NewProp_DistributionType_MetaData) }; // 1496322610
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDistributionBaseData_Statics::NewProp_ActorToFollow = { "ActorToFollow", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDistributionBaseData, ActorToFollow), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorToFollow_MetaData), NewProp_ActorToFollow_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDistributionBaseData_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDistributionBaseData, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDistributionBaseData_Statics::NewProp_Orientation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDistributionBaseData_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDistributionBaseData, Orientation), Z_Construct_UEnum_ModularBuilding_EMBPropOrientation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Orientation_MetaData), NewProp_Orientation_MetaData) }; // 2680957852
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDistributionBaseData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDistributionBaseData_Statics::NewProp_bActorSelected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDistributionBaseData_Statics::NewProp_bOneActorDistribution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDistributionBaseData_Statics::NewProp_DistributionType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDistributionBaseData_Statics::NewProp_DistributionType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDistributionBaseData_Statics::NewProp_ActorToFollow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDistributionBaseData_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDistributionBaseData_Statics::NewProp_Orientation_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDistributionBaseData_Statics::NewProp_Orientation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDistributionBaseData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDistributionBaseData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ModularBuilding,
	nullptr,
	&NewStructOps,
	"DistributionBaseData",
	Z_Construct_UScriptStruct_FDistributionBaseData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDistributionBaseData_Statics::PropPointers),
	sizeof(FDistributionBaseData),
	alignof(FDistributionBaseData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDistributionBaseData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDistributionBaseData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDistributionBaseData()
{
	if (!Z_Registration_Info_UScriptStruct_DistributionBaseData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DistributionBaseData.InnerSingleton, Z_Construct_UScriptStruct_FDistributionBaseData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DistributionBaseData.InnerSingleton;
}
// End ScriptStruct FDistributionBaseData

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Data_MBModularEnum_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EBuildingCategory_StaticEnum, TEXT("EBuildingCategory"), &Z_Registration_Info_UEnum_EBuildingCategory, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 385100287U) },
		{ EPlacementMode_StaticEnum, TEXT("EPlacementMode"), &Z_Registration_Info_UEnum_EPlacementMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2746029554U) },
		{ EPlacementType_StaticEnum, TEXT("EPlacementType"), &Z_Registration_Info_UEnum_EPlacementType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 496204070U) },
		{ EMBWorkingMode_StaticEnum, TEXT("EMBWorkingMode"), &Z_Registration_Info_UEnum_EMBWorkingMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3586567999U) },
		{ EPlacementStatus_StaticEnum, TEXT("EPlacementStatus"), &Z_Registration_Info_UEnum_EPlacementStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3758527380U) },
		{ EModularDirection_StaticEnum, TEXT("EModularDirection"), &Z_Registration_Info_UEnum_EModularDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 685915055U) },
		{ ESettingsMenuType_StaticEnum, TEXT("ESettingsMenuType"), &Z_Registration_Info_UEnum_ESettingsMenuType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3069031113U) },
		{ EMBAxis_StaticEnum, TEXT("EMBAxis"), &Z_Registration_Info_UEnum_EMBAxis, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3735486892U) },
		{ EMBDistributionType_StaticEnum, TEXT("EMBDistributionType"), &Z_Registration_Info_UEnum_EMBDistributionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1496322610U) },
		{ EMBPropOrientation_StaticEnum, TEXT("EMBPropOrientation"), &Z_Registration_Info_UEnum_EMBPropOrientation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2680957852U) },
		{ EMBMeshConversionType_StaticEnum, TEXT("EMBMeshConversionType"), &Z_Registration_Info_UEnum_EMBMeshConversionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3396179100U) },
		{ EMBModularSnapType_StaticEnum, TEXT("EMBModularSnapType"), &Z_Registration_Info_UEnum_EMBModularSnapType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3074431339U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDistributionBaseData::StaticStruct, Z_Construct_UScriptStruct_FDistributionBaseData_Statics::NewStructOps, TEXT("DistributionBaseData"), &Z_Registration_Info_UScriptStruct_DistributionBaseData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDistributionBaseData), 1915448655U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Data_MBModularEnum_h_2198374990(TEXT("/Script/ModularBuilding"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Data_MBModularEnum_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Data_MBModularEnum_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Data_MBModularEnum_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Data_MBModularEnum_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
