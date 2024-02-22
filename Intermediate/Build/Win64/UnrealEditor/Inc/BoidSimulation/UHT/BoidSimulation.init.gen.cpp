// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoidSimulation_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_BoidSimulation;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_BoidSimulation()
	{
		if (!Z_Registration_Info_UPackage__Script_BoidSimulation.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/BoidSimulation",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x913138D0,
				0x8B89AB08,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_BoidSimulation.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_BoidSimulation.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_BoidSimulation(Z_Construct_UPackage__Script_BoidSimulation, TEXT("/Script/BoidSimulation"), Z_Registration_Info_UPackage__Script_BoidSimulation, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x913138D0, 0x8B89AB08));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
