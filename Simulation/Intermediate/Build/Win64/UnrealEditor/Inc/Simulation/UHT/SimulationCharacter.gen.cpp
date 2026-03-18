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
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UMotionControllerComponent_NoRegister();
PHYSICSCONTROL_API UClass* Z_Construct_UClass_UPhysicsControlComponent_NoRegister();
SIMULATION_API UClass* Z_Construct_UClass_ASimulationCharacter();
SIMULATION_API UClass* Z_Construct_UClass_ASimulationCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_Simulation();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ASimulationCharacter Function GetHeadIK **********************************
struct Z_Construct_UFunction_ASimulationCharacter_GetHeadIK_Statics
{
	struct SimulationCharacter_eventGetHeadIK_Parms
	{
		USceneComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Simulation Character|IK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called to return the IK target for the head\n" },
#endif
		{ "ModuleRelativePath", "Public/SimulationCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called to return the IK target for the head" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetHeadIK constinit property declarations *****************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetHeadIK constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetHeadIK Property Definitions ****************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASimulationCharacter_GetHeadIK_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimulationCharacter_eventGetHeadIK_Parms, ReturnValue), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimulationCharacter_GetHeadIK_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimulationCharacter_GetHeadIK_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulationCharacter_GetHeadIK_Statics::PropPointers) < 2048);
// ********** End Function GetHeadIK Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimulationCharacter_GetHeadIK_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASimulationCharacter, nullptr, "GetHeadIK", 	Z_Construct_UFunction_ASimulationCharacter_GetHeadIK_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulationCharacter_GetHeadIK_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ASimulationCharacter_GetHeadIK_Statics::SimulationCharacter_eventGetHeadIK_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulationCharacter_GetHeadIK_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASimulationCharacter_GetHeadIK_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASimulationCharacter_GetHeadIK_Statics::SimulationCharacter_eventGetHeadIK_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASimulationCharacter_GetHeadIK()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASimulationCharacter_GetHeadIK_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASimulationCharacter::execGetHeadIK)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USceneComponent**)Z_Param__Result=P_THIS->GetHeadIK();
	P_NATIVE_END;
}
// ********** End Class ASimulationCharacter Function GetHeadIK ************************************

// ********** Begin Class ASimulationCharacter Function GetHMD *************************************
struct Z_Construct_UFunction_ASimulationCharacter_GetHMD_Statics
{
	struct SimulationCharacter_eventGetHMD_Parms
	{
		UCameraComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Simulation Character|Virtual Reality" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called to return the HMD Camera\n" },
#endif
		{ "ModuleRelativePath", "Public/SimulationCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called to return the HMD Camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetHMD constinit property declarations ********************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetHMD constinit property declarations **********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetHMD Property Definitions *******************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASimulationCharacter_GetHMD_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimulationCharacter_eventGetHMD_Parms, ReturnValue), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimulationCharacter_GetHMD_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimulationCharacter_GetHMD_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulationCharacter_GetHMD_Statics::PropPointers) < 2048);
// ********** End Function GetHMD Property Definitions *********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimulationCharacter_GetHMD_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASimulationCharacter, nullptr, "GetHMD", 	Z_Construct_UFunction_ASimulationCharacter_GetHMD_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulationCharacter_GetHMD_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ASimulationCharacter_GetHMD_Statics::SimulationCharacter_eventGetHMD_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulationCharacter_GetHMD_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASimulationCharacter_GetHMD_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASimulationCharacter_GetHMD_Statics::SimulationCharacter_eventGetHMD_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASimulationCharacter_GetHMD()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASimulationCharacter_GetHMD_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASimulationCharacter::execGetHMD)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UCameraComponent**)Z_Param__Result=P_THIS->GetHMD();
	P_NATIVE_END;
}
// ********** End Class ASimulationCharacter Function GetHMD ***************************************

// ********** Begin Class ASimulationCharacter Function GetLeftHandController **********************
struct Z_Construct_UFunction_ASimulationCharacter_GetLeftHandController_Statics
{
	struct SimulationCharacter_eventGetLeftHandController_Parms
	{
		UMotionControllerComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Simulation Character|Virtual Reality" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called to return the left hand motion controller\n" },
#endif
		{ "ModuleRelativePath", "Public/SimulationCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called to return the left hand motion controller" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetLeftHandController constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetLeftHandController constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetLeftHandController Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASimulationCharacter_GetLeftHandController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimulationCharacter_eventGetLeftHandController_Parms, ReturnValue), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimulationCharacter_GetLeftHandController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimulationCharacter_GetLeftHandController_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulationCharacter_GetLeftHandController_Statics::PropPointers) < 2048);
// ********** End Function GetLeftHandController Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimulationCharacter_GetLeftHandController_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASimulationCharacter, nullptr, "GetLeftHandController", 	Z_Construct_UFunction_ASimulationCharacter_GetLeftHandController_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulationCharacter_GetLeftHandController_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ASimulationCharacter_GetLeftHandController_Statics::SimulationCharacter_eventGetLeftHandController_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulationCharacter_GetLeftHandController_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASimulationCharacter_GetLeftHandController_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASimulationCharacter_GetLeftHandController_Statics::SimulationCharacter_eventGetLeftHandController_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASimulationCharacter_GetLeftHandController()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASimulationCharacter_GetLeftHandController_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASimulationCharacter::execGetLeftHandController)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMotionControllerComponent**)Z_Param__Result=P_THIS->GetLeftHandController();
	P_NATIVE_END;
}
// ********** End Class ASimulationCharacter Function GetLeftHandController ************************

// ********** Begin Class ASimulationCharacter Function GetLeftHandIK ******************************
struct Z_Construct_UFunction_ASimulationCharacter_GetLeftHandIK_Statics
{
	struct SimulationCharacter_eventGetLeftHandIK_Parms
	{
		USceneComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Simulation Character|IK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called to return the IK target for the left hand\n" },
#endif
		{ "ModuleRelativePath", "Public/SimulationCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called to return the IK target for the left hand" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetLeftHandIK constinit property declarations *************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetLeftHandIK constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetLeftHandIK Property Definitions ************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASimulationCharacter_GetLeftHandIK_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimulationCharacter_eventGetLeftHandIK_Parms, ReturnValue), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimulationCharacter_GetLeftHandIK_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimulationCharacter_GetLeftHandIK_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulationCharacter_GetLeftHandIK_Statics::PropPointers) < 2048);
// ********** End Function GetLeftHandIK Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimulationCharacter_GetLeftHandIK_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASimulationCharacter, nullptr, "GetLeftHandIK", 	Z_Construct_UFunction_ASimulationCharacter_GetLeftHandIK_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulationCharacter_GetLeftHandIK_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ASimulationCharacter_GetLeftHandIK_Statics::SimulationCharacter_eventGetLeftHandIK_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulationCharacter_GetLeftHandIK_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASimulationCharacter_GetLeftHandIK_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASimulationCharacter_GetLeftHandIK_Statics::SimulationCharacter_eventGetLeftHandIK_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASimulationCharacter_GetLeftHandIK()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASimulationCharacter_GetLeftHandIK_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASimulationCharacter::execGetLeftHandIK)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USceneComponent**)Z_Param__Result=P_THIS->GetLeftHandIK();
	P_NATIVE_END;
}
// ********** End Class ASimulationCharacter Function GetLeftHandIK ********************************

// ********** Begin Class ASimulationCharacter Function GetPhysicsControl **************************
struct Z_Construct_UFunction_ASimulationCharacter_GetPhysicsControl_Statics
{
	struct SimulationCharacter_eventGetPhysicsControl_Parms
	{
		UPhysicsControlComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Simulation Character|Physical Animation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called to return physics control component\n" },
#endif
		{ "ModuleRelativePath", "Public/SimulationCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called to return physics control component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetPhysicsControl constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetPhysicsControl constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetPhysicsControl Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASimulationCharacter_GetPhysicsControl_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimulationCharacter_eventGetPhysicsControl_Parms, ReturnValue), Z_Construct_UClass_UPhysicsControlComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimulationCharacter_GetPhysicsControl_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimulationCharacter_GetPhysicsControl_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulationCharacter_GetPhysicsControl_Statics::PropPointers) < 2048);
// ********** End Function GetPhysicsControl Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimulationCharacter_GetPhysicsControl_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASimulationCharacter, nullptr, "GetPhysicsControl", 	Z_Construct_UFunction_ASimulationCharacter_GetPhysicsControl_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulationCharacter_GetPhysicsControl_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ASimulationCharacter_GetPhysicsControl_Statics::SimulationCharacter_eventGetPhysicsControl_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulationCharacter_GetPhysicsControl_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASimulationCharacter_GetPhysicsControl_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASimulationCharacter_GetPhysicsControl_Statics::SimulationCharacter_eventGetPhysicsControl_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASimulationCharacter_GetPhysicsControl()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASimulationCharacter_GetPhysicsControl_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASimulationCharacter::execGetPhysicsControl)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPhysicsControlComponent**)Z_Param__Result=P_THIS->GetPhysicsControl();
	P_NATIVE_END;
}
// ********** End Class ASimulationCharacter Function GetPhysicsControl ****************************

// ********** Begin Class ASimulationCharacter Function GetRightHandController *********************
struct Z_Construct_UFunction_ASimulationCharacter_GetRightHandController_Statics
{
	struct SimulationCharacter_eventGetRightHandController_Parms
	{
		UMotionControllerComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Simulation Character|Virtual Reality" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called to return the right hand motion controller\n" },
#endif
		{ "ModuleRelativePath", "Public/SimulationCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called to return the right hand motion controller" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetRightHandController constinit property declarations ****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetRightHandController constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetRightHandController Property Definitions ***************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASimulationCharacter_GetRightHandController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimulationCharacter_eventGetRightHandController_Parms, ReturnValue), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimulationCharacter_GetRightHandController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimulationCharacter_GetRightHandController_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulationCharacter_GetRightHandController_Statics::PropPointers) < 2048);
// ********** End Function GetRightHandController Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimulationCharacter_GetRightHandController_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASimulationCharacter, nullptr, "GetRightHandController", 	Z_Construct_UFunction_ASimulationCharacter_GetRightHandController_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulationCharacter_GetRightHandController_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ASimulationCharacter_GetRightHandController_Statics::SimulationCharacter_eventGetRightHandController_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulationCharacter_GetRightHandController_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASimulationCharacter_GetRightHandController_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASimulationCharacter_GetRightHandController_Statics::SimulationCharacter_eventGetRightHandController_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASimulationCharacter_GetRightHandController()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASimulationCharacter_GetRightHandController_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASimulationCharacter::execGetRightHandController)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMotionControllerComponent**)Z_Param__Result=P_THIS->GetRightHandController();
	P_NATIVE_END;
}
// ********** End Class ASimulationCharacter Function GetRightHandController ***********************

// ********** Begin Class ASimulationCharacter Function GetRightHandIK *****************************
struct Z_Construct_UFunction_ASimulationCharacter_GetRightHandIK_Statics
{
	struct SimulationCharacter_eventGetRightHandIK_Parms
	{
		USceneComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Simulation Character|IK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called to return the IK target for the right hand\n" },
#endif
		{ "ModuleRelativePath", "Public/SimulationCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called to return the IK target for the right hand" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetRightHandIK constinit property declarations ************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetRightHandIK constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetRightHandIK Property Definitions ***********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASimulationCharacter_GetRightHandIK_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimulationCharacter_eventGetRightHandIK_Parms, ReturnValue), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimulationCharacter_GetRightHandIK_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimulationCharacter_GetRightHandIK_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulationCharacter_GetRightHandIK_Statics::PropPointers) < 2048);
// ********** End Function GetRightHandIK Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimulationCharacter_GetRightHandIK_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASimulationCharacter, nullptr, "GetRightHandIK", 	Z_Construct_UFunction_ASimulationCharacter_GetRightHandIK_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulationCharacter_GetRightHandIK_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ASimulationCharacter_GetRightHandIK_Statics::SimulationCharacter_eventGetRightHandIK_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulationCharacter_GetRightHandIK_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASimulationCharacter_GetRightHandIK_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASimulationCharacter_GetRightHandIK_Statics::SimulationCharacter_eventGetRightHandIK_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASimulationCharacter_GetRightHandIK()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASimulationCharacter_GetRightHandIK_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASimulationCharacter::execGetRightHandIK)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USceneComponent**)Z_Param__Result=P_THIS->GetRightHandIK();
	P_NATIVE_END;
}
// ********** End Class ASimulationCharacter Function GetRightHandIK *******************************

// ********** Begin Class ASimulationCharacter Function GetTrackingOrigin **************************
struct Z_Construct_UFunction_ASimulationCharacter_GetTrackingOrigin_Statics
{
	struct SimulationCharacter_eventGetTrackingOrigin_Parms
	{
		USceneComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Simulation Character|Virtual Reality" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called to return the VR tracking origin\n" },
#endif
		{ "ModuleRelativePath", "Public/SimulationCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called to return the VR tracking origin" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetTrackingOrigin constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetTrackingOrigin constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetTrackingOrigin Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASimulationCharacter_GetTrackingOrigin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimulationCharacter_eventGetTrackingOrigin_Parms, ReturnValue), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimulationCharacter_GetTrackingOrigin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimulationCharacter_GetTrackingOrigin_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulationCharacter_GetTrackingOrigin_Statics::PropPointers) < 2048);
// ********** End Function GetTrackingOrigin Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimulationCharacter_GetTrackingOrigin_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASimulationCharacter, nullptr, "GetTrackingOrigin", 	Z_Construct_UFunction_ASimulationCharacter_GetTrackingOrigin_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulationCharacter_GetTrackingOrigin_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ASimulationCharacter_GetTrackingOrigin_Statics::SimulationCharacter_eventGetTrackingOrigin_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulationCharacter_GetTrackingOrigin_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASimulationCharacter_GetTrackingOrigin_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASimulationCharacter_GetTrackingOrigin_Statics::SimulationCharacter_eventGetTrackingOrigin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASimulationCharacter_GetTrackingOrigin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASimulationCharacter_GetTrackingOrigin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASimulationCharacter::execGetTrackingOrigin)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USceneComponent**)Z_Param__Result=P_THIS->GetTrackingOrigin();
	P_NATIVE_END;
}
// ********** End Class ASimulationCharacter Function GetTrackingOrigin ****************************

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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrackingOrigin_MetaData[] = {
		{ "BlueprintGetter", "GetTrackingOrigin" },
		{ "Category", "Simulation Character|Virtual Reality" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Scene component used to represent a VR player's tracking origin\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SimulationCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Scene component used to represent a VR player's tracking origin" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HMD_MetaData[] = {
		{ "BlueprintGetter", "GetHMD" },
		{ "Category", "Simulation Character|Virtual Reality" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Camera tracked to a VR player's Head-Mounted Display (HMD)\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SimulationCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera tracked to a VR player's Head-Mounted Display (HMD)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftHandController_MetaData[] = {
		{ "BlueprintGetter", "GetLeftHandController" },
		{ "Category", "Simulation Character|Virtual Reality" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Motion controller used to track a VR player's left hand\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SimulationCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Motion controller used to track a VR player's left hand" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightHandController_MetaData[] = {
		{ "BlueprintGetter", "GetRightHandController" },
		{ "Category", "Simulation Character|Virtual Reality" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Motion controller used to track a VR player's right hand\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SimulationCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Motion controller used to track a VR player's right hand" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhysicsControlComponent_MetaData[] = {
		{ "BlueprintGetter", "GetPhysicsControl" },
		{ "Category", "Simulation Character|Physical Animation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Physics Control component used for physical animation for the character's skeletal mesh\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SimulationCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Physics Control component used for physical animation for the character's skeletal mesh" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeadIK_MetaData[] = {
		{ "BlueprintGetter", "GetHeadIK" },
		{ "Category", "Simulation Character|IK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Animation IK target for the head\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SimulationCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Animation IK target for the head" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftHandIK_MetaData[] = {
		{ "BlueprintGetter", "GetLeftHandIK" },
		{ "Category", "Simulation Character|IK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Animation IK target for the left hand\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SimulationCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Animation IK target for the left hand" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightHandIK_MetaData[] = {
		{ "BlueprintGetter", "GetRightHandIK" },
		{ "Category", "Simulation Character|IK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Animation IK target for the right hand\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SimulationCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Animation IK target for the right hand" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class ASimulationCharacter constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TrackingOrigin;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HMD;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftHandController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RightHandController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PhysicsControlComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HeadIK;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftHandIK;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RightHandIK;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ASimulationCharacter constinit property declarations ***********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetHeadIK"), .Pointer = &ASimulationCharacter::execGetHeadIK },
		{ .NameUTF8 = UTF8TEXT("GetHMD"), .Pointer = &ASimulationCharacter::execGetHMD },
		{ .NameUTF8 = UTF8TEXT("GetLeftHandController"), .Pointer = &ASimulationCharacter::execGetLeftHandController },
		{ .NameUTF8 = UTF8TEXT("GetLeftHandIK"), .Pointer = &ASimulationCharacter::execGetLeftHandIK },
		{ .NameUTF8 = UTF8TEXT("GetPhysicsControl"), .Pointer = &ASimulationCharacter::execGetPhysicsControl },
		{ .NameUTF8 = UTF8TEXT("GetRightHandController"), .Pointer = &ASimulationCharacter::execGetRightHandController },
		{ .NameUTF8 = UTF8TEXT("GetRightHandIK"), .Pointer = &ASimulationCharacter::execGetRightHandIK },
		{ .NameUTF8 = UTF8TEXT("GetTrackingOrigin"), .Pointer = &ASimulationCharacter::execGetTrackingOrigin },
		{ .NameUTF8 = UTF8TEXT("Move"), .Pointer = &ASimulationCharacter::execMove },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASimulationCharacter_GetHeadIK, "GetHeadIK" }, // 647186865
		{ &Z_Construct_UFunction_ASimulationCharacter_GetHMD, "GetHMD" }, // 3714398814
		{ &Z_Construct_UFunction_ASimulationCharacter_GetLeftHandController, "GetLeftHandController" }, // 227813600
		{ &Z_Construct_UFunction_ASimulationCharacter_GetLeftHandIK, "GetLeftHandIK" }, // 2741427986
		{ &Z_Construct_UFunction_ASimulationCharacter_GetPhysicsControl, "GetPhysicsControl" }, // 1536541389
		{ &Z_Construct_UFunction_ASimulationCharacter_GetRightHandController, "GetRightHandController" }, // 3984572433
		{ &Z_Construct_UFunction_ASimulationCharacter_GetRightHandIK, "GetRightHandIK" }, // 2132200770
		{ &Z_Construct_UFunction_ASimulationCharacter_GetTrackingOrigin, "GetTrackingOrigin" }, // 3728463499
		{ &Z_Construct_UFunction_ASimulationCharacter_Move, "Move" }, // 1613464354
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASimulationCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ASimulationCharacter_Statics

// ********** Begin Class ASimulationCharacter Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASimulationCharacter_Statics::NewProp_TrackingOrigin = { "TrackingOrigin", nullptr, (EPropertyFlags)0x004000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASimulationCharacter, TrackingOrigin), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrackingOrigin_MetaData), NewProp_TrackingOrigin_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASimulationCharacter_Statics::NewProp_HMD = { "HMD", nullptr, (EPropertyFlags)0x004000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASimulationCharacter, HMD), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HMD_MetaData), NewProp_HMD_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASimulationCharacter_Statics::NewProp_LeftHandController = { "LeftHandController", nullptr, (EPropertyFlags)0x004000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASimulationCharacter, LeftHandController), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftHandController_MetaData), NewProp_LeftHandController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASimulationCharacter_Statics::NewProp_RightHandController = { "RightHandController", nullptr, (EPropertyFlags)0x004000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASimulationCharacter, RightHandController), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightHandController_MetaData), NewProp_RightHandController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASimulationCharacter_Statics::NewProp_PhysicsControlComponent = { "PhysicsControlComponent", nullptr, (EPropertyFlags)0x004000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASimulationCharacter, PhysicsControlComponent), Z_Construct_UClass_UPhysicsControlComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhysicsControlComponent_MetaData), NewProp_PhysicsControlComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASimulationCharacter_Statics::NewProp_HeadIK = { "HeadIK", nullptr, (EPropertyFlags)0x004000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASimulationCharacter, HeadIK), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeadIK_MetaData), NewProp_HeadIK_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASimulationCharacter_Statics::NewProp_LeftHandIK = { "LeftHandIK", nullptr, (EPropertyFlags)0x004000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASimulationCharacter, LeftHandIK), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftHandIK_MetaData), NewProp_LeftHandIK_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASimulationCharacter_Statics::NewProp_RightHandIK = { "RightHandIK", nullptr, (EPropertyFlags)0x004000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASimulationCharacter, RightHandIK), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightHandIK_MetaData), NewProp_RightHandIK_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASimulationCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimulationCharacter_Statics::NewProp_TrackingOrigin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimulationCharacter_Statics::NewProp_HMD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimulationCharacter_Statics::NewProp_LeftHandController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimulationCharacter_Statics::NewProp_RightHandController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimulationCharacter_Statics::NewProp_PhysicsControlComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimulationCharacter_Statics::NewProp_HeadIK,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimulationCharacter_Statics::NewProp_LeftHandIK,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimulationCharacter_Statics::NewProp_RightHandIK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASimulationCharacter_Statics::PropPointers) < 2048);
// ********** End Class ASimulationCharacter Property Definitions **********************************
UObject* (*const Z_Construct_UClass_ASimulationCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Simulation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASimulationCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASimulationCharacter_Statics::ClassParams = {
	&ASimulationCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASimulationCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASimulationCharacter_Statics::PropPointers),
	0,
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
		{ Z_Construct_UClass_ASimulationCharacter, ASimulationCharacter::StaticClass, TEXT("ASimulationCharacter"), &Z_Registration_Info_UClass_ASimulationCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASimulationCharacter), 886631889U) },
	};
}; // Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_SimulationCharacter_h__Script_Simulation_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_SimulationCharacter_h__Script_Simulation_3315266840{
	TEXT("/Script/Simulation"),
	Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_SimulationCharacter_h__Script_Simulation_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_SimulationCharacter_h__Script_Simulation_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
