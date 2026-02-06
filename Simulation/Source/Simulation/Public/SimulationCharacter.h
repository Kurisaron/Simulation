// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/KismetMathLibrary.h"
#include "GameFramework/Character.h"
#include "Components/CapsuleComponent.h"
#include "SimulationCharacter.generated.h"

UCLASS(Abstract, Blueprintable)
class SIMULATION_API ASimulationCharacter : 
	public ACharacter
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Physical Animation", meta = (AllowPrivateAccess = "true"))
	class UPhysicsControlComponent* PhysicsControlComponent;


public:
	// Sets default values for this character's properties
	ASimulationCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

protected:

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to move the character
	UFUNCTION(BlueprintCallable, Category = "Simulation Character|Movement")
	virtual void Move(FVector2D MoveInput);

	// Called to return physics control component
	virtual UPhysicsControlComponent* GetPhysicsControl() const;

protected:

	void DebugNetRoles();

	// Called to get the color to represent the character's net role
	FColor GetNetRoleColor(ENetRole NetRole) const;

};
