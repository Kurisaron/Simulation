// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SkillAttributeSet.h"
#include "AttributeSet.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSkillAttributeSet() {}

// ********** Begin Cross Module References ********************************************************
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
SIMULATION_API UClass* Z_Construct_UClass_UEntityAttributeSet();
SIMULATION_API UClass* Z_Construct_UClass_USkillAttributeSet();
SIMULATION_API UClass* Z_Construct_UClass_USkillAttributeSet_NoRegister();
UPackage* Z_Construct_UPackage__Script_Simulation();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USkillAttributeSet Function GetRequiredXPForNextLevel ********************
struct Z_Construct_UFunction_USkillAttributeSet_GetRequiredXPForNextLevel_Statics
{
	struct SkillAttributeSet_eventGetRequiredXPForNextLevel_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SkillAttributeSet.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetRequiredXPForNextLevel constinit property declarations *************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetRequiredXPForNextLevel constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetRequiredXPForNextLevel Property Definitions ************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkillAttributeSet_GetRequiredXPForNextLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkillAttributeSet_eventGetRequiredXPForNextLevel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkillAttributeSet_GetRequiredXPForNextLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillAttributeSet_GetRequiredXPForNextLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkillAttributeSet_GetRequiredXPForNextLevel_Statics::PropPointers) < 2048);
// ********** End Function GetRequiredXPForNextLevel Property Definitions **************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkillAttributeSet_GetRequiredXPForNextLevel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USkillAttributeSet, nullptr, "GetRequiredXPForNextLevel", 	Z_Construct_UFunction_USkillAttributeSet_GetRequiredXPForNextLevel_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USkillAttributeSet_GetRequiredXPForNextLevel_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USkillAttributeSet_GetRequiredXPForNextLevel_Statics::SkillAttributeSet_eventGetRequiredXPForNextLevel_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkillAttributeSet_GetRequiredXPForNextLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkillAttributeSet_GetRequiredXPForNextLevel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USkillAttributeSet_GetRequiredXPForNextLevel_Statics::SkillAttributeSet_eventGetRequiredXPForNextLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkillAttributeSet_GetRequiredXPForNextLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkillAttributeSet_GetRequiredXPForNextLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkillAttributeSet::execGetRequiredXPForNextLevel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetRequiredXPForNextLevel();
	P_NATIVE_END;
}
// ********** End Class USkillAttributeSet Function GetRequiredXPForNextLevel **********************

// ********** Begin Class USkillAttributeSet Function OnRep_CurrentLevel ***************************
struct Z_Construct_UFunction_USkillAttributeSet_OnRep_CurrentLevel_Statics
{
	struct SkillAttributeSet_eventOnRep_CurrentLevel_Parms
	{
		FGameplayAttributeData OldLevel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// REPLICATION function for CurrentLevel Attribute\n" },
#endif
		{ "ModuleRelativePath", "Public/SkillAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "REPLICATION function for CurrentLevel Attribute" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldLevel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRep_CurrentLevel constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnRep_CurrentLevel constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnRep_CurrentLevel Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkillAttributeSet_OnRep_CurrentLevel_Statics::NewProp_OldLevel = { "OldLevel", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkillAttributeSet_eventOnRep_CurrentLevel_Parms, OldLevel), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldLevel_MetaData), NewProp_OldLevel_MetaData) }; // 3543875268
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkillAttributeSet_OnRep_CurrentLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillAttributeSet_OnRep_CurrentLevel_Statics::NewProp_OldLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkillAttributeSet_OnRep_CurrentLevel_Statics::PropPointers) < 2048);
// ********** End Function OnRep_CurrentLevel Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkillAttributeSet_OnRep_CurrentLevel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USkillAttributeSet, nullptr, "OnRep_CurrentLevel", 	Z_Construct_UFunction_USkillAttributeSet_OnRep_CurrentLevel_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USkillAttributeSet_OnRep_CurrentLevel_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USkillAttributeSet_OnRep_CurrentLevel_Statics::SkillAttributeSet_eventOnRep_CurrentLevel_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkillAttributeSet_OnRep_CurrentLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkillAttributeSet_OnRep_CurrentLevel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USkillAttributeSet_OnRep_CurrentLevel_Statics::SkillAttributeSet_eventOnRep_CurrentLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkillAttributeSet_OnRep_CurrentLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkillAttributeSet_OnRep_CurrentLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkillAttributeSet::execOnRep_CurrentLevel)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_CurrentLevel(Z_Param_Out_OldLevel);
	P_NATIVE_END;
}
// ********** End Class USkillAttributeSet Function OnRep_CurrentLevel *****************************

// ********** Begin Class USkillAttributeSet Function OnRep_Experience *****************************
struct Z_Construct_UFunction_USkillAttributeSet_OnRep_Experience_Statics
{
	struct SkillAttributeSet_eventOnRep_Experience_Parms
	{
		FGameplayAttributeData OldExperience;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// REPLICATION function for Experience Attribute\n" },
#endif
		{ "ModuleRelativePath", "Public/SkillAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "REPLICATION function for Experience Attribute" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldExperience_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRep_Experience constinit property declarations **********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldExperience;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnRep_Experience constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnRep_Experience Property Definitions *********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkillAttributeSet_OnRep_Experience_Statics::NewProp_OldExperience = { "OldExperience", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkillAttributeSet_eventOnRep_Experience_Parms, OldExperience), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldExperience_MetaData), NewProp_OldExperience_MetaData) }; // 3543875268
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkillAttributeSet_OnRep_Experience_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillAttributeSet_OnRep_Experience_Statics::NewProp_OldExperience,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkillAttributeSet_OnRep_Experience_Statics::PropPointers) < 2048);
// ********** End Function OnRep_Experience Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkillAttributeSet_OnRep_Experience_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USkillAttributeSet, nullptr, "OnRep_Experience", 	Z_Construct_UFunction_USkillAttributeSet_OnRep_Experience_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USkillAttributeSet_OnRep_Experience_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USkillAttributeSet_OnRep_Experience_Statics::SkillAttributeSet_eventOnRep_Experience_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkillAttributeSet_OnRep_Experience_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkillAttributeSet_OnRep_Experience_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USkillAttributeSet_OnRep_Experience_Statics::SkillAttributeSet_eventOnRep_Experience_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkillAttributeSet_OnRep_Experience()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkillAttributeSet_OnRep_Experience_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkillAttributeSet::execOnRep_Experience)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldExperience);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Experience(Z_Param_Out_OldExperience);
	P_NATIVE_END;
}
// ********** End Class USkillAttributeSet Function OnRep_Experience *******************************

// ********** Begin Class USkillAttributeSet Function OnRep_ExperienceGainMultiplier ***************
struct Z_Construct_UFunction_USkillAttributeSet_OnRep_ExperienceGainMultiplier_Statics
{
	struct SkillAttributeSet_eventOnRep_ExperienceGainMultiplier_Parms
	{
		FGameplayAttributeData OldMultiplier;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// REPLICATION function for ExperienceGainMultiplier\n" },
#endif
		{ "ModuleRelativePath", "Public/SkillAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "REPLICATION function for ExperienceGainMultiplier" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldMultiplier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRep_ExperienceGainMultiplier constinit property declarations ********
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldMultiplier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnRep_ExperienceGainMultiplier constinit property declarations **********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnRep_ExperienceGainMultiplier Property Definitions *******************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkillAttributeSet_OnRep_ExperienceGainMultiplier_Statics::NewProp_OldMultiplier = { "OldMultiplier", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkillAttributeSet_eventOnRep_ExperienceGainMultiplier_Parms, OldMultiplier), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldMultiplier_MetaData), NewProp_OldMultiplier_MetaData) }; // 3543875268
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkillAttributeSet_OnRep_ExperienceGainMultiplier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillAttributeSet_OnRep_ExperienceGainMultiplier_Statics::NewProp_OldMultiplier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkillAttributeSet_OnRep_ExperienceGainMultiplier_Statics::PropPointers) < 2048);
// ********** End Function OnRep_ExperienceGainMultiplier Property Definitions *********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkillAttributeSet_OnRep_ExperienceGainMultiplier_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USkillAttributeSet, nullptr, "OnRep_ExperienceGainMultiplier", 	Z_Construct_UFunction_USkillAttributeSet_OnRep_ExperienceGainMultiplier_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USkillAttributeSet_OnRep_ExperienceGainMultiplier_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USkillAttributeSet_OnRep_ExperienceGainMultiplier_Statics::SkillAttributeSet_eventOnRep_ExperienceGainMultiplier_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkillAttributeSet_OnRep_ExperienceGainMultiplier_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkillAttributeSet_OnRep_ExperienceGainMultiplier_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USkillAttributeSet_OnRep_ExperienceGainMultiplier_Statics::SkillAttributeSet_eventOnRep_ExperienceGainMultiplier_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkillAttributeSet_OnRep_ExperienceGainMultiplier()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkillAttributeSet_OnRep_ExperienceGainMultiplier_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkillAttributeSet::execOnRep_ExperienceGainMultiplier)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMultiplier);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_ExperienceGainMultiplier(Z_Param_Out_OldMultiplier);
	P_NATIVE_END;
}
// ********** End Class USkillAttributeSet Function OnRep_ExperienceGainMultiplier *****************

// ********** Begin Class USkillAttributeSet Function OnRep_MaxLevel *******************************
struct Z_Construct_UFunction_USkillAttributeSet_OnRep_MaxLevel_Statics
{
	struct SkillAttributeSet_eventOnRep_MaxLevel_Parms
	{
		FGameplayAttributeData OldMax;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// REPLICATION function for MaxLevel Attribute\n" },
#endif
		{ "ModuleRelativePath", "Public/SkillAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "REPLICATION function for MaxLevel Attribute" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldMax_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRep_MaxLevel constinit property declarations ************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldMax;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnRep_MaxLevel constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnRep_MaxLevel Property Definitions ***********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkillAttributeSet_OnRep_MaxLevel_Statics::NewProp_OldMax = { "OldMax", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkillAttributeSet_eventOnRep_MaxLevel_Parms, OldMax), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldMax_MetaData), NewProp_OldMax_MetaData) }; // 3543875268
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkillAttributeSet_OnRep_MaxLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillAttributeSet_OnRep_MaxLevel_Statics::NewProp_OldMax,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkillAttributeSet_OnRep_MaxLevel_Statics::PropPointers) < 2048);
// ********** End Function OnRep_MaxLevel Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkillAttributeSet_OnRep_MaxLevel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USkillAttributeSet, nullptr, "OnRep_MaxLevel", 	Z_Construct_UFunction_USkillAttributeSet_OnRep_MaxLevel_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USkillAttributeSet_OnRep_MaxLevel_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USkillAttributeSet_OnRep_MaxLevel_Statics::SkillAttributeSet_eventOnRep_MaxLevel_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkillAttributeSet_OnRep_MaxLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkillAttributeSet_OnRep_MaxLevel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USkillAttributeSet_OnRep_MaxLevel_Statics::SkillAttributeSet_eventOnRep_MaxLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkillAttributeSet_OnRep_MaxLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkillAttributeSet_OnRep_MaxLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkillAttributeSet::execOnRep_MaxLevel)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMax);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MaxLevel(Z_Param_Out_OldMax);
	P_NATIVE_END;
}
// ********** End Class USkillAttributeSet Function OnRep_MaxLevel *********************************

// ********** Begin Class USkillAttributeSet Function OnRep_MinLevel *******************************
struct Z_Construct_UFunction_USkillAttributeSet_OnRep_MinLevel_Statics
{
	struct SkillAttributeSet_eventOnRep_MinLevel_Parms
	{
		FGameplayAttributeData OldMin;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// REPLICATION function for MinLevel Attribute\n" },
#endif
		{ "ModuleRelativePath", "Public/SkillAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "REPLICATION function for MinLevel Attribute" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldMin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRep_MinLevel constinit property declarations ************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldMin;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnRep_MinLevel constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnRep_MinLevel Property Definitions ***********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkillAttributeSet_OnRep_MinLevel_Statics::NewProp_OldMin = { "OldMin", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkillAttributeSet_eventOnRep_MinLevel_Parms, OldMin), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldMin_MetaData), NewProp_OldMin_MetaData) }; // 3543875268
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkillAttributeSet_OnRep_MinLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillAttributeSet_OnRep_MinLevel_Statics::NewProp_OldMin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkillAttributeSet_OnRep_MinLevel_Statics::PropPointers) < 2048);
// ********** End Function OnRep_MinLevel Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkillAttributeSet_OnRep_MinLevel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USkillAttributeSet, nullptr, "OnRep_MinLevel", 	Z_Construct_UFunction_USkillAttributeSet_OnRep_MinLevel_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USkillAttributeSet_OnRep_MinLevel_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USkillAttributeSet_OnRep_MinLevel_Statics::SkillAttributeSet_eventOnRep_MinLevel_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkillAttributeSet_OnRep_MinLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkillAttributeSet_OnRep_MinLevel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USkillAttributeSet_OnRep_MinLevel_Statics::SkillAttributeSet_eventOnRep_MinLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkillAttributeSet_OnRep_MinLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkillAttributeSet_OnRep_MinLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkillAttributeSet::execOnRep_MinLevel)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMin);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MinLevel(Z_Param_Out_OldMin);
	P_NATIVE_END;
}
// ********** End Class USkillAttributeSet Function OnRep_MinLevel *********************************

// ********** Begin Class USkillAttributeSet *******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USkillAttributeSet;
UClass* USkillAttributeSet::GetPrivateStaticClass()
{
	using TClass = USkillAttributeSet;
	if (!Z_Registration_Info_UClass_USkillAttributeSet.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SkillAttributeSet"),
			Z_Registration_Info_UClass_USkillAttributeSet.InnerSingleton,
			StaticRegisterNativesUSkillAttributeSet,
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
	return Z_Registration_Info_UClass_USkillAttributeSet.InnerSingleton;
}
UClass* Z_Construct_UClass_USkillAttributeSet_NoRegister()
{
	return USkillAttributeSet::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USkillAttributeSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Attribute sets used for skills.\n * Skills gain experience based on using associated actions, and that experience builds until the next level is reached.\n */" },
#endif
		{ "IncludePath", "SkillAttributeSet.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SkillAttributeSet.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attribute sets used for skills.\nSkills gain experience based on using associated actions, and that experience builds until the next level is reached." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkillCategory_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Skill" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* When looking at the Skill UI screen, this will be the category that this skill will display under */" },
#endif
		{ "ModuleRelativePath", "Public/SkillAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When looking at the Skill UI screen, this will be the category that this skill will display under" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Experience_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Skill|Experience & Levels" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Attribute used to store how much experience in the given skill an entity has */" },
#endif
		{ "HideFromModifiers", "" },
		{ "ModuleRelativePath", "Public/SkillAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attribute used to store how much experience in the given skill an entity has" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultExperience_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Skill|Experience & Levels" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Determines the experience an entity starts with for this skill */" },
#endif
		{ "ModuleRelativePath", "Public/SkillAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Determines the experience an entity starts with for this skill" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExperienceGainMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Skill|Experience & Levels" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Attribute used to store how much experience gain will be increased by */" },
#endif
		{ "HideFromModifiers", "" },
		{ "ModuleRelativePath", "Public/SkillAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attribute used to store how much experience gain will be increased by" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultExperienceGainMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Skill|Experience & Levels" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Determines the experience gain multiplier and entity starts with for this skill*/" },
#endif
		{ "ModuleRelativePath", "Public/SkillAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Determines the experience gain multiplier and entity starts with for this skill" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanGainExperience_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Skill|Experience & Levels" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Determines whether an entity can earn experience for this skill */" },
#endif
		{ "ModuleRelativePath", "Public/SkillAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Determines whether an entity can earn experience for this skill" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanLoseExperience_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Skill|Experience & Levels" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Determines whether an entity can lose experience for this skill */" },
#endif
		{ "ModuleRelativePath", "Public/SkillAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Determines whether an entity can lose experience for this skill" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentLevel_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Skill|Experience & Levels" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Attribute used to store what skill level an entity is currently at */" },
#endif
		{ "HideFromModifiers", "" },
		{ "ModuleRelativePath", "Public/SkillAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attribute used to store what skill level an entity is currently at" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanGainLevels_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Skill|Experience & Levels" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Determines whether an entity can gain levels in this skill */" },
#endif
		{ "ModuleRelativePath", "Public/SkillAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Determines whether an entity can gain levels in this skill" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanLoseLevels_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Skill|Experience & Levels" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Determines whether an entity can lose levels in this skill */" },
#endif
		{ "ModuleRelativePath", "Public/SkillAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Determines whether an entity can lose levels in this skill" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinLevel_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Skill|Experience & Levels" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Attribute used to store the minimum level a skill can be */" },
#endif
		{ "HideFromModifiers", "" },
		{ "ModuleRelativePath", "Public/SkillAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attribute used to store the minimum level a skill can be" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMinLevel_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Skill|Experience & Levels" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Determines default minimum skill level without adjustments/modifiers */" },
#endif
		{ "EditCondition", "!bInfiniteMinLevel" },
		{ "ModuleRelativePath", "Public/SkillAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Determines default minimum skill level without adjustments/modifiers" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInfiniteMinLevel_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Skill|Experience & Levels" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* If true, skill level has no minimum */" },
#endif
		{ "ModuleRelativePath", "Public/SkillAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, skill level has no minimum" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxLevel_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Skill|Experience & Levels" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Attribute used to store the maximum level a skill can be */" },
#endif
		{ "HideFromModifiers", "" },
		{ "ModuleRelativePath", "Public/SkillAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attribute used to store the maximum level a skill can be" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMaxLevel_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Skill|Experience & Levels" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Determines default maximum skill level without adjustments/modifiers */" },
#endif
		{ "EditCondition", "!bInfiniteMaxLevel" },
		{ "ModuleRelativePath", "Public/SkillAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Determines default maximum skill level without adjustments/modifiers" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInfiniteMaxLevel_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Skill|Experience & Levels" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* If true, skill level has no maximum */" },
#endif
		{ "ModuleRelativePath", "Public/SkillAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, skill level has no maximum" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Subskills_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Skill" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Skills considered parts of this skill */" },
#endif
		{ "ModuleRelativePath", "Public/SkillAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Skills considered parts of this skill" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class USkillAttributeSet constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SkillCategory;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Experience;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultExperience;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExperienceGainMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultExperienceGainMultiplier;
	static void NewProp_bCanGainExperience_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanGainExperience;
	static void NewProp_bCanLoseExperience_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanLoseExperience;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentLevel;
	static void NewProp_bCanGainLevels_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanGainLevels;
	static void NewProp_bCanLoseLevels_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanLoseLevels;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MinLevel;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DefaultMinLevel;
	static void NewProp_bInfiniteMinLevel_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInfiniteMinLevel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxLevel;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DefaultMaxLevel;
	static void NewProp_bInfiniteMaxLevel_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInfiniteMaxLevel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Subskills;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USkillAttributeSet constinit property declarations *************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetRequiredXPForNextLevel"), .Pointer = &USkillAttributeSet::execGetRequiredXPForNextLevel },
		{ .NameUTF8 = UTF8TEXT("OnRep_CurrentLevel"), .Pointer = &USkillAttributeSet::execOnRep_CurrentLevel },
		{ .NameUTF8 = UTF8TEXT("OnRep_Experience"), .Pointer = &USkillAttributeSet::execOnRep_Experience },
		{ .NameUTF8 = UTF8TEXT("OnRep_ExperienceGainMultiplier"), .Pointer = &USkillAttributeSet::execOnRep_ExperienceGainMultiplier },
		{ .NameUTF8 = UTF8TEXT("OnRep_MaxLevel"), .Pointer = &USkillAttributeSet::execOnRep_MaxLevel },
		{ .NameUTF8 = UTF8TEXT("OnRep_MinLevel"), .Pointer = &USkillAttributeSet::execOnRep_MinLevel },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USkillAttributeSet_GetRequiredXPForNextLevel, "GetRequiredXPForNextLevel" }, // 2445062681
		{ &Z_Construct_UFunction_USkillAttributeSet_OnRep_CurrentLevel, "OnRep_CurrentLevel" }, // 521190138
		{ &Z_Construct_UFunction_USkillAttributeSet_OnRep_Experience, "OnRep_Experience" }, // 1163209441
		{ &Z_Construct_UFunction_USkillAttributeSet_OnRep_ExperienceGainMultiplier, "OnRep_ExperienceGainMultiplier" }, // 2920626859
		{ &Z_Construct_UFunction_USkillAttributeSet_OnRep_MaxLevel, "OnRep_MaxLevel" }, // 2247335882
		{ &Z_Construct_UFunction_USkillAttributeSet_OnRep_MinLevel, "OnRep_MinLevel" }, // 1448511542
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkillAttributeSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USkillAttributeSet_Statics

// ********** Begin Class USkillAttributeSet Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkillAttributeSet_Statics::NewProp_SkillCategory = { "SkillCategory", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkillAttributeSet, SkillCategory), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkillCategory_MetaData), NewProp_SkillCategory_MetaData) }; // 517357616
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkillAttributeSet_Statics::NewProp_Experience = { "Experience", "OnRep_Experience", (EPropertyFlags)0x0040000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkillAttributeSet, Experience), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Experience_MetaData), NewProp_Experience_MetaData) }; // 3543875268
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USkillAttributeSet_Statics::NewProp_DefaultExperience = { "DefaultExperience", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkillAttributeSet, DefaultExperience), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultExperience_MetaData), NewProp_DefaultExperience_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkillAttributeSet_Statics::NewProp_ExperienceGainMultiplier = { "ExperienceGainMultiplier", "OnRep_ExperienceGainMultiplier", (EPropertyFlags)0x0040000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkillAttributeSet, ExperienceGainMultiplier), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExperienceGainMultiplier_MetaData), NewProp_ExperienceGainMultiplier_MetaData) }; // 3543875268
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USkillAttributeSet_Statics::NewProp_DefaultExperienceGainMultiplier = { "DefaultExperienceGainMultiplier", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkillAttributeSet, DefaultExperienceGainMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultExperienceGainMultiplier_MetaData), NewProp_DefaultExperienceGainMultiplier_MetaData) };
void Z_Construct_UClass_USkillAttributeSet_Statics::NewProp_bCanGainExperience_SetBit(void* Obj)
{
	((USkillAttributeSet*)Obj)->bCanGainExperience = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkillAttributeSet_Statics::NewProp_bCanGainExperience = { "bCanGainExperience", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USkillAttributeSet), &Z_Construct_UClass_USkillAttributeSet_Statics::NewProp_bCanGainExperience_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanGainExperience_MetaData), NewProp_bCanGainExperience_MetaData) };
void Z_Construct_UClass_USkillAttributeSet_Statics::NewProp_bCanLoseExperience_SetBit(void* Obj)
{
	((USkillAttributeSet*)Obj)->bCanLoseExperience = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkillAttributeSet_Statics::NewProp_bCanLoseExperience = { "bCanLoseExperience", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USkillAttributeSet), &Z_Construct_UClass_USkillAttributeSet_Statics::NewProp_bCanLoseExperience_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanLoseExperience_MetaData), NewProp_bCanLoseExperience_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkillAttributeSet_Statics::NewProp_CurrentLevel = { "CurrentLevel", "OnRep_CurrentLevel", (EPropertyFlags)0x0040000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkillAttributeSet, CurrentLevel), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentLevel_MetaData), NewProp_CurrentLevel_MetaData) }; // 3543875268
void Z_Construct_UClass_USkillAttributeSet_Statics::NewProp_bCanGainLevels_SetBit(void* Obj)
{
	((USkillAttributeSet*)Obj)->bCanGainLevels = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkillAttributeSet_Statics::NewProp_bCanGainLevels = { "bCanGainLevels", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USkillAttributeSet), &Z_Construct_UClass_USkillAttributeSet_Statics::NewProp_bCanGainLevels_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanGainLevels_MetaData), NewProp_bCanGainLevels_MetaData) };
void Z_Construct_UClass_USkillAttributeSet_Statics::NewProp_bCanLoseLevels_SetBit(void* Obj)
{
	((USkillAttributeSet*)Obj)->bCanLoseLevels = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkillAttributeSet_Statics::NewProp_bCanLoseLevels = { "bCanLoseLevels", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USkillAttributeSet), &Z_Construct_UClass_USkillAttributeSet_Statics::NewProp_bCanLoseLevels_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanLoseLevels_MetaData), NewProp_bCanLoseLevels_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkillAttributeSet_Statics::NewProp_MinLevel = { "MinLevel", "OnRep_MinLevel", (EPropertyFlags)0x0040000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkillAttributeSet, MinLevel), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinLevel_MetaData), NewProp_MinLevel_MetaData) }; // 3543875268
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USkillAttributeSet_Statics::NewProp_DefaultMinLevel = { "DefaultMinLevel", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkillAttributeSet, DefaultMinLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMinLevel_MetaData), NewProp_DefaultMinLevel_MetaData) };
void Z_Construct_UClass_USkillAttributeSet_Statics::NewProp_bInfiniteMinLevel_SetBit(void* Obj)
{
	((USkillAttributeSet*)Obj)->bInfiniteMinLevel = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkillAttributeSet_Statics::NewProp_bInfiniteMinLevel = { "bInfiniteMinLevel", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USkillAttributeSet), &Z_Construct_UClass_USkillAttributeSet_Statics::NewProp_bInfiniteMinLevel_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInfiniteMinLevel_MetaData), NewProp_bInfiniteMinLevel_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkillAttributeSet_Statics::NewProp_MaxLevel = { "MaxLevel", "OnRep_MaxLevel", (EPropertyFlags)0x0040000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkillAttributeSet, MaxLevel), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxLevel_MetaData), NewProp_MaxLevel_MetaData) }; // 3543875268
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USkillAttributeSet_Statics::NewProp_DefaultMaxLevel = { "DefaultMaxLevel", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkillAttributeSet, DefaultMaxLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMaxLevel_MetaData), NewProp_DefaultMaxLevel_MetaData) };
void Z_Construct_UClass_USkillAttributeSet_Statics::NewProp_bInfiniteMaxLevel_SetBit(void* Obj)
{
	((USkillAttributeSet*)Obj)->bInfiniteMaxLevel = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkillAttributeSet_Statics::NewProp_bInfiniteMaxLevel = { "bInfiniteMaxLevel", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USkillAttributeSet), &Z_Construct_UClass_USkillAttributeSet_Statics::NewProp_bInfiniteMaxLevel_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInfiniteMaxLevel_MetaData), NewProp_bInfiniteMaxLevel_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkillAttributeSet_Statics::NewProp_Subskills = { "Subskills", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkillAttributeSet, Subskills), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Subskills_MetaData), NewProp_Subskills_MetaData) }; // 3438578166
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USkillAttributeSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillAttributeSet_Statics::NewProp_SkillCategory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillAttributeSet_Statics::NewProp_Experience,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillAttributeSet_Statics::NewProp_DefaultExperience,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillAttributeSet_Statics::NewProp_ExperienceGainMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillAttributeSet_Statics::NewProp_DefaultExperienceGainMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillAttributeSet_Statics::NewProp_bCanGainExperience,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillAttributeSet_Statics::NewProp_bCanLoseExperience,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillAttributeSet_Statics::NewProp_CurrentLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillAttributeSet_Statics::NewProp_bCanGainLevels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillAttributeSet_Statics::NewProp_bCanLoseLevels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillAttributeSet_Statics::NewProp_MinLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillAttributeSet_Statics::NewProp_DefaultMinLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillAttributeSet_Statics::NewProp_bInfiniteMinLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillAttributeSet_Statics::NewProp_MaxLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillAttributeSet_Statics::NewProp_DefaultMaxLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillAttributeSet_Statics::NewProp_bInfiniteMaxLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillAttributeSet_Statics::NewProp_Subskills,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USkillAttributeSet_Statics::PropPointers) < 2048);
// ********** End Class USkillAttributeSet Property Definitions ************************************
UObject* (*const Z_Construct_UClass_USkillAttributeSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEntityAttributeSet,
	(UObject* (*)())Z_Construct_UPackage__Script_Simulation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USkillAttributeSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USkillAttributeSet_Statics::ClassParams = {
	&USkillAttributeSet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USkillAttributeSet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USkillAttributeSet_Statics::PropPointers),
	0,
	0x043000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USkillAttributeSet_Statics::Class_MetaDataParams), Z_Construct_UClass_USkillAttributeSet_Statics::Class_MetaDataParams)
};
void USkillAttributeSet::StaticRegisterNativesUSkillAttributeSet()
{
	UClass* Class = USkillAttributeSet::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USkillAttributeSet_Statics::Funcs));
}
UClass* Z_Construct_UClass_USkillAttributeSet()
{
	if (!Z_Registration_Info_UClass_USkillAttributeSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USkillAttributeSet.OuterSingleton, Z_Construct_UClass_USkillAttributeSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USkillAttributeSet.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void USkillAttributeSet::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_Experience(TEXT("Experience"));
	static FName Name_ExperienceGainMultiplier(TEXT("ExperienceGainMultiplier"));
	static FName Name_CurrentLevel(TEXT("CurrentLevel"));
	static FName Name_MinLevel(TEXT("MinLevel"));
	static FName Name_MaxLevel(TEXT("MaxLevel"));
	const bool bIsValid = true
		&& Name_Experience == ClassReps[(int32)ENetFields_Private::Experience].Property->GetFName()
		&& Name_ExperienceGainMultiplier == ClassReps[(int32)ENetFields_Private::ExperienceGainMultiplier].Property->GetFName()
		&& Name_CurrentLevel == ClassReps[(int32)ENetFields_Private::CurrentLevel].Property->GetFName()
		&& Name_MinLevel == ClassReps[(int32)ENetFields_Private::MinLevel].Property->GetFName()
		&& Name_MaxLevel == ClassReps[(int32)ENetFields_Private::MaxLevel].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in USkillAttributeSet"));
}
#endif
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USkillAttributeSet);
USkillAttributeSet::~USkillAttributeSet() {}
// ********** End Class USkillAttributeSet *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_SkillAttributeSet_h__Script_Simulation_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USkillAttributeSet, USkillAttributeSet::StaticClass, TEXT("USkillAttributeSet"), &Z_Registration_Info_UClass_USkillAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USkillAttributeSet), 3382959092U) },
	};
}; // Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_SkillAttributeSet_h__Script_Simulation_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_SkillAttributeSet_h__Script_Simulation_3871995407{
	TEXT("/Script/Simulation"),
	Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_SkillAttributeSet_h__Script_Simulation_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_SkillAttributeSet_h__Script_Simulation_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
