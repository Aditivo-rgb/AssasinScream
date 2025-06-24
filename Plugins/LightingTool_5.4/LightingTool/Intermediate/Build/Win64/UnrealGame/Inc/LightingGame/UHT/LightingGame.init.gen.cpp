// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLightingGame_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_LightingGame;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_LightingGame()
	{
		if (!Z_Registration_Info_UPackage__Script_LightingGame.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/LightingGame",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x93DAFA86,
				0xE0435454,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_LightingGame.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_LightingGame.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_LightingGame(Z_Construct_UPackage__Script_LightingGame, TEXT("/Script/LightingGame"), Z_Registration_Info_UPackage__Script_LightingGame, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x93DAFA86, 0xE0435454));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
