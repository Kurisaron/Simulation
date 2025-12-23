// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HealthAttributeSet.h"

#ifdef SIMULATION_HealthAttributeSet_generated_h
#error "HealthAttributeSet.generated.h already included, missing '#pragma once' in HealthAttributeSet.h"
#endif
#define SIMULATION_HealthAttributeSet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayAttributeData;

// ********** Begin Class UHealthAttributeSet ******************************************************
#define FID_Github_Simulation_Simulation_Source_Simulation_Public_HealthAttributeSet_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_MaxHealth); \
	DECLARE_FUNCTION(execOnRep_CurrentHealth);


struct Z_Construct_UClass_UHealthAttributeSet_Statics;
SIMULATION_API UClass* Z_Construct_UClass_UHealthAttributeSet_NoRegister();

#define FID_Github_Simulation_Simulation_Source_Simulation_Public_HealthAttributeSet_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHealthAttributeSet(); \
	friend struct ::Z_Construct_UClass_UHealthAttributeSet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SIMULATION_API UClass* ::Z_Construct_UClass_UHealthAttributeSet_NoRegister(); \
public: \
	DECLARE_CLASS2(UHealthAttributeSet, UEntityAttributeSet, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Simulation"), Z_Construct_UClass_UHealthAttributeSet_NoRegister) \
	DECLARE_SERIALIZER(UHealthAttributeSet) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentHealth=NETFIELD_REP_START, \
		MaxHealth, \
		NETFIELD_REP_END=MaxHealth	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API) \
private: \
	REPLICATED_BASE_CLASS(UHealthAttributeSet) \
public:


#define FID_Github_Simulation_Simulation_Source_Simulation_Public_HealthAttributeSet_h_28_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHealthAttributeSet(UHealthAttributeSet&&) = delete; \
	UHealthAttributeSet(const UHealthAttributeSet&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHealthAttributeSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHealthAttributeSet); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHealthAttributeSet) \
	NO_API virtual ~UHealthAttributeSet();


#define FID_Github_Simulation_Simulation_Source_Simulation_Public_HealthAttributeSet_h_25_PROLOG
#define FID_Github_Simulation_Simulation_Source_Simulation_Public_HealthAttributeSet_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_Simulation_Simulation_Source_Simulation_Public_HealthAttributeSet_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Github_Simulation_Simulation_Source_Simulation_Public_HealthAttributeSet_h_28_INCLASS_NO_PURE_DECLS \
	FID_Github_Simulation_Simulation_Source_Simulation_Public_HealthAttributeSet_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHealthAttributeSet;

// ********** End Class UHealthAttributeSet ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_Simulation_Simulation_Source_Simulation_Public_HealthAttributeSet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
