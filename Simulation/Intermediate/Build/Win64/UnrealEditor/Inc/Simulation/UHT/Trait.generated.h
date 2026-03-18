// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Trait.h"

#ifdef SIMULATION_Trait_generated_h
#error "Trait.generated.h already included, missing '#pragma once' in Trait.h"
#endif
#define SIMULATION_Trait_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTrait *******************************************************************
struct Z_Construct_UClass_UTrait_Statics;
SIMULATION_API UClass* Z_Construct_UClass_UTrait_NoRegister();

#define FID_Github_Simulation_Simulation_Source_Simulation_Public_Trait_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTrait(); \
	friend struct ::Z_Construct_UClass_UTrait_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SIMULATION_API UClass* ::Z_Construct_UClass_UTrait_NoRegister(); \
public: \
	DECLARE_CLASS2(UTrait, UEntityAttribute, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Simulation"), Z_Construct_UClass_UTrait_NoRegister) \
	DECLARE_SERIALIZER(UTrait)


#define FID_Github_Simulation_Simulation_Source_Simulation_Public_Trait_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTrait(UTrait&&) = delete; \
	UTrait(const UTrait&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTrait); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTrait); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTrait) \
	NO_API virtual ~UTrait();


#define FID_Github_Simulation_Simulation_Source_Simulation_Public_Trait_h_12_PROLOG
#define FID_Github_Simulation_Simulation_Source_Simulation_Public_Trait_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_Simulation_Simulation_Source_Simulation_Public_Trait_h_15_INCLASS_NO_PURE_DECLS \
	FID_Github_Simulation_Simulation_Source_Simulation_Public_Trait_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTrait;

// ********** End Class UTrait *********************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_Simulation_Simulation_Source_Simulation_Public_Trait_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
