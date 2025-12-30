// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "AbilitySystemInterface.h"
#include "SimulationPawn.generated.h"

class USimulationEntityComponent;

UCLASS()
class SIMULATION_API ASimulationPawn : 
	public APawn,
	public IAbilitySystemInterface
{
	GENERATED_BODY()


	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Simulation Entity", meta = (AllowPrivateAccess = "true"))
	USimulationEntityComponent* EntityComponent;


public:
	// Sets default values for this pawn's properties
	ASimulationPawn(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called when the character is possessed. Only called on the server (or in standalone)
	virtual void PossessedBy(AController* NewController) override;

	virtual void OnRep_PlayerState() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual float TakeDamage(
		float DamageAmount,
		FDamageEvent const& DamageEvent,
		AController* EventInstigator,
		AActor* DamageCauser) override;

	// Called to return ability system component
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;


};
