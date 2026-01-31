// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NeedAttributeSet.h"

#ifdef SIMULATION_NeedAttributeSet_generated_h
#error "NeedAttributeSet.generated.h already included, missing '#pragma once' in NeedAttributeSet.h"
#endif
#define SIMULATION_NeedAttributeSet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayAttributeData;

// ********** Begin Class UNeedAttributeSet ********************************************************
#define FID_Github_Simulation_Simulation_Source_Simulation_Public_NeedAttributeSet_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_CurrentSatisfaction);


struct Z_Construct_UClass_UNeedAttributeSet_Statics;
SIMULATION_API UClass* Z_Construct_UClass_UNeedAttributeSet_NoRegister();

#define FID_Github_Simulation_Simulation_Source_Simulation_Public_NeedAttributeSet_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNeedAttributeSet(); \
	friend struct ::Z_Construct_UClass_UNeedAttributeSet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SIMULATION_API UClass* ::Z_Construct_UClass_UNeedAttributeSet_NoRegister(); \
public: \
	DECLARE_CLASS2(UNeedAttributeSet, UEntityAttributeSet, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Simulation"), Z_Construct_UClass_UNeedAttributeSet_NoRegister) \
	DECLARE_SERIALIZER(UNeedAttributeSet) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentSatisfaction=NETFIELD_REP_START, \
		NETFIELD_REP_END=CurrentSatisfaction	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API) \
private: \
	REPLICATED_BASE_CLASS(UNeedAttributeSet) \
public:


#define FID_Github_Simulation_Simulation_Source_Simulation_Public_NeedAttributeSet_h_22_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNeedAttributeSet(UNeedAttributeSet&&) = delete; \
	UNeedAttributeSet(const UNeedAttributeSet&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNeedAttributeSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNeedAttributeSet); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNeedAttributeSet) \
	NO_API virtual ~UNeedAttributeSet();


#define FID_Github_Simulation_Simulation_Source_Simulation_Public_NeedAttributeSet_h_19_PROLOG
#define FID_Github_Simulation_Simulation_Source_Simulation_Public_NeedAttributeSet_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_Simulation_Simulation_Source_Simulation_Public_NeedAttributeSet_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Github_Simulation_Simulation_Source_Simulation_Public_NeedAttributeSet_h_22_INCLASS_NO_PURE_DECLS \
	FID_Github_Simulation_Simulation_Source_Simulation_Public_NeedAttributeSet_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNeedAttributeSet;

// ********** End Class UNeedAttributeSet **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_Simulation_Simulation_Source_Simulation_Public_NeedAttributeSet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
