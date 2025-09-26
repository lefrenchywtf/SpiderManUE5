// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpiderMan/SMController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSMController() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
SPIDERMAN_API UClass* Z_Construct_UClass_ASMController();
SPIDERMAN_API UClass* Z_Construct_UClass_ASMController_NoRegister();
UPackage* Z_Construct_UPackage__Script_SpiderMan();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ASMController ************************************************************
void ASMController::StaticRegisterNativesASMController()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ASMController;
UClass* ASMController::GetPrivateStaticClass()
{
	using TClass = ASMController;
	if (!Z_Registration_Info_UClass_ASMController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SMController"),
			Z_Registration_Info_UClass_ASMController.InnerSingleton,
			StaticRegisterNativesASMController,
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
	return Z_Registration_Info_UClass_ASMController.InnerSingleton;
}
UClass* Z_Construct_UClass_ASMController_NoRegister()
{
	return ASMController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ASMController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "SMController.h" },
		{ "ModuleRelativePath", "SMController.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASMController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ASMController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_SpiderMan,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASMController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASMController_Statics::ClassParams = {
	&ASMController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASMController_Statics::Class_MetaDataParams), Z_Construct_UClass_ASMController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASMController()
{
	if (!Z_Registration_Info_UClass_ASMController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASMController.OuterSingleton, Z_Construct_UClass_ASMController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASMController.OuterSingleton;
}
ASMController::ASMController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASMController);
ASMController::~ASMController() {}
// ********** End Class ASMController **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SpiderMan_Source_SpiderMan_SMController_h__Script_SpiderMan_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASMController, ASMController::StaticClass, TEXT("ASMController"), &Z_Registration_Info_UClass_ASMController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASMController), 3855422072U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SpiderMan_Source_SpiderMan_SMController_h__Script_SpiderMan_2294953181(TEXT("/Script/SpiderMan"),
	Z_CompiledInDeferFile_FID_SpiderMan_Source_SpiderMan_SMController_h__Script_SpiderMan_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SpiderMan_Source_SpiderMan_SMController_h__Script_SpiderMan_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
