// Fill out your copyright notice in the Description page of Project Settings.


#include "SimulationCharacter.h"
#include "Engine/Engine.h"
#include "UObject/ConstructorHelpers.h"
#include "Kismet/KismetMathLibrary.h"
#include "Components/CapsuleComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "MotionControllerComponent.h"
#include "PhysicsControlComponent.h"

// Sets default values
ASimulationCharacter::ASimulationCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	SetReplicates(true);
	SetReplicateMovement(true);
	
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Find and make changes to the character root capsule
	UCapsuleComponent* CharacterCapsule = GetCapsuleComponent();
	if (CharacterCapsule)
	{
		CharacterCapsule->SetCapsuleRadius(4.0f);
		CharacterCapsule->SetCapsuleHalfHeight(88.0f);

		// Find and make changes to the character mesh
		USkeletalMeshComponent* CharacterMesh = GetMesh();
		if (CharacterMesh)
		{
			CharacterMesh->SetRelativeLocation(FVector(0.0, 0.0, -CharacterCapsule->GetUnscaledCapsuleHalfHeight()));
			CharacterMesh->SetRelativeRotation(FRotator(0.0, -90.0, 0.0));
			CharacterMesh->SetIsReplicated(true);
			CharacterMesh->bReplicatePhysicsToAutonomousProxy = true;
			CharacterMesh->PhysicsTransformUpdateMode = EPhysicsTransformUpdateMode::Type::ComponentTransformIsKinematic; // Set physics transform update mode on character mesh to "component transform is kinematic". This is necessary for physics control
			static ConstructorHelpers::FObjectFinder<USkeletalMesh> DefaultCharacterMesh(TEXT("/Game/Characters/Mannequins/Meshes/SKM_Manny_Simple.SKM_Manny_Simple"));
			if (DefaultCharacterMesh.Succeeded())
			{
				CharacterMesh->SetSkeletalMeshAsset(DefaultCharacterMesh.Object);
			}

			// Create the physics control component
			PhysicsControlComponent = CreateDefaultSubobject<UPhysicsControlComponent>(TEXT("PhysicsControl"));
			if (PhysicsControlComponent)
			{
				PhysicsControlComponent->SetupAttachment(CharacterMesh);
				PhysicsControlComponent->SetIsReplicated(true);
				PhysicsControlComponent->AddTickPrerequisiteActor(this);
			}
		}

		// Create the VR tracking origin
		TrackingOrigin = CreateDefaultSubobject<USceneComponent>(TEXT("VR Tracking Origin"));
		if (TrackingOrigin)
		{
			TrackingOrigin->SetupAttachment(CharacterCapsule);
			TrackingOrigin->SetRelativeLocation(FVector(0.0, 0.0, -CharacterCapsule->GetUnscaledCapsuleHalfHeight()));

			// Create the HMD camera
			HMD = CreateDefaultSubobject<UCameraComponent>(TEXT("HMD Camera"));
			if (HMD)
			{
				HMD->SetupAttachment(TrackingOrigin);

				// Create the IK target for the head
				HeadIK = CreateDefaultSubobject<USceneComponent>(TEXT("Head IK Target"));
				if (HeadIK)
				{
					HeadIK->SetupAttachment(HMD);
					HeadIK->SetRelativeLocation(FVector(-10.0, 0.0, -10.0));
					HeadIK->SetRelativeRotation(FRotator(90.0, 0.0, 90.0));
				}
			}

			// Create the left hand motion controller
			LeftHandController = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("Left Hand Controller"));
			if (LeftHandController)
			{
				LeftHandController->SetupAttachment(TrackingOrigin);
				LeftHandController->SetTrackingSource(EControllerHand::Left);

				// Create the IK target for the left hand
				LeftHandIK = CreateDefaultSubobject<USceneComponent>(TEXT("Left Hand IK Target"));
				if (LeftHandIK)
				{
					LeftHandIK->SetupAttachment(LeftHandController);
					LeftHandIK->SetRelativeLocation(FVector(0.0, 0.0, 10.0));
					LeftHandIK->SetRelativeRotation(FRotator(-90.0, 0.0, 180.0));
				}
			}

			// Create the right hand motion controller
			RightHandController = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("Right Hand Controller"));
			if (RightHandController)
			{
				RightHandController->SetupAttachment(TrackingOrigin);
				RightHandController->SetTrackingSource(EControllerHand::Right);

				// Create the IK target for the right hand
				RightHandIK = CreateDefaultSubobject<USceneComponent>(TEXT("Right Hand IK Target"));
				if (RightHandIK)
				{
					RightHandIK->SetupAttachment(RightHandController);
					RightHandIK->SetRelativeLocation(FVector(0.0, 0.0, 10.0));
					RightHandIK->SetRelativeRotation(FRotator(90.0, 0.0, 180.0));
				}
			}
		}
	}
	
	// Find and make changes to the character movement component
	UCharacterMovementComponent* MovementComp = GetCharacterMovement();
	if (MovementComp)
	{
		MovementComp->NetworkSmoothingMode = ENetworkSmoothingMode::Disabled;
	}
	
}

// Called when the game starts or when spawned
void ASimulationCharacter::BeginPlay()
{
	Super::BeginPlay();

	// Enable physics control on character mesh
	PhysicsControlComponent->CreateControlsAndBodyModifiersFromPhysicsControlAsset(GetMesh(), nullptr, FName());
	
}


// Called to bind functionality to input
void ASimulationCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

// Called every frame
void ASimulationCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	//DebugNetRoles();
}

void ASimulationCharacter::Move(FVector2D MoveInput)
{
	FRotator ControlRotation = GetControlRotation();
	FVector MovementForward = UKismetMathLibrary::GetForwardVector(FRotator(0.0, ControlRotation.Yaw, 0.0));
	AddMovementInput(MovementForward, MoveInput.Y);
	FVector MovementRight = UKismetMathLibrary::GetRightVector(FRotator(0.0, ControlRotation.Yaw, ControlRotation.Roll));
	AddMovementInput(MovementRight, MoveInput.X);

}

USceneComponent* ASimulationCharacter::GetTrackingOrigin() const { return TrackingOrigin; }

UCameraComponent* ASimulationCharacter::GetHMD() const { return HMD; }

UMotionControllerComponent* ASimulationCharacter::GetLeftHandController() const { return LeftHandController; }

UMotionControllerComponent* ASimulationCharacter::GetRightHandController() const { return RightHandController; }

UPhysicsControlComponent* ASimulationCharacter::GetPhysicsControl() const { return PhysicsControlComponent; }

USceneComponent* ASimulationCharacter::GetHeadIK() const { return HeadIK; }

USceneComponent* ASimulationCharacter::GetLeftHandIK() const { return LeftHandIK; }

USceneComponent* ASimulationCharacter::GetRightHandIK() const { return RightHandIK; }

void ASimulationCharacter::DebugNetRoles()
{
	FVector DrawPosition = GetRootComponent()->GetComponentLocation();
	DrawDebugSphere(GetWorld(), DrawPosition, 50.0f, 16, GetNetRoleColor(GetLocalRole()));
	DrawDebugSphere(GetWorld(), DrawPosition, 100.0f, 16, GetNetRoleColor(GetRemoteRole()));
}

FColor ASimulationCharacter::GetNetRoleColor(ENetRole NetRole) const
{
	switch (NetRole)
	{
	case ENetRole::ROLE_Authority:
		return FColor::Yellow;
	case ENetRole::ROLE_AutonomousProxy:
		return FColor::Cyan;
	case ENetRole::ROLE_SimulatedProxy:
		return FColor::Magenta;
	default:
		return FColor::Red;
	}
}