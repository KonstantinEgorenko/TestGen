// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GenerateTerrain.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYTEST_GenerateTerrain_generated_h
#error "GenerateTerrain.generated.h already included, missing '#pragma once' in GenerateTerrain.h"
#endif
#define MYTEST_GenerateTerrain_generated_h

#define FID_UnrealEngine_Unreal_Projects_MyTest_Source_MyTest_GenerateTerrain_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetPlayerLocation); \
	DECLARE_FUNCTION(execPerlinNoiseExtended); \
	DECLARE_FUNCTION(execGetHeight); \
	DECLARE_FUNCTION(execGenerateTerrain);


#define FID_UnrealEngine_Unreal_Projects_MyTest_Source_MyTest_GenerateTerrain_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGenerateTerrain(); \
	friend struct Z_Construct_UClass_AGenerateTerrain_Statics; \
public: \
	DECLARE_CLASS(AGenerateTerrain, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyTest"), NO_API) \
	DECLARE_SERIALIZER(AGenerateTerrain)


#define FID_UnrealEngine_Unreal_Projects_MyTest_Source_MyTest_GenerateTerrain_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AGenerateTerrain(AGenerateTerrain&&); \
	AGenerateTerrain(const AGenerateTerrain&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGenerateTerrain); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGenerateTerrain); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGenerateTerrain) \
	NO_API virtual ~AGenerateTerrain();


#define FID_UnrealEngine_Unreal_Projects_MyTest_Source_MyTest_GenerateTerrain_h_8_PROLOG
#define FID_UnrealEngine_Unreal_Projects_MyTest_Source_MyTest_GenerateTerrain_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine_Unreal_Projects_MyTest_Source_MyTest_GenerateTerrain_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealEngine_Unreal_Projects_MyTest_Source_MyTest_GenerateTerrain_h_11_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine_Unreal_Projects_MyTest_Source_MyTest_GenerateTerrain_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYTEST_API UClass* StaticClass<class AGenerateTerrain>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine_Unreal_Projects_MyTest_Source_MyTest_GenerateTerrain_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
