// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SimulationPhysicalMaterial.h"

#ifdef SIMULATION_SimulationPhysicalMaterial_generated_h
#error "SimulationPhysicalMaterial.generated.h already included, missing '#pragma once' in SimulationPhysicalMaterial.h"
#endif
#define SIMULATION_SimulationPhysicalMaterial_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USimulationPhysicalMaterial **********************************************
#define FID_Github_Simulation_Simulation_Source_Simulation_Public_SimulationPhysicalMaterial_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetHeatResistance);


struct Z_Construct_UClass_USimulationPhysicalMaterial_Statics;
SIMULATION_API UClass* Z_Construct_UClass_USimulationPhysicalMaterial_NoRegister();

#define FID_Github_Simulation_Simulation_Source_Simulation_Public_SimulationPhysicalMaterial_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSimulationPhysicalMaterial(); \
	friend struct ::Z_Construct_UClass_USimulationPhysicalMaterial_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SIMULATION_API UClass* ::Z_Construct_UClass_USimulationPhysicalMaterial_NoRegister(); \
public: \
	DECLARE_CLASS2(USimulationPhysicalMaterial, UPhysicalMaterial, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Simulation"), Z_Construct_UClass_USimulationPhysicalMaterial_NoRegister) \
	DECLARE_SERIALIZER(USimulationPhysicalMaterial)


#define FID_Github_Simulation_Simulation_Source_Simulation_Public_SimulationPhysicalMaterial_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USimulationPhysicalMaterial(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USimulationPhysicalMaterial(USimulationPhysicalMaterial&&) = delete; \
	USimulationPhysicalMaterial(const USimulationPhysicalMaterial&) = delete; \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USimulationPhysicalMaterial); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USimulationPhysicalMaterial) \
	NO_API virtual ~USimulationPhysicalMaterial();


#define FID_Github_Simulation_Simulation_Source_Simulation_Public_SimulationPhysicalMaterial_h_12_PROLOG
#define FID_Github_Simulation_Simulation_Source_Simulation_Public_SimulationPhysicalMaterial_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_Simulation_Simulation_Source_Simulation_Public_SimulationPhysicalMaterial_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Github_Simulation_Simulation_Source_Simulation_Public_SimulationPhysicalMaterial_h_15_INCLASS_NO_PURE_DECLS \
	FID_Github_Simulation_Simulation_Source_Simulation_Public_SimulationPhysicalMaterial_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USimulationPhysicalMaterial;

// ********** End Class USimulationPhysicalMaterial ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_Simulation_Simulation_Source_Simulation_Public_SimulationPhysicalMaterial_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
