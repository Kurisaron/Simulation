// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EntityAttribute.h"

#ifdef SIMULATION_EntityAttribute_generated_h
#error "EntityAttribute.generated.h already included, missing '#pragma once' in EntityAttribute.h"
#endif
#define SIMULATION_EntityAttribute_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTag;

// ********** Begin Class UEntityAttribute *********************************************************
#define FID_Github_Simulation_Simulation_Source_Simulation_Public_EntityAttribute_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsHidden); \
	DECLARE_FUNCTION(execGetTypeID);


struct Z_Construct_UClass_UEntityAttribute_Statics;
SIMULATION_API UClass* Z_Construct_UClass_UEntityAttribute_NoRegister();

#define FID_Github_Simulation_Simulation_Source_Simulation_Public_EntityAttribute_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEntityAttribute(); \
	friend struct ::Z_Construct_UClass_UEntityAttribute_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SIMULATION_API UClass* ::Z_Construct_UClass_UEntityAttribute_NoRegister(); \
public: \
	DECLARE_CLASS2(UEntityAttribute, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Simulation"), Z_Construct_UClass_UEntityAttribute_NoRegister) \
	DECLARE_SERIALIZER(UEntityAttribute)


#define FID_Github_Simulation_Simulation_Source_Simulation_Public_EntityAttribute_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEntityAttribute(UEntityAttribute&&) = delete; \
	UEntityAttribute(const UEntityAttribute&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEntityAttribute); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEntityAttribute); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEntityAttribute) \
	NO_API virtual ~UEntityAttribute();


#define FID_Github_Simulation_Simulation_Source_Simulation_Public_EntityAttribute_h_14_PROLOG
#define FID_Github_Simulation_Simulation_Source_Simulation_Public_EntityAttribute_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_Simulation_Simulation_Source_Simulation_Public_EntityAttribute_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Github_Simulation_Simulation_Source_Simulation_Public_EntityAttribute_h_17_INCLASS_NO_PURE_DECLS \
	FID_Github_Simulation_Simulation_Source_Simulation_Public_EntityAttribute_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEntityAttribute;

// ********** End Class UEntityAttribute ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_Simulation_Simulation_Source_Simulation_Public_EntityAttribute_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
