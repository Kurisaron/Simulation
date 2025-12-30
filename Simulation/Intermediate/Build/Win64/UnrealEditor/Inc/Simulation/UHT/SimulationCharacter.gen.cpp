// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimulationCharacter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSimulationCharacter() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
PHYSICSCONTROL_API UClass* Z_Construct_UClass_UPhysicsControlComponent_NoRegister();
SIMULATION_API UClass* Z_Construct_UClass_ASimulationCharacter();
SIMULATION_API UClass* Z_Construct_UClass_ASimulationCharacter_NoRegister();
SIMULATION_API UClass* Z_Construct_UClass_USimulationEntityComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Simulation();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ASimulationCharacter Function Move ***************************************
struct Z_Construct_UFunction_ASimulationCharacter_Move_Statics
{
	struct SimulationCharacter_eventMove_Parms
	{
		FVector2D MoveInput;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Simulation Character|Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called to move the character\n" },
#endif
		{ "ModuleRelativePath", "Public/SimulationCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called to move the character" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function Move constinit property declarations **********************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_MoveInput;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Move constinit property declarations ************************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Move Property Definitions *********************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASimulationCharacter_Move_Statics::NewProp_MoveInput = { "MoveInput", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimulationCharacter_eventMove_Parms, MoveInput), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimulationCharacter_Move_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimulationCharacter_Move_Statics::NewProp_MoveInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulationCharacter_Move_Statics::PropPointers) < 2048);
// ********** End Function Move Property Definitions ***********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimulationCharacter_Move_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASimulationCharacter, nullptr, "Move", 	Z_Construct_UFunction_ASimulationCharacter_Move_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulationCharacter_Move_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ASimulationCharacter_Move_Statics::SimulationCharacter_eventMove_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulationCharacter_Move_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASimulationCharacter_Move_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASimulationCharacter_Move_Statics::SimulationCharacter_eventMove_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASimulationCharacter_Move()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASimulationCharacter_Move_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASimulationCharacter::execMove)
{
	P_GET_STRUCT(FVector2D,Z_Param_MoveInput);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Move(Z_Param_MoveInput);
	P_NATIVE_END;
}
// ********** End Class ASimulationCharacter Function Move *****************************************

// ********** Begin Class ASimulationCharacter *****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ASimulationCharacter;
UClass* ASimulationCharacter::GetPrivateStaticClass()
{
	using TClass = ASimulationCharacter;
	if (!Z_Registration_Info_UClass_ASimulationCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SimulationCharacter"),
			Z_Registration_Info_UClass_ASimulationCharacter.InnerSingleton,
			StaticRegisterNativesASimulationCharacter,
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
	return Z_Registration_Info_UClass_ASimulationCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_ASimulationCharacter_NoRegister()
{
	return ASimulationCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ASimulationCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SimulationCharacter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SimulationCharacter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntityComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Simulation Entity" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SimulationCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhysicsControlComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Physical Animation" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SimulationCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class ASimulationCharacter constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EntityComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PhysicsControlComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ASimulationCharacter constinit property declarations ***********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("Move"), .Pointer = &ASimulationCharacter::execMove },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASimulationCharacter_Move, "Move" }, // 1613464354
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASimulationCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ASimulationCharacter_Statics

// ********** Begin Class ASimulationCharacter Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASimulationCharacter_Statics::NewProp_EntityComponent = { "EntityComponent", nullptr, (EPropertyFlags)0x004000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASimulationCharacter, EntityComponent), Z_Construct_UClass_USimulationEntityComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntityComponent_MetaData), NewProp_EntityComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASimulationCharacter_Statics::NewProp_PhysicsControlComponent = { "PhysicsControlComponent", nullptr, (EPropertyFlags)0x004000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASimulationCharacter, PhysicsControlComponent), Z_Construct_UClass_UPhysicsControlComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhysicsControlComponent_MetaData), NewProp_PhysicsControlComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASimulationCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimulationCharacter_Statics::NewProp_EntityComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimulationCharacter_Statics::NewProp_PhysicsControlComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASimulationCharacter_Statics::PropPointers) < 2048);
// ********** End Class ASimulationCharacter Property Definitions **********************************
UObject* (*const Z_Construct_UClass_ASimulationCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Simulation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASimulationCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASimulationCharacter_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(ASimulationCharacter, IAbilitySystemInterface), false },  // 2722098046
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASimulationCharacter_Statics::ClassParams = {
	&ASimulationCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASimulationCharacter_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASimulationCharacter_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASimulationCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ASimulationCharacter_Statics::Class_MetaDataParams)
};
void ASimulationCharacter::StaticRegisterNativesASimulationCharacter()
{
	UClass* Class = ASimulationCharacter::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_ASimulationCharacter_Statics::Funcs));
}
UClass* Z_Construct_UClass_ASimulationCharacter()
{
	if (!Z_Registration_Info_UClass_ASimulationCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASimulationCharacter.OuterSingleton, Z_Construct_UClass_ASimulationCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASimulationCharacter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ASimulationCharacter);
ASimulationCharacter::~ASimulationCharacter() {}
// ********** End Class ASimulationCharacter *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_SimulationCharacter_h__Script_Simulation_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASimulationCharacter, ASimulationCharacter::StaticClass, TEXT("ASimulationCharacter"), &Z_Registration_Info_UClass_ASimulationCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASimulationCharacter), 3099250826U) },
	};
}; // Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_SimulationCharacter_h__Script_Simulation_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_SimulationCharacter_h__Script_Simulation_2621286590{
	TEXT("/Script/Simulation"),
	Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_SimulationCharacter_h__Script_Simulation_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_SimulationCharacter_h__Script_Simulation_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
