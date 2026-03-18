// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SkillComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSkillComponent() {}

// ********** Begin Cross Module References ********************************************************
SIMULATION_API UClass* Z_Construct_UClass_UEntityComponent();
SIMULATION_API UClass* Z_Construct_UClass_USkill_NoRegister();
SIMULATION_API UClass* Z_Construct_UClass_USkillComponent();
SIMULATION_API UClass* Z_Construct_UClass_USkillComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Simulation();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USkillComponent Function GetSkill ****************************************
struct Z_Construct_UFunction_USkillComponent_GetSkill_Statics
{
	struct SkillComponent_eventGetSkill_Parms
	{
		FString InstanceKey;
		USkill* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Skills" },
		{ "ModuleRelativePath", "Public/SkillComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetSkill constinit property declarations ******************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_InstanceKey;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetSkill constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetSkill Property Definitions *****************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USkillComponent_GetSkill_Statics::NewProp_InstanceKey = { "InstanceKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkillComponent_eventGetSkill_Parms, InstanceKey), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkillComponent_GetSkill_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkillComponent_eventGetSkill_Parms, ReturnValue), Z_Construct_UClass_USkill_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkillComponent_GetSkill_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillComponent_GetSkill_Statics::NewProp_InstanceKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillComponent_GetSkill_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkillComponent_GetSkill_Statics::PropPointers) < 2048);
// ********** End Function GetSkill Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkillComponent_GetSkill_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USkillComponent, nullptr, "GetSkill", 	Z_Construct_UFunction_USkillComponent_GetSkill_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USkillComponent_GetSkill_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USkillComponent_GetSkill_Statics::SkillComponent_eventGetSkill_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkillComponent_GetSkill_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkillComponent_GetSkill_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USkillComponent_GetSkill_Statics::SkillComponent_eventGetSkill_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkillComponent_GetSkill()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkillComponent_GetSkill_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkillComponent::execGetSkill)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InstanceKey);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USkill**)Z_Param__Result=P_THIS->GetSkill(Z_Param_InstanceKey);
	P_NATIVE_END;
}
// ********** End Class USkillComponent Function GetSkill ******************************************

// ********** Begin Class USkillComponent Function GetSkills ***************************************
struct Z_Construct_UFunction_USkillComponent_GetSkills_Statics
{
	struct SkillComponent_eventGetSkills_Parms
	{
		TMap<FString,USkill*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Skills" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called to return the list of skills that are active on this component\n" },
#endif
		{ "ModuleRelativePath", "Public/SkillComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called to return the list of skills that are active on this component" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetSkills constinit property declarations *****************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetSkills constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetSkills Property Definitions ****************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkillComponent_GetSkills_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_USkill_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USkillComponent_GetSkills_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_USkillComponent_GetSkills_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkillComponent_eventGetSkills_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkillComponent_GetSkills_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillComponent_GetSkills_Statics::NewProp_ReturnValue_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillComponent_GetSkills_Statics::NewProp_ReturnValue_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillComponent_GetSkills_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkillComponent_GetSkills_Statics::PropPointers) < 2048);
// ********** End Function GetSkills Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkillComponent_GetSkills_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USkillComponent, nullptr, "GetSkills", 	Z_Construct_UFunction_USkillComponent_GetSkills_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USkillComponent_GetSkills_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USkillComponent_GetSkills_Statics::SkillComponent_eventGetSkills_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkillComponent_GetSkills_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkillComponent_GetSkills_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USkillComponent_GetSkills_Statics::SkillComponent_eventGetSkills_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkillComponent_GetSkills()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkillComponent_GetSkills_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkillComponent::execGetSkills)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TMap<FString,USkill*>*)Z_Param__Result=P_THIS->GetSkills();
	P_NATIVE_END;
}
// ********** End Class USkillComponent Function GetSkills *****************************************

// ********** Begin Class USkillComponent **********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USkillComponent;
UClass* USkillComponent::GetPrivateStaticClass()
{
	using TClass = USkillComponent;
	if (!Z_Registration_Info_UClass_USkillComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SkillComponent"),
			Z_Registration_Info_UClass_USkillComponent.InnerSingleton,
			StaticRegisterNativesUSkillComponent,
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
	return Z_Registration_Info_UClass_USkillComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_USkillComponent_NoRegister()
{
	return USkillComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USkillComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "SkillComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SkillComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Skills_ValueProp_MetaData[] = {
		{ "BlueprintGetter", "GetSkills" },
		{ "Category", "Skills" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// List of current skills active on this component\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SkillComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of current skills active on this component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Skills_MetaData[] = {
		{ "BlueprintGetter", "GetSkills" },
		{ "Category", "Skills" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// List of current skills active on this component\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SkillComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of current skills active on this component" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class USkillComponent constinit property declarations **************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Skills_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Skills_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Skills;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USkillComponent constinit property declarations ****************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetSkill"), .Pointer = &USkillComponent::execGetSkill },
		{ .NameUTF8 = UTF8TEXT("GetSkills"), .Pointer = &USkillComponent::execGetSkills },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USkillComponent_GetSkill, "GetSkill" }, // 2627078571
		{ &Z_Construct_UFunction_USkillComponent_GetSkills, "GetSkills" }, // 2997687795
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkillComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USkillComponent_Statics

// ********** Begin Class USkillComponent Property Definitions *************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkillComponent_Statics::NewProp_Skills_ValueProp = { "Skills", nullptr, (EPropertyFlags)0x0002000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_USkill_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Skills_ValueProp_MetaData), NewProp_Skills_ValueProp_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USkillComponent_Statics::NewProp_Skills_Key_KeyProp = { "Skills_Key", nullptr, (EPropertyFlags)0x0002000000080009, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USkillComponent_Statics::NewProp_Skills = { "Skills", nullptr, (EPropertyFlags)0x004000800001001d, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkillComponent, Skills), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Skills_MetaData), NewProp_Skills_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USkillComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillComponent_Statics::NewProp_Skills_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillComponent_Statics::NewProp_Skills_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillComponent_Statics::NewProp_Skills,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USkillComponent_Statics::PropPointers) < 2048);
// ********** End Class USkillComponent Property Definitions ***************************************
UObject* (*const Z_Construct_UClass_USkillComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEntityComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Simulation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USkillComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USkillComponent_Statics::ClassParams = {
	&USkillComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USkillComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USkillComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USkillComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_USkillComponent_Statics::Class_MetaDataParams)
};
void USkillComponent::StaticRegisterNativesUSkillComponent()
{
	UClass* Class = USkillComponent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USkillComponent_Statics::Funcs));
}
UClass* Z_Construct_UClass_USkillComponent()
{
	if (!Z_Registration_Info_UClass_USkillComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USkillComponent.OuterSingleton, Z_Construct_UClass_USkillComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USkillComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USkillComponent);
USkillComponent::~USkillComponent() {}
// ********** End Class USkillComponent ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_SkillComponent_h__Script_Simulation_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USkillComponent, USkillComponent::StaticClass, TEXT("USkillComponent"), &Z_Registration_Info_UClass_USkillComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USkillComponent), 1113817953U) },
	};
}; // Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_SkillComponent_h__Script_Simulation_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_SkillComponent_h__Script_Simulation_3944780287{
	TEXT("/Script/Simulation"),
	Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_SkillComponent_h__Script_Simulation_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_SkillComponent_h__Script_Simulation_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
