// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Need.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeNeed() {}

// ********** Begin Cross Module References ********************************************************
SIMULATION_API UClass* Z_Construct_UClass_UEntityAttribute();
SIMULATION_API UClass* Z_Construct_UClass_UNeed();
SIMULATION_API UClass* Z_Construct_UClass_UNeed_NoRegister();
UPackage* Z_Construct_UPackage__Script_Simulation();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UNeed Function GetFulfillment ********************************************
struct Z_Construct_UFunction_UNeed_GetFulfillment_Statics
{
	struct Need_eventGetFulfillment_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Need" },
		{ "ModuleRelativePath", "Public/Need.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetFulfillment constinit property declarations ************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetFulfillment constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetFulfillment Property Definitions ***********************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNeed_GetFulfillment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Need_eventGetFulfillment_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNeed_GetFulfillment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNeed_GetFulfillment_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNeed_GetFulfillment_Statics::PropPointers) < 2048);
// ********** End Function GetFulfillment Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNeed_GetFulfillment_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UNeed, nullptr, "GetFulfillment", 	Z_Construct_UFunction_UNeed_GetFulfillment_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UNeed_GetFulfillment_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UNeed_GetFulfillment_Statics::Need_eventGetFulfillment_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNeed_GetFulfillment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNeed_GetFulfillment_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UNeed_GetFulfillment_Statics::Need_eventGetFulfillment_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNeed_GetFulfillment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNeed_GetFulfillment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNeed::execGetFulfillment)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetFulfillment();
	P_NATIVE_END;
}
// ********** End Class UNeed Function GetFulfillment **********************************************

// ********** Begin Class UNeed ********************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UNeed;
UClass* UNeed::GetPrivateStaticClass()
{
	using TClass = UNeed;
	if (!Z_Registration_Info_UClass_UNeed.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("Need"),
			Z_Registration_Info_UClass_UNeed.InnerSingleton,
			StaticRegisterNativesUNeed,
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
	return Z_Registration_Info_UClass_UNeed.InnerSingleton;
}
UClass* Z_Construct_UClass_UNeed_NoRegister()
{
	return UNeed::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UNeed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Need.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Need.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Fulfillment_MetaData[] = {
		{ "BlueprintGetter", "GetFulfillment" },
		{ "Category", "Need" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Need.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UNeed constinit property declarations ************************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Fulfillment;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UNeed constinit property declarations **************************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetFulfillment"), .Pointer = &UNeed::execGetFulfillment },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNeed_GetFulfillment, "GetFulfillment" }, // 3813201808
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNeed>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UNeed_Statics

// ********** Begin Class UNeed Property Definitions ***********************************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNeed_Statics::NewProp_Fulfillment = { "Fulfillment", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNeed, Fulfillment), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Fulfillment_MetaData), NewProp_Fulfillment_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeed_Statics::NewProp_Fulfillment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNeed_Statics::PropPointers) < 2048);
// ********** End Class UNeed Property Definitions *************************************************
UObject* (*const Z_Construct_UClass_UNeed_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEntityAttribute,
	(UObject* (*)())Z_Construct_UPackage__Script_Simulation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNeed_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNeed_Statics::ClassParams = {
	&UNeed::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNeed_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNeed_Statics::PropPointers),
	0,
	0x041010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNeed_Statics::Class_MetaDataParams), Z_Construct_UClass_UNeed_Statics::Class_MetaDataParams)
};
void UNeed::StaticRegisterNativesUNeed()
{
	UClass* Class = UNeed::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UNeed_Statics::Funcs));
}
UClass* Z_Construct_UClass_UNeed()
{
	if (!Z_Registration_Info_UClass_UNeed.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNeed.OuterSingleton, Z_Construct_UClass_UNeed_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNeed.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UNeed);
UNeed::~UNeed() {}
// ********** End Class UNeed **********************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_Need_h__Script_Simulation_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNeed, UNeed::StaticClass, TEXT("UNeed"), &Z_Registration_Info_UClass_UNeed, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNeed), 1919834823U) },
	};
}; // Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_Need_h__Script_Simulation_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_Need_h__Script_Simulation_544360923{
	TEXT("/Script/Simulation"),
	Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_Need_h__Script_Simulation_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_Need_h__Script_Simulation_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
