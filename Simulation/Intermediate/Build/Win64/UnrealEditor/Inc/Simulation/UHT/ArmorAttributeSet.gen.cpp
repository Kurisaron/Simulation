// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArmorAttributeSet.h"
#include "AttributeSet.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeArmorAttributeSet() {}

// ********** Begin Cross Module References ********************************************************
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
SIMULATION_API UClass* Z_Construct_UClass_UArmorAttributeSet();
SIMULATION_API UClass* Z_Construct_UClass_UArmorAttributeSet_NoRegister();
SIMULATION_API UClass* Z_Construct_UClass_UEntityAttributeSet();
UPackage* Z_Construct_UPackage__Script_Simulation();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UArmorAttributeSet Function OnRep_CurrentDurability **********************
struct Z_Construct_UFunction_UArmorAttributeSet_OnRep_CurrentDurability_Statics
{
	struct ArmorAttributeSet_eventOnRep_CurrentDurability_Parms
	{
		FGameplayAttributeData OldCurrentDurability;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArmorAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldCurrentDurability_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRep_CurrentDurability constinit property declarations ***************
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldCurrentDurability;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnRep_CurrentDurability constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnRep_CurrentDurability Property Definitions **************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArmorAttributeSet_OnRep_CurrentDurability_Statics::NewProp_OldCurrentDurability = { "OldCurrentDurability", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArmorAttributeSet_eventOnRep_CurrentDurability_Parms, OldCurrentDurability), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldCurrentDurability_MetaData), NewProp_OldCurrentDurability_MetaData) }; // 3543875268
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArmorAttributeSet_OnRep_CurrentDurability_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArmorAttributeSet_OnRep_CurrentDurability_Statics::NewProp_OldCurrentDurability,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArmorAttributeSet_OnRep_CurrentDurability_Statics::PropPointers) < 2048);
// ********** End Function OnRep_CurrentDurability Property Definitions ****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArmorAttributeSet_OnRep_CurrentDurability_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UArmorAttributeSet, nullptr, "OnRep_CurrentDurability", 	Z_Construct_UFunction_UArmorAttributeSet_OnRep_CurrentDurability_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UArmorAttributeSet_OnRep_CurrentDurability_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UArmorAttributeSet_OnRep_CurrentDurability_Statics::ArmorAttributeSet_eventOnRep_CurrentDurability_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArmorAttributeSet_OnRep_CurrentDurability_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArmorAttributeSet_OnRep_CurrentDurability_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UArmorAttributeSet_OnRep_CurrentDurability_Statics::ArmorAttributeSet_eventOnRep_CurrentDurability_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArmorAttributeSet_OnRep_CurrentDurability()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArmorAttributeSet_OnRep_CurrentDurability_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArmorAttributeSet::execOnRep_CurrentDurability)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldCurrentDurability);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_CurrentDurability(Z_Param_Out_OldCurrentDurability);
	P_NATIVE_END;
}
// ********** End Class UArmorAttributeSet Function OnRep_CurrentDurability ************************

// ********** Begin Class UArmorAttributeSet Function OnRep_MaxDurability **************************
struct Z_Construct_UFunction_UArmorAttributeSet_OnRep_MaxDurability_Statics
{
	struct ArmorAttributeSet_eventOnRep_MaxDurability_Parms
	{
		FGameplayAttributeData OldMaxDurability;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArmorAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldMaxDurability_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRep_MaxDurability constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldMaxDurability;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnRep_MaxDurability constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnRep_MaxDurability Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArmorAttributeSet_OnRep_MaxDurability_Statics::NewProp_OldMaxDurability = { "OldMaxDurability", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArmorAttributeSet_eventOnRep_MaxDurability_Parms, OldMaxDurability), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldMaxDurability_MetaData), NewProp_OldMaxDurability_MetaData) }; // 3543875268
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArmorAttributeSet_OnRep_MaxDurability_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArmorAttributeSet_OnRep_MaxDurability_Statics::NewProp_OldMaxDurability,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArmorAttributeSet_OnRep_MaxDurability_Statics::PropPointers) < 2048);
// ********** End Function OnRep_MaxDurability Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArmorAttributeSet_OnRep_MaxDurability_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UArmorAttributeSet, nullptr, "OnRep_MaxDurability", 	Z_Construct_UFunction_UArmorAttributeSet_OnRep_MaxDurability_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UArmorAttributeSet_OnRep_MaxDurability_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UArmorAttributeSet_OnRep_MaxDurability_Statics::ArmorAttributeSet_eventOnRep_MaxDurability_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArmorAttributeSet_OnRep_MaxDurability_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArmorAttributeSet_OnRep_MaxDurability_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UArmorAttributeSet_OnRep_MaxDurability_Statics::ArmorAttributeSet_eventOnRep_MaxDurability_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArmorAttributeSet_OnRep_MaxDurability()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArmorAttributeSet_OnRep_MaxDurability_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArmorAttributeSet::execOnRep_MaxDurability)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMaxDurability);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MaxDurability(Z_Param_Out_OldMaxDurability);
	P_NATIVE_END;
}
// ********** End Class UArmorAttributeSet Function OnRep_MaxDurability ****************************

// ********** Begin Class UArmorAttributeSet Function OnRep_Protection *****************************
struct Z_Construct_UFunction_UArmorAttributeSet_OnRep_Protection_Statics
{
	struct ArmorAttributeSet_eventOnRep_Protection_Parms
	{
		FGameplayAttributeData OldProtection;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArmorAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldProtection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRep_Protection constinit property declarations **********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldProtection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnRep_Protection constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnRep_Protection Property Definitions *********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArmorAttributeSet_OnRep_Protection_Statics::NewProp_OldProtection = { "OldProtection", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArmorAttributeSet_eventOnRep_Protection_Parms, OldProtection), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldProtection_MetaData), NewProp_OldProtection_MetaData) }; // 3543875268
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArmorAttributeSet_OnRep_Protection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArmorAttributeSet_OnRep_Protection_Statics::NewProp_OldProtection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArmorAttributeSet_OnRep_Protection_Statics::PropPointers) < 2048);
// ********** End Function OnRep_Protection Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArmorAttributeSet_OnRep_Protection_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UArmorAttributeSet, nullptr, "OnRep_Protection", 	Z_Construct_UFunction_UArmorAttributeSet_OnRep_Protection_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UArmorAttributeSet_OnRep_Protection_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UArmorAttributeSet_OnRep_Protection_Statics::ArmorAttributeSet_eventOnRep_Protection_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArmorAttributeSet_OnRep_Protection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArmorAttributeSet_OnRep_Protection_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UArmorAttributeSet_OnRep_Protection_Statics::ArmorAttributeSet_eventOnRep_Protection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArmorAttributeSet_OnRep_Protection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArmorAttributeSet_OnRep_Protection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArmorAttributeSet::execOnRep_Protection)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldProtection);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Protection(Z_Param_Out_OldProtection);
	P_NATIVE_END;
}
// ********** End Class UArmorAttributeSet Function OnRep_Protection *******************************

// ********** Begin Class UArmorAttributeSet *******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UArmorAttributeSet;
UClass* UArmorAttributeSet::GetPrivateStaticClass()
{
	using TClass = UArmorAttributeSet;
	if (!Z_Registration_Info_UClass_UArmorAttributeSet.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ArmorAttributeSet"),
			Z_Registration_Info_UClass_UArmorAttributeSet.InnerSingleton,
			StaticRegisterNativesUArmorAttributeSet,
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
	return Z_Registration_Info_UClass_UArmorAttributeSet.InnerSingleton;
}
UClass* Z_Construct_UClass_UArmorAttributeSet_NoRegister()
{
	return UArmorAttributeSet::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UArmorAttributeSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Attribute sets used for armor. Armor is a non-depleting defense against damage, reducing incoming instances of damage before they are applied to health\n * Like health, entities may have multiple types each with their own basis on entities' defenses\n */" },
#endif
		{ "IncludePath", "ArmorAttributeSet.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ArmorAttributeSet.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attribute sets used for armor. Armor is a non-depleting defense against damage, reducing incoming instances of damage before they are applied to health\nLike health, entities may have multiple types each with their own basis on entities' defenses" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Protection_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Armor|Protection" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Attribute used to store the amount of protection this armor type provides for a given entity */" },
#endif
		{ "HideFromModifiers", "" },
		{ "ModuleRelativePath", "Public/ArmorAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attribute used to store the amount of protection this armor type provides for a given entity" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultProtection_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Armor|Protection" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Determines default protection this armor type provides */" },
#endif
		{ "ModuleRelativePath", "Public/ArmorAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Determines default protection this armor type provides" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentDurability_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Armor|Durability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Attribute used to store the current amount of durability this armor type has */" },
#endif
		{ "HideFromModifiers", "" },
		{ "ModuleRelativePath", "Public/ArmorAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attribute used to store the current amount of durability this armor type has" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxDurability_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Armor|Durability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Attribute used to store the max amount of durability this armor type has */" },
#endif
		{ "HideFromModifiers", "" },
		{ "ModuleRelativePath", "Public/ArmorAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attribute used to store the max amount of durability this armor type has" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseDurability_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Armor|Durability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Determines whether durability should use durability */" },
#endif
		{ "ModuleRelativePath", "Public/ArmorAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Determines whether durability should use durability" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultDurability_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Armor|Durability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Determines default durability for this armor type */" },
#endif
		{ "EditCondition", "bUseDurability" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ArmorAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Determines default durability for this armor type" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UArmorAttributeSet constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Protection;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultProtection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentDurability;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxDurability;
	static void NewProp_bUseDurability_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseDurability;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultDurability;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UArmorAttributeSet constinit property declarations *************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("OnRep_CurrentDurability"), .Pointer = &UArmorAttributeSet::execOnRep_CurrentDurability },
		{ .NameUTF8 = UTF8TEXT("OnRep_MaxDurability"), .Pointer = &UArmorAttributeSet::execOnRep_MaxDurability },
		{ .NameUTF8 = UTF8TEXT("OnRep_Protection"), .Pointer = &UArmorAttributeSet::execOnRep_Protection },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UArmorAttributeSet_OnRep_CurrentDurability, "OnRep_CurrentDurability" }, // 2609622722
		{ &Z_Construct_UFunction_UArmorAttributeSet_OnRep_MaxDurability, "OnRep_MaxDurability" }, // 1608871910
		{ &Z_Construct_UFunction_UArmorAttributeSet_OnRep_Protection, "OnRep_Protection" }, // 2677728314
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArmorAttributeSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UArmorAttributeSet_Statics

// ********** Begin Class UArmorAttributeSet Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArmorAttributeSet_Statics::NewProp_Protection = { "Protection", "OnRep_Protection", (EPropertyFlags)0x0040000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArmorAttributeSet, Protection), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Protection_MetaData), NewProp_Protection_MetaData) }; // 3543875268
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UArmorAttributeSet_Statics::NewProp_DefaultProtection = { "DefaultProtection", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArmorAttributeSet, DefaultProtection), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultProtection_MetaData), NewProp_DefaultProtection_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArmorAttributeSet_Statics::NewProp_CurrentDurability = { "CurrentDurability", "OnRep_CurrentDurability", (EPropertyFlags)0x0040000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArmorAttributeSet, CurrentDurability), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentDurability_MetaData), NewProp_CurrentDurability_MetaData) }; // 3543875268
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArmorAttributeSet_Statics::NewProp_MaxDurability = { "MaxDurability", "OnRep_MaxDurability", (EPropertyFlags)0x0040000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArmorAttributeSet, MaxDurability), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxDurability_MetaData), NewProp_MaxDurability_MetaData) }; // 3543875268
void Z_Construct_UClass_UArmorAttributeSet_Statics::NewProp_bUseDurability_SetBit(void* Obj)
{
	((UArmorAttributeSet*)Obj)->bUseDurability = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArmorAttributeSet_Statics::NewProp_bUseDurability = { "bUseDurability", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UArmorAttributeSet), &Z_Construct_UClass_UArmorAttributeSet_Statics::NewProp_bUseDurability_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseDurability_MetaData), NewProp_bUseDurability_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UArmorAttributeSet_Statics::NewProp_DefaultDurability = { "DefaultDurability", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArmorAttributeSet, DefaultDurability), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultDurability_MetaData), NewProp_DefaultDurability_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UArmorAttributeSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArmorAttributeSet_Statics::NewProp_Protection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArmorAttributeSet_Statics::NewProp_DefaultProtection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArmorAttributeSet_Statics::NewProp_CurrentDurability,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArmorAttributeSet_Statics::NewProp_MaxDurability,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArmorAttributeSet_Statics::NewProp_bUseDurability,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArmorAttributeSet_Statics::NewProp_DefaultDurability,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArmorAttributeSet_Statics::PropPointers) < 2048);
// ********** End Class UArmorAttributeSet Property Definitions ************************************
UObject* (*const Z_Construct_UClass_UArmorAttributeSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEntityAttributeSet,
	(UObject* (*)())Z_Construct_UPackage__Script_Simulation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArmorAttributeSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UArmorAttributeSet_Statics::ClassParams = {
	&UArmorAttributeSet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UArmorAttributeSet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UArmorAttributeSet_Statics::PropPointers),
	0,
	0x003000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArmorAttributeSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UArmorAttributeSet_Statics::Class_MetaDataParams)
};
void UArmorAttributeSet::StaticRegisterNativesUArmorAttributeSet()
{
	UClass* Class = UArmorAttributeSet::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UArmorAttributeSet_Statics::Funcs));
}
UClass* Z_Construct_UClass_UArmorAttributeSet()
{
	if (!Z_Registration_Info_UClass_UArmorAttributeSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArmorAttributeSet.OuterSingleton, Z_Construct_UClass_UArmorAttributeSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UArmorAttributeSet.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void UArmorAttributeSet::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_Protection(TEXT("Protection"));
	static FName Name_CurrentDurability(TEXT("CurrentDurability"));
	static FName Name_MaxDurability(TEXT("MaxDurability"));
	const bool bIsValid = true
		&& Name_Protection == ClassReps[(int32)ENetFields_Private::Protection].Property->GetFName()
		&& Name_CurrentDurability == ClassReps[(int32)ENetFields_Private::CurrentDurability].Property->GetFName()
		&& Name_MaxDurability == ClassReps[(int32)ENetFields_Private::MaxDurability].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UArmorAttributeSet"));
}
#endif
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UArmorAttributeSet);
UArmorAttributeSet::~UArmorAttributeSet() {}
// ********** End Class UArmorAttributeSet *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_ArmorAttributeSet_h__Script_Simulation_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UArmorAttributeSet, UArmorAttributeSet::StaticClass, TEXT("UArmorAttributeSet"), &Z_Registration_Info_UClass_UArmorAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArmorAttributeSet), 2816096010U) },
	};
}; // Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_ArmorAttributeSet_h__Script_Simulation_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_ArmorAttributeSet_h__Script_Simulation_2665378942{
	TEXT("/Script/Simulation"),
	Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_ArmorAttributeSet_h__Script_Simulation_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_ArmorAttributeSet_h__Script_Simulation_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
