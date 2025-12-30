// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimulationEntityComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSimulationEntityComponent() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent();
GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayEffectReplicationMode();
SIMULATION_API UClass* Z_Construct_UClass_UEntityAttributeSet_NoRegister();
SIMULATION_API UClass* Z_Construct_UClass_USimulationEntityComponent();
SIMULATION_API UClass* Z_Construct_UClass_USimulationEntityComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Simulation();
// ********** End Cross Module References **********************************************************

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
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AttributeTest Object LOD Lighting Transform Sockets TextureStreaming Object LOD Lighting Transform Sockets TextureStreaming" },
		{ "IncludePath", "SimulationEntityComponent.h" },
		{ "ModuleRelativePath", "Public/SimulationEntityComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartingAttributeSets_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Public/SimulationEntityComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultReplicationMode_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Replication" },
		{ "ModuleRelativePath", "Public/SimulationEntityComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USimulationEntityComponent constinit property declarations ***************
	static const UECodeGen_Private::FClassPropertyParams NewProp_StartingAttributeSets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StartingAttributeSets;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultReplicationMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultReplicationMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USimulationEntityComponent constinit property declarations *****************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("IsSimulationEntity"), .Pointer = &USimulationEntityComponent::execIsSimulationEntity },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USimulationEntityComponent_IsSimulationEntity, "IsSimulationEntity" }, // 80802785
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimulationEntityComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USimulationEntityComponent_Statics

// ********** Begin Class USimulationEntityComponent Property Definitions **************************
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_USimulationEntityComponent_Statics::NewProp_StartingAttributeSets_Inner = { "StartingAttributeSets", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UEntityAttributeSet_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USimulationEntityComponent_Statics::NewProp_StartingAttributeSets = { "StartingAttributeSets", nullptr, (EPropertyFlags)0x0044000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimulationEntityComponent, StartingAttributeSets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartingAttributeSets_MetaData), NewProp_StartingAttributeSets_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USimulationEntityComponent_Statics::NewProp_DefaultReplicationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USimulationEntityComponent_Statics::NewProp_DefaultReplicationMode = { "DefaultReplicationMode", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimulationEntityComponent, DefaultReplicationMode), Z_Construct_UEnum_GameplayAbilities_EGameplayEffectReplicationMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultReplicationMode_MetaData), NewProp_DefaultReplicationMode_MetaData) }; // 3513395660
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USimulationEntityComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimulationEntityComponent_Statics::NewProp_StartingAttributeSets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimulationEntityComponent_Statics::NewProp_StartingAttributeSets,
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
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USimulationEntityComponent);
USimulationEntityComponent::~USimulationEntityComponent() {}
// ********** End Class USimulationEntityComponent *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_SimulationEntityComponent_h__Script_Simulation_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USimulationEntityComponent, USimulationEntityComponent::StaticClass, TEXT("USimulationEntityComponent"), &Z_Registration_Info_UClass_USimulationEntityComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimulationEntityComponent), 3749992797U) },
	};
}; // Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_SimulationEntityComponent_h__Script_Simulation_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_SimulationEntityComponent_h__Script_Simulation_4047834801{
	TEXT("/Script/Simulation"),
	Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_SimulationEntityComponent_h__Script_Simulation_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_SimulationEntityComponent_h__Script_Simulation_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
