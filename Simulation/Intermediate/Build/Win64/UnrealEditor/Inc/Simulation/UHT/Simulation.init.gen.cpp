// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimulation_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");	SIMULATION_API UFunction* Z_Construct_UDelegateFunction_Simulation_OnAttributeAdded__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Simulation;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Simulation()
	{
		if (!Z_Registration_Info_UPackage__Script_Simulation.OuterSingleton)
		{
		static UObject* (*const SingletonFuncArray[])() = {
			(UObject* (*)())Z_Construct_UDelegateFunction_Simulation_OnAttributeAdded__DelegateSignature,
		};
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/Simulation",
			SingletonFuncArray,
			UE_ARRAY_COUNT(SingletonFuncArray),
			PKG_CompiledIn | 0x00000000,
			0x8966DF55,
			0x214C7BAF,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Simulation.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_Simulation.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Simulation(Z_Construct_UPackage__Script_Simulation, TEXT("/Script/Simulation"), Z_Registration_Info_UPackage__Script_Simulation, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x8966DF55, 0x214C7BAF));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
