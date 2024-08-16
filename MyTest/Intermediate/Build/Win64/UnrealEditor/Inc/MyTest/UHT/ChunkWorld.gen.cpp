// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyTest/ChunkWorld.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChunkWorld() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
MYTEST_API UClass* Z_Construct_UClass_ABaseChunk_NoRegister();
MYTEST_API UClass* Z_Construct_UClass_AChunkWorld();
MYTEST_API UClass* Z_Construct_UClass_AChunkWorld_NoRegister();
UPackage* Z_Construct_UPackage__Script_MyTest();
// End Cross Module References

// Begin Class AChunkWorld
void AChunkWorld::StaticRegisterNativesAChunkWorld()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AChunkWorld);
UClass* Z_Construct_UClass_AChunkWorld_NoRegister()
{
	return AChunkWorld::StaticClass();
}
struct Z_Construct_UClass_AChunkWorld_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ChunkWorld.h" },
		{ "ModuleRelativePath", "ChunkWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChunksToSpawn_MetaData[] = {
		{ "Category", "Chunk World" },
		{ "ModuleRelativePath", "ChunkWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrawDistanceAroundPlayer_MetaData[] = {
		{ "Category", "Chunk World" },
		{ "ModuleRelativePath", "ChunkWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewChunkSize_MetaData[] = {
		{ "Category", "Chunks" },
		{ "ModuleRelativePath", "ChunkWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChunkMaterial_MetaData[] = {
		{ "Category", "Chunks" },
		{ "ModuleRelativePath", "ChunkWorld.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ChunksToSpawn;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DrawDistanceAroundPlayer;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewChunkSize;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChunkMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChunkWorld>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AChunkWorld_Statics::NewProp_ChunksToSpawn = { "ChunksToSpawn", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AChunkWorld, ChunksToSpawn), Z_Construct_UClass_UClass, Z_Construct_UClass_ABaseChunk_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChunksToSpawn_MetaData), NewProp_ChunksToSpawn_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AChunkWorld_Statics::NewProp_DrawDistanceAroundPlayer = { "DrawDistanceAroundPlayer", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AChunkWorld, DrawDistanceAroundPlayer), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrawDistanceAroundPlayer_MetaData), NewProp_DrawDistanceAroundPlayer_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AChunkWorld_Statics::NewProp_NewChunkSize = { "NewChunkSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AChunkWorld, NewChunkSize), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewChunkSize_MetaData), NewProp_NewChunkSize_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AChunkWorld_Statics::NewProp_ChunkMaterial = { "ChunkMaterial", nullptr, (EPropertyFlags)0x0114000000000801, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AChunkWorld, ChunkMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChunkMaterial_MetaData), NewProp_ChunkMaterial_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AChunkWorld_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChunkWorld_Statics::NewProp_ChunksToSpawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChunkWorld_Statics::NewProp_DrawDistanceAroundPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChunkWorld_Statics::NewProp_NewChunkSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChunkWorld_Statics::NewProp_ChunkMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AChunkWorld_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AChunkWorld_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_MyTest,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AChunkWorld_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AChunkWorld_Statics::ClassParams = {
	&AChunkWorld::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AChunkWorld_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AChunkWorld_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AChunkWorld_Statics::Class_MetaDataParams), Z_Construct_UClass_AChunkWorld_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AChunkWorld()
{
	if (!Z_Registration_Info_UClass_AChunkWorld.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AChunkWorld.OuterSingleton, Z_Construct_UClass_AChunkWorld_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AChunkWorld.OuterSingleton;
}
template<> MYTEST_API UClass* StaticClass<AChunkWorld>()
{
	return AChunkWorld::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AChunkWorld);
AChunkWorld::~AChunkWorld() {}
// End Class AChunkWorld

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealEngine_Unreal_Projects_MyTest_Source_MyTest_ChunkWorld_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AChunkWorld, AChunkWorld::StaticClass, TEXT("AChunkWorld"), &Z_Registration_Info_UClass_AChunkWorld, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AChunkWorld), 4117177104U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_Unreal_Projects_MyTest_Source_MyTest_ChunkWorld_h_2833440535(TEXT("/Script/MyTest"),
	Z_CompiledInDeferFile_FID_UnrealEngine_Unreal_Projects_MyTest_Source_MyTest_ChunkWorld_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_Unreal_Projects_MyTest_Source_MyTest_ChunkWorld_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
