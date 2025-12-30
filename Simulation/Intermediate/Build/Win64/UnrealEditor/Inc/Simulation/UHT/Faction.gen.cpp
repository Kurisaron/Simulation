// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Faction.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeFaction() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
SIMULATION_API UClass* Z_Construct_UClass_UFaction();
SIMULATION_API UClass* Z_Construct_UClass_UFaction_NoRegister();
UPackage* Z_Construct_UPackage__Script_Simulation();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UFaction *****************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UFaction;
UClass* UFaction::GetPrivateStaticClass()
{
	using TClass = UFaction;
	if (!Z_Registration_Info_UClass_UFaction.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("Faction"),
			Z_Registration_Info_UClass_UFaction.InnerSingleton,
			StaticRegisterNativesUFaction,
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
	return Z_Registration_Info_UClass_UFaction.InnerSingleton;
}
UClass* Z_Construct_UClass_UFaction_NoRegister()
{
	return UFaction::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UFaction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Faction.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Faction.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FactionName_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Faction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Name of the faction */" },
#endif
		{ "ModuleRelativePath", "Public/Faction.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of the faction" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UFaction constinit property declarations *********************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_FactionName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UFaction constinit property declarations ***********************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFaction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UFaction_Statics

// ********** Begin Class UFaction Property Definitions ********************************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UFaction_Statics::NewProp_FactionName = { "FactionName", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFaction, FactionName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FactionName_MetaData), NewProp_FactionName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFaction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFaction_Statics::NewProp_FactionName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFaction_Statics::PropPointers) < 2048);
// ********** End Class UFaction Property Definitions **********************************************
UObject* (*const Z_Construct_UClass_UFaction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Simulation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFaction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFaction_Statics::ClassParams = {
	&UFaction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UFaction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UFaction_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFaction_Statics::Class_MetaDataParams), Z_Construct_UClass_UFaction_Statics::Class_MetaDataParams)
};
void UFaction::StaticRegisterNativesUFaction()
{
}
UClass* Z_Construct_UClass_UFaction()
{
	if (!Z_Registration_Info_UClass_UFaction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFaction.OuterSingleton, Z_Construct_UClass_UFaction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFaction.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UFaction);
UFaction::~UFaction() {}
// ********** End Class UFaction *******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_Faction_h__Script_Simulation_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFaction, UFaction::StaticClass, TEXT("UFaction"), &Z_Registration_Info_UClass_UFaction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFaction), 812257429U) },
	};
}; // Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_Faction_h__Script_Simulation_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_Faction_h__Script_Simulation_2772361615{
	TEXT("/Script/Simulation"),
	Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_Faction_h__Script_Simulation_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_Faction_h__Script_Simulation_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
