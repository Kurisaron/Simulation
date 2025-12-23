// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimulationAIController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSimulationAIController() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
SIMULATION_API UClass* Z_Construct_UClass_ASimulationAIController();
SIMULATION_API UClass* Z_Construct_UClass_ASimulationAIController_NoRegister();
UPackage* Z_Construct_UPackage__Script_Simulation();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ASimulationAIController **************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ASimulationAIController;
UClass* ASimulationAIController::GetPrivateStaticClass()
{
	using TClass = ASimulationAIController;
	if (!Z_Registration_Info_UClass_ASimulationAIController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SimulationAIController"),
			Z_Registration_Info_UClass_ASimulationAIController.InnerSingleton,
			StaticRegisterNativesASimulationAIController,
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
	return Z_Registration_Info_UClass_ASimulationAIController.InnerSingleton;
}
UClass* Z_Construct_UClass_ASimulationAIController_NoRegister()
{
	return ASimulationAIController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ASimulationAIController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * AI Controller used by simulation entity NPCs\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "SimulationAIController.h" },
		{ "ModuleRelativePath", "Public/SimulationAIController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AI Controller used by simulation entity NPCs" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class ASimulationAIController constinit property declarations ******************
// ********** End Class ASimulationAIController constinit property declarations ********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASimulationAIController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ASimulationAIController_Statics
UObject* (*const Z_Construct_UClass_ASimulationAIController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_Simulation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASimulationAIController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASimulationAIController_Statics::ClassParams = {
	&ASimulationAIController::StaticClass,
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
	0x009002A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASimulationAIController_Statics::Class_MetaDataParams), Z_Construct_UClass_ASimulationAIController_Statics::Class_MetaDataParams)
};
void ASimulationAIController::StaticRegisterNativesASimulationAIController()
{
}
UClass* Z_Construct_UClass_ASimulationAIController()
{
	if (!Z_Registration_Info_UClass_ASimulationAIController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASimulationAIController.OuterSingleton, Z_Construct_UClass_ASimulationAIController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASimulationAIController.OuterSingleton;
}
ASimulationAIController::ASimulationAIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ASimulationAIController);
ASimulationAIController::~ASimulationAIController() {}
// ********** End Class ASimulationAIController ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_SimulationAIController_h__Script_Simulation_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASimulationAIController, ASimulationAIController::StaticClass, TEXT("ASimulationAIController"), &Z_Registration_Info_UClass_ASimulationAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASimulationAIController), 819090436U) },
	};
}; // Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_SimulationAIController_h__Script_Simulation_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_SimulationAIController_h__Script_Simulation_2076879492{
	TEXT("/Script/Simulation"),
	Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_SimulationAIController_h__Script_Simulation_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_SimulationAIController_h__Script_Simulation_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
