// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyTest/BaseChunk.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseChunk() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector2();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
MYTEST_API UClass* Z_Construct_UClass_ABaseChunk();
MYTEST_API UClass* Z_Construct_UClass_ABaseChunk_NoRegister();
MYTEST_API UClass* Z_Construct_UClass_AChunkWorld_NoRegister();
UPackage* Z_Construct_UPackage__Script_MyTest();
// End Cross Module References

// Begin Class ABaseChunk
void ABaseChunk::StaticRegisterNativesABaseChunk()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABaseChunk);
UClass* Z_Construct_UClass_ABaseChunk_NoRegister()
{
	return ABaseChunk::StaticClass();
}
struct Z_Construct_UClass_ABaseChunk_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BaseChunk.h" },
		{ "ModuleRelativePath", "BaseChunk.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[] = {
		{ "ModuleRelativePath", "BaseChunk.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChunkWorld_MetaData[] = {
		{ "Category", "Chunk" },
		{ "ModuleRelativePath", "BaseChunk.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChunkSize_MetaData[] = {
		{ "Category", "Chunk" },
		{ "ModuleRelativePath", "BaseChunk.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChunkLocation_MetaData[] = {
		{ "Category", "Chunk" },
		{ "ModuleRelativePath", "BaseChunk.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChunkWorld;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChunkSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChunkLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseChunk>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseChunk_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseChunk, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Material_MetaData), NewProp_Material_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseChunk_Statics::NewProp_ChunkWorld = { "ChunkWorld", nullptr, (EPropertyFlags)0x0124080000020801, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseChunk, ChunkWorld), Z_Construct_UClass_AChunkWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChunkWorld_MetaData), NewProp_ChunkWorld_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABaseChunk_Statics::NewProp_ChunkSize = { "ChunkSize", nullptr, (EPropertyFlags)0x0020080000020801, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseChunk, ChunkSize), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChunkSize_MetaData), NewProp_ChunkSize_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABaseChunk_Statics::NewProp_ChunkLocation = { "ChunkLocation", nullptr, (EPropertyFlags)0x0020080000020801, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseChunk, ChunkLocation), Z_Construct_UScriptStruct_FIntVector2, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChunkLocation_MetaData), NewProp_ChunkLocation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseChunk_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseChunk_Statics::NewProp_Material,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseChunk_Statics::NewProp_ChunkWorld,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseChunk_Statics::NewProp_ChunkSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseChunk_Statics::NewProp_ChunkLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseChunk_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABaseChunk_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_MyTest,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseChunk_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABaseChunk_Statics::ClassParams = {
	&ABaseChunk::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABaseChunk_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABaseChunk_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseChunk_Statics::Class_MetaDataParams), Z_Construct_UClass_ABaseChunk_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABaseChunk()
{
	if (!Z_Registration_Info_UClass_ABaseChunk.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABaseChunk.OuterSingleton, Z_Construct_UClass_ABaseChunk_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABaseChunk.OuterSingleton;
}
template<> MYTEST_API UClass* StaticClass<ABaseChunk>()
{
	return ABaseChunk::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseChunk);
ABaseChunk::~ABaseChunk() {}
// End Class ABaseChunk

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users____________OneDrive_Documents_GitHub_TestGen_MyTest_Source_MyTest_BaseChunk_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABaseChunk, ABaseChunk::StaticClass, TEXT("ABaseChunk"), &Z_Registration_Info_UClass_ABaseChunk, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseChunk), 737745066U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users____________OneDrive_Documents_GitHub_TestGen_MyTest_Source_MyTest_BaseChunk_h_3693878418(TEXT("/Script/MyTest"),
	Z_CompiledInDeferFile_FID_Users____________OneDrive_Documents_GitHub_TestGen_MyTest_Source_MyTest_BaseChunk_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users____________OneDrive_Documents_GitHub_TestGen_MyTest_Source_MyTest_BaseChunk_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
