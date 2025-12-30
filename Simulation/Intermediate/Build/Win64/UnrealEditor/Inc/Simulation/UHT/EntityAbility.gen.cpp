// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EntityAbility.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeEntityAbility() {}

// ********** Begin Cross Module References ********************************************************
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
SIMULATION_API UClass* Z_Construct_UClass_UEntityAbility();
SIMULATION_API UClass* Z_Construct_UClass_UEntityAbility_NoRegister();
UPackage* Z_Construct_UPackage__Script_Simulation();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UEntityAbility ***********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UEntityAbility;
UClass* UEntityAbility::GetPrivateStaticClass()
{
	using TClass = UEntityAbility;
	if (!Z_Registration_Info_UClass_UEntityAbility.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("EntityAbility"),
			Z_Registration_Info_UClass_UEntityAbility.InnerSingleton,
			StaticRegisterNativesUEntityAbility,
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
	return Z_Registration_Info_UClass_UEntityAbility.InnerSingleton;
}
UClass* Z_Construct_UClass_UEntityAbility_NoRegister()
{
	return UEntityAbility::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UEntityAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "EntityAbility.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EntityAbility.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Entity Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Used for lookup or to find matches between abilities of similar types */" },
#endif
		{ "ModuleRelativePath", "Public/EntityAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Used for lookup or to find matches between abilities of similar types" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UEntityAbility constinit property declarations ***************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UEntityAbility constinit property declarations *****************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEntityAbility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UEntityAbility_Statics

// ********** Begin Class UEntityAbility Property Definitions **************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEntityAbility_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEntityAbility, ID), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ID_MetaData), NewProp_ID_MetaData) }; // 517357616
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEntityAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEntityAbility_Statics::NewProp_ID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEntityAbility_Statics::PropPointers) < 2048);
// ********** End Class UEntityAbility Property Definitions ****************************************
UObject* (*const Z_Construct_UClass_UEntityAbility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_Simulation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEntityAbility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEntityAbility_Statics::ClassParams = {
	&UEntityAbility::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEntityAbility_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEntityAbility_Statics::PropPointers),
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEntityAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UEntityAbility_Statics::Class_MetaDataParams)
};
void UEntityAbility::StaticRegisterNativesUEntityAbility()
{
}
UClass* Z_Construct_UClass_UEntityAbility()
{
	if (!Z_Registration_Info_UClass_UEntityAbility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEntityAbility.OuterSingleton, Z_Construct_UClass_UEntityAbility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEntityAbility.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UEntityAbility);
UEntityAbility::~UEntityAbility() {}
// ********** End Class UEntityAbility *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_EntityAbility_h__Script_Simulation_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEntityAbility, UEntityAbility::StaticClass, TEXT("UEntityAbility"), &Z_Registration_Info_UClass_UEntityAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEntityAbility), 2323018634U) },
	};
}; // Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_EntityAbility_h__Script_Simulation_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_EntityAbility_h__Script_Simulation_3917183958{
	TEXT("/Script/Simulation"),
	Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_EntityAbility_h__Script_Simulation_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_EntityAbility_h__Script_Simulation_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
