// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModularBuilding_init() {}
	MODULARBUILDING_API UFunction* Z_Construct_UDelegateFunction_ModularBuilding_OnModActorSlotClickedSignature__DelegateSignature();
	MODULARBUILDING_API UFunction* Z_Construct_UDelegateFunction_ModularBuilding_OnPlacementTypeChanged__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ModularBuilding;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ModularBuilding()
	{
		if (!Z_Registration_Info_UPackage__Script_ModularBuilding.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_ModularBuilding_OnModActorSlotClickedSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ModularBuilding_OnPlacementTypeChanged__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ModularBuilding",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000040,
				0x769430F7,
				0x4BF8F7F1,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ModularBuilding.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ModularBuilding.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ModularBuilding(Z_Construct_UPackage__Script_ModularBuilding, TEXT("/Script/ModularBuilding"), Z_Registration_Info_UPackage__Script_ModularBuilding, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x769430F7, 0x4BF8F7F1));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
