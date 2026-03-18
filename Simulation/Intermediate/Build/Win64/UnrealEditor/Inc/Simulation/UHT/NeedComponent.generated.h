// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NeedComponent.h"

#ifdef SIMULATION_NeedComponent_generated_h
#error "NeedComponent.generated.h already included, missing '#pragma once' in NeedComponent.h"
#endif
#define SIMULATION_NeedComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNeed;

// ********** Begin Class UNeedComponent ***********************************************************
#define FID_Github_Simulation_Simulation_Source_Simulation_Public_NeedComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetNeed); \
	DECLARE_FUNCTION(execGetNeeds);


struct Z_Construct_UClass_UNeedComponent_Statics;
SIMULATION_API UClass* Z_Construct_UClass_UNeedComponent_NoRegister();

#define FID_Github_Simulation_Simulation_Source_Simulation_Public_NeedComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNeedComponent(); \
	friend struct ::Z_Construct_UClass_UNeedComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SIMULATION_API UClass* ::Z_Construct_UClass_UNeedComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UNeedComponent, UEntityComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Simulation"), Z_Construct_UClass_UNeedComponent_NoRegister) \
	DECLARE_SERIALIZER(UNeedComponent)


#define FID_Github_Simulation_Simulation_Source_Simulation_Public_NeedComponent_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNeedComponent(UNeedComponent&&) = delete; \
	UNeedComponent(const UNeedComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNeedComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNeedComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNeedComponent) \
	NO_API virtual ~UNeedComponent();


#define FID_Github_Simulation_Simulation_Source_Simulation_Public_NeedComponent_h_12_PROLOG
#define FID_Github_Simulation_Simulation_Source_Simulation_Public_NeedComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_Simulation_Simulation_Source_Simulation_Public_NeedComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Github_Simulation_Simulation_Source_Simulation_Public_NeedComponent_h_15_INCLASS_NO_PURE_DECLS \
	FID_Github_Simulation_Simulation_Source_Simulation_Public_NeedComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNeedComponent;

// ********** End Class UNeedComponent *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_Simulation_Simulation_Source_Simulation_Public_NeedComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
