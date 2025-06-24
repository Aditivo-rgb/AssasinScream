// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/MBModularEnum.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MODULARBUILDING_MBModularEnum_generated_h
#error "MBModularEnum.generated.h already included, missing '#pragma once' in MBModularEnum.h"
#endif
#define MODULARBUILDING_MBModularEnum_generated_h

#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Data_MBModularEnum_h_128_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDistributionBaseData_Statics; \
	MODULARBUILDING_API static class UScriptStruct* StaticStruct();


template<> MODULARBUILDING_API UScriptStruct* StaticStruct<struct FDistributionBaseData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_UltimateLevelArtTool_Source_ModularBuilding_Public_Data_MBModularEnum_h


#define FOREACH_ENUM_EBUILDINGCATEGORY(op) \
	op(EBuildingCategory::None) \
	op(EBuildingCategory::Modular) \
	op(EBuildingCategory::Prop) 

enum class EBuildingCategory : uint8;
template<> struct TIsUEnumClass<EBuildingCategory> { enum { Value = true }; };
template<> MODULARBUILDING_API UEnum* StaticEnum<EBuildingCategory>();

#define FOREACH_ENUM_EPLACEMENTMODE(op) \
	op(EPlacementMode::None) \
	op(EPlacementMode::SingleModular) \
	op(EPlacementMode::MultiModular) \
	op(EPlacementMode::SingleProp) \
	op(EPlacementMode::MultiProp) 

enum class EPlacementMode : uint8;
template<> struct TIsUEnumClass<EPlacementMode> { enum { Value = true }; };
template<> MODULARBUILDING_API UEnum* StaticEnum<EPlacementMode>();

#define FOREACH_ENUM_EPLACEMENTTYPE(op) \
	op(EPlacementType::Single) \
	op(EPlacementType::Multiple) 

enum class EPlacementType : uint8;
template<> struct TIsUEnumClass<EPlacementType> { enum { Value = true }; };
template<> MODULARBUILDING_API UEnum* StaticEnum<EPlacementType>();

#define FOREACH_ENUM_EMBWORKINGMODE(op) \
	op(EMBWorkingMode::None) \
	op(EMBWorkingMode::Placement) \
	op(EMBWorkingMode::ModActorAction) \
	op(EMBWorkingMode::PropActorAction) 

enum class EMBWorkingMode : uint8;
template<> struct TIsUEnumClass<EMBWorkingMode> { enum { Value = true }; };
template<> MODULARBUILDING_API UEnum* StaticEnum<EMBWorkingMode>();

#define FOREACH_ENUM_EPLACEMENTSTATUS(op) \
	op(EPlacementStatus::None) \
	op(EPlacementStatus::NotPlaceable) \
	op(EPlacementStatus::Placeable) \
	op(EPlacementStatus::Replaceable) 

enum class EPlacementStatus : uint8;
template<> struct TIsUEnumClass<EPlacementStatus> { enum { Value = true }; };
template<> MODULARBUILDING_API UEnum* StaticEnum<EPlacementStatus>();

#define FOREACH_ENUM_EMODULARDIRECTION(op) \
	op(EModularDirection::None) \
	op(EModularDirection::Front) \
	op(EModularDirection::Back) \
	op(EModularDirection::Left) \
	op(EModularDirection::Right) 

enum class EModularDirection : uint8;
template<> struct TIsUEnumClass<EModularDirection> { enum { Value = true }; };
template<> MODULARBUILDING_API UEnum* StaticEnum<EModularDirection>();

#define FOREACH_ENUM_ESETTINGSMENUTYPE(op) \
	op(ESettingsMenuType::None) \
	op(ESettingsMenuType::ModBuilding) \
	op(ESettingsMenuType::PropBuilding) \
	op(ESettingsMenuType::ModActorAction) \
	op(ESettingsMenuType::ModPropAction) 

enum class ESettingsMenuType : uint8;
template<> struct TIsUEnumClass<ESettingsMenuType> { enum { Value = true }; };
template<> MODULARBUILDING_API UEnum* StaticEnum<ESettingsMenuType>();

#define FOREACH_ENUM_EMBAXIS(op) \
	op(EMBAxis::None) \
	op(EMBAxis::AxisX) \
	op(EMBAxis::AxisY) \
	op(EMBAxis::AxisZ) 

enum class EMBAxis : uint8;
template<> struct TIsUEnumClass<EMBAxis> { enum { Value = true }; };
template<> MODULARBUILDING_API UEnum* StaticEnum<EMBAxis>();

#define FOREACH_ENUM_EMBDISTRIBUTIONTYPE(op) \
	op(EMBDistributionType::Box) \
	op(EMBDistributionType::Circle) \
	op(EMBDistributionType::Sphere) \
	op(EMBDistributionType::TDGrid) 

enum class EMBDistributionType : uint8;
template<> struct TIsUEnumClass<EMBDistributionType> { enum { Value = true }; };
template<> MODULARBUILDING_API UEnum* StaticEnum<EMBDistributionType>();

#define FOREACH_ENUM_EMBPROPORIENTATION(op) \
	op(EMBPropOrientation::Keep) \
	op(EMBPropOrientation::Inside) \
	op(EMBPropOrientation::Outside) \
	op(EMBPropOrientation::RandomZ) \
	op(EMBPropOrientation::Random) 

enum class EMBPropOrientation : uint8;
template<> struct TIsUEnumClass<EMBPropOrientation> { enum { Value = true }; };
template<> MODULARBUILDING_API UEnum* StaticEnum<EMBPropOrientation>();

#define FOREACH_ENUM_EMBMESHCONVERSIONTYPE(op) \
	op(EMBMeshConversionType::Sm) \
	op(EMBMeshConversionType::Ism) \
	op(EMBMeshConversionType::HIsm) 

enum class EMBMeshConversionType : uint8;
template<> struct TIsUEnumClass<EMBMeshConversionType> { enum { Value = true }; };
template<> MODULARBUILDING_API UEnum* StaticEnum<EMBMeshConversionType>();

#define FOREACH_ENUM_EMBMODULARSNAPTYPE(op) \
	op(EMBModularSnapType::SMBounds) \
	op(EMBModularSnapType::BoundCorrection) \
	op(EMBModularSnapType::SMCollision) 

enum class EMBModularSnapType : uint8;
template<> struct TIsUEnumClass<EMBModularSnapType> { enum { Value = true }; };
template<> MODULARBUILDING_API UEnum* StaticEnum<EMBModularSnapType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
