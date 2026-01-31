// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NeedAttributeSet.h"
#include "AttributeSet.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeNeedAttributeSet() {}

// ********** Begin Cross Module References ********************************************************
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
SIMULATION_API UClass* Z_Construct_UClass_UEntityAttributeSet();
SIMULATION_API UClass* Z_Construct_UClass_UNeedAttributeSet();
SIMULATION_API UClass* Z_Construct_UClass_UNeedAttributeSet_NoRegister();
UPackage* Z_Construct_UPackage__Script_Simulation();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UNeedAttributeSet Function OnRep_CurrentSatisfaction *********************
struct Z_Construct_UFunction_UNeedAttributeSet_OnRep_CurrentSatisfaction_Statics
{
	struct NeedAttributeSet_eventOnRep_CurrentSatisfaction_Parms
	{
		FGameplayAttributeData OldSatisfaction;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NeedAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldSatisfaction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRep_CurrentSatisfaction constinit property declarations *************
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldSatisfaction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnRep_CurrentSatisfaction constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnRep_CurrentSatisfaction Property Definitions ************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNeedAttributeSet_OnRep_CurrentSatisfaction_Statics::NewProp_OldSatisfaction = { "OldSatisfaction", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NeedAttributeSet_eventOnRep_CurrentSatisfaction_Parms, OldSatisfaction), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldSatisfaction_MetaData), NewProp_OldSatisfaction_MetaData) }; // 3543875268
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNeedAttributeSet_OnRep_CurrentSatisfaction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNeedAttributeSet_OnRep_CurrentSatisfaction_Statics::NewProp_OldSatisfaction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNeedAttributeSet_OnRep_CurrentSatisfaction_Statics::PropPointers) < 2048);
// ********** End Function OnRep_CurrentSatisfaction Property Definitions **************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNeedAttributeSet_OnRep_CurrentSatisfaction_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UNeedAttributeSet, nullptr, "OnRep_CurrentSatisfaction", 	Z_Construct_UFunction_UNeedAttributeSet_OnRep_CurrentSatisfaction_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UNeedAttributeSet_OnRep_CurrentSatisfaction_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UNeedAttributeSet_OnRep_CurrentSatisfaction_Statics::NeedAttributeSet_eventOnRep_CurrentSatisfaction_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNeedAttributeSet_OnRep_CurrentSatisfaction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNeedAttributeSet_OnRep_CurrentSatisfaction_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UNeedAttributeSet_OnRep_CurrentSatisfaction_Statics::NeedAttributeSet_eventOnRep_CurrentSatisfaction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNeedAttributeSet_OnRep_CurrentSatisfaction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNeedAttributeSet_OnRep_CurrentSatisfaction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNeedAttributeSet::execOnRep_CurrentSatisfaction)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldSatisfaction);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_CurrentSatisfaction(Z_Param_Out_OldSatisfaction);
	P_NATIVE_END;
}
// ********** End Class UNeedAttributeSet Function OnRep_CurrentSatisfaction ***********************

// ********** Begin Class UNeedAttributeSet ********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UNeedAttributeSet;
UClass* UNeedAttributeSet::GetPrivateStaticClass()
{
	using TClass = UNeedAttributeSet;
	if (!Z_Registration_Info_UClass_UNeedAttributeSet.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("NeedAttributeSet"),
			Z_Registration_Info_UClass_UNeedAttributeSet.InnerSingleton,
			StaticRegisterNativesUNeedAttributeSet,
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
	return Z_Registration_Info_UClass_UNeedAttributeSet.InnerSingleton;
}
UClass* Z_Construct_UClass_UNeedAttributeSet_NoRegister()
{
	return UNeedAttributeSet::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UNeedAttributeSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "NeedAttributeSet.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/NeedAttributeSet.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentSatisfaction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Need" },
		{ "ModuleRelativePath", "Public/NeedAttributeSet.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UNeedAttributeSet constinit property declarations ************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentSatisfaction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UNeedAttributeSet constinit property declarations **************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("OnRep_CurrentSatisfaction"), .Pointer = &UNeedAttributeSet::execOnRep_CurrentSatisfaction },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNeedAttributeSet_OnRep_CurrentSatisfaction, "OnRep_CurrentSatisfaction" }, // 3053561131
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNeedAttributeSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UNeedAttributeSet_Statics

// ********** Begin Class UNeedAttributeSet Property Definitions ***********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNeedAttributeSet_Statics::NewProp_CurrentSatisfaction = { "CurrentSatisfaction", "OnRep_CurrentSatisfaction", (EPropertyFlags)0x0040000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNeedAttributeSet, CurrentSatisfaction), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentSatisfaction_MetaData), NewProp_CurrentSatisfaction_MetaData) }; // 3543875268
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNeedAttributeSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeedAttributeSet_Statics::NewProp_CurrentSatisfaction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNeedAttributeSet_Statics::PropPointers) < 2048);
// ********** End Class UNeedAttributeSet Property Definitions *************************************
UObject* (*const Z_Construct_UClass_UNeedAttributeSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEntityAttributeSet,
	(UObject* (*)())Z_Construct_UPackage__Script_Simulation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNeedAttributeSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNeedAttributeSet_Statics::ClassParams = {
	&UNeedAttributeSet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNeedAttributeSet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNeedAttributeSet_Statics::PropPointers),
	0,
	0x043000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNeedAttributeSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UNeedAttributeSet_Statics::Class_MetaDataParams)
};
void UNeedAttributeSet::StaticRegisterNativesUNeedAttributeSet()
{
	UClass* Class = UNeedAttributeSet::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UNeedAttributeSet_Statics::Funcs));
}
UClass* Z_Construct_UClass_UNeedAttributeSet()
{
	if (!Z_Registration_Info_UClass_UNeedAttributeSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNeedAttributeSet.OuterSingleton, Z_Construct_UClass_UNeedAttributeSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNeedAttributeSet.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void UNeedAttributeSet::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_CurrentSatisfaction(TEXT("CurrentSatisfaction"));
	const bool bIsValid = true
		&& Name_CurrentSatisfaction == ClassReps[(int32)ENetFields_Private::CurrentSatisfaction].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UNeedAttributeSet"));
}
#endif
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UNeedAttributeSet);
UNeedAttributeSet::~UNeedAttributeSet() {}
// ********** End Class UNeedAttributeSet **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_NeedAttributeSet_h__Script_Simulation_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNeedAttributeSet, UNeedAttributeSet::StaticClass, TEXT("UNeedAttributeSet"), &Z_Registration_Info_UClass_UNeedAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNeedAttributeSet), 3028981942U) },
	};
}; // Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_NeedAttributeSet_h__Script_Simulation_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_NeedAttributeSet_h__Script_Simulation_148709498{
	TEXT("/Script/Simulation"),
	Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_NeedAttributeSet_h__Script_Simulation_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_NeedAttributeSet_h__Script_Simulation_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
