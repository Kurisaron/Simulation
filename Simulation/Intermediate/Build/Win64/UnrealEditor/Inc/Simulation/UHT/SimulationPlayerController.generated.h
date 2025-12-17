// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SimulationPlayerController.h"

#ifdef SIMULATION_SimulationPlayerController_generated_h
#error "SimulationPlayerController.generated.h already included, missing '#pragma once' in SimulationPlayerController.h"
#endif
#define SIMULATION_SimulationPlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ASimulationPlayerController **********************************************
struct Z_Construct_UClass_ASimulationPlayerController_Statics;
SIMULATION_API UClass* Z_Construct_UClass_ASimulationPlayerController_NoRegister();

#define FID_Github_Simulation_Simulation_Source_Simulation_Public_SimulationPlayerController_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASimulationPlayerController(); \
	friend struct ::Z_Construct_UClass_ASimulationPlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SIMULATION_API UClass* ::Z_Construct_UClass_ASimulationPlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(ASimulationPlayerController, APlayerController, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Simulation"), Z_Construct_UClass_ASimulationPlayerController_NoRegister) \
	DECLARE_SERIALIZER(ASimulationPlayerController)


#define FID_Github_Simulation_Simulation_Source_Simulation_Public_SimulationPlayerController_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ASimulationPlayerController(ASimulationPlayerController&&) = delete; \
	ASimulationPlayerController(const ASimulationPlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASimulationPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASimulationPlayerController); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASimulationPlayerController) \
	NO_API virtual ~ASimulationPlayerController();


#define FID_Github_Simulation_Simulation_Source_Simulation_Public_SimulationPlayerController_h_13_PROLOG
#define FID_Github_Simulation_Simulation_Source_Simulation_Public_SimulationPlayerController_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_Simulation_Simulation_Source_Simulation_Public_SimulationPlayerController_h_16_INCLASS_NO_PURE_DECLS \
	FID_Github_Simulation_Simulation_Source_Simulation_Public_SimulationPlayerController_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ASimulationPlayerController;

// ********** End Class ASimulationPlayerController ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_Simulation_Simulation_Source_Simulation_Public_SimulationPlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
