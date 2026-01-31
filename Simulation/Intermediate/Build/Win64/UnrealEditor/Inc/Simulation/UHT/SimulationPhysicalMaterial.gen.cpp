// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimulationPhysicalMaterial.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSimulationPhysicalMaterial() {}

// ********** Begin Cross Module References ********************************************************
PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial();
SIMULATION_API UClass* Z_Construct_UClass_USimulationPhysicalMaterial();
SIMULATION_API UClass* Z_Construct_UClass_USimulationPhysicalMaterial_NoRegister();
UPackage* Z_Construct_UPackage__Script_Simulation();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USimulationPhysicalMaterial Function GetHeatResistance *******************
struct Z_Construct_UFunction_USimulationPhysicalMaterial_GetHeatResistance_Statics
{
	struct SimulationPhysicalMaterial_eventGetHeatResistance_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/SimulationPhysicalMaterial.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetHeatResistance constinit property declarations *********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetHeatResistance constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetHeatResistance Property Definitions ********************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimulationPhysicalMaterial_GetHeatResistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimulationPhysicalMaterial_eventGetHeatResistance_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimulationPhysicalMaterial_GetHeatResistance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimulationPhysicalMaterial_GetHeatResistance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimulationPhysicalMaterial_GetHeatResistance_Statics::PropPointers) < 2048);
// ********** End Function GetHeatResistance Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimulationPhysicalMaterial_GetHeatResistance_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USimulationPhysicalMaterial, nullptr, "GetHeatResistance", 	Z_Construct_UFunction_USimulationPhysicalMaterial_GetHeatResistance_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USimulationPhysicalMaterial_GetHeatResistance_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USimulationPhysicalMaterial_GetHeatResistance_Statics::SimulationPhysicalMaterial_eventGetHeatResistance_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimulationPhysicalMaterial_GetHeatResistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimulationPhysicalMaterial_GetHeatResistance_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USimulationPhysicalMaterial_GetHeatResistance_Statics::SimulationPhysicalMaterial_eventGetHeatResistance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimulationPhysicalMaterial_GetHeatResistance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimulationPhysicalMaterial_GetHeatResistance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimulationPhysicalMaterial::execGetHeatResistance)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetHeatResistance();
	P_NATIVE_END;
}
// ********** End Class USimulationPhysicalMaterial Function GetHeatResistance *********************

// ********** Begin Class USimulationPhysicalMaterial **********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USimulationPhysicalMaterial;
UClass* USimulationPhysicalMaterial::GetPrivateStaticClass()
{
	using TClass = USimulationPhysicalMaterial;
	if (!Z_Registration_Info_UClass_USimulationPhysicalMaterial.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SimulationPhysicalMaterial"),
			Z_Registration_Info_UClass_USimulationPhysicalMaterial.InnerSingleton,
			StaticRegisterNativesUSimulationPhysicalMaterial,
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
	return Z_Registration_Info_UClass_USimulationPhysicalMaterial.InnerSingleton;
}
UClass* Z_Construct_UClass_USimulationPhysicalMaterial_NoRegister()
{
	return USimulationPhysicalMaterial::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USimulationPhysicalMaterial_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object" },
		{ "IncludePath", "SimulationPhysicalMaterial.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SimulationPhysicalMaterial.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeatResistance_MetaData[] = {
		{ "BlueprintGetter", "GetHeatResistance" },
		{ "Category", "PhysicalMaterial" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\x09Heat Resistance, determines how efficiently and quickly the material conducts heat. Higher values = less heat conducted */" },
#endif
		{ "ModuleRelativePath", "Public/SimulationPhysicalMaterial.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Heat Resistance, determines how efficiently and quickly the material conducts heat. Higher values = less heat conducted" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class USimulationPhysicalMaterial constinit property declarations **************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HeatResistance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USimulationPhysicalMaterial constinit property declarations ****************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetHeatResistance"), .Pointer = &USimulationPhysicalMaterial::execGetHeatResistance },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USimulationPhysicalMaterial_GetHeatResistance, "GetHeatResistance" }, // 3739328279
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimulationPhysicalMaterial>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USimulationPhysicalMaterial_Statics

// ********** Begin Class USimulationPhysicalMaterial Property Definitions *************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USimulationPhysicalMaterial_Statics::NewProp_HeatResistance = { "HeatResistance", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimulationPhysicalMaterial, HeatResistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeatResistance_MetaData), NewProp_HeatResistance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USimulationPhysicalMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimulationPhysicalMaterial_Statics::NewProp_HeatResistance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimulationPhysicalMaterial_Statics::PropPointers) < 2048);
// ********** End Class USimulationPhysicalMaterial Property Definitions ***************************
UObject* (*const Z_Construct_UClass_USimulationPhysicalMaterial_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPhysicalMaterial,
	(UObject* (*)())Z_Construct_UPackage__Script_Simulation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimulationPhysicalMaterial_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USimulationPhysicalMaterial_Statics::ClassParams = {
	&USimulationPhysicalMaterial::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USimulationPhysicalMaterial_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USimulationPhysicalMaterial_Statics::PropPointers),
	0,
	0x001020A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimulationPhysicalMaterial_Statics::Class_MetaDataParams), Z_Construct_UClass_USimulationPhysicalMaterial_Statics::Class_MetaDataParams)
};
void USimulationPhysicalMaterial::StaticRegisterNativesUSimulationPhysicalMaterial()
{
	UClass* Class = USimulationPhysicalMaterial::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USimulationPhysicalMaterial_Statics::Funcs));
}
UClass* Z_Construct_UClass_USimulationPhysicalMaterial()
{
	if (!Z_Registration_Info_UClass_USimulationPhysicalMaterial.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimulationPhysicalMaterial.OuterSingleton, Z_Construct_UClass_USimulationPhysicalMaterial_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USimulationPhysicalMaterial.OuterSingleton;
}
USimulationPhysicalMaterial::USimulationPhysicalMaterial(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
USimulationPhysicalMaterial::~USimulationPhysicalMaterial() {}
// ********** End Class USimulationPhysicalMaterial ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_SimulationPhysicalMaterial_h__Script_Simulation_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USimulationPhysicalMaterial, USimulationPhysicalMaterial::StaticClass, TEXT("USimulationPhysicalMaterial"), &Z_Registration_Info_UClass_USimulationPhysicalMaterial, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimulationPhysicalMaterial), 1914168785U) },
	};
}; // Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_SimulationPhysicalMaterial_h__Script_Simulation_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_SimulationPhysicalMaterial_h__Script_Simulation_578922884{
	TEXT("/Script/Simulation"),
	Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_SimulationPhysicalMaterial_h__Script_Simulation_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_SimulationPhysicalMaterial_h__Script_Simulation_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
