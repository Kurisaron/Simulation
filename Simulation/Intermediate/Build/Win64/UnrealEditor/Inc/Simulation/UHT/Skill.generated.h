// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Skill.h"

#ifdef SIMULATION_Skill_generated_h
#error "Skill.generated.h already included, missing '#pragma once' in Skill.h"
#endif
#define SIMULATION_Skill_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USkill;

// ********** Begin Delegate FOnCurrentLevelChanged ************************************************
#define FID_Github_Simulation_Simulation_Source_Simulation_Public_Skill_h_9_DELEGATE \
SIMULATION_API void FOnCurrentLevelChanged_DelegateWrapper(const FMulticastScriptDelegate& OnCurrentLevelChanged, USkill* Skill, int32 NewLevel, int32 OldLevel);


// ********** End Delegate FOnCurrentLevelChanged **************************************************

// ********** Begin Delegate FOnExperienceChanged **************************************************
#define FID_Github_Simulation_Simulation_Source_Simulation_Public_Skill_h_10_DELEGATE \
SIMULATION_API void FOnExperienceChanged_DelegateWrapper(const FMulticastScriptDelegate& OnExperienceChanged, USkill* Skill, float NewExperience, float OldExperience);


// ********** End Delegate FOnExperienceChanged ****************************************************

// ********** Begin Class USkill *******************************************************************
#define FID_Github_Simulation_Simulation_Source_Simulation_Public_Skill_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetPassion); \
	DECLARE_FUNCTION(execGetIntuition); \
	DECLARE_FUNCTION(execGetExperienceRequirement); \
	DECLARE_FUNCTION(execAddExperience); \
	DECLARE_FUNCTION(execGetExperience); \
	DECLARE_FUNCTION(execAddLevel); \
	DECLARE_FUNCTION(execGetMaxLevel); \
	DECLARE_FUNCTION(execGetMinLevel); \
	DECLARE_FUNCTION(execGetCurrentLevel);


struct Z_Construct_UClass_USkill_Statics;
SIMULATION_API UClass* Z_Construct_UClass_USkill_NoRegister();

#define FID_Github_Simulation_Simulation_Source_Simulation_Public_Skill_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSkill(); \
	friend struct ::Z_Construct_UClass_USkill_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SIMULATION_API UClass* ::Z_Construct_UClass_USkill_NoRegister(); \
public: \
	DECLARE_CLASS2(USkill, UEntityAttribute, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Simulation"), Z_Construct_UClass_USkill_NoRegister) \
	DECLARE_SERIALIZER(USkill)


#define FID_Github_Simulation_Simulation_Source_Simulation_Public_Skill_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USkill(USkill&&) = delete; \
	USkill(const USkill&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USkill); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkill); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkill) \
	NO_API virtual ~USkill();


#define FID_Github_Simulation_Simulation_Source_Simulation_Public_Skill_h_15_PROLOG
#define FID_Github_Simulation_Simulation_Source_Simulation_Public_Skill_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_Simulation_Simulation_Source_Simulation_Public_Skill_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Github_Simulation_Simulation_Source_Simulation_Public_Skill_h_18_INCLASS_NO_PURE_DECLS \
	FID_Github_Simulation_Simulation_Source_Simulation_Public_Skill_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USkill;

// ********** End Class USkill *********************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_Simulation_Simulation_Source_Simulation_Public_Skill_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
