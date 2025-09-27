// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpiderMan/SMCharacter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSMCharacter() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
SPIDERMAN_API UClass* Z_Construct_UClass_ASMCharacter();
SPIDERMAN_API UClass* Z_Construct_UClass_ASMCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_SpiderMan();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ASMCharacter Function IsFalling ******************************************
struct SMCharacter_eventIsFalling_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	SMCharacter_eventIsFalling_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_ASMCharacter_IsFalling = FName(TEXT("IsFalling"));
bool ASMCharacter::IsFalling()
{
	UFunction* Func = FindFunctionChecked(NAME_ASMCharacter_IsFalling);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		SMCharacter_eventIsFalling_Parms Parms;
	ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return IsFalling_Implementation();
	}
}
struct Z_Construct_UFunction_ASMCharacter_IsFalling_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SMCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ASMCharacter_IsFalling_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SMCharacter_eventIsFalling_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASMCharacter_IsFalling_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SMCharacter_eventIsFalling_Parms), &Z_Construct_UFunction_ASMCharacter_IsFalling_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASMCharacter_IsFalling_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASMCharacter_IsFalling_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASMCharacter_IsFalling_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASMCharacter_IsFalling_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASMCharacter, nullptr, "IsFalling", Z_Construct_UFunction_ASMCharacter_IsFalling_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASMCharacter_IsFalling_Statics::PropPointers), sizeof(SMCharacter_eventIsFalling_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASMCharacter_IsFalling_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASMCharacter_IsFalling_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(SMCharacter_eventIsFalling_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASMCharacter_IsFalling()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASMCharacter_IsFalling_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASMCharacter::execIsFalling)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsFalling_Implementation();
	P_NATIVE_END;
}
// ********** End Class ASMCharacter Function IsFalling ********************************************

// ********** Begin Class ASMCharacter Function JumpChara ******************************************
struct Z_Construct_UFunction_ASMCharacter_JumpChara_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SMCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASMCharacter_JumpChara_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASMCharacter, nullptr, "JumpChara", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASMCharacter_JumpChara_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASMCharacter_JumpChara_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASMCharacter_JumpChara()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASMCharacter_JumpChara_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASMCharacter::execJumpChara)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->JumpChara();
	P_NATIVE_END;
}
// ********** End Class ASMCharacter Function JumpChara ********************************************

// ********** Begin Class ASMCharacter Function Look ***********************************************
struct Z_Construct_UFunction_ASMCharacter_Look_Statics
{
	struct SMCharacter_eventLook_Parms
	{
		FVector2D _inputs;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SMCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp__inputs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASMCharacter_Look_Statics::NewProp__inputs = { "_inputs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SMCharacter_eventLook_Parms, _inputs), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASMCharacter_Look_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASMCharacter_Look_Statics::NewProp__inputs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASMCharacter_Look_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASMCharacter_Look_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASMCharacter, nullptr, "Look", Z_Construct_UFunction_ASMCharacter_Look_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASMCharacter_Look_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASMCharacter_Look_Statics::SMCharacter_eventLook_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASMCharacter_Look_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASMCharacter_Look_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASMCharacter_Look_Statics::SMCharacter_eventLook_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASMCharacter_Look()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASMCharacter_Look_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASMCharacter::execLook)
{
	P_GET_STRUCT(FVector2D,Z_Param__inputs);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Look(Z_Param__inputs);
	P_NATIVE_END;
}
// ********** End Class ASMCharacter Function Look *************************************************

// ********** Begin Class ASMCharacter Function MoveForward ****************************************
struct Z_Construct_UFunction_ASMCharacter_MoveForward_Statics
{
	struct SMCharacter_eventMoveForward_Parms
	{
		float _value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SMCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp__value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASMCharacter_MoveForward_Statics::NewProp__value = { "_value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SMCharacter_eventMoveForward_Parms, _value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASMCharacter_MoveForward_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASMCharacter_MoveForward_Statics::NewProp__value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASMCharacter_MoveForward_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASMCharacter_MoveForward_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASMCharacter, nullptr, "MoveForward", Z_Construct_UFunction_ASMCharacter_MoveForward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASMCharacter_MoveForward_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASMCharacter_MoveForward_Statics::SMCharacter_eventMoveForward_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASMCharacter_MoveForward_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASMCharacter_MoveForward_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASMCharacter_MoveForward_Statics::SMCharacter_eventMoveForward_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASMCharacter_MoveForward()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASMCharacter_MoveForward_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASMCharacter::execMoveForward)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param__value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MoveForward(Z_Param__value);
	P_NATIVE_END;
}
// ********** End Class ASMCharacter Function MoveForward ******************************************

// ********** Begin Class ASMCharacter Function MoveSide *******************************************
struct Z_Construct_UFunction_ASMCharacter_MoveSide_Statics
{
	struct SMCharacter_eventMoveSide_Parms
	{
		float _value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SMCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp__value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASMCharacter_MoveSide_Statics::NewProp__value = { "_value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SMCharacter_eventMoveSide_Parms, _value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASMCharacter_MoveSide_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASMCharacter_MoveSide_Statics::NewProp__value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASMCharacter_MoveSide_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASMCharacter_MoveSide_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASMCharacter, nullptr, "MoveSide", Z_Construct_UFunction_ASMCharacter_MoveSide_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASMCharacter_MoveSide_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASMCharacter_MoveSide_Statics::SMCharacter_eventMoveSide_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASMCharacter_MoveSide_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASMCharacter_MoveSide_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASMCharacter_MoveSide_Statics::SMCharacter_eventMoveSide_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASMCharacter_MoveSide()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASMCharacter_MoveSide_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASMCharacter::execMoveSide)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param__value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MoveSide(Z_Param__value);
	P_NATIVE_END;
}
// ********** End Class ASMCharacter Function MoveSide *********************************************

// ********** Begin Class ASMCharacter Function StartWebswing **************************************
struct Z_Construct_UFunction_ASMCharacter_StartWebswing_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SMCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASMCharacter_StartWebswing_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASMCharacter, nullptr, "StartWebswing", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASMCharacter_StartWebswing_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASMCharacter_StartWebswing_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASMCharacter_StartWebswing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASMCharacter_StartWebswing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASMCharacter::execStartWebswing)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartWebswing();
	P_NATIVE_END;
}
// ********** End Class ASMCharacter Function StartWebswing ****************************************

// ********** Begin Class ASMCharacter Function StopSwinging ***************************************
struct Z_Construct_UFunction_ASMCharacter_StopSwinging_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SMCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASMCharacter_StopSwinging_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASMCharacter, nullptr, "StopSwinging", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASMCharacter_StopSwinging_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASMCharacter_StopSwinging_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASMCharacter_StopSwinging()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASMCharacter_StopSwinging_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASMCharacter::execStopSwinging)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopSwinging();
	P_NATIVE_END;
}
// ********** End Class ASMCharacter Function StopSwinging *****************************************

// ********** Begin Class ASMCharacter *************************************************************
void ASMCharacter::StaticRegisterNativesASMCharacter()
{
	UClass* Class = ASMCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "IsFalling", &ASMCharacter::execIsFalling },
		{ "JumpChara", &ASMCharacter::execJumpChara },
		{ "Look", &ASMCharacter::execLook },
		{ "MoveForward", &ASMCharacter::execMoveForward },
		{ "MoveSide", &ASMCharacter::execMoveSide },
		{ "StartWebswing", &ASMCharacter::execStartWebswing },
		{ "StopSwinging", &ASMCharacter::execStopSwinging },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ASMCharacter;
UClass* ASMCharacter::GetPrivateStaticClass()
{
	using TClass = ASMCharacter;
	if (!Z_Registration_Info_UClass_ASMCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SMCharacter"),
			Z_Registration_Info_UClass_ASMCharacter.InnerSingleton,
			StaticRegisterNativesASMCharacter,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_ASMCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_ASMCharacter_NoRegister()
{
	return ASMCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ASMCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SMCharacter.h" },
		{ "ModuleRelativePath", "SMCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[] = {
		{ "Category", "SMCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SMCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsSwinging_MetaData[] = {
		{ "Category", "SMCharacter" },
		{ "ModuleRelativePath", "SMCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
	static void NewProp_IsSwinging_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsSwinging;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASMCharacter_IsFalling, "IsFalling" }, // 774807509
		{ &Z_Construct_UFunction_ASMCharacter_JumpChara, "JumpChara" }, // 2201523530
		{ &Z_Construct_UFunction_ASMCharacter_Look, "Look" }, // 2049674458
		{ &Z_Construct_UFunction_ASMCharacter_MoveForward, "MoveForward" }, // 853781188
		{ &Z_Construct_UFunction_ASMCharacter_MoveSide, "MoveSide" }, // 3705454484
		{ &Z_Construct_UFunction_ASMCharacter_StartWebswing, "StartWebswing" }, // 1682517602
		{ &Z_Construct_UFunction_ASMCharacter_StopSwinging, "StopSwinging" }, // 534551210
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASMCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASMCharacter_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASMCharacter, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraComponent_MetaData), NewProp_CameraComponent_MetaData) };
void Z_Construct_UClass_ASMCharacter_Statics::NewProp_IsSwinging_SetBit(void* Obj)
{
	((ASMCharacter*)Obj)->IsSwinging = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASMCharacter_Statics::NewProp_IsSwinging = { "IsSwinging", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASMCharacter), &Z_Construct_UClass_ASMCharacter_Statics::NewProp_IsSwinging_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsSwinging_MetaData), NewProp_IsSwinging_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASMCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASMCharacter_Statics::NewProp_CameraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASMCharacter_Statics::NewProp_IsSwinging,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASMCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASMCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_SpiderMan,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASMCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASMCharacter_Statics::ClassParams = {
	&ASMCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASMCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASMCharacter_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASMCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ASMCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASMCharacter()
{
	if (!Z_Registration_Info_UClass_ASMCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASMCharacter.OuterSingleton, Z_Construct_UClass_ASMCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASMCharacter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASMCharacter);
ASMCharacter::~ASMCharacter() {}
// ********** End Class ASMCharacter ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SpiderMan_Source_SpiderMan_SMCharacter_h__Script_SpiderMan_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASMCharacter, ASMCharacter::StaticClass, TEXT("ASMCharacter"), &Z_Registration_Info_UClass_ASMCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASMCharacter), 2183701666U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SpiderMan_Source_SpiderMan_SMCharacter_h__Script_SpiderMan_2245958941(TEXT("/Script/SpiderMan"),
	Z_CompiledInDeferFile_FID_SpiderMan_Source_SpiderMan_SMCharacter_h__Script_SpiderMan_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SpiderMan_Source_SpiderMan_SMCharacter_h__Script_SpiderMan_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
