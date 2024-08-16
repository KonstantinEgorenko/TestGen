// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyTest/Chunk.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChunk() {}

// Begin Cross Module References
MYTEST_API UClass* Z_Construct_UClass_ABaseChunk();
MYTEST_API UClass* Z_Construct_UClass_AChunk();
MYTEST_API UClass* Z_Construct_UClass_AChunk_NoRegister();
UPackage* Z_Construct_UPackage__Script_MyTest();
// End Cross Module References

// Begin Class AChunk
void AChunk::StaticRegisterNativesAChunk()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AChunk);
UClass* Z_Construct_UClass_AChunk_NoRegister()
{
	return AChunk::StaticClass();
}
struct Z_Construct_UClass_AChunk_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Chunk.h" },
		{ "ModuleRelativePath", "Chunk.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChunk>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AChunk_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABaseChunk,
	(UObject* (*)())Z_Construct_UPackage__Script_MyTest,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AChunk_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AChunk_Statics::ClassParams = {
	&AChunk::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AChunk_Statics::Class_MetaDataParams), Z_Construct_UClass_AChunk_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AChunk()
{
	if (!Z_Registration_Info_UClass_AChunk.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AChunk.OuterSingleton, Z_Construct_UClass_AChunk_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AChunk.OuterSingleton;
}
template<> MYTEST_API UClass* StaticClass<AChunk>()
{
	return AChunk::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AChunk);
AChunk::~AChunk() {}
// End Class AChunk

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users____________OneDrive_Documents_GitHub_TestGen_MyTest_Source_MyTest_Chunk_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AChunk, AChunk::StaticClass, TEXT("AChunk"), &Z_Registration_Info_UClass_AChunk, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AChunk), 262472806U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users____________OneDrive_Documents_GitHub_TestGen_MyTest_Source_MyTest_Chunk_h_65077563(TEXT("/Script/MyTest"),
	Z_CompiledInDeferFile_FID_Users____________OneDrive_Documents_GitHub_TestGen_MyTest_Source_MyTest_Chunk_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users____________OneDrive_Documents_GitHub_TestGen_MyTest_Source_MyTest_Chunk_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
