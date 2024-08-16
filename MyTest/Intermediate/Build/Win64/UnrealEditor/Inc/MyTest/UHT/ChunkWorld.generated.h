// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChunkWorld.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYTEST_ChunkWorld_generated_h
#error "ChunkWorld.generated.h already included, missing '#pragma once' in ChunkWorld.h"
#endif
#define MYTEST_ChunkWorld_generated_h

#define FID_UnrealEngine_Unreal_Projects_MyTest_Source_MyTest_ChunkWorld_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAChunkWorld(); \
	friend struct Z_Construct_UClass_AChunkWorld_Statics; \
public: \
	DECLARE_CLASS(AChunkWorld, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyTest"), NO_API) \
	DECLARE_SERIALIZER(AChunkWorld)


#define FID_UnrealEngine_Unreal_Projects_MyTest_Source_MyTest_ChunkWorld_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AChunkWorld(AChunkWorld&&); \
	AChunkWorld(const AChunkWorld&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AChunkWorld); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AChunkWorld); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AChunkWorld) \
	NO_API virtual ~AChunkWorld();


#define FID_UnrealEngine_Unreal_Projects_MyTest_Source_MyTest_ChunkWorld_h_14_PROLOG
#define FID_UnrealEngine_Unreal_Projects_MyTest_Source_MyTest_ChunkWorld_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine_Unreal_Projects_MyTest_Source_MyTest_ChunkWorld_h_17_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine_Unreal_Projects_MyTest_Source_MyTest_ChunkWorld_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYTEST_API UClass* StaticClass<class AChunkWorld>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine_Unreal_Projects_MyTest_Source_MyTest_ChunkWorld_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
