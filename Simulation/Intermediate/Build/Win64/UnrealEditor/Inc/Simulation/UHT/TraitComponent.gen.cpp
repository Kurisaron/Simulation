// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TraitComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeTraitComponent() {}

// ********** Begin Cross Module References ********************************************************
SIMULATION_API UClass* Z_Construct_UClass_UEntityComponent();
SIMULATION_API UClass* Z_Construct_UClass_UTraitComponent();
SIMULATION_API UClass* Z_Construct_UClass_UTraitComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Simulation();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UTraitComponent **********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UTraitComponent;
UClass* UTraitComponent::GetPrivateStaticClass()
{
	using TClass = UTraitComponent;
	if (!Z_Registration_Info_UClass_UTraitComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("TraitComponent"),
			Z_Registration_Info_UClass_UTraitComponent.InnerSingleton,
			StaticRegisterNativesUTraitComponent,
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
	return Z_Registration_Info_UClass_UTraitComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UTraitComponent_NoRegister()
{
	return UTraitComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UTraitComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "TraitComponent.h" },
		{ "ModuleRelativePath", "Public/TraitComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UTraitComponent constinit property declarations **************************
// ********** End Class UTraitComponent constinit property declarations ****************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTraitComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UTraitComponent_Statics
UObject* (*const Z_Construct_UClass_UTraitComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEntityComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Simulation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTraitComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTraitComponent_Statics::ClassParams = {
	&UTraitComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTraitComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UTraitComponent_Statics::Class_MetaDataParams)
};
void UTraitComponent::StaticRegisterNativesUTraitComponent()
{
}
UClass* Z_Construct_UClass_UTraitComponent()
{
	if (!Z_Registration_Info_UClass_UTraitComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTraitComponent.OuterSingleton, Z_Construct_UClass_UTraitComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTraitComponent.OuterSingleton;
}
UTraitComponent::UTraitComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UTraitComponent);
UTraitComponent::~UTraitComponent() {}
// ********** End Class UTraitComponent ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_TraitComponent_h__Script_Simulation_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTraitComponent, UTraitComponent::StaticClass, TEXT("UTraitComponent"), &Z_Registration_Info_UClass_UTraitComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTraitComponent), 269945141U) },
	};
}; // Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_TraitComponent_h__Script_Simulation_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_TraitComponent_h__Script_Simulation_2836821674{
	TEXT("/Script/Simulation"),
	Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_TraitComponent_h__Script_Simulation_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_TraitComponent_h__Script_Simulation_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
