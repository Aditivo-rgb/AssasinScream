// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Spline/ASStaticMeshDistributionSpline.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUTOSPLINE_ASStaticMeshDistributionSpline_generated_h
#error "ASStaticMeshDistributionSpline.generated.h already included, missing '#pragma once' in ASStaticMeshDistributionSpline.h"
#endif
#define AUTOSPLINE_ASStaticMeshDistributionSpline_generated_h

#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_AutoSpline_Public_Spline_ASStaticMeshDistributionSpline_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAASStaticMeshDistributionSpline(); \
	friend struct Z_Construct_UClass_AASStaticMeshDistributionSpline_Statics; \
public: \
	DECLARE_CLASS(AASStaticMeshDistributionSpline, AASAutoSplineBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AutoSpline"), NO_API) \
	DECLARE_SERIALIZER(AASStaticMeshDistributionSpline)


#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_AutoSpline_Public_Spline_ASStaticMeshDistributionSpline_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AASStaticMeshDistributionSpline(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AASStaticMeshDistributionSpline(AASStaticMeshDistributionSpline&&); \
	AASStaticMeshDistributionSpline(const AASStaticMeshDistributionSpline&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AASStaticMeshDistributionSpline); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AASStaticMeshDistributionSpline); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AASStaticMeshDistributionSpline) \
	NO_API virtual ~AASStaticMeshDistributionSpline();


#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_AutoSpline_Public_Spline_ASStaticMeshDistributionSpline_h_21_PROLOG
#define FID_HostProject_Plugins_UltimateLevelArtTool_Source_AutoSpline_Public_Spline_ASStaticMeshDistributionSpline_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_UltimateLevelArtTool_Source_AutoSpline_Public_Spline_ASStaticMeshDistributionSpline_h_24_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_UltimateLevelArtTool_Source_AutoSpline_Public_Spline_ASStaticMeshDistributionSpline_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUTOSPLINE_API UClass* StaticClass<class AASStaticMeshDistributionSpline>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_UltimateLevelArtTool_Source_AutoSpline_Public_Spline_ASStaticMeshDistributionSpline_h


#define FOREACH_ENUM_ENONDEFORMINSTANCETYPE(op) \
	op(ENonDeformInstanceType::Sm) \
	op(ENonDeformInstanceType::Ism) \
	op(ENonDeformInstanceType::HIsm) 

enum class ENonDeformInstanceType : uint8;
template<> struct TIsUEnumClass<ENonDeformInstanceType> { enum { Value = true }; };
template<> AUTOSPLINE_API UEnum* StaticEnum<ENonDeformInstanceType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
