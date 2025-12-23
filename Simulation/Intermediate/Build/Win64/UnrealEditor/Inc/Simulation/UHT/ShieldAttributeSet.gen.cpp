// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShieldAttributeSet.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeShieldAttributeSet() {}

// ********** Begin Cross Module References ********************************************************
SIMULATION_API UClass* Z_Construct_UClass_UEntityAttributeSet();
SIMULATION_API UClass* Z_Construct_UClass_UShieldAttributeSet();
SIMULATION_API UClass* Z_Construct_UClass_UShieldAttributeSet_NoRegister();
UPackage* Z_Construct_UPackage__Script_Simulation();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UShieldAttributeSet ******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UShieldAttributeSet;
UClass* UShieldAttributeSet::GetPrivateStaticClass()
{
	using TClass = UShieldAttributeSet;
	if (!Z_Registration_Info_UClass_UShieldAttributeSet.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ShieldAttributeSet"),
			Z_Registration_Info_UClass_UShieldAttributeSet.InnerSingleton,
			StaticRegisterNativesUShieldAttributeSet,
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
	return Z_Registration_Info_UClass_UShieldAttributeSet.InnerSingleton;
}
UClass* Z_Construct_UClass_UShieldAttributeSet_NoRegister()
{
	return UShieldAttributeSet::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UShieldAttributeSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ShieldAttributeSet.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ShieldAttributeSet.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA

// ********** Begin Class UShieldAttributeSet constinit property declarations **********************
// ********** End Class UShieldAttributeSet constinit property declarations ************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UShieldAttributeSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UShieldAttributeSet_Statics
UObject* (*const Z_Construct_UClass_UShieldAttributeSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEntityAttributeSet,
	(UObject* (*)())Z_Construct_UPackage__Script_Simulation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UShieldAttributeSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UShieldAttributeSet_Statics::ClassParams = {
	&UShieldAttributeSet::StaticClass,
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
	0x003000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UShieldAttributeSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UShieldAttributeSet_Statics::Class_MetaDataParams)
};
void UShieldAttributeSet::StaticRegisterNativesUShieldAttributeSet()
{
}
UClass* Z_Construct_UClass_UShieldAttributeSet()
{
	if (!Z_Registration_Info_UClass_UShieldAttributeSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UShieldAttributeSet.OuterSingleton, Z_Construct_UClass_UShieldAttributeSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UShieldAttributeSet.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UShieldAttributeSet);
UShieldAttributeSet::~UShieldAttributeSet() {}
// ********** End Class UShieldAttributeSet ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_ShieldAttributeSet_h__Script_Simulation_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UShieldAttributeSet, UShieldAttributeSet::StaticClass, TEXT("UShieldAttributeSet"), &Z_Registration_Info_UClass_UShieldAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UShieldAttributeSet), 1406666336U) },
	};
}; // Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_ShieldAttributeSet_h__Script_Simulation_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_ShieldAttributeSet_h__Script_Simulation_878443990{
	TEXT("/Script/Simulation"),
	Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_ShieldAttributeSet_h__Script_Simulation_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_ShieldAttributeSet_h__Script_Simulation_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
