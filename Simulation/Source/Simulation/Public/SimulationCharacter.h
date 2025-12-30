// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/KismetMathLibrary.h"
#include "GameFramework/Character.h"
#include "Engine/DamageEvents.h"
#include "AbilitySystemInterface.h"
#include "PhysicsControlComponent.h"
#include "SimulationCharacter.generated.h"

class USimulationEntityComponent;

UCLASS(Abstract, Blueprintable)
class SIMULATION_API ASimulationCharacter : 
	public ACharacter, 
	public IAbilitySystemInterface
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Simulation Entity", meta = (AllowPrivateAccess = "true"))
	USimulationEntityComponent* EntityComponent;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Physical Animation", meta = (AllowPrivateAccess = "true"))
	UPhysicsControlComponent* PhysicsControlComponent;


public:
	// Sets default values for this character's properties
	ASimulationCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

protected:

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called when the character is possessed. Only called on the server (or in standalone)
	virtual void PossessedBy(AController* NewController) override;

	virtual void OnRep_PlayerState() override;

public:

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to move the character
	UFUNCTION(BlueprintCallable, Category = "Simulation Character|Movement")
	virtual void Move(FVector2D MoveInput);

	// Apply damage to this character
	virtual float TakeDamage(
		float DamageAmount,
		FDamageEvent const& DamageEvent,
		AController* EventInstigator,
		AActor* DamageCauser) override;

	// Called to return ability system component
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;

	// Called to return physics control component
	virtual UPhysicsControlComponent* GetPhysicsControl() const;

};
