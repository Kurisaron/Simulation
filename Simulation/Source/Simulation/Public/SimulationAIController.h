// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "Perception/AIPerceptionComponent.h"
#include "AbilitySystemInterface.h"
#include "SimulationAIController.generated.h"

class USimulationEntityComponent;

/**
 * AI Controller used by simulation entity NPCs
 */
UCLASS(Abstract, Blueprintable, BlueprintType)
class SIMULATION_API ASimulationAIController :
	public AAIController,
	public IAbilitySystemInterface
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Simulation Entity", meta = (AllowPrivateAccess = "true"))
	USimulationEntityComponent* EntityComponent;
	
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Simulation AI", meta = (AllowPrivateAccess = "true"))
	UAIPerceptionComponent* AI_Perception;

public:

	ASimulationAIController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	virtual void OnPossess(APawn* NewPawn) override;

	virtual void OnUnPossess() override;

	virtual float TakeDamage(
		float DamageAmount,
		FDamageEvent const& DamageEvent,
		AController* EventInstigator,
		AActor* DamageCauser) override;

	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;

};
