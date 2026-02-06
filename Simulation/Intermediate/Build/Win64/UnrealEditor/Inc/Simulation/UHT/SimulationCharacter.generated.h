// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SimulationCharacter.h"

#ifdef SIMULATION_SimulationCharacter_generated_h
#error "SimulationCharacter.generated.h already included, missing '#pragma once' in SimulationCharacter.h"
#endif
#define SIMULATION_SimulationCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ASimulationCharacter *****************************************************
#define FID_Github_Simulation_Simulation_Source_Simulation_Public_SimulationCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execMove);


struct Z_Construct_UClass_ASimulationCharacter_Statics;
SIMULATION_API UClass* Z_Construct_UClass_ASimulationCharacter_NoRegister();

#define FID_Github_Simulation_Simulation_Source_Simulation_Public_SimulationCharacter_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASimulationCharacter(); \
	friend struct ::Z_Construct_UClass_ASimulationCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SIMULATION_API UClass* ::Z_Construct_UClass_ASimulationCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(ASimulationCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Simulation"), Z_Construct_UClass_ASimulationCharacter_NoRegister) \
	DECLARE_SERIALIZER(ASimulationCharacter)


#define FID_Github_Simulation_Simulation_Source_Simulation_Public_SimulationCharacter_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ASimulationCharacter(ASimulationCharacter&&) = delete; \
	ASimulationCharacter(const ASimulationCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASimulationCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASimulationCharacter); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASimulationCharacter) \
	NO_API virtual ~ASimulationCharacter();


#define FID_Github_Simulation_Simulation_Source_Simulation_Public_SimulationCharacter_h_11_PROLOG
#define FID_Github_Simulation_Simulation_Source_Simulation_Public_SimulationCharacter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_Simulation_Simulation_Source_Simulation_Public_SimulationCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Github_Simulation_Simulation_Source_Simulation_Public_SimulationCharacter_h_15_INCLASS_NO_PURE_DECLS \
	FID_Github_Simulation_Simulation_Source_Simulation_Public_SimulationCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ASimulationCharacter;

// ********** End Class ASimulationCharacter *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_Simulation_Simulation_Source_Simulation_Public_SimulationCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
