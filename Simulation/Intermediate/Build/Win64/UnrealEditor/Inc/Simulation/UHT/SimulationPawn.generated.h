// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SimulationPawn.h"

#ifdef SIMULATION_SimulationPawn_generated_h
#error "SimulationPawn.generated.h already included, missing '#pragma once' in SimulationPawn.h"
#endif
#define SIMULATION_SimulationPawn_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ASimulationPawn **********************************************************
struct Z_Construct_UClass_ASimulationPawn_Statics;
SIMULATION_API UClass* Z_Construct_UClass_ASimulationPawn_NoRegister();

#define FID_Github_Simulation_Simulation_Source_Simulation_Public_SimulationPawn_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASimulationPawn(); \
	friend struct ::Z_Construct_UClass_ASimulationPawn_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SIMULATION_API UClass* ::Z_Construct_UClass_ASimulationPawn_NoRegister(); \
public: \
	DECLARE_CLASS2(ASimulationPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Simulation"), Z_Construct_UClass_ASimulationPawn_NoRegister) \
	DECLARE_SERIALIZER(ASimulationPawn) \
	virtual UObject* _getUObject() const override { return const_cast<ASimulationPawn*>(this); }


#define FID_Github_Simulation_Simulation_Source_Simulation_Public_SimulationPawn_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ASimulationPawn(ASimulationPawn&&) = delete; \
	ASimulationPawn(const ASimulationPawn&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASimulationPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASimulationPawn); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASimulationPawn) \
	NO_API virtual ~ASimulationPawn();


#define FID_Github_Simulation_Simulation_Source_Simulation_Public_SimulationPawn_h_12_PROLOG
#define FID_Github_Simulation_Simulation_Source_Simulation_Public_SimulationPawn_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_Simulation_Simulation_Source_Simulation_Public_SimulationPawn_h_17_INCLASS_NO_PURE_DECLS \
	FID_Github_Simulation_Simulation_Source_Simulation_Public_SimulationPawn_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ASimulationPawn;

// ********** End Class ASimulationPawn ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_Simulation_Simulation_Source_Simulation_Public_SimulationPawn_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
