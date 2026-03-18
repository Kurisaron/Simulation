// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Need.h"

#ifdef SIMULATION_Need_generated_h
#error "Need.generated.h already included, missing '#pragma once' in Need.h"
#endif
#define SIMULATION_Need_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNeed ********************************************************************
#define FID_Github_Simulation_Simulation_Source_Simulation_Public_Need_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetFulfillment);


struct Z_Construct_UClass_UNeed_Statics;
SIMULATION_API UClass* Z_Construct_UClass_UNeed_NoRegister();

#define FID_Github_Simulation_Simulation_Source_Simulation_Public_Need_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNeed(); \
	friend struct ::Z_Construct_UClass_UNeed_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SIMULATION_API UClass* ::Z_Construct_UClass_UNeed_NoRegister(); \
public: \
	DECLARE_CLASS2(UNeed, UEntityAttribute, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Simulation"), Z_Construct_UClass_UNeed_NoRegister) \
	DECLARE_SERIALIZER(UNeed)


#define FID_Github_Simulation_Simulation_Source_Simulation_Public_Need_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNeed(UNeed&&) = delete; \
	UNeed(const UNeed&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNeed); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNeed); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNeed) \
	NO_API virtual ~UNeed();


#define FID_Github_Simulation_Simulation_Source_Simulation_Public_Need_h_12_PROLOG
#define FID_Github_Simulation_Simulation_Source_Simulation_Public_Need_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_Simulation_Simulation_Source_Simulation_Public_Need_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Github_Simulation_Simulation_Source_Simulation_Public_Need_h_15_INCLASS_NO_PURE_DECLS \
	FID_Github_Simulation_Simulation_Source_Simulation_Public_Need_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNeed;

// ********** End Class UNeed **********************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_Simulation_Simulation_Source_Simulation_Public_Need_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
