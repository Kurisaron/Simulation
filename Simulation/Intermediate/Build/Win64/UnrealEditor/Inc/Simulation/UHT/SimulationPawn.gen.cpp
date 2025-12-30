// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimulationPawn.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSimulationPawn() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APawn();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
SIMULATION_API UClass* Z_Construct_UClass_ASimulationPawn();
SIMULATION_API UClass* Z_Construct_UClass_ASimulationPawn_NoRegister();
SIMULATION_API UClass* Z_Construct_UClass_USimulationEntityComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Simulation();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ASimulationPawn **********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ASimulationPawn;
UClass* ASimulationPawn::GetPrivateStaticClass()
{
	using TClass = ASimulationPawn;
	if (!Z_Registration_Info_UClass_ASimulationPawn.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SimulationPawn"),
			Z_Registration_Info_UClass_ASimulationPawn.InnerSingleton,
			StaticRegisterNativesASimulationPawn,
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
	return Z_Registration_Info_UClass_ASimulationPawn.InnerSingleton;
}
UClass* Z_Construct_UClass_ASimulationPawn_NoRegister()
{
	return ASimulationPawn::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ASimulationPawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SimulationPawn.h" },
		{ "ModuleRelativePath", "Public/SimulationPawn.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntityComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Simulation Entity" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SimulationPawn.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class ASimulationPawn constinit property declarations **************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EntityComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ASimulationPawn constinit property declarations ****************************
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASimulationPawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ASimulationPawn_Statics

// ********** Begin Class ASimulationPawn Property Definitions *************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASimulationPawn_Statics::NewProp_EntityComponent = { "EntityComponent", nullptr, (EPropertyFlags)0x004000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASimulationPawn, EntityComponent), Z_Construct_UClass_USimulationEntityComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntityComponent_MetaData), NewProp_EntityComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASimulationPawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimulationPawn_Statics::NewProp_EntityComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASimulationPawn_Statics::PropPointers) < 2048);
// ********** End Class ASimulationPawn Property Definitions ***************************************
UObject* (*const Z_Construct_UClass_ASimulationPawn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_Simulation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASimulationPawn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASimulationPawn_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(ASimulationPawn, IAbilitySystemInterface), false },  // 2722098046
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASimulationPawn_Statics::ClassParams = {
	&ASimulationPawn::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ASimulationPawn_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ASimulationPawn_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASimulationPawn_Statics::Class_MetaDataParams), Z_Construct_UClass_ASimulationPawn_Statics::Class_MetaDataParams)
};
void ASimulationPawn::StaticRegisterNativesASimulationPawn()
{
}
UClass* Z_Construct_UClass_ASimulationPawn()
{
	if (!Z_Registration_Info_UClass_ASimulationPawn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASimulationPawn.OuterSingleton, Z_Construct_UClass_ASimulationPawn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASimulationPawn.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ASimulationPawn);
ASimulationPawn::~ASimulationPawn() {}
// ********** End Class ASimulationPawn ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_SimulationPawn_h__Script_Simulation_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASimulationPawn, ASimulationPawn::StaticClass, TEXT("ASimulationPawn"), &Z_Registration_Info_UClass_ASimulationPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASimulationPawn), 615836735U) },
	};
}; // Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_SimulationPawn_h__Script_Simulation_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_SimulationPawn_h__Script_Simulation_3779222059{
	TEXT("/Script/Simulation"),
	Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_SimulationPawn_h__Script_Simulation_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_SimulationPawn_h__Script_Simulation_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
