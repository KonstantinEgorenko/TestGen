// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyTestGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYTEST_MyTestGameMode_generated_h
#error "MyTestGameMode.generated.h already included, missing '#pragma once' in MyTestGameMode.h"
#endif
#define MYTEST_MyTestGameMode_generated_h

#define FID_UnrealEngine_Unreal_Projects_MyTest_Source_MyTest_MyTestGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyTestGameMode(); \
	friend struct Z_Construct_UClass_AMyTestGameMode_Statics; \
public: \
	DECLARE_CLASS(AMyTestGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyTest"), MYTEST_API) \
	DECLARE_SERIALIZER(AMyTestGameMode)


#define FID_UnrealEngine_Unreal_Projects_MyTest_Source_MyTest_MyTestGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMyTestGameMode(AMyTestGameMode&&); \
	AMyTestGameMode(const AMyTestGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MYTEST_API, AMyTestGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyTestGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyTestGameMode) \
	MYTEST_API virtual ~AMyTestGameMode();


#define FID_UnrealEngine_Unreal_Projects_MyTest_Source_MyTest_MyTestGameMode_h_9_PROLOG
#define FID_UnrealEngine_Unreal_Projects_MyTest_Source_MyTest_MyTestGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine_Unreal_Projects_MyTest_Source_MyTest_MyTestGameMode_h_12_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine_Unreal_Projects_MyTest_Source_MyTest_MyTestGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYTEST_API UClass* StaticClass<class AMyTestGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine_Unreal_Projects_MyTest_Source_MyTest_MyTestGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
