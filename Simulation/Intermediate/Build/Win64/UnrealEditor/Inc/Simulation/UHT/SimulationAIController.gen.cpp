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
AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionComponent_NoRegister();
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
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * AI Controller used by simulation entity NPCs\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "SimulationAIController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SimulationAIController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AI Controller used by simulation entity NPCs" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AI_Perception_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Simulation AI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SimulationAIController.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class ASimulationAIController constinit property declarations ******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AI_Perception;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ASimulationAIController constinit property declarations ********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASimulationAIController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ASimulationAIController_Statics

// ********** Begin Class ASimulationAIController Property Definitions *****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASimulationAIController_Statics::NewProp_AI_Perception = { "AI_Perception", nullptr, (EPropertyFlags)0x004000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASimulationAIController, AI_Perception), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AI_Perception_MetaData), NewProp_AI_Perception_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASimulationAIController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimulationAIController_Statics::NewProp_AI_Perception,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASimulationAIController_Statics::PropPointers) < 2048);
// ********** End Class ASimulationAIController Property Definitions *******************************
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
	Z_Construct_UClass_ASimulationAIController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ASimulationAIController_Statics::PropPointers),
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
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ASimulationAIController);
ASimulationAIController::~ASimulationAIController() {}
// ********** End Class ASimulationAIController ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_SimulationAIController_h__Script_Simulation_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASimulationAIController, ASimulationAIController::StaticClass, TEXT("ASimulationAIController"), &Z_Registration_Info_UClass_ASimulationAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASimulationAIController), 2772067451U) },
	};
}; // Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_SimulationAIController_h__Script_Simulation_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_SimulationAIController_h__Script_Simulation_2443759628{
	TEXT("/Script/Simulation"),
	Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_SimulationAIController_h__Script_Simulation_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_SimulationAIController_h__Script_Simulation_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
