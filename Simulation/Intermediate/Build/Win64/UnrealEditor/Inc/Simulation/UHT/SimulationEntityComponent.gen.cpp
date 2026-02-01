// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimulationEntityComponent.h"
#include "Engine/HitResult.h"
#include "UObject/Class.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSimulationEntityComponent() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent();
GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayEffectReplicationMode();
SIMULATION_API UClass* Z_Construct_UClass_UEntityAttributeSet_NoRegister();
SIMULATION_API UClass* Z_Construct_UClass_USimulationEntityComponent();
SIMULATION_API UClass* Z_Construct_UClass_USimulationEntityComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Simulation();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USimulationEntityComponent Function AddAttributeSet **********************
struct Z_Construct_UFunction_USimulationEntityComponent_AddAttributeSet_Statics
{
	struct SimulationEntityComponent_eventAddAttributeSet_Parms
	{
		TSubclassOf<UEntityAttributeSet> AttributeSetClass;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Simulation Entity|Attributes" },
		{ "ModuleRelativePath", "Public/SimulationEntityComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddAttributeSet constinit property declarations ***********************
	static const UECodeGen_Private::FClassPropertyParams NewProp_AttributeSetClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddAttributeSet constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddAttributeSet Property Definitions **********************************
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USimulationEntityComponent_AddAttributeSet_Statics::NewProp_AttributeSetClass = { "AttributeSetClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimulationEntityComponent_eventAddAttributeSet_Parms, AttributeSetClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UEntityAttributeSet_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimulationEntityComponent_AddAttributeSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimulationEntityComponent_AddAttributeSet_Statics::NewProp_AttributeSetClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimulationEntityComponent_AddAttributeSet_Statics::PropPointers) < 2048);
// ********** End Function AddAttributeSet Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimulationEntityComponent_AddAttributeSet_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USimulationEntityComponent, nullptr, "AddAttributeSet", 	Z_Construct_UFunction_USimulationEntityComponent_AddAttributeSet_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USimulationEntityComponent_AddAttributeSet_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USimulationEntityComponent_AddAttributeSet_Statics::SimulationEntityComponent_eventAddAttributeSet_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimulationEntityComponent_AddAttributeSet_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimulationEntityComponent_AddAttributeSet_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USimulationEntityComponent_AddAttributeSet_Statics::SimulationEntityComponent_eventAddAttributeSet_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimulationEntityComponent_AddAttributeSet()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimulationEntityComponent_AddAttributeSet_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimulationEntityComponent::execAddAttributeSet)
{
	P_GET_OBJECT(UClass,Z_Param_AttributeSetClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddAttributeSet(Z_Param_AttributeSetClass);
	P_NATIVE_END;
}
// ********** End Class USimulationEntityComponent Function AddAttributeSet ************************

// ********** Begin Class USimulationEntityComponent Function AddAttributeSets *********************
struct Z_Construct_UFunction_USimulationEntityComponent_AddAttributeSets_Statics
{
	struct SimulationEntityComponent_eventAddAttributeSets_Parms
	{
		TArray<TSubclassOf<UEntityAttributeSet>> AttributeSetClasses;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Simulation Entity|Attributes" },
		{ "ModuleRelativePath", "Public/SimulationEntityComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddAttributeSets constinit property declarations **********************
	static const UECodeGen_Private::FClassPropertyParams NewProp_AttributeSetClasses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AttributeSetClasses;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddAttributeSets constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddAttributeSets Property Definitions *********************************
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USimulationEntityComponent_AddAttributeSets_Statics::NewProp_AttributeSetClasses_Inner = { "AttributeSetClasses", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UEntityAttributeSet_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USimulationEntityComponent_AddAttributeSets_Statics::NewProp_AttributeSetClasses = { "AttributeSetClasses", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimulationEntityComponent_eventAddAttributeSets_Parms, AttributeSetClasses), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimulationEntityComponent_AddAttributeSets_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimulationEntityComponent_AddAttributeSets_Statics::NewProp_AttributeSetClasses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimulationEntityComponent_AddAttributeSets_Statics::NewProp_AttributeSetClasses,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimulationEntityComponent_AddAttributeSets_Statics::PropPointers) < 2048);
// ********** End Function AddAttributeSets Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimulationEntityComponent_AddAttributeSets_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USimulationEntityComponent, nullptr, "AddAttributeSets", 	Z_Construct_UFunction_USimulationEntityComponent_AddAttributeSets_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USimulationEntityComponent_AddAttributeSets_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USimulationEntityComponent_AddAttributeSets_Statics::SimulationEntityComponent_eventAddAttributeSets_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimulationEntityComponent_AddAttributeSets_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimulationEntityComponent_AddAttributeSets_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USimulationEntityComponent_AddAttributeSets_Statics::SimulationEntityComponent_eventAddAttributeSets_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimulationEntityComponent_AddAttributeSets()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimulationEntityComponent_AddAttributeSets_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimulationEntityComponent::execAddAttributeSets)
{
	P_GET_TARRAY(TSubclassOf<UEntityAttributeSet>,Z_Param_AttributeSetClasses);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddAttributeSets(Z_Param_AttributeSetClasses);
	P_NATIVE_END;
}
// ********** End Class USimulationEntityComponent Function AddAttributeSets ***********************

// ********** Begin Class USimulationEntityComponent Function GetDefaultReplicationMode ************
struct Z_Construct_UFunction_USimulationEntityComponent_GetDefaultReplicationMode_Statics
{
	struct SimulationEntityComponent_eventGetDefaultReplicationMode_Parms
	{
		EGameplayEffectReplicationMode ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Simulation Entity|Replication" },
		{ "ModuleRelativePath", "Public/SimulationEntityComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetDefaultReplicationMode constinit property declarations *************
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetDefaultReplicationMode constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetDefaultReplicationMode Property Definitions ************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimulationEntityComponent_GetDefaultReplicationMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USimulationEntityComponent_GetDefaultReplicationMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimulationEntityComponent_eventGetDefaultReplicationMode_Parms, ReturnValue), Z_Construct_UEnum_GameplayAbilities_EGameplayEffectReplicationMode, METADATA_PARAMS(0, nullptr) }; // 3513395660
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimulationEntityComponent_GetDefaultReplicationMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimulationEntityComponent_GetDefaultReplicationMode_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimulationEntityComponent_GetDefaultReplicationMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimulationEntityComponent_GetDefaultReplicationMode_Statics::PropPointers) < 2048);
// ********** End Function GetDefaultReplicationMode Property Definitions **************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimulationEntityComponent_GetDefaultReplicationMode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USimulationEntityComponent, nullptr, "GetDefaultReplicationMode", 	Z_Construct_UFunction_USimulationEntityComponent_GetDefaultReplicationMode_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USimulationEntityComponent_GetDefaultReplicationMode_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USimulationEntityComponent_GetDefaultReplicationMode_Statics::SimulationEntityComponent_eventGetDefaultReplicationMode_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimulationEntityComponent_GetDefaultReplicationMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimulationEntityComponent_GetDefaultReplicationMode_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USimulationEntityComponent_GetDefaultReplicationMode_Statics::SimulationEntityComponent_eventGetDefaultReplicationMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimulationEntityComponent_GetDefaultReplicationMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimulationEntityComponent_GetDefaultReplicationMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimulationEntityComponent::execGetDefaultReplicationMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EGameplayEffectReplicationMode*)Z_Param__Result=P_THIS->GetDefaultReplicationMode();
	P_NATIVE_END;
}
// ********** End Class USimulationEntityComponent Function GetDefaultReplicationMode **************

// ********** Begin Class USimulationEntityComponent Function GetEntityName ************************
struct Z_Construct_UFunction_USimulationEntityComponent_GetEntityName_Statics
{
	struct SimulationEntityComponent_eventGetEntityName_Parms
	{
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Simulation Entity" },
		{ "ModuleRelativePath", "Public/SimulationEntityComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetEntityName constinit property declarations *************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetEntityName constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetEntityName Property Definitions ************************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USimulationEntityComponent_GetEntityName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimulationEntityComponent_eventGetEntityName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimulationEntityComponent_GetEntityName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimulationEntityComponent_GetEntityName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimulationEntityComponent_GetEntityName_Statics::PropPointers) < 2048);
// ********** End Function GetEntityName Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimulationEntityComponent_GetEntityName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USimulationEntityComponent, nullptr, "GetEntityName", 	Z_Construct_UFunction_USimulationEntityComponent_GetEntityName_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USimulationEntityComponent_GetEntityName_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USimulationEntityComponent_GetEntityName_Statics::SimulationEntityComponent_eventGetEntityName_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimulationEntityComponent_GetEntityName_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimulationEntityComponent_GetEntityName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USimulationEntityComponent_GetEntityName_Statics::SimulationEntityComponent_eventGetEntityName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimulationEntityComponent_GetEntityName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimulationEntityComponent_GetEntityName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimulationEntityComponent::execGetEntityName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=P_THIS->GetEntityName();
	P_NATIVE_END;
}
// ********** End Class USimulationEntityComponent Function GetEntityName **************************

// ********** Begin Class USimulationEntityComponent Function IsSimulationEntity *******************
struct Z_Construct_UFunction_USimulationEntityComponent_IsSimulationEntity_Statics
{
	struct SimulationEntityComponent_eventIsSimulationEntity_Parms
	{
		AActor* Actor;
		USimulationEntityComponent* OutEntityComponent;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Simulation Entity" },
		{ "ModuleRelativePath", "Public/SimulationEntityComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutEntityComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsSimulationEntity constinit property declarations ********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutEntityComponent;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsSimulationEntity constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsSimulationEntity Property Definitions *******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimulationEntityComponent_IsSimulationEntity_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimulationEntityComponent_eventIsSimulationEntity_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimulationEntityComponent_IsSimulationEntity_Statics::NewProp_OutEntityComponent = { "OutEntityComponent", nullptr, (EPropertyFlags)0x0010000000080180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimulationEntityComponent_eventIsSimulationEntity_Parms, OutEntityComponent), Z_Construct_UClass_USimulationEntityComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutEntityComponent_MetaData), NewProp_OutEntityComponent_MetaData) };
void Z_Construct_UFunction_USimulationEntityComponent_IsSimulationEntity_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SimulationEntityComponent_eventIsSimulationEntity_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimulationEntityComponent_IsSimulationEntity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimulationEntityComponent_eventIsSimulationEntity_Parms), &Z_Construct_UFunction_USimulationEntityComponent_IsSimulationEntity_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimulationEntityComponent_IsSimulationEntity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimulationEntityComponent_IsSimulationEntity_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimulationEntityComponent_IsSimulationEntity_Statics::NewProp_OutEntityComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimulationEntityComponent_IsSimulationEntity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimulationEntityComponent_IsSimulationEntity_Statics::PropPointers) < 2048);
// ********** End Function IsSimulationEntity Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimulationEntityComponent_IsSimulationEntity_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USimulationEntityComponent, nullptr, "IsSimulationEntity", 	Z_Construct_UFunction_USimulationEntityComponent_IsSimulationEntity_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USimulationEntityComponent_IsSimulationEntity_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USimulationEntityComponent_IsSimulationEntity_Statics::SimulationEntityComponent_eventIsSimulationEntity_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimulationEntityComponent_IsSimulationEntity_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimulationEntityComponent_IsSimulationEntity_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USimulationEntityComponent_IsSimulationEntity_Statics::SimulationEntityComponent_eventIsSimulationEntity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimulationEntityComponent_IsSimulationEntity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimulationEntityComponent_IsSimulationEntity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimulationEntityComponent::execIsSimulationEntity)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_OBJECT_REF(USimulationEntityComponent,Z_Param_Out_OutEntityComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USimulationEntityComponent::IsSimulationEntity(Z_Param_Actor,P_ARG_GC_BARRIER(Z_Param_Out_OutEntityComponent));
	P_NATIVE_END;
}
// ********** End Class USimulationEntityComponent Function IsSimulationEntity *********************

// ********** Begin Class USimulationEntityComponent Function OnRep_EntityName *********************
struct Z_Construct_UFunction_USimulationEntityComponent_OnRep_EntityName_Statics
{
	struct SimulationEntityComponent_eventOnRep_EntityName_Parms
	{
		FName OldName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** RepNotify for changes made to entity name */" },
#endif
		{ "ModuleRelativePath", "Public/SimulationEntityComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "RepNotify for changes made to entity name" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function OnRep_EntityName constinit property declarations **********************
	static const UECodeGen_Private::FNamePropertyParams NewProp_OldName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnRep_EntityName constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnRep_EntityName Property Definitions *********************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USimulationEntityComponent_OnRep_EntityName_Statics::NewProp_OldName = { "OldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimulationEntityComponent_eventOnRep_EntityName_Parms, OldName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimulationEntityComponent_OnRep_EntityName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimulationEntityComponent_OnRep_EntityName_Statics::NewProp_OldName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimulationEntityComponent_OnRep_EntityName_Statics::PropPointers) < 2048);
// ********** End Function OnRep_EntityName Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimulationEntityComponent_OnRep_EntityName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USimulationEntityComponent, nullptr, "OnRep_EntityName", 	Z_Construct_UFunction_USimulationEntityComponent_OnRep_EntityName_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USimulationEntityComponent_OnRep_EntityName_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USimulationEntityComponent_OnRep_EntityName_Statics::SimulationEntityComponent_eventOnRep_EntityName_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimulationEntityComponent_OnRep_EntityName_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimulationEntityComponent_OnRep_EntityName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USimulationEntityComponent_OnRep_EntityName_Statics::SimulationEntityComponent_eventOnRep_EntityName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimulationEntityComponent_OnRep_EntityName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimulationEntityComponent_OnRep_EntityName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimulationEntityComponent::execOnRep_EntityName)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_OldName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_EntityName(Z_Param_OldName);
	P_NATIVE_END;
}
// ********** End Class USimulationEntityComponent Function OnRep_EntityName ***********************

// ********** Begin Class USimulationEntityComponent Function TakeAnyDamage ************************
struct Z_Construct_UFunction_USimulationEntityComponent_TakeAnyDamage_Statics
{
	struct SimulationEntityComponent_eventTakeAnyDamage_Parms
	{
		AActor* DamagedActor;
		float Damage;
		const UDamageType* DamageType;
		AController* InstigatedBy;
		AActor* DamageCauser;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Subscribes to owning Actor's OnTakeAnyDamage delegate. Runs only on the server */" },
#endif
		{ "ModuleRelativePath", "Public/SimulationEntityComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Subscribes to owning Actor's OnTakeAnyDamage delegate. Runs only on the server" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function TakeAnyDamage constinit property declarations *************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamagedActor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InstigatedBy;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function TakeAnyDamage constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function TakeAnyDamage Property Definitions ************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimulationEntityComponent_TakeAnyDamage_Statics::NewProp_DamagedActor = { "DamagedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimulationEntityComponent_eventTakeAnyDamage_Parms, DamagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimulationEntityComponent_TakeAnyDamage_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimulationEntityComponent_eventTakeAnyDamage_Parms, Damage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimulationEntityComponent_TakeAnyDamage_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimulationEntityComponent_eventTakeAnyDamage_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageType_MetaData), NewProp_DamageType_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimulationEntityComponent_TakeAnyDamage_Statics::NewProp_InstigatedBy = { "InstigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimulationEntityComponent_eventTakeAnyDamage_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimulationEntityComponent_TakeAnyDamage_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimulationEntityComponent_eventTakeAnyDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimulationEntityComponent_TakeAnyDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimulationEntityComponent_TakeAnyDamage_Statics::NewProp_DamagedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimulationEntityComponent_TakeAnyDamage_Statics::NewProp_Damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimulationEntityComponent_TakeAnyDamage_Statics::NewProp_DamageType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimulationEntityComponent_TakeAnyDamage_Statics::NewProp_InstigatedBy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimulationEntityComponent_TakeAnyDamage_Statics::NewProp_DamageCauser,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimulationEntityComponent_TakeAnyDamage_Statics::PropPointers) < 2048);
// ********** End Function TakeAnyDamage Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimulationEntityComponent_TakeAnyDamage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USimulationEntityComponent, nullptr, "TakeAnyDamage", 	Z_Construct_UFunction_USimulationEntityComponent_TakeAnyDamage_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USimulationEntityComponent_TakeAnyDamage_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USimulationEntityComponent_TakeAnyDamage_Statics::SimulationEntityComponent_eventTakeAnyDamage_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimulationEntityComponent_TakeAnyDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimulationEntityComponent_TakeAnyDamage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USimulationEntityComponent_TakeAnyDamage_Statics::SimulationEntityComponent_eventTakeAnyDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimulationEntityComponent_TakeAnyDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimulationEntityComponent_TakeAnyDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimulationEntityComponent::execTakeAnyDamage)
{
	P_GET_OBJECT(AActor,Z_Param_DamagedActor);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Damage);
	P_GET_OBJECT(UDamageType,Z_Param_DamageType);
	P_GET_OBJECT(AController,Z_Param_InstigatedBy);
	P_GET_OBJECT(AActor,Z_Param_DamageCauser);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TakeAnyDamage(Z_Param_DamagedActor,Z_Param_Damage,Z_Param_DamageType,Z_Param_InstigatedBy,Z_Param_DamageCauser);
	P_NATIVE_END;
}
// ********** End Class USimulationEntityComponent Function TakeAnyDamage **************************

// ********** Begin Class USimulationEntityComponent Function TakePointDamage **********************
struct Z_Construct_UFunction_USimulationEntityComponent_TakePointDamage_Statics
{
	struct SimulationEntityComponent_eventTakePointDamage_Parms
	{
		AActor* DamagedActor;
		float Damage;
		AController* InstigatedBy;
		FVector HitLcation;
		UPrimitiveComponent* HitComponent;
		FName BoneName;
		FVector HitDirection;
		const UDamageType* DamageType;
		AActor* DamageCauser;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Subscribes to owning Actor's OnTakePointDamage delegate. Runs only on the server */" },
#endif
		{ "ModuleRelativePath", "Public/SimulationEntityComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Subscribes to owning Actor's OnTakePointDamage delegate. Runs only on the server" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function TakePointDamage constinit property declarations ***********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamagedActor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InstigatedBy;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitLcation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitComponent;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitDirection;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function TakePointDamage constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function TakePointDamage Property Definitions **********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimulationEntityComponent_TakePointDamage_Statics::NewProp_DamagedActor = { "DamagedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimulationEntityComponent_eventTakePointDamage_Parms, DamagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimulationEntityComponent_TakePointDamage_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimulationEntityComponent_eventTakePointDamage_Parms, Damage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimulationEntityComponent_TakePointDamage_Statics::NewProp_InstigatedBy = { "InstigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimulationEntityComponent_eventTakePointDamage_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimulationEntityComponent_TakePointDamage_Statics::NewProp_HitLcation = { "HitLcation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimulationEntityComponent_eventTakePointDamage_Parms, HitLcation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimulationEntityComponent_TakePointDamage_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimulationEntityComponent_eventTakePointDamage_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitComponent_MetaData), NewProp_HitComponent_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USimulationEntityComponent_TakePointDamage_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimulationEntityComponent_eventTakePointDamage_Parms, BoneName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimulationEntityComponent_TakePointDamage_Statics::NewProp_HitDirection = { "HitDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimulationEntityComponent_eventTakePointDamage_Parms, HitDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimulationEntityComponent_TakePointDamage_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimulationEntityComponent_eventTakePointDamage_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageType_MetaData), NewProp_DamageType_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimulationEntityComponent_TakePointDamage_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimulationEntityComponent_eventTakePointDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimulationEntityComponent_TakePointDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimulationEntityComponent_TakePointDamage_Statics::NewProp_DamagedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimulationEntityComponent_TakePointDamage_Statics::NewProp_Damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimulationEntityComponent_TakePointDamage_Statics::NewProp_InstigatedBy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimulationEntityComponent_TakePointDamage_Statics::NewProp_HitLcation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimulationEntityComponent_TakePointDamage_Statics::NewProp_HitComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimulationEntityComponent_TakePointDamage_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimulationEntityComponent_TakePointDamage_Statics::NewProp_HitDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimulationEntityComponent_TakePointDamage_Statics::NewProp_DamageType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimulationEntityComponent_TakePointDamage_Statics::NewProp_DamageCauser,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimulationEntityComponent_TakePointDamage_Statics::PropPointers) < 2048);
// ********** End Function TakePointDamage Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimulationEntityComponent_TakePointDamage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USimulationEntityComponent, nullptr, "TakePointDamage", 	Z_Construct_UFunction_USimulationEntityComponent_TakePointDamage_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USimulationEntityComponent_TakePointDamage_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USimulationEntityComponent_TakePointDamage_Statics::SimulationEntityComponent_eventTakePointDamage_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00880400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimulationEntityComponent_TakePointDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimulationEntityComponent_TakePointDamage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USimulationEntityComponent_TakePointDamage_Statics::SimulationEntityComponent_eventTakePointDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimulationEntityComponent_TakePointDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimulationEntityComponent_TakePointDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimulationEntityComponent::execTakePointDamage)
{
	P_GET_OBJECT(AActor,Z_Param_DamagedActor);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Damage);
	P_GET_OBJECT(AController,Z_Param_InstigatedBy);
	P_GET_STRUCT(FVector,Z_Param_HitLcation);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent);
	P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
	P_GET_STRUCT(FVector,Z_Param_HitDirection);
	P_GET_OBJECT(UDamageType,Z_Param_DamageType);
	P_GET_OBJECT(AActor,Z_Param_DamageCauser);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TakePointDamage(Z_Param_DamagedActor,Z_Param_Damage,Z_Param_InstigatedBy,Z_Param_HitLcation,Z_Param_HitComponent,Z_Param_BoneName,Z_Param_HitDirection,Z_Param_DamageType,Z_Param_DamageCauser);
	P_NATIVE_END;
}
// ********** End Class USimulationEntityComponent Function TakePointDamage ************************

// ********** Begin Class USimulationEntityComponent Function TakeRadialDamage *********************
struct Z_Construct_UFunction_USimulationEntityComponent_TakeRadialDamage_Statics
{
	struct SimulationEntityComponent_eventTakeRadialDamage_Parms
	{
		AActor* DamagedActor;
		float Damage;
		const UDamageType* DamageType;
		FVector Origin;
		FHitResult HitInfo;
		AController* InstigatedBy;
		AActor* DamageCauser;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Subscribes to owning Actor's OnTakeRadialDamage delegate. Runs only on the server */" },
#endif
		{ "ModuleRelativePath", "Public/SimulationEntityComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Subscribes to owning Actor's OnTakeRadialDamage delegate. Runs only on the server" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function TakeRadialDamage constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamagedActor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitInfo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InstigatedBy;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function TakeRadialDamage constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function TakeRadialDamage Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimulationEntityComponent_TakeRadialDamage_Statics::NewProp_DamagedActor = { "DamagedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimulationEntityComponent_eventTakeRadialDamage_Parms, DamagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimulationEntityComponent_TakeRadialDamage_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimulationEntityComponent_eventTakeRadialDamage_Parms, Damage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimulationEntityComponent_TakeRadialDamage_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimulationEntityComponent_eventTakeRadialDamage_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageType_MetaData), NewProp_DamageType_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimulationEntityComponent_TakeRadialDamage_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimulationEntityComponent_eventTakeRadialDamage_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimulationEntityComponent_TakeRadialDamage_Statics::NewProp_HitInfo = { "HitInfo", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimulationEntityComponent_eventTakeRadialDamage_Parms, HitInfo), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitInfo_MetaData), NewProp_HitInfo_MetaData) }; // 222120718
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimulationEntityComponent_TakeRadialDamage_Statics::NewProp_InstigatedBy = { "InstigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimulationEntityComponent_eventTakeRadialDamage_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimulationEntityComponent_TakeRadialDamage_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimulationEntityComponent_eventTakeRadialDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimulationEntityComponent_TakeRadialDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimulationEntityComponent_TakeRadialDamage_Statics::NewProp_DamagedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimulationEntityComponent_TakeRadialDamage_Statics::NewProp_Damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimulationEntityComponent_TakeRadialDamage_Statics::NewProp_DamageType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimulationEntityComponent_TakeRadialDamage_Statics::NewProp_Origin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimulationEntityComponent_TakeRadialDamage_Statics::NewProp_HitInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimulationEntityComponent_TakeRadialDamage_Statics::NewProp_InstigatedBy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimulationEntityComponent_TakeRadialDamage_Statics::NewProp_DamageCauser,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimulationEntityComponent_TakeRadialDamage_Statics::PropPointers) < 2048);
// ********** End Function TakeRadialDamage Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimulationEntityComponent_TakeRadialDamage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USimulationEntityComponent, nullptr, "TakeRadialDamage", 	Z_Construct_UFunction_USimulationEntityComponent_TakeRadialDamage_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USimulationEntityComponent_TakeRadialDamage_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USimulationEntityComponent_TakeRadialDamage_Statics::SimulationEntityComponent_eventTakeRadialDamage_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C80400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimulationEntityComponent_TakeRadialDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimulationEntityComponent_TakeRadialDamage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USimulationEntityComponent_TakeRadialDamage_Statics::SimulationEntityComponent_eventTakeRadialDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimulationEntityComponent_TakeRadialDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimulationEntityComponent_TakeRadialDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimulationEntityComponent::execTakeRadialDamage)
{
	P_GET_OBJECT(AActor,Z_Param_DamagedActor);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Damage);
	P_GET_OBJECT(UDamageType,Z_Param_DamageType);
	P_GET_STRUCT(FVector,Z_Param_Origin);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitInfo);
	P_GET_OBJECT(AController,Z_Param_InstigatedBy);
	P_GET_OBJECT(AActor,Z_Param_DamageCauser);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TakeRadialDamage(Z_Param_DamagedActor,Z_Param_Damage,Z_Param_DamageType,Z_Param_Origin,Z_Param_Out_HitInfo,Z_Param_InstigatedBy,Z_Param_DamageCauser);
	P_NATIVE_END;
}
// ********** End Class USimulationEntityComponent Function TakeRadialDamage ***********************

// ********** Begin Class USimulationEntityComponent ***********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USimulationEntityComponent;
UClass* USimulationEntityComponent::GetPrivateStaticClass()
{
	using TClass = USimulationEntityComponent;
	if (!Z_Registration_Info_UClass_USimulationEntityComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SimulationEntityComponent"),
			Z_Registration_Info_UClass_USimulationEntityComponent.InnerSingleton,
			StaticRegisterNativesUSimulationEntityComponent,
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
	return Z_Registration_Info_UClass_USimulationEntityComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_USimulationEntityComponent_NoRegister()
{
	return USimulationEntityComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USimulationEntityComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * The Simulation Entity Component is a subtype of Ability System Component that designates an Actor as a simulation entity. \n */" },
#endif
		{ "HideCategories", "AttributeTest Object LOD Lighting Transform Sockets TextureStreaming Object LOD Lighting Transform Sockets TextureStreaming" },
		{ "IncludePath", "SimulationEntityComponent.h" },
		{ "ModuleRelativePath", "Public/SimulationEntityComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Simulation Entity Component is a subtype of Ability System Component that designates an Actor as a simulation entity." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntityName_MetaData[] = {
		{ "BlueprintGetter", "GetEntityName" },
		{ "Category", "Simulation Entity" },
		{ "ModuleRelativePath", "Public/SimulationEntityComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultAttributes_MetaData[] = {
		{ "Category", "Simulation Entity|Attributes" },
		{ "ModuleRelativePath", "Public/SimulationEntityComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDefault_CanBeDamaged_MetaData[] = {
		{ "Category", "Simulation Entity|Damage" },
		{ "DisplayName", "Default 'Can Be Damaged'" },
		{ "ModuleRelativePath", "Public/SimulationEntityComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultReplicationMode_MetaData[] = {
		{ "BlueprintGetter", "GetDefaultReplicationMode" },
		{ "Category", "Simulation Entity|Replication" },
		{ "ModuleRelativePath", "Public/SimulationEntityComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USimulationEntityComponent constinit property declarations ***************
	static const UECodeGen_Private::FNamePropertyParams NewProp_EntityName;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultAttributes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultAttributes;
	static void NewProp_bDefault_CanBeDamaged_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDefault_CanBeDamaged;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultReplicationMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultReplicationMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USimulationEntityComponent constinit property declarations *****************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AddAttributeSet"), .Pointer = &USimulationEntityComponent::execAddAttributeSet },
		{ .NameUTF8 = UTF8TEXT("AddAttributeSets"), .Pointer = &USimulationEntityComponent::execAddAttributeSets },
		{ .NameUTF8 = UTF8TEXT("GetDefaultReplicationMode"), .Pointer = &USimulationEntityComponent::execGetDefaultReplicationMode },
		{ .NameUTF8 = UTF8TEXT("GetEntityName"), .Pointer = &USimulationEntityComponent::execGetEntityName },
		{ .NameUTF8 = UTF8TEXT("IsSimulationEntity"), .Pointer = &USimulationEntityComponent::execIsSimulationEntity },
		{ .NameUTF8 = UTF8TEXT("OnRep_EntityName"), .Pointer = &USimulationEntityComponent::execOnRep_EntityName },
		{ .NameUTF8 = UTF8TEXT("TakeAnyDamage"), .Pointer = &USimulationEntityComponent::execTakeAnyDamage },
		{ .NameUTF8 = UTF8TEXT("TakePointDamage"), .Pointer = &USimulationEntityComponent::execTakePointDamage },
		{ .NameUTF8 = UTF8TEXT("TakeRadialDamage"), .Pointer = &USimulationEntityComponent::execTakeRadialDamage },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USimulationEntityComponent_AddAttributeSet, "AddAttributeSet" }, // 995779538
		{ &Z_Construct_UFunction_USimulationEntityComponent_AddAttributeSets, "AddAttributeSets" }, // 755845361
		{ &Z_Construct_UFunction_USimulationEntityComponent_GetDefaultReplicationMode, "GetDefaultReplicationMode" }, // 114294611
		{ &Z_Construct_UFunction_USimulationEntityComponent_GetEntityName, "GetEntityName" }, // 3648034062
		{ &Z_Construct_UFunction_USimulationEntityComponent_IsSimulationEntity, "IsSimulationEntity" }, // 80802785
		{ &Z_Construct_UFunction_USimulationEntityComponent_OnRep_EntityName, "OnRep_EntityName" }, // 3491498553
		{ &Z_Construct_UFunction_USimulationEntityComponent_TakeAnyDamage, "TakeAnyDamage" }, // 2000532438
		{ &Z_Construct_UFunction_USimulationEntityComponent_TakePointDamage, "TakePointDamage" }, // 64368715
		{ &Z_Construct_UFunction_USimulationEntityComponent_TakeRadialDamage, "TakeRadialDamage" }, // 731375308
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimulationEntityComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USimulationEntityComponent_Statics

// ********** Begin Class USimulationEntityComponent Property Definitions **************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USimulationEntityComponent_Statics::NewProp_EntityName = { "EntityName", "OnRep_EntityName", (EPropertyFlags)0x0040000100010035, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimulationEntityComponent, EntityName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntityName_MetaData), NewProp_EntityName_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_USimulationEntityComponent_Statics::NewProp_DefaultAttributes_Inner = { "DefaultAttributes", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UEntityAttributeSet_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USimulationEntityComponent_Statics::NewProp_DefaultAttributes = { "DefaultAttributes", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimulationEntityComponent, DefaultAttributes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultAttributes_MetaData), NewProp_DefaultAttributes_MetaData) };
void Z_Construct_UClass_USimulationEntityComponent_Statics::NewProp_bDefault_CanBeDamaged_SetBit(void* Obj)
{
	((USimulationEntityComponent*)Obj)->bDefault_CanBeDamaged = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USimulationEntityComponent_Statics::NewProp_bDefault_CanBeDamaged = { "bDefault_CanBeDamaged", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USimulationEntityComponent), &Z_Construct_UClass_USimulationEntityComponent_Statics::NewProp_bDefault_CanBeDamaged_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDefault_CanBeDamaged_MetaData), NewProp_bDefault_CanBeDamaged_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USimulationEntityComponent_Statics::NewProp_DefaultReplicationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USimulationEntityComponent_Statics::NewProp_DefaultReplicationMode = { "DefaultReplicationMode", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimulationEntityComponent, DefaultReplicationMode), Z_Construct_UEnum_GameplayAbilities_EGameplayEffectReplicationMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultReplicationMode_MetaData), NewProp_DefaultReplicationMode_MetaData) }; // 3513395660
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USimulationEntityComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimulationEntityComponent_Statics::NewProp_EntityName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimulationEntityComponent_Statics::NewProp_DefaultAttributes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimulationEntityComponent_Statics::NewProp_DefaultAttributes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimulationEntityComponent_Statics::NewProp_bDefault_CanBeDamaged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimulationEntityComponent_Statics::NewProp_DefaultReplicationMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimulationEntityComponent_Statics::NewProp_DefaultReplicationMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimulationEntityComponent_Statics::PropPointers) < 2048);
// ********** End Class USimulationEntityComponent Property Definitions ****************************
UObject* (*const Z_Construct_UClass_USimulationEntityComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilitySystemComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Simulation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimulationEntityComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USimulationEntityComponent_Statics::ClassParams = {
	&USimulationEntityComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USimulationEntityComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USimulationEntityComponent_Statics::PropPointers),
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimulationEntityComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_USimulationEntityComponent_Statics::Class_MetaDataParams)
};
void USimulationEntityComponent::StaticRegisterNativesUSimulationEntityComponent()
{
	UClass* Class = USimulationEntityComponent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USimulationEntityComponent_Statics::Funcs));
}
UClass* Z_Construct_UClass_USimulationEntityComponent()
{
	if (!Z_Registration_Info_UClass_USimulationEntityComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimulationEntityComponent.OuterSingleton, Z_Construct_UClass_USimulationEntityComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USimulationEntityComponent.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void USimulationEntityComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_EntityName(TEXT("EntityName"));
	const bool bIsValid = true
		&& Name_EntityName == ClassReps[(int32)ENetFields_Private::EntityName].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in USimulationEntityComponent"));
}
#endif
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USimulationEntityComponent);
USimulationEntityComponent::~USimulationEntityComponent() {}
// ********** End Class USimulationEntityComponent *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_SimulationEntityComponent_h__Script_Simulation_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USimulationEntityComponent, USimulationEntityComponent::StaticClass, TEXT("USimulationEntityComponent"), &Z_Registration_Info_UClass_USimulationEntityComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimulationEntityComponent), 1561906918U) },
	};
}; // Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_SimulationEntityComponent_h__Script_Simulation_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_SimulationEntityComponent_h__Script_Simulation_1560263651{
	TEXT("/Script/Simulation"),
	Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_SimulationEntityComponent_h__Script_Simulation_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_SimulationEntityComponent_h__Script_Simulation_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
