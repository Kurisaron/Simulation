// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "EnhancedInputSubsystems.h"
#include "SimulationPlayerController.generated.h"

/**
 * Base player controller for this simulation game
 */
UCLASS(Abstract)
class SIMULATION_API ASimulationPlayerController : public APlayerController
{
	GENERATED_BODY()

	/* Default Input Mapping Contexts */
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Input", meta = (AllowPrivateAccess = "true"))
	TArray<UInputMappingContext*> DefaultMappingContexts;

	/* Default Input Actions */
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Input", meta = (AllowPrivateAccess = "true"))
	TArray<UInputAction*> DefaultActions;
	
public:

	ASimulationPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	virtual void BeginPlay() override;

	virtual void SetupInputComponent() override;

};
