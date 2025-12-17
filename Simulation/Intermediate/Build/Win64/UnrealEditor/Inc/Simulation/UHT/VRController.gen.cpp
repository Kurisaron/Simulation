// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeVRController() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UMotionControllerComponent_NoRegister();
SIMULATION_API UClass* Z_Construct_UClass_ASimulationPlayerController();
SIMULATION_API UClass* Z_Construct_UClass_AVRController();
SIMULATION_API UClass* Z_Construct_UClass_AVRController_NoRegister();
UPackage* Z_Construct_UPackage__Script_Simulation();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AVRController ************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AVRController;
UClass* AVRController::GetPrivateStaticClass()
{
	using TClass = AVRController;
	if (!Z_Registration_Info_UClass_AVRController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("VRController"),
			Z_Registration_Info_UClass_AVRController.InnerSingleton,
			StaticRegisterNativesAVRController,
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
	return Z_Registration_Info_UClass_AVRController.InnerSingleton;
}
UClass* Z_Construct_UClass_AVRController_NoRegister()
{
	return AVRController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AVRController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Player controllers used by VR players\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "VRController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VRController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Player controllers used by VR players" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VR_Origin_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VR" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Scene component used to represent the VR tracking origin */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VRController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Scene component used to represent the VR tracking origin" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HMD_Camera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VR" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Camera used for VR players' vision */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VRController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera used for VR players' vision" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftHandController_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VR" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Motion Controller used to track the left hand */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VRController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Motion Controller used to track the left hand" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightHandController_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VR" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Motion Controller used to track the right hand */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VRController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Motion Controller used to track the right hand" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class AVRController constinit property declarations ****************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VR_Origin;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HMD_Camera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftHandController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RightHandController;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AVRController constinit property declarations ******************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVRController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AVRController_Statics

// ********** Begin Class AVRController Property Definitions ***************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVRController_Statics::NewProp_VR_Origin = { "VR_Origin", nullptr, (EPropertyFlags)0x004000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVRController, VR_Origin), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VR_Origin_MetaData), NewProp_VR_Origin_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVRController_Statics::NewProp_HMD_Camera = { "HMD_Camera", nullptr, (EPropertyFlags)0x004000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVRController, HMD_Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HMD_Camera_MetaData), NewProp_HMD_Camera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVRController_Statics::NewProp_LeftHandController = { "LeftHandController", nullptr, (EPropertyFlags)0x004000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVRController, LeftHandController), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftHandController_MetaData), NewProp_LeftHandController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVRController_Statics::NewProp_RightHandController = { "RightHandController", nullptr, (EPropertyFlags)0x004000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVRController, RightHandController), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightHandController_MetaData), NewProp_RightHandController_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVRController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRController_Statics::NewProp_VR_Origin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRController_Statics::NewProp_HMD_Camera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRController_Statics::NewProp_LeftHandController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRController_Statics::NewProp_RightHandController,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVRController_Statics::PropPointers) < 2048);
// ********** End Class AVRController Property Definitions *****************************************
UObject* (*const Z_Construct_UClass_AVRController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ASimulationPlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_Simulation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVRController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AVRController_Statics::ClassParams = {
	&AVRController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AVRController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AVRController_Statics::PropPointers),
	0,
	0x009002A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVRController_Statics::Class_MetaDataParams), Z_Construct_UClass_AVRController_Statics::Class_MetaDataParams)
};
void AVRController::StaticRegisterNativesAVRController()
{
}
UClass* Z_Construct_UClass_AVRController()
{
	if (!Z_Registration_Info_UClass_AVRController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVRController.OuterSingleton, Z_Construct_UClass_AVRController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AVRController.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AVRController);
AVRController::~AVRController() {}
// ********** End Class AVRController **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_VRController_h__Script_Simulation_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AVRController, AVRController::StaticClass, TEXT("AVRController"), &Z_Registration_Info_UClass_AVRController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVRController), 1625707226U) },
	};
}; // Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_VRController_h__Script_Simulation_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_VRController_h__Script_Simulation_1340556016{
	TEXT("/Script/Simulation"),
	Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_VRController_h__Script_Simulation_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_Simulation_Simulation_Source_Simulation_Public_VRController_h__Script_Simulation_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
