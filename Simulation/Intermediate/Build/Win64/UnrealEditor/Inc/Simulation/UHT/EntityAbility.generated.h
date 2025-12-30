// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EntityAbility.h"

#ifdef SIMULATION_EntityAbility_generated_h
#error "EntityAbility.generated.h already included, missing '#pragma once' in EntityAbility.h"
#endif
#define SIMULATION_EntityAbility_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UEntityAbility ***********************************************************
struct Z_Construct_UClass_UEntityAbility_Statics;
SIMULATION_API UClass* Z_Construct_UClass_UEntityAbility_NoRegister();

#define FID_Github_Simulation_Simulation_Source_Simulation_Public_EntityAbility_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEntityAbility(); \
	friend struct ::Z_Construct_UClass_UEntityAbility_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SIMULATION_API UClass* ::Z_Construct_UClass_UEntityAbility_NoRegister(); \
public: \
	DECLARE_CLASS2(UEntityAbility, UGameplayAbility, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Simulation"), Z_Construct_UClass_UEntityAbility_NoRegister) \
	DECLARE_SERIALIZER(UEntityAbility)


#define FID_Github_Simulation_Simulation_Source_Simulation_Public_EntityAbility_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEntityAbility(UEntityAbility&&) = delete; \
	UEntityAbility(const UEntityAbility&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEntityAbility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEntityAbility); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEntityAbility) \
	NO_API virtual ~UEntityAbility();


#define FID_Github_Simulation_Simulation_Source_Simulation_Public_EntityAbility_h_12_PROLOG
#define FID_Github_Simulation_Simulation_Source_Simulation_Public_EntityAbility_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_Simulation_Simulation_Source_Simulation_Public_EntityAbility_h_15_INCLASS_NO_PURE_DECLS \
	FID_Github_Simulation_Simulation_Source_Simulation_Public_EntityAbility_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEntityAbility;

// ********** End Class UEntityAbility *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_Simulation_Simulation_Source_Simulation_Public_EntityAbility_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
