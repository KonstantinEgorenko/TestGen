// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyTest/MyTestGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyTestGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
MYTEST_API UClass* Z_Construct_UClass_AMyTestGameMode();
MYTEST_API UClass* Z_Construct_UClass_AMyTestGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_MyTest();
// End Cross Module References

// Begin Class AMyTestGameMode
void AMyTestGameMode::StaticRegisterNativesAMyTestGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyTestGameMode);
UClass* Z_Construct_UClass_AMyTestGameMode_NoRegister()
{
	return AMyTestGameMode::StaticClass();
}
struct Z_Construct_UClass_AMyTestGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MyTestGameMode.h" },
		{ "ModuleRelativePath", "MyTestGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyTestGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMyTestGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MyTest,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyTestGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyTestGameMode_Statics::ClassParams = {
	&AMyTestGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyTestGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyTestGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyTestGameMode()
{
	if (!Z_Registration_Info_UClass_AMyTestGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyTestGameMode.OuterSingleton, Z_Construct_UClass_AMyTestGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyTestGameMode.OuterSingleton;
}
template<> MYTEST_API UClass* StaticClass<AMyTestGameMode>()
{
	return AMyTestGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyTestGameMode);
AMyTestGameMode::~AMyTestGameMode() {}
// End Class AMyTestGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users____________OneDrive_Documents_GitHub_TestGen_MyTest_Source_MyTest_MyTestGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyTestGameMode, AMyTestGameMode::StaticClass, TEXT("AMyTestGameMode"), &Z_Registration_Info_UClass_AMyTestGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyTestGameMode), 2360088641U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users____________OneDrive_Documents_GitHub_TestGen_MyTest_Source_MyTest_MyTestGameMode_h_459928061(TEXT("/Script/MyTest"),
	Z_CompiledInDeferFile_FID_Users____________OneDrive_Documents_GitHub_TestGen_MyTest_Source_MyTest_MyTestGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users____________OneDrive_Documents_GitHub_TestGen_MyTest_Source_MyTest_MyTestGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
