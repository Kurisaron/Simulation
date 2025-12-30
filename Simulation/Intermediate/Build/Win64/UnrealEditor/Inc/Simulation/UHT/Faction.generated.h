// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Faction.h"

#ifdef SIMULATION_Faction_generated_h
#error "Faction.generated.h already included, missing '#pragma once' in Faction.h"
#endif
#define SIMULATION_Faction_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UFaction *****************************************************************
struct Z_Construct_UClass_UFaction_Statics;
SIMULATION_API UClass* Z_Construct_UClass_UFaction_NoRegister();

#define FID_Github_Simulation_Simulation_Source_Simulation_Public_Faction_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFaction(); \
	friend struct ::Z_Construct_UClass_UFaction_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SIMULATION_API UClass* ::Z_Construct_UClass_UFaction_NoRegister(); \
public: \
	DECLARE_CLASS2(UFaction, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Simulation"), Z_Construct_UClass_UFaction_NoRegister) \
	DECLARE_SERIALIZER(UFaction)


#define FID_Github_Simulation_Simulation_Source_Simulation_Public_Faction_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFaction(UFaction&&) = delete; \
	UFaction(const UFaction&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFaction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFaction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFaction) \
	NO_API virtual ~UFaction();


#define FID_Github_Simulation_Simulation_Source_Simulation_Public_Faction_h_12_PROLOG
#define FID_Github_Simulation_Simulation_Source_Simulation_Public_Faction_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_Simulation_Simulation_Source_Simulation_Public_Faction_h_15_INCLASS_NO_PURE_DECLS \
	FID_Github_Simulation_Simulation_Source_Simulation_Public_Faction_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFaction;

// ********** End Class UFaction *******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_Simulation_Simulation_Source_Simulation_Public_Faction_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
