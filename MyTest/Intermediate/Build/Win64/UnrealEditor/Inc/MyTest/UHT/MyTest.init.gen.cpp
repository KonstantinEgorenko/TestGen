// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyTest_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_MyTest;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_MyTest()
	{
		if (!Z_Registration_Info_UPackage__Script_MyTest.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/MyTest",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x45C9D819,
				0xCF5D9549,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_MyTest.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_MyTest.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_MyTest(Z_Construct_UPackage__Script_MyTest, TEXT("/Script/MyTest"), Z_Registration_Info_UPackage__Script_MyTest, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x45C9D819, 0xCF5D9549));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
