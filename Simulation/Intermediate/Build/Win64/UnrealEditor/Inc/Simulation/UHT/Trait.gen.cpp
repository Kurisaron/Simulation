// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Trait.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeTrait() {}

// ********** Begin Cross Module References ********************************************************
SIMULATION_API UClass* Z_Construct_UClass_UEntityAttribute();
SIMULATION_API UClass* Z_Construct_UClass_UTrait();
SIMULATION_API UClass* Z_Construct_UClass_UTrait_NoRegister();
UPackage* Z_Construct_UPackage__Script_Simulation();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UTrait *******************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UTrait;
UClass* UTrait::GetPrivateStaticClass()
{
	using TClass = UTrait;
	if (!Z_Registration_Info_UClass_UTrait.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("Trait"),
			Z_Registration_Info_UClass_UTrait.InnerSingleton,
			StaticRegisterNativesUTrait,
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
	return Z_Registration_Info_UClass_UTrait.InnerSingleton;
}
UClass* Z_Construct_UClass_UTrait_NoRegister()
{
	return UTrait::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UTrait_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Trait.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Trait.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA

// ********** Begin Class UTrait constinit property declarations ***********************************
// ********** End Class UTrait constinit property declarations *************************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTrait>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UTrait_Statics
UObject* (*const Z_Construct_UClass_UTrait_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEntityAttribute,
	(UObject* (*)())Z_Construct_UPackage__Script_Simulation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTrait_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTrait_Statics::ClassParams = {
	&UTrait::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x041010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTrait_Statics::Class_MetaDataParams), Z_Construct_UClass_UTrait_Statics::Class_MetaDataParams)
};
void UTrait::StaticRegisterNativesUTrait()
{
}
UClass* Z_Construct_UClass_UTrait()
{
	if (!Z_Registration_Info_UClass_UTrait.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTrait.OuterSingleton, Z_Construct_UClass_UTrait_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTrait.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UTrait);
UTrait::~UTrait() {}
// ********** End Class UTrait *********************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_Trait_h__Script_Simulation_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTrait, UTrait::StaticClass, TEXT("UTrait"), &Z_Registration_Info_UClass_UTrait, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTrait), 31399516U) },
	};
}; // Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_Trait_h__Script_Simulation_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_Trait_h__Script_Simulation_393981483{
	TEXT("/Script/Simulation"),
	Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_Trait_h__Script_Simulation_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_Trait_h__Script_Simulation_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
