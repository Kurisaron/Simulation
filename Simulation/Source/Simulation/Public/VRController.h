// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SimulationPlayerController.h"
#include "VRController.generated.h"

class UCameraComponent;
class UMotionControllerComponent;

/**
 * Player controllers used by VR players
 */
UCLASS(Abstract, Blueprintable)
class SIMULATION_API AVRController : public ASimulationPlayerController
{
	GENERATED_BODY()

	/* Scene component used to represent the VR tracking origin */
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "VR", meta = (AllowPrivateAccess = "true"))
	USceneComponent* VR_Origin;

	/* Camera used for VR players' vision */
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "VR", meta = (AllowPrivateAccess = "true"))
	UCameraComponent* HMD_Camera;

	/* Motion Controller used to track the left hand */
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "VR", meta = (AllowPrivateAccess = "true"))
	UMotionControllerComponent* LeftHandController;

	/* Motion Controller used to track the right hand */
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "VR", meta = (AllowPrivateAccess = "true"))
	UMotionControllerComponent* RightHandController;

public:

	AVRController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

};
