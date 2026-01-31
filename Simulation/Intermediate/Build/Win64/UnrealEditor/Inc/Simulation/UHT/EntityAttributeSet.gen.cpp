// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EntityAttributeSet.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeEntityAttributeSet() {}

// ********** Begin Cross Module References ********************************************************
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
SIMULATION_API UClass* Z_Construct_UClass_UEntityAttributeSet();
SIMULATION_API UClass* Z_Construct_UClass_UEntityAttributeSet_NoRegister();
UPackage* Z_Construct_UPackage__Script_Simulation();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UEntityAttributeSet Function GetAttributeSetTags *************************
struct Z_Construct_UFunction_UEntityAttributeSet_GetAttributeSetTags_Statics
{
	struct EntityAttributeSet_eventGetAttributeSetTags_Parms
	{
		FGameplayTagContainer ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Entity Attribute Set" },
		{ "ModuleRelativePath", "Public/EntityAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetAttributeSetTags constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAttributeSetTags constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAttributeSetTags Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEntityAttributeSet_GetAttributeSetTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EntityAttributeSet_eventGetAttributeSetTags_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 3438578166
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEntityAttributeSet_GetAttributeSetTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEntityAttributeSet_GetAttributeSetTags_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEntityAttributeSet_GetAttributeSetTags_Statics::PropPointers) < 2048);
// ********** End Function GetAttributeSetTags Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEntityAttributeSet_GetAttributeSetTags_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEntityAttributeSet, nullptr, "GetAttributeSetTags", 	Z_Construct_UFunction_UEntityAttributeSet_GetAttributeSetTags_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UEntityAttributeSet_GetAttributeSetTags_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UEntityAttributeSet_GetAttributeSetTags_Statics::EntityAttributeSet_eventGetAttributeSetTags_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEntityAttributeSet_GetAttributeSetTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEntityAttributeSet_GetAttributeSetTags_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UEntityAttributeSet_GetAttributeSetTags_Statics::EntityAttributeSet_eventGetAttributeSetTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEntityAttributeSet_GetAttributeSetTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEntityAttributeSet_GetAttributeSetTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEntityAttributeSet::execGetAttributeSetTags)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayTagContainer*)Z_Param__Result=P_THIS->GetAttributeSetTags();
	P_NATIVE_END;
}
// ********** End Class UEntityAttributeSet Function GetAttributeSetTags ***************************

// ********** Begin Class UEntityAttributeSet Function GetID ***************************************
struct Z_Construct_UFunction_UEntityAttributeSet_GetID_Statics
{
	struct EntityAttributeSet_eventGetID_Parms
	{
		FGameplayTag ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Entity Attribute Set" },
		{ "ModuleRelativePath", "Public/EntityAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetID constinit property declarations *********************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetID constinit property declarations ***********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetID Property Definitions ********************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEntityAttributeSet_GetID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EntityAttributeSet_eventGetID_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 517357616
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEntityAttributeSet_GetID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEntityAttributeSet_GetID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEntityAttributeSet_GetID_Statics::PropPointers) < 2048);
// ********** End Function GetID Property Definitions **********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEntityAttributeSet_GetID_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEntityAttributeSet, nullptr, "GetID", 	Z_Construct_UFunction_UEntityAttributeSet_GetID_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UEntityAttributeSet_GetID_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UEntityAttributeSet_GetID_Statics::EntityAttributeSet_eventGetID_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEntityAttributeSet_GetID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEntityAttributeSet_GetID_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UEntityAttributeSet_GetID_Statics::EntityAttributeSet_eventGetID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEntityAttributeSet_GetID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEntityAttributeSet_GetID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEntityAttributeSet::execGetID)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayTag*)Z_Param__Result=P_THIS->GetID();
	P_NATIVE_END;
}
// ********** End Class UEntityAttributeSet Function GetID *****************************************

// ********** Begin Class UEntityAttributeSet Function GetSetDescription ***************************
struct Z_Construct_UFunction_UEntityAttributeSet_GetSetDescription_Statics
{
	struct EntityAttributeSet_eventGetSetDescription_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Entity Attribute Set|UI Settings" },
		{ "ModuleRelativePath", "Public/EntityAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetSetDescription constinit property declarations *********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetSetDescription constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetSetDescription Property Definitions ********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEntityAttributeSet_GetSetDescription_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EntityAttributeSet_eventGetSetDescription_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEntityAttributeSet_GetSetDescription_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEntityAttributeSet_GetSetDescription_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEntityAttributeSet_GetSetDescription_Statics::PropPointers) < 2048);
// ********** End Function GetSetDescription Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEntityAttributeSet_GetSetDescription_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEntityAttributeSet, nullptr, "GetSetDescription", 	Z_Construct_UFunction_UEntityAttributeSet_GetSetDescription_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UEntityAttributeSet_GetSetDescription_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UEntityAttributeSet_GetSetDescription_Statics::EntityAttributeSet_eventGetSetDescription_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEntityAttributeSet_GetSetDescription_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEntityAttributeSet_GetSetDescription_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UEntityAttributeSet_GetSetDescription_Statics::EntityAttributeSet_eventGetSetDescription_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEntityAttributeSet_GetSetDescription()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEntityAttributeSet_GetSetDescription_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEntityAttributeSet::execGetSetDescription)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetSetDescription();
	P_NATIVE_END;
}
// ********** End Class UEntityAttributeSet Function GetSetDescription *****************************

// ********** Begin Class UEntityAttributeSet Function GetSetName **********************************
struct Z_Construct_UFunction_UEntityAttributeSet_GetSetName_Statics
{
	struct EntityAttributeSet_eventGetSetName_Parms
	{
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Entity Attribute Set|UI Settings" },
		{ "ModuleRelativePath", "Public/EntityAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetSetName constinit property declarations ****************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetSetName constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetSetName Property Definitions ***************************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEntityAttributeSet_GetSetName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EntityAttributeSet_eventGetSetName_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEntityAttributeSet_GetSetName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEntityAttributeSet_GetSetName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEntityAttributeSet_GetSetName_Statics::PropPointers) < 2048);
// ********** End Function GetSetName Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEntityAttributeSet_GetSetName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEntityAttributeSet, nullptr, "GetSetName", 	Z_Construct_UFunction_UEntityAttributeSet_GetSetName_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UEntityAttributeSet_GetSetName_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UEntityAttributeSet_GetSetName_Statics::EntityAttributeSet_eventGetSetName_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEntityAttributeSet_GetSetName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEntityAttributeSet_GetSetName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UEntityAttributeSet_GetSetName_Statics::EntityAttributeSet_eventGetSetName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEntityAttributeSet_GetSetName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEntityAttributeSet_GetSetName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEntityAttributeSet::execGetSetName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=P_THIS->GetSetName();
	P_NATIVE_END;
}
// ********** End Class UEntityAttributeSet Function GetSetName ************************************

// ********** Begin Class UEntityAttributeSet Function ShouldDisplayDescription ********************
struct Z_Construct_UFunction_UEntityAttributeSet_ShouldDisplayDescription_Statics
{
	struct EntityAttributeSet_eventShouldDisplayDescription_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Entity Attribute Set|UI Settings" },
		{ "ModuleRelativePath", "Public/EntityAttributeSet.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ShouldDisplayDescription constinit property declarations **************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ShouldDisplayDescription constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ShouldDisplayDescription Property Definitions *************************
void Z_Construct_UFunction_UEntityAttributeSet_ShouldDisplayDescription_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((EntityAttributeSet_eventShouldDisplayDescription_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEntityAttributeSet_ShouldDisplayDescription_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EntityAttributeSet_eventShouldDisplayDescription_Parms), &Z_Construct_UFunction_UEntityAttributeSet_ShouldDisplayDescription_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEntityAttributeSet_ShouldDisplayDescription_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEntityAttributeSet_ShouldDisplayDescription_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEntityAttributeSet_ShouldDisplayDescription_Statics::PropPointers) < 2048);
// ********** End Function ShouldDisplayDescription Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEntityAttributeSet_ShouldDisplayDescription_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEntityAttributeSet, nullptr, "ShouldDisplayDescription", 	Z_Construct_UFunction_UEntityAttributeSet_ShouldDisplayDescription_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UEntityAttributeSet_ShouldDisplayDescription_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UEntityAttributeSet_ShouldDisplayDescription_Statics::EntityAttributeSet_eventShouldDisplayDescription_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEntityAttributeSet_ShouldDisplayDescription_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEntityAttributeSet_ShouldDisplayDescription_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UEntityAttributeSet_ShouldDisplayDescription_Statics::EntityAttributeSet_eventShouldDisplayDescription_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEntityAttributeSet_ShouldDisplayDescription()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEntityAttributeSet_ShouldDisplayDescription_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEntityAttributeSet::execShouldDisplayDescription)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ShouldDisplayDescription();
	P_NATIVE_END;
}
// ********** End Class UEntityAttributeSet Function ShouldDisplayDescription **********************

// ********** Begin Class UEntityAttributeSet Function ShouldDisplayName ***************************
struct Z_Construct_UFunction_UEntityAttributeSet_ShouldDisplayName_Statics
{
	struct EntityAttributeSet_eventShouldDisplayName_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Entity Attribute Set|UI Settings" },
		{ "ModuleRelativePath", "Public/EntityAttributeSet.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ShouldDisplayName constinit property declarations *********************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ShouldDisplayName constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ShouldDisplayName Property Definitions ********************************
void Z_Construct_UFunction_UEntityAttributeSet_ShouldDisplayName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((EntityAttributeSet_eventShouldDisplayName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEntityAttributeSet_ShouldDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EntityAttributeSet_eventShouldDisplayName_Parms), &Z_Construct_UFunction_UEntityAttributeSet_ShouldDisplayName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEntityAttributeSet_ShouldDisplayName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEntityAttributeSet_ShouldDisplayName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEntityAttributeSet_ShouldDisplayName_Statics::PropPointers) < 2048);
// ********** End Function ShouldDisplayName Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEntityAttributeSet_ShouldDisplayName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEntityAttributeSet, nullptr, "ShouldDisplayName", 	Z_Construct_UFunction_UEntityAttributeSet_ShouldDisplayName_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UEntityAttributeSet_ShouldDisplayName_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UEntityAttributeSet_ShouldDisplayName_Statics::EntityAttributeSet_eventShouldDisplayName_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEntityAttributeSet_ShouldDisplayName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEntityAttributeSet_ShouldDisplayName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UEntityAttributeSet_ShouldDisplayName_Statics::EntityAttributeSet_eventShouldDisplayName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEntityAttributeSet_ShouldDisplayName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEntityAttributeSet_ShouldDisplayName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEntityAttributeSet::execShouldDisplayName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ShouldDisplayName();
	P_NATIVE_END;
}
// ********** End Class UEntityAttributeSet Function ShouldDisplayName *****************************

// ********** Begin Class UEntityAttributeSet ******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UEntityAttributeSet;
UClass* UEntityAttributeSet::GetPrivateStaticClass()
{
	using TClass = UEntityAttributeSet;
	if (!Z_Registration_Info_UClass_UEntityAttributeSet.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("EntityAttributeSet"),
			Z_Registration_Info_UClass_UEntityAttributeSet.InnerSingleton,
			StaticRegisterNativesUEntityAttributeSet,
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
	return Z_Registration_Info_UClass_UEntityAttributeSet.InnerSingleton;
}
UClass* Z_Construct_UClass_UEntityAttributeSet_NoRegister()
{
	return UEntityAttributeSet::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UEntityAttributeSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "EntityAttributeSet.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EntityAttributeSet.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[] = {
		{ "BlueprintGetter", "GetID" },
		{ "Category", "Entity Attribute Set" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Used for lookup or to find matches between attribute sets of similar types */" },
#endif
		{ "ModuleRelativePath", "Public/EntityAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Used for lookup or to find matches between attribute sets of similar types" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeSetTags_MetaData[] = {
		{ "BlueprintGetter", "GetAttributeSetTags" },
		{ "Category", "Entity Attribute Set" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* These tags may be used for loose categorization, ie. finding groups of attribute sets based on tags */" },
#endif
		{ "ModuleRelativePath", "Public/EntityAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "These tags may be used for loose categorization, ie. finding groups of attribute sets based on tags" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SetName_MetaData[] = {
		{ "BlueprintGetter", "GetSetName" },
		{ "Category", "Entity Attribute Set|UI Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* This name is used for UI to display the attribute in a user-friendly way. Does not display if empty */" },
#endif
		{ "ModuleRelativePath", "Public/EntityAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This name is used for UI to display the attribute in a user-friendly way. Does not display if empty" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SetDescription_MetaData[] = {
		{ "BlueprintGetter", "GetSetDescription" },
		{ "Category", "Entity Attribute Set|UI Settings" },
		{ "ModuleRelativePath", "Public/EntityAttributeSet.h" },
		{ "MultiLine", "TRUE" },
	};
#endif // WITH_METADATA

// ********** Begin Class UEntityAttributeSet constinit property declarations **********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeSetTags;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SetName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SetDescription;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UEntityAttributeSet constinit property declarations ************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetAttributeSetTags"), .Pointer = &UEntityAttributeSet::execGetAttributeSetTags },
		{ .NameUTF8 = UTF8TEXT("GetID"), .Pointer = &UEntityAttributeSet::execGetID },
		{ .NameUTF8 = UTF8TEXT("GetSetDescription"), .Pointer = &UEntityAttributeSet::execGetSetDescription },
		{ .NameUTF8 = UTF8TEXT("GetSetName"), .Pointer = &UEntityAttributeSet::execGetSetName },
		{ .NameUTF8 = UTF8TEXT("ShouldDisplayDescription"), .Pointer = &UEntityAttributeSet::execShouldDisplayDescription },
		{ .NameUTF8 = UTF8TEXT("ShouldDisplayName"), .Pointer = &UEntityAttributeSet::execShouldDisplayName },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEntityAttributeSet_GetAttributeSetTags, "GetAttributeSetTags" }, // 4018296889
		{ &Z_Construct_UFunction_UEntityAttributeSet_GetID, "GetID" }, // 184187521
		{ &Z_Construct_UFunction_UEntityAttributeSet_GetSetDescription, "GetSetDescription" }, // 3548598195
		{ &Z_Construct_UFunction_UEntityAttributeSet_GetSetName, "GetSetName" }, // 3319253580
		{ &Z_Construct_UFunction_UEntityAttributeSet_ShouldDisplayDescription, "ShouldDisplayDescription" }, // 3661112957
		{ &Z_Construct_UFunction_UEntityAttributeSet_ShouldDisplayName, "ShouldDisplayName" }, // 4113546543
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEntityAttributeSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UEntityAttributeSet_Statics

// ********** Begin Class UEntityAttributeSet Property Definitions *********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEntityAttributeSet_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEntityAttributeSet, ID), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ID_MetaData), NewProp_ID_MetaData) }; // 517357616
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEntityAttributeSet_Statics::NewProp_AttributeSetTags = { "AttributeSetTags", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEntityAttributeSet, AttributeSetTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeSetTags_MetaData), NewProp_AttributeSetTags_MetaData) }; // 3438578166
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UEntityAttributeSet_Statics::NewProp_SetName = { "SetName", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEntityAttributeSet, SetName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SetName_MetaData), NewProp_SetName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEntityAttributeSet_Statics::NewProp_SetDescription = { "SetDescription", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEntityAttributeSet, SetDescription), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SetDescription_MetaData), NewProp_SetDescription_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEntityAttributeSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEntityAttributeSet_Statics::NewProp_ID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEntityAttributeSet_Statics::NewProp_AttributeSetTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEntityAttributeSet_Statics::NewProp_SetName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEntityAttributeSet_Statics::NewProp_SetDescription,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEntityAttributeSet_Statics::PropPointers) < 2048);
// ********** End Class UEntityAttributeSet Property Definitions ***********************************
UObject* (*const Z_Construct_UClass_UEntityAttributeSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAttributeSet,
	(UObject* (*)())Z_Construct_UPackage__Script_Simulation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEntityAttributeSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEntityAttributeSet_Statics::ClassParams = {
	&UEntityAttributeSet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEntityAttributeSet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEntityAttributeSet_Statics::PropPointers),
	0,
	0x043000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEntityAttributeSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UEntityAttributeSet_Statics::Class_MetaDataParams)
};
void UEntityAttributeSet::StaticRegisterNativesUEntityAttributeSet()
{
	UClass* Class = UEntityAttributeSet::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UEntityAttributeSet_Statics::Funcs));
}
UClass* Z_Construct_UClass_UEntityAttributeSet()
{
	if (!Z_Registration_Info_UClass_UEntityAttributeSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEntityAttributeSet.OuterSingleton, Z_Construct_UClass_UEntityAttributeSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEntityAttributeSet.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UEntityAttributeSet);
UEntityAttributeSet::~UEntityAttributeSet() {}
// ********** End Class UEntityAttributeSet ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_EntityAttributeSet_h__Script_Simulation_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEntityAttributeSet, UEntityAttributeSet::StaticClass, TEXT("UEntityAttributeSet"), &Z_Registration_Info_UClass_UEntityAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEntityAttributeSet), 2578551694U) },
	};
}; // Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_EntityAttributeSet_h__Script_Simulation_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_EntityAttributeSet_h__Script_Simulation_3779756509{
	TEXT("/Script/Simulation"),
	Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_EntityAttributeSet_h__Script_Simulation_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_EntityAttributeSet_h__Script_Simulation_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
