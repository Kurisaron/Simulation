// Fill out your copyright notice in the Description page of Project Settings.


#include "SimulationAIController.h"

ASimulationAIController::ASimulationAIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	bAttachToPawn = true;
	
	AI_Perception = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("AI_Perception"));
}
