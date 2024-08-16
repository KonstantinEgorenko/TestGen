// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyTestCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYTEST_MyTestCharacter_generated_h
#error "MyTestCharacter.generated.h already included, missing '#pragma once' in MyTestCharacter.h"
#endif
#define MYTEST_MyTestCharacter_generated_h

#define FID_UnrealEngine_Unreal_Projects_MyTest_Source_MyTest_MyTestCharacter_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyTestCharacter(); \
	friend struct Z_Construct_UClass_AMyTestCharacter_Statics; \
public: \
	DECLARE_CLASS(AMyTestCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyTest"), NO_API) \
	DECLARE_SERIALIZER(AMyTestCharacter)


#define FID_UnrealEngine_Unreal_Projects_MyTest_Source_MyTest_MyTestCharacter_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMyTestCharacter(AMyTestCharacter&&); \
	AMyTestCharacter(const AMyTestCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyTestCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyTestCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyTestCharacter) \
	NO_API virtual ~AMyTestCharacter();


#define FID_UnrealEngine_Unreal_Projects_MyTest_Source_MyTest_MyTestCharacter_h_18_PROLOG
#define FID_UnrealEngine_Unreal_Projects_MyTest_Source_MyTest_MyTestCharacter_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine_Unreal_Projects_MyTest_Source_MyTest_MyTestCharacter_h_21_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine_Unreal_Projects_MyTest_Source_MyTest_MyTestCharacter_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYTEST_API UClass* StaticClass<class AMyTestCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine_Unreal_Projects_MyTest_Source_MyTest_MyTestCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
