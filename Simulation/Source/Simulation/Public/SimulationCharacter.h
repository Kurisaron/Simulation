// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "SimulationCharacter.generated.h"

UCLASS(Abstract, Blueprintable)
class SIMULATION_API ASimulationCharacter : 
	public ACharacter
{
	GENERATED_BODY()

	// Scene component used to represent a VR player's tracking origin
	UPROPERTY(BlueprintGetter = GetTrackingOrigin, EditAnywhere, Category = "Simulation Character|Virtual Reality")
	USceneComponent* TrackingOrigin;

	// Camera tracked to a VR player's Head-Mounted Display (HMD)
	UPROPERTY(BlueprintGetter = GetHMD, EditAnywhere, Category = "Simulation Character|Virtual Reality")
	class UCameraComponent* HMD;

	// Motion controller used to track a VR player's left hand
	UPROPERTY(BlueprintGetter = GetLeftHandController, EditAnywhere, Category = "Simulation Character|Virtual Reality")
	class UMotionControllerComponent* LeftHandController;

	// Motion controller used to track a VR player's right hand
	UPROPERTY(BlueprintGetter = GetRightHandController, EditAnywhere, Category = "Simulation Character|Virtual Reality")
	UMotionControllerComponent* RightHandController;

	// Physics Control component used for physical animation for the character's skeletal mesh
	UPROPERTY(BlueprintGetter = GetPhysicsControl, EditAnywhere, Category = "Simulation Character|Physical Animation")
	class UPhysicsControlComponent* PhysicsControlComponent;

	// Animation IK target for the head
	UPROPERTY(BlueprintGetter = GetHeadIK, EditAnywhere, Category = "Simulation Character|IK")
	USceneComponent* HeadIK;

	// Animation IK target for the left hand
	UPROPERTY(BlueprintGetter = GetLeftHandIK, EditAnywhere, Category = "Simulation Character|IK")
	USceneComponent* LeftHandIK;

	// Animation IK target for the right hand
	UPROPERTY(BlueprintGetter = GetRightHandIK, EditAnywhere, Category = "Simulation Character|IK")
	USceneComponent* RightHandIK;


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

	// Called to return the VR tracking origin
	UFUNCTION(BlueprintPure, Category = "Simulation Character|Virtual Reality")
	USceneComponent* GetTrackingOrigin() const;

	// Called to return the HMD Camera
	UFUNCTION(BlueprintPure, Category = "Simulation Character|Virtual Reality")
	UCameraComponent* GetHMD() const;

	// Called to return the left hand motion controller
	UFUNCTION(BlueprintPure, Category = "Simulation Character|Virtual Reality")
	UMotionControllerComponent* GetLeftHandController() const;

	// Called to return the right hand motion controller
	UFUNCTION(BlueprintPure, Category = "Simulation Character|Virtual Reality")
	UMotionControllerComponent* GetRightHandController() const;

	// Called to return physics control component
	UFUNCTION(BlueprintPure, Category = "Simulation Character|Physical Animation")
	UPhysicsControlComponent* GetPhysicsControl() const;

	// Called to return the IK target for the head
	UFUNCTION(BlueprintPure, Category = "Simulation Character|IK")
	USceneComponent* GetHeadIK() const;

	// Called to return the IK target for the left hand
	UFUNCTION(BlueprintPure, Category = "Simulation Character|IK")
	USceneComponent* GetLeftHandIK() const;

	// Called to return the IK target for the right hand
	UFUNCTION(BlueprintPure, Category = "Simulation Character|IK")
	USceneComponent* GetRightHandIK() const;

protected:

	void DebugNetRoles();

	// Called to get the color to represent the character's net role
	FColor GetNetRoleColor(ENetRole NetRole) const;

};
