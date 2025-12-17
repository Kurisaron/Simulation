// Fill out your copyright notice in the Description page of Project Settings.


#include "VRController.h"
#include "Camera/CameraComponent.h"
#include "MotionControllerComponent.h"

AVRController::AVRController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	USceneComponent* RootComp = GetTransformComponent();

	VR_Origin = CreateDefaultSubobject<USceneComponent>(TEXT("VR Origin"));
	VR_Origin->SetupAttachment(RootComp);

	HMD_Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Head Mounted Display"));
	HMD_Camera->SetupAttachment(VR_Origin);
	HMD_Camera->bLockToHmd = true;

	LeftHandController = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("Left Hand Controller"));
	LeftHandController->SetupAttachment(VR_Origin);
	LeftHandController->SetTrackingSource(EControllerHand::Left);

	RightHandController = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("Right Hand Controller"));
	RightHandController->SetupAttachment(VR_Origin);
	RightHandController->SetTrackingSource(EControllerHand::Right);
}
