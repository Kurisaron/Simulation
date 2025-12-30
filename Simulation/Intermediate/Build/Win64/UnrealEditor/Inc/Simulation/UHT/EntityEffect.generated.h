// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EntityEffect.h"

#ifdef SIMULATION_EntityEffect_generated_h
#error "EntityEffect.generated.h already included, missing '#pragma once' in EntityEffect.h"
#endif
#define SIMULATION_EntityEffect_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UEntityEffect ************************************************************
struct Z_Construct_UClass_UEntityEffect_Statics;
SIMULATION_API UClass* Z_Construct_UClass_UEntityEffect_NoRegister();

#define FID_Github_Simulation_Simulation_Source_Simulation_Public_EntityEffect_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEntityEffect(); \
	friend struct ::Z_Construct_UClass_UEntityEffect_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SIMULATION_API UClass* ::Z_Construct_UClass_UEntityEffect_NoRegister(); \
public: \
	DECLARE_CLASS2(UEntityEffect, UGameplayEffect, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Simulation"), Z_Construct_UClass_UEntityEffect_NoRegister) \
	DECLARE_SERIALIZER(UEntityEffect)


#define FID_Github_Simulation_Simulation_Source_Simulation_Public_EntityEffect_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEntityEffect(UEntityEffect&&) = delete; \
	UEntityEffect(const UEntityEffect&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEntityEffect); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEntityEffect); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEntityEffect) \
	NO_API virtual ~UEntityEffect();


#define FID_Github_Simulation_Simulation_Source_Simulation_Public_EntityEffect_h_12_PROLOG
#define FID_Github_Simulation_Simulation_Source_Simulation_Public_EntityEffect_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_Simulation_Simulation_Source_Simulation_Public_EntityEffect_h_15_INCLASS_NO_PURE_DECLS \
	FID_Github_Simulation_Simulation_Source_Simulation_Public_EntityEffect_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEntityEffect;

// ********** End Class UEntityEffect **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_Simulation_Simulation_Source_Simulation_Public_EntityEffect_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
