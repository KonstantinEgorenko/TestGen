// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyTest/ChunkMeshData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChunkMeshData() {}

// Begin Cross Module References
MYTEST_API UScriptStruct* Z_Construct_UScriptStruct_FChunkMeshData();
UPackage* Z_Construct_UPackage__Script_MyTest();
// End Cross Module References

// Begin ScriptStruct FChunkMeshData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChunkMeshData;
class UScriptStruct* FChunkMeshData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChunkMeshData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChunkMeshData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChunkMeshData, (UObject*)Z_Construct_UPackage__Script_MyTest(), TEXT("ChunkMeshData"));
	}
	return Z_Registration_Info_UScriptStruct_ChunkMeshData.OuterSingleton;
}
template<> MYTEST_API UScriptStruct* StaticStruct<FChunkMeshData>()
{
	return FChunkMeshData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FChunkMeshData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "ChunkMeshData.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChunkMeshData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChunkMeshData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MyTest,
	nullptr,
	&NewStructOps,
	"ChunkMeshData",
	nullptr,
	0,
	sizeof(FChunkMeshData),
	alignof(FChunkMeshData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChunkMeshData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChunkMeshData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FChunkMeshData()
{
	if (!Z_Registration_Info_UScriptStruct_ChunkMeshData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChunkMeshData.InnerSingleton, Z_Construct_UScriptStruct_FChunkMeshData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ChunkMeshData.InnerSingleton;
}
// End ScriptStruct FChunkMeshData

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealEngine_Unreal_Projects_MyTest_Source_MyTest_ChunkMeshData_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FChunkMeshData::StaticStruct, Z_Construct_UScriptStruct_FChunkMeshData_Statics::NewStructOps, TEXT("ChunkMeshData"), &Z_Registration_Info_UScriptStruct_ChunkMeshData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChunkMeshData), 2093529735U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_Unreal_Projects_MyTest_Source_MyTest_ChunkMeshData_h_1513913480(TEXT("/Script/MyTest"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine_Unreal_Projects_MyTest_Source_MyTest_ChunkMeshData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_Unreal_Projects_MyTest_Source_MyTest_ChunkMeshData_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
