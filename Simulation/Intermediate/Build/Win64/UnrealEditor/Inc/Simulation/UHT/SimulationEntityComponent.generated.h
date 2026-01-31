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
class AController;
class UClass;
class UDamageType;
class UEntityAttributeSet;
class UPrimitiveComponent;
class USimulationEntityComponent;
enum class EGameplayEffectReplicationMode : uint8;
struct FHitResult;

// ********** Begin Delegate FOnAttributeAdded *****************************************************
#define FID_Github_Simulation_Simulation_Source_Simulation_Public_SimulationEntityComponent_h_11_DELEGATE \
SIMULATION_API void FOnAttributeAdded_DelegateWrapper(const FMulticastScriptDelegate& OnAttributeAdded, USimulationEntityComponent* EntityComponent, UEntityAttributeSet* AttributeSet);


// ********** End Delegate FOnAttributeAdded *******************************************************

// ********** Begin Class USimulationEntityComponent ***********************************************
#define FID_Github_Simulation_Simulation_Source_Simulation_Public_SimulationEntityComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsSimulationEntity); \
	DECLARE_FUNCTION(execOnRep_EntityName); \
	DECLARE_FUNCTION(execGetDefaultReplicationMode); \
	DECLARE_FUNCTION(execTakeRadialDamage); \
	DECLARE_FUNCTION(execTakePointDamage); \
	DECLARE_FUNCTION(execTakeAnyDamage); \
	DECLARE_FUNCTION(execAddAttributeSetsByClass); \
	DECLARE_FUNCTION(execAddAttributeSetByClass); \
	DECLARE_FUNCTION(execAddAttributeSets); \
	DECLARE_FUNCTION(execAddAttributeSet); \
	DECLARE_FUNCTION(execGetEntityName);


struct Z_Construct_UClass_USimulationEntityComponent_Statics;
SIMULATION_API UClass* Z_Construct_UClass_USimulationEntityComponent_NoRegister();

#define FID_Github_Simulation_Simulation_Source_Simulation_Public_SimulationEntityComponent_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSimulationEntityComponent(); \
	friend struct ::Z_Construct_UClass_USimulationEntityComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SIMULATION_API UClass* ::Z_Construct_UClass_USimulationEntityComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(USimulationEntityComponent, UAbilitySystemComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Simulation"), Z_Construct_UClass_USimulationEntityComponent_NoRegister) \
	DECLARE_SERIALIZER(USimulationEntityComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		EntityName=NETFIELD_REP_START, \
		NETFIELD_REP_END=EntityName	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API)


#define FID_Github_Simulation_Simulation_Source_Simulation_Public_SimulationEntityComponent_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USimulationEntityComponent(USimulationEntityComponent&&) = delete; \
	USimulationEntityComponent(const USimulationEntityComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USimulationEntityComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USimulationEntityComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USimulationEntityComponent) \
	NO_API virtual ~USimulationEntityComponent();


#define FID_Github_Simulation_Simulation_Source_Simulation_Public_SimulationEntityComponent_h_16_PROLOG
#define FID_Github_Simulation_Simulation_Source_Simulation_Public_SimulationEntityComponent_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_Simulation_Simulation_Source_Simulation_Public_SimulationEntityComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Github_Simulation_Simulation_Source_Simulation_Public_SimulationEntityComponent_h_19_INCLASS_NO_PURE_DECLS \
	FID_Github_Simulation_Simulation_Source_Simulation_Public_SimulationEntityComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USimulationEntityComponent;

// ********** End Class USimulationEntityComponent *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_Simulation_Simulation_Source_Simulation_Public_SimulationEntityComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
