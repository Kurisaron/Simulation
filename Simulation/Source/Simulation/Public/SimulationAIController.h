// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "Perception/AIPerceptionComponent.h"
#include "SimulationAIController.generated.h"

/**
 * AI Controller used by simulation entity NPCs
 */
UCLASS(Abstract, Blueprintable, BlueprintType)
class SIMULATION_API ASimulationAIController : public AAIController
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Simulation AI", meta = (AllowPrivateAccess = "true"))
	UAIPerceptionComponent* AI_Perception;

public:

	ASimulationAIController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

};
