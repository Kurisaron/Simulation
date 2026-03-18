// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Skill.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSkill() {}

// ********** Begin Cross Module References ********************************************************
SIMULATION_API UClass* Z_Construct_UClass_UEntityAttribute();
SIMULATION_API UClass* Z_Construct_UClass_USkill();
SIMULATION_API UClass* Z_Construct_UClass_USkill_NoRegister();
SIMULATION_API UFunction* Z_Construct_UDelegateFunction_Simulation_OnCurrentLevelChanged__DelegateSignature();
SIMULATION_API UFunction* Z_Construct_UDelegateFunction_Simulation_OnExperienceChanged__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_Simulation();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnCurrentLevelChanged ************************************************
struct Z_Construct_UDelegateFunction_Simulation_OnCurrentLevelChanged__DelegateSignature_Statics
{
	struct _Script_Simulation_eventOnCurrentLevelChanged_Parms
	{
		USkill* Skill;
		int32 NewLevel;
		int32 OldLevel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Skill.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnCurrentLevelChanged constinit property declarations ****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Skill;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewLevel;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OldLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnCurrentLevelChanged constinit property declarations ******************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnCurrentLevelChanged Property Definitions ***************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Simulation_OnCurrentLevelChanged__DelegateSignature_Statics::NewProp_Skill = { "Skill", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Simulation_eventOnCurrentLevelChanged_Parms, Skill), Z_Construct_UClass_USkill_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_Simulation_OnCurrentLevelChanged__DelegateSignature_Statics::NewProp_NewLevel = { "NewLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Simulation_eventOnCurrentLevelChanged_Parms, NewLevel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_Simulation_OnCurrentLevelChanged__DelegateSignature_Statics::NewProp_OldLevel = { "OldLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Simulation_eventOnCurrentLevelChanged_Parms, OldLevel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Simulation_OnCurrentLevelChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Simulation_OnCurrentLevelChanged__DelegateSignature_Statics::NewProp_Skill,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Simulation_OnCurrentLevelChanged__DelegateSignature_Statics::NewProp_NewLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Simulation_OnCurrentLevelChanged__DelegateSignature_Statics::NewProp_OldLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Simulation_OnCurrentLevelChanged__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnCurrentLevelChanged Property Definitions *****************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_Simulation_OnCurrentLevelChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_Simulation, nullptr, "OnCurrentLevelChanged__DelegateSignature", 	Z_Construct_UDelegateFunction_Simulation_OnCurrentLevelChanged__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Simulation_OnCurrentLevelChanged__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_Simulation_OnCurrentLevelChanged__DelegateSignature_Statics::_Script_Simulation_eventOnCurrentLevelChanged_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Simulation_OnCurrentLevelChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Simulation_OnCurrentLevelChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_Simulation_OnCurrentLevelChanged__DelegateSignature_Statics::_Script_Simulation_eventOnCurrentLevelChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Simulation_OnCurrentLevelChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Simulation_OnCurrentLevelChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnCurrentLevelChanged_DelegateWrapper(const FMulticastScriptDelegate& OnCurrentLevelChanged, USkill* Skill, int32 NewLevel, int32 OldLevel)
{
	struct _Script_Simulation_eventOnCurrentLevelChanged_Parms
	{
		USkill* Skill;
		int32 NewLevel;
		int32 OldLevel;
	};
	_Script_Simulation_eventOnCurrentLevelChanged_Parms Parms;
	Parms.Skill=Skill;
	Parms.NewLevel=NewLevel;
	Parms.OldLevel=OldLevel;
	OnCurrentLevelChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnCurrentLevelChanged **************************************************

// ********** Begin Delegate FOnExperienceChanged **************************************************
struct Z_Construct_UDelegateFunction_Simulation_OnExperienceChanged__DelegateSignature_Statics
{
	struct _Script_Simulation_eventOnExperienceChanged_Parms
	{
		USkill* Skill;
		float NewExperience;
		float OldExperience;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Skill.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnExperienceChanged constinit property declarations ******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Skill;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewExperience;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OldExperience;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnExperienceChanged constinit property declarations ********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnExperienceChanged Property Definitions *****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Simulation_OnExperienceChanged__DelegateSignature_Statics::NewProp_Skill = { "Skill", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Simulation_eventOnExperienceChanged_Parms, Skill), Z_Construct_UClass_USkill_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Simulation_OnExperienceChanged__DelegateSignature_Statics::NewProp_NewExperience = { "NewExperience", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Simulation_eventOnExperienceChanged_Parms, NewExperience), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Simulation_OnExperienceChanged__DelegateSignature_Statics::NewProp_OldExperience = { "OldExperience", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Simulation_eventOnExperienceChanged_Parms, OldExperience), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Simulation_OnExperienceChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Simulation_OnExperienceChanged__DelegateSignature_Statics::NewProp_Skill,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Simulation_OnExperienceChanged__DelegateSignature_Statics::NewProp_NewExperience,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Simulation_OnExperienceChanged__DelegateSignature_Statics::NewProp_OldExperience,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Simulation_OnExperienceChanged__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnExperienceChanged Property Definitions *******************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_Simulation_OnExperienceChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_Simulation, nullptr, "OnExperienceChanged__DelegateSignature", 	Z_Construct_UDelegateFunction_Simulation_OnExperienceChanged__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Simulation_OnExperienceChanged__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_Simulation_OnExperienceChanged__DelegateSignature_Statics::_Script_Simulation_eventOnExperienceChanged_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Simulation_OnExperienceChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Simulation_OnExperienceChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_Simulation_OnExperienceChanged__DelegateSignature_Statics::_Script_Simulation_eventOnExperienceChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Simulation_OnExperienceChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Simulation_OnExperienceChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnExperienceChanged_DelegateWrapper(const FMulticastScriptDelegate& OnExperienceChanged, USkill* Skill, float NewExperience, float OldExperience)
{
	struct _Script_Simulation_eventOnExperienceChanged_Parms
	{
		USkill* Skill;
		float NewExperience;
		float OldExperience;
	};
	_Script_Simulation_eventOnExperienceChanged_Parms Parms;
	Parms.Skill=Skill;
	Parms.NewExperience=NewExperience;
	Parms.OldExperience=OldExperience;
	OnExperienceChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnExperienceChanged ****************************************************

// ********** Begin Class USkill Function AddExperience ********************************************
struct Z_Construct_UFunction_USkill_AddExperience_Statics
{
	struct Skill_eventAddExperience_Parms
	{
		float Amount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Skill|Experience" },
		{ "ModuleRelativePath", "Public/Skill.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddExperience constinit property declarations *************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddExperience constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddExperience Property Definitions ************************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkill_AddExperience_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Skill_eventAddExperience_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkill_AddExperience_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkill_AddExperience_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkill_AddExperience_Statics::PropPointers) < 2048);
// ********** End Function AddExperience Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkill_AddExperience_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USkill, nullptr, "AddExperience", 	Z_Construct_UFunction_USkill_AddExperience_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USkill_AddExperience_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USkill_AddExperience_Statics::Skill_eventAddExperience_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkill_AddExperience_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkill_AddExperience_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USkill_AddExperience_Statics::Skill_eventAddExperience_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkill_AddExperience()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkill_AddExperience_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkill::execAddExperience)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddExperience(Z_Param_Amount);
	P_NATIVE_END;
}
// ********** End Class USkill Function AddExperience **********************************************

// ********** Begin Class USkill Function AddLevel *************************************************
struct Z_Construct_UFunction_USkill_AddLevel_Statics
{
	struct Skill_eventAddLevel_Parms
	{
		int32 Amount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Skill|Level" },
		{ "ModuleRelativePath", "Public/Skill.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddLevel constinit property declarations ******************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddLevel constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddLevel Property Definitions *****************************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkill_AddLevel_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Skill_eventAddLevel_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkill_AddLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkill_AddLevel_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkill_AddLevel_Statics::PropPointers) < 2048);
// ********** End Function AddLevel Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkill_AddLevel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USkill, nullptr, "AddLevel", 	Z_Construct_UFunction_USkill_AddLevel_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USkill_AddLevel_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USkill_AddLevel_Statics::Skill_eventAddLevel_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkill_AddLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkill_AddLevel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USkill_AddLevel_Statics::Skill_eventAddLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkill_AddLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkill_AddLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkill::execAddLevel)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddLevel(Z_Param_Amount);
	P_NATIVE_END;
}
// ********** End Class USkill Function AddLevel ***************************************************

// ********** Begin Class USkill Function GetCurrentLevel ******************************************
struct Z_Construct_UFunction_USkill_GetCurrentLevel_Statics
{
	struct Skill_eventGetCurrentLevel_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Skill|Level" },
		{ "ModuleRelativePath", "Public/Skill.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetCurrentLevel constinit property declarations ***********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCurrentLevel constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCurrentLevel Property Definitions **********************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkill_GetCurrentLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Skill_eventGetCurrentLevel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkill_GetCurrentLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkill_GetCurrentLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkill_GetCurrentLevel_Statics::PropPointers) < 2048);
// ********** End Function GetCurrentLevel Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkill_GetCurrentLevel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USkill, nullptr, "GetCurrentLevel", 	Z_Construct_UFunction_USkill_GetCurrentLevel_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USkill_GetCurrentLevel_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USkill_GetCurrentLevel_Statics::Skill_eventGetCurrentLevel_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkill_GetCurrentLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkill_GetCurrentLevel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USkill_GetCurrentLevel_Statics::Skill_eventGetCurrentLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkill_GetCurrentLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkill_GetCurrentLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkill::execGetCurrentLevel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCurrentLevel();
	P_NATIVE_END;
}
// ********** End Class USkill Function GetCurrentLevel ********************************************

// ********** Begin Class USkill Function GetExperience ********************************************
struct Z_Construct_UFunction_USkill_GetExperience_Statics
{
	struct Skill_eventGetExperience_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Skill|Experience" },
		{ "ModuleRelativePath", "Public/Skill.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetExperience constinit property declarations *************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetExperience constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetExperience Property Definitions ************************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkill_GetExperience_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Skill_eventGetExperience_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkill_GetExperience_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkill_GetExperience_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkill_GetExperience_Statics::PropPointers) < 2048);
// ********** End Function GetExperience Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkill_GetExperience_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USkill, nullptr, "GetExperience", 	Z_Construct_UFunction_USkill_GetExperience_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USkill_GetExperience_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USkill_GetExperience_Statics::Skill_eventGetExperience_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkill_GetExperience_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkill_GetExperience_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USkill_GetExperience_Statics::Skill_eventGetExperience_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkill_GetExperience()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkill_GetExperience_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkill::execGetExperience)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetExperience();
	P_NATIVE_END;
}
// ********** End Class USkill Function GetExperience **********************************************

// ********** Begin Class USkill Function GetExperienceRequirement *********************************
struct Z_Construct_UFunction_USkill_GetExperienceRequirement_Statics
{
	struct Skill_eventGetExperienceRequirement_Parms
	{
		int32 TargetLevel;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Skill|Experience" },
		{ "ModuleRelativePath", "Public/Skill.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetExperienceRequirement constinit property declarations **************
	static const UECodeGen_Private::FIntPropertyParams NewProp_TargetLevel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetExperienceRequirement constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetExperienceRequirement Property Definitions *************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkill_GetExperienceRequirement_Statics::NewProp_TargetLevel = { "TargetLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Skill_eventGetExperienceRequirement_Parms, TargetLevel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkill_GetExperienceRequirement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Skill_eventGetExperienceRequirement_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkill_GetExperienceRequirement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkill_GetExperienceRequirement_Statics::NewProp_TargetLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkill_GetExperienceRequirement_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkill_GetExperienceRequirement_Statics::PropPointers) < 2048);
// ********** End Function GetExperienceRequirement Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkill_GetExperienceRequirement_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USkill, nullptr, "GetExperienceRequirement", 	Z_Construct_UFunction_USkill_GetExperienceRequirement_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USkill_GetExperienceRequirement_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USkill_GetExperienceRequirement_Statics::Skill_eventGetExperienceRequirement_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkill_GetExperienceRequirement_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkill_GetExperienceRequirement_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USkill_GetExperienceRequirement_Statics::Skill_eventGetExperienceRequirement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkill_GetExperienceRequirement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkill_GetExperienceRequirement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkill::execGetExperienceRequirement)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_TargetLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetExperienceRequirement(Z_Param_TargetLevel);
	P_NATIVE_END;
}
// ********** End Class USkill Function GetExperienceRequirement ***********************************

// ********** Begin Class USkill Function GetIntuition *********************************************
struct Z_Construct_UFunction_USkill_GetIntuition_Statics
{
	struct Skill_eventGetIntuition_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Skill|Modifiers" },
		{ "ModuleRelativePath", "Public/Skill.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetIntuition constinit property declarations **************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetIntuition constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetIntuition Property Definitions *************************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkill_GetIntuition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Skill_eventGetIntuition_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkill_GetIntuition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkill_GetIntuition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkill_GetIntuition_Statics::PropPointers) < 2048);
// ********** End Function GetIntuition Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkill_GetIntuition_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USkill, nullptr, "GetIntuition", 	Z_Construct_UFunction_USkill_GetIntuition_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USkill_GetIntuition_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USkill_GetIntuition_Statics::Skill_eventGetIntuition_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkill_GetIntuition_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkill_GetIntuition_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USkill_GetIntuition_Statics::Skill_eventGetIntuition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkill_GetIntuition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkill_GetIntuition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkill::execGetIntuition)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetIntuition();
	P_NATIVE_END;
}
// ********** End Class USkill Function GetIntuition ***********************************************

// ********** Begin Class USkill Function GetMaxLevel **********************************************
struct Z_Construct_UFunction_USkill_GetMaxLevel_Statics
{
	struct Skill_eventGetMaxLevel_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Skill|Level" },
		{ "ModuleRelativePath", "Public/Skill.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetMaxLevel constinit property declarations ***************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetMaxLevel constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetMaxLevel Property Definitions **************************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkill_GetMaxLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Skill_eventGetMaxLevel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkill_GetMaxLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkill_GetMaxLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkill_GetMaxLevel_Statics::PropPointers) < 2048);
// ********** End Function GetMaxLevel Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkill_GetMaxLevel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USkill, nullptr, "GetMaxLevel", 	Z_Construct_UFunction_USkill_GetMaxLevel_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USkill_GetMaxLevel_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USkill_GetMaxLevel_Statics::Skill_eventGetMaxLevel_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkill_GetMaxLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkill_GetMaxLevel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USkill_GetMaxLevel_Statics::Skill_eventGetMaxLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkill_GetMaxLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkill_GetMaxLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkill::execGetMaxLevel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetMaxLevel();
	P_NATIVE_END;
}
// ********** End Class USkill Function GetMaxLevel ************************************************

// ********** Begin Class USkill Function GetMinLevel **********************************************
struct Z_Construct_UFunction_USkill_GetMinLevel_Statics
{
	struct Skill_eventGetMinLevel_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Skill|Level" },
		{ "ModuleRelativePath", "Public/Skill.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetMinLevel constinit property declarations ***************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetMinLevel constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetMinLevel Property Definitions **************************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkill_GetMinLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Skill_eventGetMinLevel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkill_GetMinLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkill_GetMinLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkill_GetMinLevel_Statics::PropPointers) < 2048);
// ********** End Function GetMinLevel Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkill_GetMinLevel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USkill, nullptr, "GetMinLevel", 	Z_Construct_UFunction_USkill_GetMinLevel_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USkill_GetMinLevel_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USkill_GetMinLevel_Statics::Skill_eventGetMinLevel_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkill_GetMinLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkill_GetMinLevel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USkill_GetMinLevel_Statics::Skill_eventGetMinLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkill_GetMinLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkill_GetMinLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkill::execGetMinLevel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetMinLevel();
	P_NATIVE_END;
}
// ********** End Class USkill Function GetMinLevel ************************************************

// ********** Begin Class USkill Function GetPassion ***********************************************
struct Z_Construct_UFunction_USkill_GetPassion_Statics
{
	struct Skill_eventGetPassion_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Skill|Modifiers" },
		{ "ModuleRelativePath", "Public/Skill.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetPassion constinit property declarations ****************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetPassion constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetPassion Property Definitions ***************************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkill_GetPassion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Skill_eventGetPassion_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkill_GetPassion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkill_GetPassion_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkill_GetPassion_Statics::PropPointers) < 2048);
// ********** End Function GetPassion Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkill_GetPassion_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USkill, nullptr, "GetPassion", 	Z_Construct_UFunction_USkill_GetPassion_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USkill_GetPassion_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USkill_GetPassion_Statics::Skill_eventGetPassion_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkill_GetPassion_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkill_GetPassion_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USkill_GetPassion_Statics::Skill_eventGetPassion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkill_GetPassion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkill_GetPassion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkill::execGetPassion)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetPassion();
	P_NATIVE_END;
}
// ********** End Class USkill Function GetPassion *************************************************

// ********** Begin Class USkill *******************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USkill;
UClass* USkill::GetPrivateStaticClass()
{
	using TClass = USkill;
	if (!Z_Registration_Info_UClass_USkill.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("Skill"),
			Z_Registration_Info_UClass_USkill.InnerSingleton,
			StaticRegisterNativesUSkill,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_USkill.InnerSingleton;
}
UClass* Z_Construct_UClass_USkill_NoRegister()
{
	return USkill::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USkill_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Skill.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Skill.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentLevel_MetaData[] = {
		{ "BlueprintGetter", "GetCurrentLevel" },
		{ "Category", "Skill|Level" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Current level in this skill that the owning entity has.\n\x09 * Modifying the default value will change the starting value for this skill\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Skill.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current level in this skill that the owning entity has.\nModifying the default value will change the starting value for this skill" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinLevel_MetaData[] = {
		{ "BlueprintGetter", "GetMinLevel" },
		{ "Category", "Skill|Level" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Minimum level in this skill that an entity may have (by default)\n\x09 */" },
#endif
		{ "EditCondition", "bMinLevelInfinite" },
		{ "ModuleRelativePath", "Public/Skill.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Minimum level in this skill that an entity may have (by default)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxLevel_MetaData[] = {
		{ "BlueprintGetter", "GetMaxLevel" },
		{ "Category", "Skill|Level" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Maximum level in this skill that an entity may have (by default)\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Skill.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum level in this skill that an entity may have (by default)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Experience_MetaData[] = {
		{ "BlueprintGetter", "GetExperience" },
		{ "Category", "Skill|Experience" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Experience earned towards this skill's level\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Skill.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Experience earned towards this skill's level" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Intuition_MetaData[] = {
		{ "BlueprintGetter", "GetIntuition" },
		{ "Category", "Skill|Modifiers" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Amount of intuition in this skill, influencing how much of an implicit understanding an entity has with it\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Skill.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Amount of intuition in this skill, influencing how much of an implicit understanding an entity has with it" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Passion_MetaData[] = {
		{ "BlueprintGetter", "GetPassion" },
		{ "Category", "Skill|Modifiers" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Amount of passion in this skill, influencing how motivated an entity is to engage in it\n\x09 * Higher value = greater motivation (ie. will prefer this activity, get more enjoyment from it, and learn more quickly)\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Skill.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Amount of passion in this skill, influencing how motivated an entity is to engage in it\nHigher value = greater motivation (ie. will prefer this activity, get more enjoyment from it, and learn more quickly)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCurrentLevelChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/Skill.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnExperienceChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/Skill.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USkill constinit property declarations ***********************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentLevel;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinLevel;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxLevel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Experience;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Intuition;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Passion;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCurrentLevelChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnExperienceChanged;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USkill constinit property declarations *************************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AddExperience"), .Pointer = &USkill::execAddExperience },
		{ .NameUTF8 = UTF8TEXT("AddLevel"), .Pointer = &USkill::execAddLevel },
		{ .NameUTF8 = UTF8TEXT("GetCurrentLevel"), .Pointer = &USkill::execGetCurrentLevel },
		{ .NameUTF8 = UTF8TEXT("GetExperience"), .Pointer = &USkill::execGetExperience },
		{ .NameUTF8 = UTF8TEXT("GetExperienceRequirement"), .Pointer = &USkill::execGetExperienceRequirement },
		{ .NameUTF8 = UTF8TEXT("GetIntuition"), .Pointer = &USkill::execGetIntuition },
		{ .NameUTF8 = UTF8TEXT("GetMaxLevel"), .Pointer = &USkill::execGetMaxLevel },
		{ .NameUTF8 = UTF8TEXT("GetMinLevel"), .Pointer = &USkill::execGetMinLevel },
		{ .NameUTF8 = UTF8TEXT("GetPassion"), .Pointer = &USkill::execGetPassion },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USkill_AddExperience, "AddExperience" }, // 3806885066
		{ &Z_Construct_UFunction_USkill_AddLevel, "AddLevel" }, // 3731655133
		{ &Z_Construct_UFunction_USkill_GetCurrentLevel, "GetCurrentLevel" }, // 3676602655
		{ &Z_Construct_UFunction_USkill_GetExperience, "GetExperience" }, // 500649017
		{ &Z_Construct_UFunction_USkill_GetExperienceRequirement, "GetExperienceRequirement" }, // 3256896371
		{ &Z_Construct_UFunction_USkill_GetIntuition, "GetIntuition" }, // 1915697546
		{ &Z_Construct_UFunction_USkill_GetMaxLevel, "GetMaxLevel" }, // 991677328
		{ &Z_Construct_UFunction_USkill_GetMinLevel, "GetMinLevel" }, // 478020099
		{ &Z_Construct_UFunction_USkill_GetPassion, "GetPassion" }, // 2350682740
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkill>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USkill_Statics

// ********** Begin Class USkill Property Definitions **********************************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USkill_Statics::NewProp_CurrentLevel = { "CurrentLevel", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkill, CurrentLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentLevel_MetaData), NewProp_CurrentLevel_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USkill_Statics::NewProp_MinLevel = { "MinLevel", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkill, MinLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinLevel_MetaData), NewProp_MinLevel_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USkill_Statics::NewProp_MaxLevel = { "MaxLevel", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkill, MaxLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxLevel_MetaData), NewProp_MaxLevel_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USkill_Statics::NewProp_Experience = { "Experience", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkill, Experience), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Experience_MetaData), NewProp_Experience_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USkill_Statics::NewProp_Intuition = { "Intuition", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkill, Intuition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Intuition_MetaData), NewProp_Intuition_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USkill_Statics::NewProp_Passion = { "Passion", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkill, Passion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Passion_MetaData), NewProp_Passion_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USkill_Statics::NewProp_OnCurrentLevelChanged = { "OnCurrentLevelChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkill, OnCurrentLevelChanged), Z_Construct_UDelegateFunction_Simulation_OnCurrentLevelChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCurrentLevelChanged_MetaData), NewProp_OnCurrentLevelChanged_MetaData) }; // 3235702034
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USkill_Statics::NewProp_OnExperienceChanged = { "OnExperienceChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkill, OnExperienceChanged), Z_Construct_UDelegateFunction_Simulation_OnExperienceChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnExperienceChanged_MetaData), NewProp_OnExperienceChanged_MetaData) }; // 1093141149
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USkill_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkill_Statics::NewProp_CurrentLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkill_Statics::NewProp_MinLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkill_Statics::NewProp_MaxLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkill_Statics::NewProp_Experience,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkill_Statics::NewProp_Intuition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkill_Statics::NewProp_Passion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkill_Statics::NewProp_OnCurrentLevelChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkill_Statics::NewProp_OnExperienceChanged,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USkill_Statics::PropPointers) < 2048);
// ********** End Class USkill Property Definitions ************************************************
UObject* (*const Z_Construct_UClass_USkill_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEntityAttribute,
	(UObject* (*)())Z_Construct_UPackage__Script_Simulation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USkill_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USkill_Statics::ClassParams = {
	&USkill::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USkill_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USkill_Statics::PropPointers),
	0,
	0x049010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USkill_Statics::Class_MetaDataParams), Z_Construct_UClass_USkill_Statics::Class_MetaDataParams)
};
void USkill::StaticRegisterNativesUSkill()
{
	UClass* Class = USkill::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USkill_Statics::Funcs));
}
UClass* Z_Construct_UClass_USkill()
{
	if (!Z_Registration_Info_UClass_USkill.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USkill.OuterSingleton, Z_Construct_UClass_USkill_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USkill.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USkill);
USkill::~USkill() {}
// ********** End Class USkill *********************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_Skill_h__Script_Simulation_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USkill, USkill::StaticClass, TEXT("USkill"), &Z_Registration_Info_UClass_USkill, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USkill), 3213693791U) },
	};
}; // Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_Skill_h__Script_Simulation_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_Skill_h__Script_Simulation_1150814593{
	TEXT("/Script/Simulation"),
	Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_Skill_h__Script_Simulation_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_Skill_h__Script_Simulation_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
