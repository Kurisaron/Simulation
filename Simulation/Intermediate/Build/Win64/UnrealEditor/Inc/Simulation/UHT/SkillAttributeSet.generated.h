// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SkillAttributeSet.h"

#ifdef SIMULATION_SkillAttributeSet_generated_h
#error "SkillAttributeSet.generated.h already included, missing '#pragma once' in SkillAttributeSet.h"
#endif
#define SIMULATION_SkillAttributeSet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayAttributeData;

// ********** Begin Class USkillAttributeSet *******************************************************
#define FID_Github_Simulation_Simulation_Source_Simulation_Public_SkillAttributeSet_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_MaxLevel); \
	DECLARE_FUNCTION(execOnRep_MinLevel); \
	DECLARE_FUNCTION(execOnRep_CurrentLevel); \
	DECLARE_FUNCTION(execOnRep_ExperienceGainMultiplier); \
	DECLARE_FUNCTION(execOnRep_Experience); \
	DECLARE_FUNCTION(execGetRequiredXPForNextLevel);


struct Z_Construct_UClass_USkillAttributeSet_Statics;
SIMULATION_API UClass* Z_Construct_UClass_USkillAttributeSet_NoRegister();

#define FID_Github_Simulation_Simulation_Source_Simulation_Public_SkillAttributeSet_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSkillAttributeSet(); \
	friend struct ::Z_Construct_UClass_USkillAttributeSet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SIMULATION_API UClass* ::Z_Construct_UClass_USkillAttributeSet_NoRegister(); \
public: \
	DECLARE_CLASS2(USkillAttributeSet, UEntityAttributeSet, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Simulation"), Z_Construct_UClass_USkillAttributeSet_NoRegister) \
	DECLARE_SERIALIZER(USkillAttributeSet) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Experience=NETFIELD_REP_START, \
		ExperienceGainMultiplier, \
		CurrentLevel, \
		MinLevel, \
		MaxLevel, \
		NETFIELD_REP_END=MaxLevel	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API) \
private: \
	REPLICATED_BASE_CLASS(USkillAttributeSet) \
public:


#define FID_Github_Simulation_Simulation_Source_Simulation_Public_SkillAttributeSet_h_43_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USkillAttributeSet(USkillAttributeSet&&) = delete; \
	USkillAttributeSet(const USkillAttributeSet&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USkillAttributeSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkillAttributeSet); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkillAttributeSet) \
	NO_API virtual ~USkillAttributeSet();


#define FID_Github_Simulation_Simulation_Source_Simulation_Public_SkillAttributeSet_h_40_PROLOG
#define FID_Github_Simulation_Simulation_Source_Simulation_Public_SkillAttributeSet_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_Simulation_Simulation_Source_Simulation_Public_SkillAttributeSet_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Github_Simulation_Simulation_Source_Simulation_Public_SkillAttributeSet_h_43_INCLASS_NO_PURE_DECLS \
	FID_Github_Simulation_Simulation_Source_Simulation_Public_SkillAttributeSet_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USkillAttributeSet;

// ********** End Class USkillAttributeSet *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_Simulation_Simulation_Source_Simulation_Public_SkillAttributeSet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
