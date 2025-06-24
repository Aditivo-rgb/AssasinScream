// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/ODMeshData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OBJECTDISTRIBUTION_ODMeshData_generated_h
#error "ODMeshData.generated.h already included, missing '#pragma once' in ODMeshData.h"
#endif
#define OBJECTDISTRIBUTION_ODMeshData_generated_h

#define FID_HostProject_Plugins_ObjectDistribution_Source_ObjectDistribution_Public_Data_ODMeshData_h_64_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDistObjectPropertyData_Statics; \
	OBJECTDISTRIBUTION_API static class UScriptStruct* StaticStruct();


template<> OBJECTDISTRIBUTION_API UScriptStruct* StaticStruct<struct FDistObjectPropertyData>();

#define FID_HostProject_Plugins_ObjectDistribution_Source_ObjectDistribution_Public_Data_ODMeshData_h_103_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDistObjectData_Statics; \
	OBJECTDISTRIBUTION_API static class UScriptStruct* StaticStruct();


template<> OBJECTDISTRIBUTION_API UScriptStruct* StaticStruct<struct FDistObjectData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_ObjectDistribution_Source_ObjectDistribution_Public_Data_ODMeshData_h


#define FOREACH_ENUM_EOBJECTDISTRIBUTIONTYPE(op) \
	op(EObjectDistributionType::Cube) \
	op(EObjectDistributionType::Ring) \
	op(EObjectDistributionType::Disk) \
	op(EObjectDistributionType::Sphere) \
	op(EObjectDistributionType::Spiral) \
	op(EObjectDistributionType::Line) \
	op(EObjectDistributionType::Plane) \
	op(EObjectDistributionType::Grid) 

enum class EObjectDistributionType : uint8;
template<> struct TIsUEnumClass<EObjectDistributionType> { enum { Value = true }; };
template<> OBJECTDISTRIBUTION_API UEnum* StaticEnum<EObjectDistributionType>();

#define FOREACH_ENUM_EOBJECTORIENTATION(op) \
	op(EObjectOrientation::Keep) \
	op(EObjectOrientation::Inside) \
	op(EObjectOrientation::Outside) \
	op(EObjectOrientation::RandomZ) \
	op(EObjectOrientation::Random) 

enum class EObjectOrientation : uint8;
template<> struct TIsUEnumClass<EObjectOrientation> { enum { Value = true }; };
template<> OBJECTDISTRIBUTION_API UEnum* StaticEnum<EObjectOrientation>();

#define FOREACH_ENUM_EODLINEAXIS(op) \
	op(EODLineAxis::None) \
	op(EODLineAxis::AxisX) \
	op(EODLineAxis::AxisY) \
	op(EODLineAxis::AxisZ) 

enum class EODLineAxis : uint8;
template<> struct TIsUEnumClass<EODLineAxis> { enum { Value = true }; };
template<> OBJECTDISTRIBUTION_API UEnum* StaticEnum<EODLineAxis>();

#define FOREACH_ENUM_EODDISTRIBUTIONFINISHTYPE(op) \
	op(EODDistributionFinishType::Keep) \
	op(EODDistributionFinishType::Batch) \
	op(EODDistributionFinishType::Merge) 

enum class EODDistributionFinishType : uint8;
template<> struct TIsUEnumClass<EODDistributionFinishType> { enum { Value = true }; };
template<> OBJECTDISTRIBUTION_API UEnum* StaticEnum<EODDistributionFinishType>();

#define FOREACH_ENUM_EODMESHCONVERSIONTYPE(op) \
	op(EODMeshConversionType::Sm) \
	op(EODMeshConversionType::Ism) \
	op(EODMeshConversionType::HIsm) 

enum class EODMeshConversionType : uint8;
template<> struct TIsUEnumClass<EODMeshConversionType> { enum { Value = true }; };
template<> OBJECTDISTRIBUTION_API UEnum* StaticEnum<EODMeshConversionType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
