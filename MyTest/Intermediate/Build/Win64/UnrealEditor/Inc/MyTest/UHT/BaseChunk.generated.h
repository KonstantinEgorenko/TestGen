// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BaseChunk.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYTEST_BaseChunk_generated_h
#error "BaseChunk.generated.h already included, missing '#pragma once' in BaseChunk.h"
#endif
#define MYTEST_BaseChunk_generated_h

#define FID_UnrealEngine_Unreal_Projects_MyTest_Source_MyTest_BaseChunk_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseChunk(); \
	friend struct Z_Construct_UClass_ABaseChunk_Statics; \
public: \
	DECLARE_CLASS(ABaseChunk, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyTest"), NO_API) \
	DECLARE_SERIALIZER(ABaseChunk)


#define FID_UnrealEngine_Unreal_Projects_MyTest_Source_MyTest_BaseChunk_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABaseChunk(ABaseChunk&&); \
	ABaseChunk(const ABaseChunk&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseChunk); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseChunk); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseChunk) \
	NO_API virtual ~ABaseChunk();


#define FID_UnrealEngine_Unreal_Projects_MyTest_Source_MyTest_BaseChunk_h_15_PROLOG
#define FID_UnrealEngine_Unreal_Projects_MyTest_Source_MyTest_BaseChunk_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine_Unreal_Projects_MyTest_Source_MyTest_BaseChunk_h_18_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine_Unreal_Projects_MyTest_Source_MyTest_BaseChunk_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYTEST_API UClass* StaticClass<class ABaseChunk>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine_Unreal_Projects_MyTest_Source_MyTest_BaseChunk_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
