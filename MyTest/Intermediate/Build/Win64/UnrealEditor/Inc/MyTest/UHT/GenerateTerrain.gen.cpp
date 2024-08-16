// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyTest/GenerateTerrain.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGenerateTerrain() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_AActor();
MYTEST_API UClass* Z_Construct_UClass_AGenerateTerrain();
MYTEST_API UClass* Z_Construct_UClass_AGenerateTerrain_NoRegister();
PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_MyTest();
// End Cross Module References

// Begin Class AGenerateTerrain Function GenerateTerrain
struct Z_Construct_UFunction_AGenerateTerrain_GenerateTerrain_Statics
{
	struct GenerateTerrain_eventGenerateTerrain_Parms
	{
		int32 NumSectionsX;
		int32 NumSectionsY;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GenerateTerrain.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumSectionsX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumSectionsY;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGenerateTerrain_GenerateTerrain_Statics::NewProp_NumSectionsX = { "NumSectionsX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GenerateTerrain_eventGenerateTerrain_Parms, NumSectionsX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGenerateTerrain_GenerateTerrain_Statics::NewProp_NumSectionsY = { "NumSectionsY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GenerateTerrain_eventGenerateTerrain_Parms, NumSectionsY), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGenerateTerrain_GenerateTerrain_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGenerateTerrain_GenerateTerrain_Statics::NewProp_NumSectionsX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGenerateTerrain_GenerateTerrain_Statics::NewProp_NumSectionsY,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGenerateTerrain_GenerateTerrain_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGenerateTerrain_GenerateTerrain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGenerateTerrain, nullptr, "GenerateTerrain", nullptr, nullptr, Z_Construct_UFunction_AGenerateTerrain_GenerateTerrain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGenerateTerrain_GenerateTerrain_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGenerateTerrain_GenerateTerrain_Statics::GenerateTerrain_eventGenerateTerrain_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGenerateTerrain_GenerateTerrain_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGenerateTerrain_GenerateTerrain_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGenerateTerrain_GenerateTerrain_Statics::GenerateTerrain_eventGenerateTerrain_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGenerateTerrain_GenerateTerrain()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGenerateTerrain_GenerateTerrain_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGenerateTerrain::execGenerateTerrain)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NumSectionsX);
	P_GET_PROPERTY(FIntProperty,Z_Param_NumSectionsY);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GenerateTerrain(Z_Param_NumSectionsX,Z_Param_NumSectionsY);
	P_NATIVE_END;
}
// End Class AGenerateTerrain Function GenerateTerrain

// Begin Class AGenerateTerrain Function GetHeight
struct Z_Construct_UFunction_AGenerateTerrain_GetHeight_Statics
{
	struct GenerateTerrain_eventGetHeight_Parms
	{
		FVector2D Location;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GenerateTerrain.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGenerateTerrain_GetHeight_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GenerateTerrain_eventGetHeight_Parms, Location), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGenerateTerrain_GetHeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GenerateTerrain_eventGetHeight_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGenerateTerrain_GetHeight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGenerateTerrain_GetHeight_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGenerateTerrain_GetHeight_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGenerateTerrain_GetHeight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGenerateTerrain_GetHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGenerateTerrain, nullptr, "GetHeight", nullptr, nullptr, Z_Construct_UFunction_AGenerateTerrain_GetHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGenerateTerrain_GetHeight_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGenerateTerrain_GetHeight_Statics::GenerateTerrain_eventGetHeight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGenerateTerrain_GetHeight_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGenerateTerrain_GetHeight_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGenerateTerrain_GetHeight_Statics::GenerateTerrain_eventGetHeight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGenerateTerrain_GetHeight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGenerateTerrain_GetHeight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGenerateTerrain::execGetHeight)
{
	P_GET_STRUCT(FVector2D,Z_Param_Location);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetHeight(Z_Param_Location);
	P_NATIVE_END;
}
// End Class AGenerateTerrain Function GetHeight

// Begin Class AGenerateTerrain Function GetPlayerLocation
struct Z_Construct_UFunction_AGenerateTerrain_GetPlayerLocation_Statics
{
	struct GenerateTerrain_eventGetPlayerLocation_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GenerateTerrain.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGenerateTerrain_GetPlayerLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GenerateTerrain_eventGetPlayerLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGenerateTerrain_GetPlayerLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGenerateTerrain_GetPlayerLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGenerateTerrain_GetPlayerLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGenerateTerrain_GetPlayerLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGenerateTerrain, nullptr, "GetPlayerLocation", nullptr, nullptr, Z_Construct_UFunction_AGenerateTerrain_GetPlayerLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGenerateTerrain_GetPlayerLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGenerateTerrain_GetPlayerLocation_Statics::GenerateTerrain_eventGetPlayerLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGenerateTerrain_GetPlayerLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGenerateTerrain_GetPlayerLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGenerateTerrain_GetPlayerLocation_Statics::GenerateTerrain_eventGetPlayerLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGenerateTerrain_GetPlayerLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGenerateTerrain_GetPlayerLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGenerateTerrain::execGetPlayerLocation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetPlayerLocation();
	P_NATIVE_END;
}
// End Class AGenerateTerrain Function GetPlayerLocation

// Begin Class AGenerateTerrain Function PerlinNoiseExtended
struct Z_Construct_UFunction_AGenerateTerrain_PerlinNoiseExtended_Statics
{
	struct GenerateTerrain_eventPerlinNoiseExtended_Parms
	{
		FVector2D Location;
		float Scale;
		float Amplitude;
		FVector2D Offset;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GenerateTerrain.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Amplitude;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGenerateTerrain_PerlinNoiseExtended_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GenerateTerrain_eventPerlinNoiseExtended_Parms, Location), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGenerateTerrain_PerlinNoiseExtended_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GenerateTerrain_eventPerlinNoiseExtended_Parms, Scale), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGenerateTerrain_PerlinNoiseExtended_Statics::NewProp_Amplitude = { "Amplitude", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GenerateTerrain_eventPerlinNoiseExtended_Parms, Amplitude), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGenerateTerrain_PerlinNoiseExtended_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GenerateTerrain_eventPerlinNoiseExtended_Parms, Offset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGenerateTerrain_PerlinNoiseExtended_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GenerateTerrain_eventPerlinNoiseExtended_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGenerateTerrain_PerlinNoiseExtended_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGenerateTerrain_PerlinNoiseExtended_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGenerateTerrain_PerlinNoiseExtended_Statics::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGenerateTerrain_PerlinNoiseExtended_Statics::NewProp_Amplitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGenerateTerrain_PerlinNoiseExtended_Statics::NewProp_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGenerateTerrain_PerlinNoiseExtended_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGenerateTerrain_PerlinNoiseExtended_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGenerateTerrain_PerlinNoiseExtended_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGenerateTerrain, nullptr, "PerlinNoiseExtended", nullptr, nullptr, Z_Construct_UFunction_AGenerateTerrain_PerlinNoiseExtended_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGenerateTerrain_PerlinNoiseExtended_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGenerateTerrain_PerlinNoiseExtended_Statics::GenerateTerrain_eventPerlinNoiseExtended_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGenerateTerrain_PerlinNoiseExtended_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGenerateTerrain_PerlinNoiseExtended_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGenerateTerrain_PerlinNoiseExtended_Statics::GenerateTerrain_eventPerlinNoiseExtended_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGenerateTerrain_PerlinNoiseExtended()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGenerateTerrain_PerlinNoiseExtended_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGenerateTerrain::execPerlinNoiseExtended)
{
	P_GET_STRUCT(FVector2D,Z_Param_Location);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Amplitude);
	P_GET_STRUCT(FVector2D,Z_Param_Offset);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->PerlinNoiseExtended(Z_Param_Location,Z_Param_Scale,Z_Param_Amplitude,Z_Param_Offset);
	P_NATIVE_END;
}
// End Class AGenerateTerrain Function PerlinNoiseExtended

// Begin Class AGenerateTerrain
void AGenerateTerrain::StaticRegisterNativesAGenerateTerrain()
{
	UClass* Class = AGenerateTerrain::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GenerateTerrain", &AGenerateTerrain::execGenerateTerrain },
		{ "GetHeight", &AGenerateTerrain::execGetHeight },
		{ "GetPlayerLocation", &AGenerateTerrain::execGetPlayerLocation },
		{ "PerlinNoiseExtended", &AGenerateTerrain::execPerlinNoiseExtended },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGenerateTerrain);
UClass* Z_Construct_UClass_AGenerateTerrain_NoRegister()
{
	return AGenerateTerrain::StaticClass();
}
struct Z_Construct_UClass_AGenerateTerrain_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "GenerateTerrain.h" },
		{ "ModuleRelativePath", "GenerateTerrain.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_XVertexCount_MetaData[] = {
		{ "Category", "GenerateTerrain" },
		{ "ModuleRelativePath", "GenerateTerrain.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_YVertexCount_MetaData[] = {
		{ "Category", "GenerateTerrain" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Default vertex count for X axis\n" },
#endif
		{ "ModuleRelativePath", "GenerateTerrain.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default vertex count for X axis" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CellSize_MetaData[] = {
		{ "Category", "GenerateTerrain" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Default vertex count for Y axis\n" },
#endif
		{ "ModuleRelativePath", "GenerateTerrain.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default vertex count for Y axis" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumOfSectionsX_MetaData[] = {
		{ "Category", "GenerateTerrain" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Size of each cell\n" },
#endif
		{ "ModuleRelativePath", "GenerateTerrain.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Size of each cell" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumOfSectionsY_MetaData[] = {
		{ "Category", "GenerateTerrain" },
		{ "ModuleRelativePath", "GenerateTerrain.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Seed_MetaData[] = {
		{ "Category", "GenerateTerrain" },
		{ "ModuleRelativePath", "GenerateTerrain.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TerrainMesh_MetaData[] = {
		{ "Category", "GenerateTerrain" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GenerateTerrain.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QueuedTiles_MetaData[] = {
		{ "Category", "GenerateTerrain" },
		{ "ModuleRelativePath", "GenerateTerrain.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_XVertexCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_YVertexCount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CellSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumOfSectionsX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumOfSectionsY;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Seed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TerrainMesh;
	static const UECodeGen_Private::FIntPropertyParams NewProp_QueuedTiles_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_QueuedTiles_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_QueuedTiles;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AGenerateTerrain_GenerateTerrain, "GenerateTerrain" }, // 2159027436
		{ &Z_Construct_UFunction_AGenerateTerrain_GetHeight, "GetHeight" }, // 2481893893
		{ &Z_Construct_UFunction_AGenerateTerrain_GetPlayerLocation, "GetPlayerLocation" }, // 1215859283
		{ &Z_Construct_UFunction_AGenerateTerrain_PerlinNoiseExtended, "PerlinNoiseExtended" }, // 1292252682
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGenerateTerrain>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGenerateTerrain_Statics::NewProp_XVertexCount = { "XVertexCount", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGenerateTerrain, XVertexCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_XVertexCount_MetaData), NewProp_XVertexCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGenerateTerrain_Statics::NewProp_YVertexCount = { "YVertexCount", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGenerateTerrain, YVertexCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_YVertexCount_MetaData), NewProp_YVertexCount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGenerateTerrain_Statics::NewProp_CellSize = { "CellSize", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGenerateTerrain, CellSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CellSize_MetaData), NewProp_CellSize_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGenerateTerrain_Statics::NewProp_NumOfSectionsX = { "NumOfSectionsX", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGenerateTerrain, NumOfSectionsX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumOfSectionsX_MetaData), NewProp_NumOfSectionsX_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGenerateTerrain_Statics::NewProp_NumOfSectionsY = { "NumOfSectionsY", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGenerateTerrain, NumOfSectionsY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumOfSectionsY_MetaData), NewProp_NumOfSectionsY_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGenerateTerrain_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGenerateTerrain, Seed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Seed_MetaData), NewProp_Seed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGenerateTerrain_Statics::NewProp_TerrainMesh = { "TerrainMesh", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGenerateTerrain, TerrainMesh), Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TerrainMesh_MetaData), NewProp_TerrainMesh_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGenerateTerrain_Statics::NewProp_QueuedTiles_ValueProp = { "QueuedTiles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGenerateTerrain_Statics::NewProp_QueuedTiles_Key_KeyProp = { "QueuedTiles_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AGenerateTerrain_Statics::NewProp_QueuedTiles = { "QueuedTiles", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGenerateTerrain, QueuedTiles), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QueuedTiles_MetaData), NewProp_QueuedTiles_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGenerateTerrain_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGenerateTerrain_Statics::NewProp_XVertexCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGenerateTerrain_Statics::NewProp_YVertexCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGenerateTerrain_Statics::NewProp_CellSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGenerateTerrain_Statics::NewProp_NumOfSectionsX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGenerateTerrain_Statics::NewProp_NumOfSectionsY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGenerateTerrain_Statics::NewProp_Seed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGenerateTerrain_Statics::NewProp_TerrainMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGenerateTerrain_Statics::NewProp_QueuedTiles_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGenerateTerrain_Statics::NewProp_QueuedTiles_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGenerateTerrain_Statics::NewProp_QueuedTiles,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGenerateTerrain_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGenerateTerrain_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_MyTest,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGenerateTerrain_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGenerateTerrain_Statics::ClassParams = {
	&AGenerateTerrain::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AGenerateTerrain_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AGenerateTerrain_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGenerateTerrain_Statics::Class_MetaDataParams), Z_Construct_UClass_AGenerateTerrain_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGenerateTerrain()
{
	if (!Z_Registration_Info_UClass_AGenerateTerrain.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGenerateTerrain.OuterSingleton, Z_Construct_UClass_AGenerateTerrain_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGenerateTerrain.OuterSingleton;
}
template<> MYTEST_API UClass* StaticClass<AGenerateTerrain>()
{
	return AGenerateTerrain::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGenerateTerrain);
AGenerateTerrain::~AGenerateTerrain() {}
// End Class AGenerateTerrain

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealEngine_Unreal_Projects_MyTest_Source_MyTest_GenerateTerrain_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGenerateTerrain, AGenerateTerrain::StaticClass, TEXT("AGenerateTerrain"), &Z_Registration_Info_UClass_AGenerateTerrain, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGenerateTerrain), 267891696U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_Unreal_Projects_MyTest_Source_MyTest_GenerateTerrain_h_3977871332(TEXT("/Script/MyTest"),
	Z_CompiledInDeferFile_FID_UnrealEngine_Unreal_Projects_MyTest_Source_MyTest_GenerateTerrain_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_Unreal_Projects_MyTest_Source_MyTest_GenerateTerrain_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
