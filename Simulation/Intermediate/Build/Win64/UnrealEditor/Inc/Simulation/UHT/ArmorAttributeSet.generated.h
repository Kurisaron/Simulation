// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ArmorAttributeSet.h"

#ifdef SIMULATION_ArmorAttributeSet_generated_h
#error "ArmorAttributeSet.generated.h already included, missing '#pragma once' in ArmorAttributeSet.h"
#endif
#define SIMULATION_ArmorAttributeSet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayAttributeData;

// ********** Begin Class UArmorAttributeSet *******************************************************
#define FID_Github_Simulation_Simulation_Source_Simulation_Public_ArmorAttributeSet_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_MaxDurability); \
	DECLARE_FUNCTION(execOnRep_CurrentDurability); \
	DECLARE_FUNCTION(execOnRep_Protection);


struct Z_Construct_UClass_UArmorAttributeSet_Statics;
SIMULATION_API UClass* Z_Construct_UClass_UArmorAttributeSet_NoRegister();

#define FID_Github_Simulation_Simulation_Source_Simulation_Public_ArmorAttributeSet_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUArmorAttributeSet(); \
	friend struct ::Z_Construct_UClass_UArmorAttributeSet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SIMULATION_API UClass* ::Z_Construct_UClass_UArmorAttributeSet_NoRegister(); \
public: \
	DECLARE_CLASS2(UArmorAttributeSet, UEntityAttributeSet, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Simulation"), Z_Construct_UClass_UArmorAttributeSet_NoRegister) \
	DECLARE_SERIALIZER(UArmorAttributeSet) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Protection=NETFIELD_REP_START, \
		CurrentDurability, \
		MaxDurability, \
		NETFIELD_REP_END=MaxDurability	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API) \
private: \
	REPLICATED_BASE_CLASS(UArmorAttributeSet) \
public:


#define FID_Github_Simulation_Simulation_Source_Simulation_Public_ArmorAttributeSet_h_33_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UArmorAttributeSet(UArmorAttributeSet&&) = delete; \
	UArmorAttributeSet(const UArmorAttributeSet&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UArmorAttributeSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UArmorAttributeSet); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UArmorAttributeSet) \
	NO_API virtual ~UArmorAttributeSet();


#define FID_Github_Simulation_Simulation_Source_Simulation_Public_ArmorAttributeSet_h_30_PROLOG
#define FID_Github_Simulation_Simulation_Source_Simulation_Public_ArmorAttributeSet_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_Simulation_Simulation_Source_Simulation_Public_ArmorAttributeSet_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Github_Simulation_Simulation_Source_Simulation_Public_ArmorAttributeSet_h_33_INCLASS_NO_PURE_DECLS \
	FID_Github_Simulation_Simulation_Source_Simulation_Public_ArmorAttributeSet_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UArmorAttributeSet;

// ********** End Class UArmorAttributeSet *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_Simulation_Simulation_Source_Simulation_Public_ArmorAttributeSet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
