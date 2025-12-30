// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SimulationEntityComponent.h"

#ifdef SIMULATION_SimulationEntityComponent_generated_h
#error "SimulationEntityComponent.generated.h already included, missing '#pragma once' in SimulationEntityComponent.h"
#endif
#define SIMULATION_SimulationEntityComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class USimulationEntityComponent;

// ********** Begin Class USimulationEntityComponent ***********************************************
#define FID_Github_Simulation_Simulation_Source_Simulation_Public_SimulationEntityComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsSimulationEntity);


struct Z_Construct_UClass_USimulationEntityComponent_Statics;
SIMULATION_API UClass* Z_Construct_UClass_USimulationEntityComponent_NoRegister();

#define FID_Github_Simulation_Simulation_Source_Simulation_Public_SimulationEntityComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSimulationEntityComponent(); \
	friend struct ::Z_Construct_UClass_USimulationEntityComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SIMULATION_API UClass* ::Z_Construct_UClass_USimulationEntityComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(USimulationEntityComponent, UAbilitySystemComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Simulation"), Z_Construct_UClass_USimulationEntityComponent_NoRegister) \
	DECLARE_SERIALIZER(USimulationEntityComponent)


#define FID_Github_Simulation_Simulation_Source_Simulation_Public_SimulationEntityComponent_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USimulationEntityComponent(USimulationEntityComponent&&) = delete; \
	USimulationEntityComponent(const USimulationEntityComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USimulationEntityComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USimulationEntityComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USimulationEntityComponent) \
	NO_API virtual ~USimulationEntityComponent();


#define FID_Github_Simulation_Simulation_Source_Simulation_Public_SimulationEntityComponent_h_14_PROLOG
#define FID_Github_Simulation_Simulation_Source_Simulation_Public_SimulationEntityComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_Simulation_Simulation_Source_Simulation_Public_SimulationEntityComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Github_Simulation_Simulation_Source_Simulation_Public_SimulationEntityComponent_h_17_INCLASS_NO_PURE_DECLS \
	FID_Github_Simulation_Simulation_Source_Simulation_Public_SimulationEntityComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USimulationEntityComponent;

// ********** End Class USimulationEntityComponent *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_Simulation_Simulation_Source_Simulation_Public_SimulationEntityComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
