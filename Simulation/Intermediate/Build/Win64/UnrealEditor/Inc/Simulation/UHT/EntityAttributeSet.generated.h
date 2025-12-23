// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EntityAttributeSet.h"

#ifdef SIMULATION_EntityAttributeSet_generated_h
#error "EntityAttributeSet.generated.h already included, missing '#pragma once' in EntityAttributeSet.h"
#endif
#define SIMULATION_EntityAttributeSet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UEntityAttributeSet ******************************************************
#define FID_Github_Simulation_Simulation_Source_Simulation_Public_EntityAttributeSet_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetSetDescription); \
	DECLARE_FUNCTION(execShouldDisplayDescription); \
	DECLARE_FUNCTION(execGetSetName); \
	DECLARE_FUNCTION(execShouldDisplayName);


struct Z_Construct_UClass_UEntityAttributeSet_Statics;
SIMULATION_API UClass* Z_Construct_UClass_UEntityAttributeSet_NoRegister();

#define FID_Github_Simulation_Simulation_Source_Simulation_Public_EntityAttributeSet_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEntityAttributeSet(); \
	friend struct ::Z_Construct_UClass_UEntityAttributeSet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SIMULATION_API UClass* ::Z_Construct_UClass_UEntityAttributeSet_NoRegister(); \
public: \
	DECLARE_CLASS2(UEntityAttributeSet, UAttributeSet, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Simulation"), Z_Construct_UClass_UEntityAttributeSet_NoRegister) \
	DECLARE_SERIALIZER(UEntityAttributeSet)


#define FID_Github_Simulation_Simulation_Source_Simulation_Public_EntityAttributeSet_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEntityAttributeSet(UEntityAttributeSet&&) = delete; \
	UEntityAttributeSet(const UEntityAttributeSet&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEntityAttributeSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEntityAttributeSet); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEntityAttributeSet) \
	NO_API virtual ~UEntityAttributeSet();


#define FID_Github_Simulation_Simulation_Source_Simulation_Public_EntityAttributeSet_h_15_PROLOG
#define FID_Github_Simulation_Simulation_Source_Simulation_Public_EntityAttributeSet_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_Simulation_Simulation_Source_Simulation_Public_EntityAttributeSet_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Github_Simulation_Simulation_Source_Simulation_Public_EntityAttributeSet_h_18_INCLASS_NO_PURE_DECLS \
	FID_Github_Simulation_Simulation_Source_Simulation_Public_EntityAttributeSet_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEntityAttributeSet;

// ********** End Class UEntityAttributeSet ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_Simulation_Simulation_Source_Simulation_Public_EntityAttributeSet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
