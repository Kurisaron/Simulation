// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EntityAttribute.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeEntityAttribute() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
SIMULATION_API UClass* Z_Construct_UClass_UEntityAttribute();
SIMULATION_API UClass* Z_Construct_UClass_UEntityAttribute_NoRegister();
UPackage* Z_Construct_UPackage__Script_Simulation();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UEntityAttribute Function GetTypeID **************************************
struct Z_Construct_UFunction_UEntityAttribute_GetTypeID_Statics
{
	struct EntityAttribute_eventGetTypeID_Parms
	{
		FGameplayTag ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Entity Attribute" },
		{ "ModuleRelativePath", "Public/EntityAttribute.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetTypeID constinit property declarations *****************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetTypeID constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetTypeID Property Definitions ****************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEntityAttribute_GetTypeID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EntityAttribute_eventGetTypeID_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEntityAttribute_GetTypeID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEntityAttribute_GetTypeID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEntityAttribute_GetTypeID_Statics::PropPointers) < 2048);
// ********** End Function GetTypeID Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEntityAttribute_GetTypeID_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEntityAttribute, nullptr, "GetTypeID", 	Z_Construct_UFunction_UEntityAttribute_GetTypeID_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UEntityAttribute_GetTypeID_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UEntityAttribute_GetTypeID_Statics::EntityAttribute_eventGetTypeID_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEntityAttribute_GetTypeID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEntityAttribute_GetTypeID_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UEntityAttribute_GetTypeID_Statics::EntityAttribute_eventGetTypeID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEntityAttribute_GetTypeID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEntityAttribute_GetTypeID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEntityAttribute::execGetTypeID)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayTag*)Z_Param__Result=P_THIS->GetTypeID();
	P_NATIVE_END;
}
// ********** End Class UEntityAttribute Function GetTypeID ****************************************

// ********** Begin Class UEntityAttribute Function IsHidden ***************************************
struct Z_Construct_UFunction_UEntityAttribute_IsHidden_Statics
{
	struct EntityAttribute_eventIsHidden_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Entity Attribute" },
		{ "ModuleRelativePath", "Public/EntityAttribute.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsHidden constinit property declarations ******************************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsHidden constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsHidden Property Definitions *****************************************
void Z_Construct_UFunction_UEntityAttribute_IsHidden_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((EntityAttribute_eventIsHidden_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEntityAttribute_IsHidden_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EntityAttribute_eventIsHidden_Parms), &Z_Construct_UFunction_UEntityAttribute_IsHidden_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEntityAttribute_IsHidden_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEntityAttribute_IsHidden_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEntityAttribute_IsHidden_Statics::PropPointers) < 2048);
// ********** End Function IsHidden Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEntityAttribute_IsHidden_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEntityAttribute, nullptr, "IsHidden", 	Z_Construct_UFunction_UEntityAttribute_IsHidden_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UEntityAttribute_IsHidden_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UEntityAttribute_IsHidden_Statics::EntityAttribute_eventIsHidden_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEntityAttribute_IsHidden_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEntityAttribute_IsHidden_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UEntityAttribute_IsHidden_Statics::EntityAttribute_eventIsHidden_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEntityAttribute_IsHidden()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEntityAttribute_IsHidden_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEntityAttribute::execIsHidden)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsHidden();
	P_NATIVE_END;
}
// ********** End Class UEntityAttribute Function IsHidden *****************************************

// ********** Begin Class UEntityAttribute *********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UEntityAttribute;
UClass* UEntityAttribute::GetPrivateStaticClass()
{
	using TClass = UEntityAttribute;
	if (!Z_Registration_Info_UClass_UEntityAttribute.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("EntityAttribute"),
			Z_Registration_Info_UClass_UEntityAttribute.InnerSingleton,
			StaticRegisterNativesUEntityAttribute,
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
	return Z_Registration_Info_UClass_UEntityAttribute.InnerSingleton;
}
UClass* Z_Construct_UClass_UEntityAttribute_NoRegister()
{
	return UEntityAttribute::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UEntityAttribute_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "EntityAttribute.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EntityAttribute.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TypeID_MetaData[] = {
		{ "BlueprintGetter", "GetTypeID" },
		{ "Category", "Entity Attribute" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * ID used to identify attributes. Serves as an alternate to casting by type\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/EntityAttribute.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ID used to identify attributes. Serves as an alternate to casting by type" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHidden_MetaData[] = {
		{ "BlueprintGetter", "IsHidden" },
		{ "Category", "Entity Attribute" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Indicates whether the attribute is hidden from UI\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/EntityAttribute.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicates whether the attribute is hidden from UI" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UEntityAttribute constinit property declarations *************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_TypeID;
	static void NewProp_bHidden_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHidden;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UEntityAttribute constinit property declarations ***************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetTypeID"), .Pointer = &UEntityAttribute::execGetTypeID },
		{ .NameUTF8 = UTF8TEXT("IsHidden"), .Pointer = &UEntityAttribute::execIsHidden },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEntityAttribute_GetTypeID, "GetTypeID" }, // 1608284567
		{ &Z_Construct_UFunction_UEntityAttribute_IsHidden, "IsHidden" }, // 3429203902
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEntityAttribute>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UEntityAttribute_Statics

// ********** Begin Class UEntityAttribute Property Definitions ************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEntityAttribute_Statics::NewProp_TypeID = { "TypeID", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEntityAttribute, TypeID), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TypeID_MetaData), NewProp_TypeID_MetaData) }; // 517357616
void Z_Construct_UClass_UEntityAttribute_Statics::NewProp_bHidden_SetBit(void* Obj)
{
	((UEntityAttribute*)Obj)->bHidden = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEntityAttribute_Statics::NewProp_bHidden = { "bHidden", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEntityAttribute), &Z_Construct_UClass_UEntityAttribute_Statics::NewProp_bHidden_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHidden_MetaData), NewProp_bHidden_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEntityAttribute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEntityAttribute_Statics::NewProp_TypeID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEntityAttribute_Statics::NewProp_bHidden,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEntityAttribute_Statics::PropPointers) < 2048);
// ********** End Class UEntityAttribute Property Definitions **************************************
UObject* (*const Z_Construct_UClass_UEntityAttribute_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Simulation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEntityAttribute_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEntityAttribute_Statics::ClassParams = {
	&UEntityAttribute::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEntityAttribute_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEntityAttribute_Statics::PropPointers),
	0,
	0x041010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEntityAttribute_Statics::Class_MetaDataParams), Z_Construct_UClass_UEntityAttribute_Statics::Class_MetaDataParams)
};
void UEntityAttribute::StaticRegisterNativesUEntityAttribute()
{
	UClass* Class = UEntityAttribute::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UEntityAttribute_Statics::Funcs));
}
UClass* Z_Construct_UClass_UEntityAttribute()
{
	if (!Z_Registration_Info_UClass_UEntityAttribute.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEntityAttribute.OuterSingleton, Z_Construct_UClass_UEntityAttribute_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEntityAttribute.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UEntityAttribute);
UEntityAttribute::~UEntityAttribute() {}
// ********** End Class UEntityAttribute ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_EntityAttribute_h__Script_Simulation_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEntityAttribute, UEntityAttribute::StaticClass, TEXT("UEntityAttribute"), &Z_Registration_Info_UClass_UEntityAttribute, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEntityAttribute), 2305075695U) },
	};
}; // Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_EntityAttribute_h__Script_Simulation_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_EntityAttribute_h__Script_Simulation_2727505890{
	TEXT("/Script/Simulation"),
	Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_EntityAttribute_h__Script_Simulation_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_EntityAttribute_h__Script_Simulation_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
