// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NeedComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeNeedComponent() {}

// ********** Begin Cross Module References ********************************************************
SIMULATION_API UClass* Z_Construct_UClass_UEntityComponent();
SIMULATION_API UClass* Z_Construct_UClass_UNeed_NoRegister();
SIMULATION_API UClass* Z_Construct_UClass_UNeedComponent();
SIMULATION_API UClass* Z_Construct_UClass_UNeedComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Simulation();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UNeedComponent Function GetNeed ******************************************
struct Z_Construct_UFunction_UNeedComponent_GetNeed_Statics
{
	struct NeedComponent_eventGetNeed_Parms
	{
		FString InstanceKey;
		UNeed* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Needs" },
		{ "ModuleRelativePath", "Public/NeedComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetNeed constinit property declarations *******************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_InstanceKey;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetNeed constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetNeed Property Definitions ******************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNeedComponent_GetNeed_Statics::NewProp_InstanceKey = { "InstanceKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NeedComponent_eventGetNeed_Parms, InstanceKey), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNeedComponent_GetNeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NeedComponent_eventGetNeed_Parms, ReturnValue), Z_Construct_UClass_UNeed_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNeedComponent_GetNeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNeedComponent_GetNeed_Statics::NewProp_InstanceKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNeedComponent_GetNeed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNeedComponent_GetNeed_Statics::PropPointers) < 2048);
// ********** End Function GetNeed Property Definitions ********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNeedComponent_GetNeed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UNeedComponent, nullptr, "GetNeed", 	Z_Construct_UFunction_UNeedComponent_GetNeed_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UNeedComponent_GetNeed_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UNeedComponent_GetNeed_Statics::NeedComponent_eventGetNeed_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNeedComponent_GetNeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNeedComponent_GetNeed_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UNeedComponent_GetNeed_Statics::NeedComponent_eventGetNeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNeedComponent_GetNeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNeedComponent_GetNeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNeedComponent::execGetNeed)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InstanceKey);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNeed**)Z_Param__Result=P_THIS->GetNeed(Z_Param_InstanceKey);
	P_NATIVE_END;
}
// ********** End Class UNeedComponent Function GetNeed ********************************************

// ********** Begin Class UNeedComponent Function GetNeeds *****************************************
struct Z_Construct_UFunction_UNeedComponent_GetNeeds_Statics
{
	struct NeedComponent_eventGetNeeds_Parms
	{
		TMap<FString,UNeed*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Needs" },
		{ "ModuleRelativePath", "Public/NeedComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetNeeds constinit property declarations ******************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetNeeds constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetNeeds Property Definitions *****************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNeedComponent_GetNeeds_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UNeed_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNeedComponent_GetNeeds_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UNeedComponent_GetNeeds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NeedComponent_eventGetNeeds_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNeedComponent_GetNeeds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNeedComponent_GetNeeds_Statics::NewProp_ReturnValue_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNeedComponent_GetNeeds_Statics::NewProp_ReturnValue_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNeedComponent_GetNeeds_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNeedComponent_GetNeeds_Statics::PropPointers) < 2048);
// ********** End Function GetNeeds Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNeedComponent_GetNeeds_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UNeedComponent, nullptr, "GetNeeds", 	Z_Construct_UFunction_UNeedComponent_GetNeeds_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UNeedComponent_GetNeeds_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UNeedComponent_GetNeeds_Statics::NeedComponent_eventGetNeeds_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNeedComponent_GetNeeds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNeedComponent_GetNeeds_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UNeedComponent_GetNeeds_Statics::NeedComponent_eventGetNeeds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNeedComponent_GetNeeds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNeedComponent_GetNeeds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNeedComponent::execGetNeeds)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TMap<FString,UNeed*>*)Z_Param__Result=P_THIS->GetNeeds();
	P_NATIVE_END;
}
// ********** End Class UNeedComponent Function GetNeeds *******************************************

// ********** Begin Class UNeedComponent ***********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UNeedComponent;
UClass* UNeedComponent::GetPrivateStaticClass()
{
	using TClass = UNeedComponent;
	if (!Z_Registration_Info_UClass_UNeedComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("NeedComponent"),
			Z_Registration_Info_UClass_UNeedComponent.InnerSingleton,
			StaticRegisterNativesUNeedComponent,
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
	return Z_Registration_Info_UClass_UNeedComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UNeedComponent_NoRegister()
{
	return UNeedComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UNeedComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "NeedComponent.h" },
		{ "ModuleRelativePath", "Public/NeedComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Needs_ValueProp_MetaData[] = {
		{ "BlueprintGetter", "GetNeeds" },
		{ "Category", "Needs" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NeedComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Needs_MetaData[] = {
		{ "BlueprintGetter", "GetNeeds" },
		{ "Category", "Needs" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NeedComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UNeedComponent constinit property declarations ***************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Needs_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Needs_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Needs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UNeedComponent constinit property declarations *****************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetNeed"), .Pointer = &UNeedComponent::execGetNeed },
		{ .NameUTF8 = UTF8TEXT("GetNeeds"), .Pointer = &UNeedComponent::execGetNeeds },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNeedComponent_GetNeed, "GetNeed" }, // 564623646
		{ &Z_Construct_UFunction_UNeedComponent_GetNeeds, "GetNeeds" }, // 3243792046
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNeedComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UNeedComponent_Statics

// ********** Begin Class UNeedComponent Property Definitions **************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNeedComponent_Statics::NewProp_Needs_ValueProp = { "Needs", nullptr, (EPropertyFlags)0x0002000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UNeed_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Needs_ValueProp_MetaData), NewProp_Needs_ValueProp_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNeedComponent_Statics::NewProp_Needs_Key_KeyProp = { "Needs_Key", nullptr, (EPropertyFlags)0x0002000000080009, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UNeedComponent_Statics::NewProp_Needs = { "Needs", nullptr, (EPropertyFlags)0x004000800001001d, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNeedComponent, Needs), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Needs_MetaData), NewProp_Needs_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNeedComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeedComponent_Statics::NewProp_Needs_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeedComponent_Statics::NewProp_Needs_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeedComponent_Statics::NewProp_Needs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNeedComponent_Statics::PropPointers) < 2048);
// ********** End Class UNeedComponent Property Definitions ****************************************
UObject* (*const Z_Construct_UClass_UNeedComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEntityComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Simulation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNeedComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNeedComponent_Statics::ClassParams = {
	&UNeedComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNeedComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNeedComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNeedComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UNeedComponent_Statics::Class_MetaDataParams)
};
void UNeedComponent::StaticRegisterNativesUNeedComponent()
{
	UClass* Class = UNeedComponent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UNeedComponent_Statics::Funcs));
}
UClass* Z_Construct_UClass_UNeedComponent()
{
	if (!Z_Registration_Info_UClass_UNeedComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNeedComponent.OuterSingleton, Z_Construct_UClass_UNeedComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNeedComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UNeedComponent);
UNeedComponent::~UNeedComponent() {}
// ********** End Class UNeedComponent *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_NeedComponent_h__Script_Simulation_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNeedComponent, UNeedComponent::StaticClass, TEXT("UNeedComponent"), &Z_Registration_Info_UClass_UNeedComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNeedComponent), 2782989156U) },
	};
}; // Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_NeedComponent_h__Script_Simulation_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_NeedComponent_h__Script_Simulation_316626860{
	TEXT("/Script/Simulation"),
	Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_NeedComponent_h__Script_Simulation_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_NeedComponent_h__Script_Simulation_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
