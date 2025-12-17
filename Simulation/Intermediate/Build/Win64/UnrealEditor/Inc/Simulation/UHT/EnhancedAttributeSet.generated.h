// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EnhancedAttributeSet.h"

#ifdef SIMULATION_EnhancedAttributeSet_generated_h
#error "EnhancedAttributeSet.generated.h already included, missing '#pragma once' in EnhancedAttributeSet.h"
#endif
#define SIMULATION_EnhancedAttributeSet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UEnhancedAttributeSet ****************************************************
struct Z_Construct_UClass_UEnhancedAttributeSet_Statics;
SIMULATION_API UClass* Z_Construct_UClass_UEnhancedAttributeSet_NoRegister();

#define FID_Github_Simulation_Simulation_Source_Simulation_Public_EnhancedAttributeSet_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEnhancedAttributeSet(); \
	friend struct ::Z_Construct_UClass_UEnhancedAttributeSet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SIMULATION_API UClass* ::Z_Construct_UClass_UEnhancedAttributeSet_NoRegister(); \
public: \
	DECLARE_CLASS2(UEnhancedAttributeSet, UAttributeSet, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Simulation"), Z_Construct_UClass_UEnhancedAttributeSet_NoRegister) \
	DECLARE_SERIALIZER(UEnhancedAttributeSet)


#define FID_Github_Simulation_Simulation_Source_Simulation_Public_EnhancedAttributeSet_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEnhancedAttributeSet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEnhancedAttributeSet(UEnhancedAttributeSet&&) = delete; \
	UEnhancedAttributeSet(const UEnhancedAttributeSet&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEnhancedAttributeSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnhancedAttributeSet); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnhancedAttributeSet) \
	NO_API virtual ~UEnhancedAttributeSet();


#define FID_Github_Simulation_Simulation_Source_Simulation_Public_EnhancedAttributeSet_h_12_PROLOG
#define FID_Github_Simulation_Simulation_Source_Simulation_Public_EnhancedAttributeSet_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_Simulation_Simulation_Source_Simulation_Public_EnhancedAttributeSet_h_15_INCLASS_NO_PURE_DECLS \
	FID_Github_Simulation_Simulation_Source_Simulation_Public_EnhancedAttributeSet_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEnhancedAttributeSet;

// ********** End Class UEnhancedAttributeSet ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_Simulation_Simulation_Source_Simulation_Public_EnhancedAttributeSet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
