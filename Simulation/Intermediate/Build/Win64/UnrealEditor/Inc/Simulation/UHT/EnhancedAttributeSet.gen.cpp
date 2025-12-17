// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EnhancedAttributeSet.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeEnhancedAttributeSet() {}

// ********** Begin Cross Module References ********************************************************
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
SIMULATION_API UClass* Z_Construct_UClass_UEnhancedAttributeSet();
SIMULATION_API UClass* Z_Construct_UClass_UEnhancedAttributeSet_NoRegister();
UPackage* Z_Construct_UPackage__Script_Simulation();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UEnhancedAttributeSet ****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UEnhancedAttributeSet;
UClass* UEnhancedAttributeSet::GetPrivateStaticClass()
{
	using TClass = UEnhancedAttributeSet;
	if (!Z_Registration_Info_UClass_UEnhancedAttributeSet.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("EnhancedAttributeSet"),
			Z_Registration_Info_UClass_UEnhancedAttributeSet.InnerSingleton,
			StaticRegisterNativesUEnhancedAttributeSet,
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
	return Z_Registration_Info_UClass_UEnhancedAttributeSet.InnerSingleton;
}
UClass* Z_Construct_UClass_UEnhancedAttributeSet_NoRegister()
{
	return UEnhancedAttributeSet::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UEnhancedAttributeSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "EnhancedAttributeSet.h" },
		{ "ModuleRelativePath", "Public/EnhancedAttributeSet.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UEnhancedAttributeSet constinit property declarations ********************
// ********** End Class UEnhancedAttributeSet constinit property declarations **********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnhancedAttributeSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UEnhancedAttributeSet_Statics
UObject* (*const Z_Construct_UClass_UEnhancedAttributeSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAttributeSet,
	(UObject* (*)())Z_Construct_UPackage__Script_Simulation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedAttributeSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnhancedAttributeSet_Statics::ClassParams = {
	&UEnhancedAttributeSet::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedAttributeSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnhancedAttributeSet_Statics::Class_MetaDataParams)
};
void UEnhancedAttributeSet::StaticRegisterNativesUEnhancedAttributeSet()
{
}
UClass* Z_Construct_UClass_UEnhancedAttributeSet()
{
	if (!Z_Registration_Info_UClass_UEnhancedAttributeSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnhancedAttributeSet.OuterSingleton, Z_Construct_UClass_UEnhancedAttributeSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnhancedAttributeSet.OuterSingleton;
}
UEnhancedAttributeSet::UEnhancedAttributeSet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UEnhancedAttributeSet);
UEnhancedAttributeSet::~UEnhancedAttributeSet() {}
// ********** End Class UEnhancedAttributeSet ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_EnhancedAttributeSet_h__Script_Simulation_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEnhancedAttributeSet, UEnhancedAttributeSet::StaticClass, TEXT("UEnhancedAttributeSet"), &Z_Registration_Info_UClass_UEnhancedAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnhancedAttributeSet), 1009779582U) },
	};
}; // Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_EnhancedAttributeSet_h__Script_Simulation_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_EnhancedAttributeSet_h__Script_Simulation_1583649648{
	TEXT("/Script/Simulation"),
	Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_EnhancedAttributeSet_h__Script_Simulation_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_EnhancedAttributeSet_h__Script_Simulation_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
