// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SimulationAIController.h"

#ifdef SIMULATION_SimulationAIController_generated_h
#error "SimulationAIController.generated.h already included, missing '#pragma once' in SimulationAIController.h"
#endif
#define SIMULATION_SimulationAIController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ASimulationAIController **************************************************
struct Z_Construct_UClass_ASimulationAIController_Statics;
SIMULATION_API UClass* Z_Construct_UClass_ASimulationAIController_NoRegister();

#define FID_Github_Simulation_Simulation_Source_Simulation_Public_SimulationAIController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASimulationAIController(); \
	friend struct ::Z_Construct_UClass_ASimulationAIController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SIMULATION_API UClass* ::Z_Construct_UClass_ASimulationAIController_NoRegister(); \
public: \
	DECLARE_CLASS2(ASimulationAIController, AAIController, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Simulation"), Z_Construct_UClass_ASimulationAIController_NoRegister) \
	DECLARE_SERIALIZER(ASimulationAIController)


#define FID_Github_Simulation_Simulation_Source_Simulation_Public_SimulationAIController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASimulationAIController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ASimulationAIController(ASimulationAIController&&) = delete; \
	ASimulationAIController(const ASimulationAIController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASimulationAIController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASimulationAIController); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASimulationAIController) \
	NO_API virtual ~ASimulationAIController();


#define FID_Github_Simulation_Simulation_Source_Simulation_Public_SimulationAIController_h_12_PROLOG
#define FID_Github_Simulation_Simulation_Source_Simulation_Public_SimulationAIController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_Simulation_Simulation_Source_Simulation_Public_SimulationAIController_h_15_INCLASS_NO_PURE_DECLS \
	FID_Github_Simulation_Simulation_Source_Simulation_Public_SimulationAIController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ASimulationAIController;

// ********** End Class ASimulationAIController ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_Simulation_Simulation_Source_Simulation_Public_SimulationAIController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
