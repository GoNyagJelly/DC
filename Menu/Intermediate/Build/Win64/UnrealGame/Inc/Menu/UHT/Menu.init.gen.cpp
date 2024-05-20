// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMenu_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Menu;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Menu()
	{
		if (!Z_Registration_Info_UPackage__Script_Menu.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Menu",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x0AC7147B,
				0xD8476240,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Menu.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Menu.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Menu(Z_Construct_UPackage__Script_Menu, TEXT("/Script/Menu"), Z_Registration_Info_UPackage__Script_Menu, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x0AC7147B, 0xD8476240));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
