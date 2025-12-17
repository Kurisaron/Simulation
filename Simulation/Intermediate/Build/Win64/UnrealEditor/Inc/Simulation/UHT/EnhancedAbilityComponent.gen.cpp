// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EnhancedAbilityComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeEnhancedAbilityComponent() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent();
SIMULATION_API UClass* Z_Construct_UClass_UEnhancedAbilityComponent();
SIMULATION_API UClass* Z_Construct_UClass_UEnhancedAbilityComponent_NoRegister();
SIMULATION_API UClass* Z_Construct_UClass_UEnhancedAttributeSet_NoRegister();
UPackage* Z_Construct_UPackage__Script_Simulation();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UEnhancedAbilityComponent ************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UEnhancedAbilityComponent;
UClass* UEnhancedAbilityComponent::GetPrivateStaticClass()
{
	using TClass = UEnhancedAbilityComponent;
	if (!Z_Registration_Info_UClass_UEnhancedAbilityComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("EnhancedAbilityComponent"),
			Z_Registration_Info_UClass_UEnhancedAbilityComponent.InnerSingleton,
			StaticRegisterNativesUEnhancedAbilityComponent,
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
	return Z_Registration_Info_UClass_UEnhancedAbilityComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UEnhancedAbilityComponent_NoRegister()
{
	return UEnhancedAbilityComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UEnhancedAbilityComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Attribute Test Object LOD Lighting Transform Sockets TextureStreaming Object LOD Lighting Transform Sockets TextureStreaming" },
		{ "IncludePath", "EnhancedAbilityComponent.h" },
		{ "ModuleRelativePath", "Public/EnhancedAbilityComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartingAttributeSets_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Public/EnhancedAbilityComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UEnhancedAbilityComponent constinit property declarations ****************
	static const UECodeGen_Private::FClassPropertyParams NewProp_StartingAttributeSets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StartingAttributeSets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UEnhancedAbilityComponent constinit property declarations ******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnhancedAbilityComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UEnhancedAbilityComponent_Statics

// ********** Begin Class UEnhancedAbilityComponent Property Definitions ***************************
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEnhancedAbilityComponent_Statics::NewProp_StartingAttributeSets_Inner = { "StartingAttributeSets", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UEnhancedAttributeSet_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEnhancedAbilityComponent_Statics::NewProp_StartingAttributeSets = { "StartingAttributeSets", nullptr, (EPropertyFlags)0x0044000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnhancedAbilityComponent, StartingAttributeSets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartingAttributeSets_MetaData), NewProp_StartingAttributeSets_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnhancedAbilityComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedAbilityComponent_Statics::NewProp_StartingAttributeSets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedAbilityComponent_Statics::NewProp_StartingAttributeSets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedAbilityComponent_Statics::PropPointers) < 2048);
// ********** End Class UEnhancedAbilityComponent Property Definitions *****************************
UObject* (*const Z_Construct_UClass_UEnhancedAbilityComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilitySystemComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Simulation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedAbilityComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnhancedAbilityComponent_Statics::ClassParams = {
	&UEnhancedAbilityComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEnhancedAbilityComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedAbilityComponent_Statics::PropPointers),
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedAbilityComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnhancedAbilityComponent_Statics::Class_MetaDataParams)
};
void UEnhancedAbilityComponent::StaticRegisterNativesUEnhancedAbilityComponent()
{
}
UClass* Z_Construct_UClass_UEnhancedAbilityComponent()
{
	if (!Z_Registration_Info_UClass_UEnhancedAbilityComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnhancedAbilityComponent.OuterSingleton, Z_Construct_UClass_UEnhancedAbilityComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnhancedAbilityComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UEnhancedAbilityComponent);
UEnhancedAbilityComponent::~UEnhancedAbilityComponent() {}
// ********** End Class UEnhancedAbilityComponent **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_EnhancedAbilityComponent_h__Script_Simulation_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEnhancedAbilityComponent, UEnhancedAbilityComponent::StaticClass, TEXT("UEnhancedAbilityComponent"), &Z_Registration_Info_UClass_UEnhancedAbilityComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnhancedAbilityComponent), 4147317302U) },
	};
}; // Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_EnhancedAbilityComponent_h__Script_Simulation_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_EnhancedAbilityComponent_h__Script_Simulation_2505110429{
	TEXT("/Script/Simulation"),
	Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_EnhancedAbilityComponent_h__Script_Simulation_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_EnhancedAbilityComponent_h__Script_Simulation_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
