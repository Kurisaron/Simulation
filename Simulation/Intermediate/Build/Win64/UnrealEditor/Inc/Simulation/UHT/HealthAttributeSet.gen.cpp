// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HealthAttributeSet.h"
#include "AttributeSet.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeHealthAttributeSet() {}

// ********** Begin Cross Module References ********************************************************
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
SIMULATION_API UClass* Z_Construct_UClass_UEntityAttributeSet();
SIMULATION_API UClass* Z_Construct_UClass_UHealthAttributeSet();
SIMULATION_API UClass* Z_Construct_UClass_UHealthAttributeSet_NoRegister();
UPackage* Z_Construct_UPackage__Script_Simulation();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UHealthAttributeSet Function GetDefaultHealth ****************************
struct Z_Construct_UFunction_UHealthAttributeSet_GetDefaultHealth_Statics
{
	struct HealthAttributeSet_eventGetDefaultHealth_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Public/HealthAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetDefaultHealth constinit property declarations **********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetDefaultHealth constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetDefaultHealth Property Definitions *********************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHealthAttributeSet_GetDefaultHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HealthAttributeSet_eventGetDefaultHealth_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHealthAttributeSet_GetDefaultHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthAttributeSet_GetDefaultHealth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthAttributeSet_GetDefaultHealth_Statics::PropPointers) < 2048);
// ********** End Function GetDefaultHealth Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealthAttributeSet_GetDefaultHealth_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHealthAttributeSet, nullptr, "GetDefaultHealth", 	Z_Construct_UFunction_UHealthAttributeSet_GetDefaultHealth_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthAttributeSet_GetDefaultHealth_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UHealthAttributeSet_GetDefaultHealth_Statics::HealthAttributeSet_eventGetDefaultHealth_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthAttributeSet_GetDefaultHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHealthAttributeSet_GetDefaultHealth_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHealthAttributeSet_GetDefaultHealth_Statics::HealthAttributeSet_eventGetDefaultHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHealthAttributeSet_GetDefaultHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHealthAttributeSet_GetDefaultHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHealthAttributeSet::execGetDefaultHealth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetDefaultHealth();
	P_NATIVE_END;
}
// ********** End Class UHealthAttributeSet Function GetDefaultHealth ******************************

// ********** Begin Class UHealthAttributeSet Function OnRep_CurrentHealth *************************
struct Z_Construct_UFunction_UHealthAttributeSet_OnRep_CurrentHealth_Statics
{
	struct HealthAttributeSet_eventOnRep_CurrentHealth_Parms
	{
		FGameplayAttributeData OldCurrentHealth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HealthAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldCurrentHealth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRep_CurrentHealth constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldCurrentHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnRep_CurrentHealth constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnRep_CurrentHealth Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHealthAttributeSet_OnRep_CurrentHealth_Statics::NewProp_OldCurrentHealth = { "OldCurrentHealth", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HealthAttributeSet_eventOnRep_CurrentHealth_Parms, OldCurrentHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldCurrentHealth_MetaData), NewProp_OldCurrentHealth_MetaData) }; // 3543875268
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHealthAttributeSet_OnRep_CurrentHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthAttributeSet_OnRep_CurrentHealth_Statics::NewProp_OldCurrentHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthAttributeSet_OnRep_CurrentHealth_Statics::PropPointers) < 2048);
// ********** End Function OnRep_CurrentHealth Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealthAttributeSet_OnRep_CurrentHealth_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHealthAttributeSet, nullptr, "OnRep_CurrentHealth", 	Z_Construct_UFunction_UHealthAttributeSet_OnRep_CurrentHealth_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthAttributeSet_OnRep_CurrentHealth_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UHealthAttributeSet_OnRep_CurrentHealth_Statics::HealthAttributeSet_eventOnRep_CurrentHealth_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthAttributeSet_OnRep_CurrentHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHealthAttributeSet_OnRep_CurrentHealth_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHealthAttributeSet_OnRep_CurrentHealth_Statics::HealthAttributeSet_eventOnRep_CurrentHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHealthAttributeSet_OnRep_CurrentHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHealthAttributeSet_OnRep_CurrentHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHealthAttributeSet::execOnRep_CurrentHealth)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldCurrentHealth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_CurrentHealth(Z_Param_Out_OldCurrentHealth);
	P_NATIVE_END;
}
// ********** End Class UHealthAttributeSet Function OnRep_CurrentHealth ***************************

// ********** Begin Class UHealthAttributeSet Function OnRep_MaxHealth *****************************
struct Z_Construct_UFunction_UHealthAttributeSet_OnRep_MaxHealth_Statics
{
	struct HealthAttributeSet_eventOnRep_MaxHealth_Parms
	{
		FGameplayAttributeData OldMaxHealth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HealthAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldMaxHealth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRep_MaxHealth constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldMaxHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnRep_MaxHealth constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnRep_MaxHealth Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHealthAttributeSet_OnRep_MaxHealth_Statics::NewProp_OldMaxHealth = { "OldMaxHealth", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HealthAttributeSet_eventOnRep_MaxHealth_Parms, OldMaxHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldMaxHealth_MetaData), NewProp_OldMaxHealth_MetaData) }; // 3543875268
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHealthAttributeSet_OnRep_MaxHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthAttributeSet_OnRep_MaxHealth_Statics::NewProp_OldMaxHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthAttributeSet_OnRep_MaxHealth_Statics::PropPointers) < 2048);
// ********** End Function OnRep_MaxHealth Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealthAttributeSet_OnRep_MaxHealth_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHealthAttributeSet, nullptr, "OnRep_MaxHealth", 	Z_Construct_UFunction_UHealthAttributeSet_OnRep_MaxHealth_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthAttributeSet_OnRep_MaxHealth_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UHealthAttributeSet_OnRep_MaxHealth_Statics::HealthAttributeSet_eventOnRep_MaxHealth_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthAttributeSet_OnRep_MaxHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHealthAttributeSet_OnRep_MaxHealth_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHealthAttributeSet_OnRep_MaxHealth_Statics::HealthAttributeSet_eventOnRep_MaxHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHealthAttributeSet_OnRep_MaxHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHealthAttributeSet_OnRep_MaxHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHealthAttributeSet::execOnRep_MaxHealth)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMaxHealth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MaxHealth(Z_Param_Out_OldMaxHealth);
	P_NATIVE_END;
}
// ********** End Class UHealthAttributeSet Function OnRep_MaxHealth *******************************

// ********** Begin Class UHealthAttributeSet ******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UHealthAttributeSet;
UClass* UHealthAttributeSet::GetPrivateStaticClass()
{
	using TClass = UHealthAttributeSet;
	if (!Z_Registration_Info_UClass_UHealthAttributeSet.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("HealthAttributeSet"),
			Z_Registration_Info_UClass_UHealthAttributeSet.InnerSingleton,
			StaticRegisterNativesUHealthAttributeSet,
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
	return Z_Registration_Info_UClass_UHealthAttributeSet.InnerSingleton;
}
UClass* Z_Construct_UClass_UHealthAttributeSet_NoRegister()
{
	return UHealthAttributeSet::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UHealthAttributeSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Attribute set types used for health. Health determines how much direct damage an entity can take before death or destruction.\n * Entities can have multiple types of health, each with their own effects on entities\n */" },
#endif
		{ "IncludePath", "HealthAttributeSet.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HealthAttributeSet.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attribute set types used for health. Health determines how much direct damage an entity can take before death or destruction.\nEntities can have multiple types of health, each with their own effects on entities" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHealth_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Attribute used to store the current health value for this health type on a given entity */" },
#endif
		{ "ModuleRelativePath", "Public/HealthAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attribute used to store the current health value for this health type on a given entity" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Attribute used to store the maximum health for this health type on a given entity */" },
#endif
		{ "ModuleRelativePath", "Public/HealthAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attribute used to store the maximum health for this health type on a given entity" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultHealth_MetaData[] = {
		{ "BlueprintGetter", "GetDefaultHealth" },
		{ "Category", "Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Determines the default health to use for this health type */" },
#endif
		{ "HideFromModifiers", "" },
		{ "ModuleRelativePath", "Public/HealthAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Determines the default health to use for this health type" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UHealthAttributeSet constinit property declarations **********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentHealth;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UHealthAttributeSet constinit property declarations ************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetDefaultHealth"), .Pointer = &UHealthAttributeSet::execGetDefaultHealth },
		{ .NameUTF8 = UTF8TEXT("OnRep_CurrentHealth"), .Pointer = &UHealthAttributeSet::execOnRep_CurrentHealth },
		{ .NameUTF8 = UTF8TEXT("OnRep_MaxHealth"), .Pointer = &UHealthAttributeSet::execOnRep_MaxHealth },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UHealthAttributeSet_GetDefaultHealth, "GetDefaultHealth" }, // 2023426578
		{ &Z_Construct_UFunction_UHealthAttributeSet_OnRep_CurrentHealth, "OnRep_CurrentHealth" }, // 4150036484
		{ &Z_Construct_UFunction_UHealthAttributeSet_OnRep_MaxHealth, "OnRep_MaxHealth" }, // 4256873065
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHealthAttributeSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UHealthAttributeSet_Statics

// ********** Begin Class UHealthAttributeSet Property Definitions *********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHealthAttributeSet_Statics::NewProp_CurrentHealth = { "CurrentHealth", "OnRep_CurrentHealth", (EPropertyFlags)0x0040000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHealthAttributeSet, CurrentHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentHealth_MetaData), NewProp_CurrentHealth_MetaData) }; // 3543875268
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHealthAttributeSet_Statics::NewProp_MaxHealth = { "MaxHealth", "OnRep_MaxHealth", (EPropertyFlags)0x0040000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHealthAttributeSet, MaxHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) }; // 3543875268
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHealthAttributeSet_Statics::NewProp_DefaultHealth = { "DefaultHealth", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHealthAttributeSet, DefaultHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultHealth_MetaData), NewProp_DefaultHealth_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHealthAttributeSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealthAttributeSet_Statics::NewProp_CurrentHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealthAttributeSet_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealthAttributeSet_Statics::NewProp_DefaultHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHealthAttributeSet_Statics::PropPointers) < 2048);
// ********** End Class UHealthAttributeSet Property Definitions ***********************************
UObject* (*const Z_Construct_UClass_UHealthAttributeSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEntityAttributeSet,
	(UObject* (*)())Z_Construct_UPackage__Script_Simulation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHealthAttributeSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHealthAttributeSet_Statics::ClassParams = {
	&UHealthAttributeSet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UHealthAttributeSet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UHealthAttributeSet_Statics::PropPointers),
	0,
	0x043000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHealthAttributeSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UHealthAttributeSet_Statics::Class_MetaDataParams)
};
void UHealthAttributeSet::StaticRegisterNativesUHealthAttributeSet()
{
	UClass* Class = UHealthAttributeSet::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UHealthAttributeSet_Statics::Funcs));
}
UClass* Z_Construct_UClass_UHealthAttributeSet()
{
	if (!Z_Registration_Info_UClass_UHealthAttributeSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHealthAttributeSet.OuterSingleton, Z_Construct_UClass_UHealthAttributeSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHealthAttributeSet.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void UHealthAttributeSet::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_CurrentHealth(TEXT("CurrentHealth"));
	static FName Name_MaxHealth(TEXT("MaxHealth"));
	const bool bIsValid = true
		&& Name_CurrentHealth == ClassReps[(int32)ENetFields_Private::CurrentHealth].Property->GetFName()
		&& Name_MaxHealth == ClassReps[(int32)ENetFields_Private::MaxHealth].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UHealthAttributeSet"));
}
#endif
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UHealthAttributeSet);
UHealthAttributeSet::~UHealthAttributeSet() {}
// ********** End Class UHealthAttributeSet ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_HealthAttributeSet_h__Script_Simulation_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHealthAttributeSet, UHealthAttributeSet::StaticClass, TEXT("UHealthAttributeSet"), &Z_Registration_Info_UClass_UHealthAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHealthAttributeSet), 3997577793U) },
	};
}; // Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_HealthAttributeSet_h__Script_Simulation_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_HealthAttributeSet_h__Script_Simulation_1581690340{
	TEXT("/Script/Simulation"),
	Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_HealthAttributeSet_h__Script_Simulation_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_HealthAttributeSet_h__Script_Simulation_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
