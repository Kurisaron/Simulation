// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EnhancedAbilityComponent.h"

#ifdef SIMULATION_EnhancedAbilityComponent_generated_h
#error "EnhancedAbilityComponent.generated.h already included, missing '#pragma once' in EnhancedAbilityComponent.h"
#endif
#define SIMULATION_EnhancedAbilityComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UEnhancedAbilityComponent ************************************************
struct Z_Construct_UClass_UEnhancedAbilityComponent_Statics;
SIMULATION_API UClass* Z_Construct_UClass_UEnhancedAbilityComponent_NoRegister();

#define FID_Github_Simulation_Simulation_Source_Simulation_Public_EnhancedAbilityComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEnhancedAbilityComponent(); \
	friend struct ::Z_Construct_UClass_UEnhancedAbilityComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SIMULATION_API UClass* ::Z_Construct_UClass_UEnhancedAbilityComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UEnhancedAbilityComponent, UAbilitySystemComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Simulation"), Z_Construct_UClass_UEnhancedAbilityComponent_NoRegister) \
	DECLARE_SERIALIZER(UEnhancedAbilityComponent)


#define FID_Github_Simulation_Simulation_Source_Simulation_Public_EnhancedAbilityComponent_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEnhancedAbilityComponent(UEnhancedAbilityComponent&&) = delete; \
	UEnhancedAbilityComponent(const UEnhancedAbilityComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEnhancedAbilityComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnhancedAbilityComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnhancedAbilityComponent) \
	NO_API virtual ~UEnhancedAbilityComponent();


#define FID_Github_Simulation_Simulation_Source_Simulation_Public_EnhancedAbilityComponent_h_14_PROLOG
#define FID_Github_Simulation_Simulation_Source_Simulation_Public_EnhancedAbilityComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_Simulation_Simulation_Source_Simulation_Public_EnhancedAbilityComponent_h_17_INCLASS_NO_PURE_DECLS \
	FID_Github_Simulation_Simulation_Source_Simulation_Public_EnhancedAbilityComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEnhancedAbilityComponent;

// ********** End Class UEnhancedAbilityComponent **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_Simulation_Simulation_Source_Simulation_Public_EnhancedAbilityComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
