// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Camera/CameraComponent.h"
#include "EnhancedInputSubsystems.h"
#include "AbilitySystemInterface.h"
#include "SimulationPlayerController.generated.h"

class USimulationEntityComponent;

/**
 * Base player controller for this simulation game
 */
UCLASS(Abstract)
class SIMULATION_API ASimulationPlayerController :
	public APlayerController,
	public IAbilitySystemInterface
{
	GENERATED_BODY()

	/* Simulation Entity Component used for storing attributes and abilities */
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Simulation Player|Entity", meta = (AllowPrivateAccess = "true"))
	USimulationEntityComponent* EntityComponent;

	/* Default Input Mapping Contexts */
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Input", meta = (AllowPrivateAccess = "true"))
	TArray<UInputMappingContext*> DefaultMappingContexts;


public:

	ASimulationPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	virtual void BeginPlay() override;

	virtual void OnPossess(APawn* NewPawn) override;

	virtual void OnUnPossess() override;

	virtual void SetupInputComponent() override;

	virtual float TakeDamage(
		float DamageAmount,
		FDamageEvent const& DamageEvent,
		AController* EventInstigator,
		AActor* DamageCauser) override;

	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;

};
