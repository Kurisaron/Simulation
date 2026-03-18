// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EntityComponent.h"

#ifdef SIMULATION_EntityComponent_generated_h
#error "EntityComponent.generated.h already included, missing '#pragma once' in EntityComponent.h"
#endif
#define SIMULATION_EntityComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UEntityComponent *********************************************************
struct Z_Construct_UClass_UEntityComponent_Statics;
SIMULATION_API UClass* Z_Construct_UClass_UEntityComponent_NoRegister();

#define FID_Github_Simulation_Simulation_Source_Simulation_Public_EntityComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEntityComponent(); \
	friend struct ::Z_Construct_UClass_UEntityComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SIMULATION_API UClass* ::Z_Construct_UClass_UEntityComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UEntityComponent, UActorComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Simulation"), Z_Construct_UClass_UEntityComponent_NoRegister) \
	DECLARE_SERIALIZER(UEntityComponent)


#define FID_Github_Simulation_Simulation_Source_Simulation_Public_EntityComponent_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEntityComponent(UEntityComponent&&) = delete; \
	UEntityComponent(const UEntityComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEntityComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEntityComponent); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEntityComponent) \
	NO_API virtual ~UEntityComponent();


#define FID_Github_Simulation_Simulation_Source_Simulation_Public_EntityComponent_h_10_PROLOG
#define FID_Github_Simulation_Simulation_Source_Simulation_Public_EntityComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_Simulation_Simulation_Source_Simulation_Public_EntityComponent_h_13_INCLASS_NO_PURE_DECLS \
	FID_Github_Simulation_Simulation_Source_Simulation_Public_EntityComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEntityComponent;

// ********** End Class UEntityComponent ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_Simulation_Simulation_Source_Simulation_Public_EntityComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
