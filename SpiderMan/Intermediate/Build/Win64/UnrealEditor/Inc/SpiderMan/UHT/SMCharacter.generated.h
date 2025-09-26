// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SMCharacter.h"

#ifdef SPIDERMAN_SMCharacter_generated_h
#error "SMCharacter.generated.h already included, missing '#pragma once' in SMCharacter.h"
#endif
#define SPIDERMAN_SMCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ASMCharacter *************************************************************
#define FID_SpiderMan_Source_SpiderMan_SMCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execLook); \
	DECLARE_FUNCTION(execJumpChara); \
	DECLARE_FUNCTION(execMoveSide); \
	DECLARE_FUNCTION(execMoveForward);


SPIDERMAN_API UClass* Z_Construct_UClass_ASMCharacter_NoRegister();

#define FID_SpiderMan_Source_SpiderMan_SMCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASMCharacter(); \
	friend struct Z_Construct_UClass_ASMCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SPIDERMAN_API UClass* Z_Construct_UClass_ASMCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(ASMCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpiderMan"), Z_Construct_UClass_ASMCharacter_NoRegister) \
	DECLARE_SERIALIZER(ASMCharacter)


#define FID_SpiderMan_Source_SpiderMan_SMCharacter_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ASMCharacter(ASMCharacter&&) = delete; \
	ASMCharacter(const ASMCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASMCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASMCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASMCharacter) \
	NO_API virtual ~ASMCharacter();


#define FID_SpiderMan_Source_SpiderMan_SMCharacter_h_9_PROLOG
#define FID_SpiderMan_Source_SpiderMan_SMCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SpiderMan_Source_SpiderMan_SMCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SpiderMan_Source_SpiderMan_SMCharacter_h_12_INCLASS_NO_PURE_DECLS \
	FID_SpiderMan_Source_SpiderMan_SMCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ASMCharacter;

// ********** End Class ASMCharacter ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SpiderMan_Source_SpiderMan_SMCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
