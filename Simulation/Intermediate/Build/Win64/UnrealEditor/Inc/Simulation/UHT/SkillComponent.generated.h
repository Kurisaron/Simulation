// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SkillComponent.h"

#ifdef SIMULATION_SkillComponent_generated_h
#error "SkillComponent.generated.h already included, missing '#pragma once' in SkillComponent.h"
#endif
#define SIMULATION_SkillComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USkill;

// ********** Begin Class USkillComponent **********************************************************
#define FID_Github_Simulation_Simulation_Source_Simulation_Public_SkillComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetSkill); \
	DECLARE_FUNCTION(execGetSkills);


struct Z_Construct_UClass_USkillComponent_Statics;
SIMULATION_API UClass* Z_Construct_UClass_USkillComponent_NoRegister();

#define FID_Github_Simulation_Simulation_Source_Simulation_Public_SkillComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSkillComponent(); \
	friend struct ::Z_Construct_UClass_USkillComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SIMULATION_API UClass* ::Z_Construct_UClass_USkillComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(USkillComponent, UEntityComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Simulation"), Z_Construct_UClass_USkillComponent_NoRegister) \
	DECLARE_SERIALIZER(USkillComponent)


#define FID_Github_Simulation_Simulation_Source_Simulation_Public_SkillComponent_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USkillComponent(USkillComponent&&) = delete; \
	USkillComponent(const USkillComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USkillComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkillComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkillComponent) \
	NO_API virtual ~USkillComponent();


#define FID_Github_Simulation_Simulation_Source_Simulation_Public_SkillComponent_h_12_PROLOG
#define FID_Github_Simulation_Simulation_Source_Simulation_Public_SkillComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_Simulation_Simulation_Source_Simulation_Public_SkillComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Github_Simulation_Simulation_Source_Simulation_Public_SkillComponent_h_15_INCLASS_NO_PURE_DECLS \
	FID_Github_Simulation_Simulation_Source_Simulation_Public_SkillComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USkillComponent;

// ********** End Class USkillComponent ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_Simulation_Simulation_Source_Simulation_Public_SkillComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
