// Fill out your copyright notice in the Description page of Project Settings.


#include "SimulationCharacter.h"
#include "SimulationEntityComponent.h"
#include "PhysicsControlComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Engine/Engine.h"
#include "UObject/ConstructorHelpers.h"

// Sets default values
ASimulationCharacter::ASimulationCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	SetReplicates(true);
	SetReplicateMovement(true);
	
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Create the simulation entity component (subtype of ability system component)
	EntityComponent = CreateDefaultSubobject<USimulationEntityComponent>(TEXT("SEC"));

	UCapsuleComponent* CharacterCapsule = GetCapsuleComponent();
	CharacterCapsule->SetCapsuleRadius(4.0f);
	CharacterCapsule->SetCapsuleHalfHeight(88.0f);
	
	USkeletalMeshComponent* CharacterMesh = GetMesh();
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

	UCharacterMovementComponent* MovementComp = GetCharacterMovement();
	MovementComp->NetworkSmoothingMode = ENetworkSmoothingMode::Disabled;

	// Create the physics control component
	PhysicsControlComponent = CreateDefaultSubobject<UPhysicsControlComponent>(TEXT("PhysicsControl"));
	PhysicsControlComponent->SetupAttachment(CharacterMesh);

}

// Called when the game starts or when spawned
void ASimulationCharacter::BeginPlay()
{
	Super::BeginPlay();

	if (EntityComponent)
	{
		EntityComponent->InitAbilityActorInfo(this, this);
	}

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
	
	// DebugNetRoles();
}

void ASimulationCharacter::Move(FVector2D MoveInput)
{
	FRotator ControlRotation = GetControlRotation();
	FVector MovementForward = UKismetMathLibrary::GetForwardVector(FRotator(0.0, ControlRotation.Yaw, 0.0));
	AddMovementInput(MovementForward, MoveInput.Y);
	FVector MovementRight = UKismetMathLibrary::GetRightVector(FRotator(0.0, ControlRotation.Yaw, ControlRotation.Roll));
	AddMovementInput(MovementRight, MoveInput.X);

}

UAbilitySystemComponent* ASimulationCharacter::GetAbilitySystemComponent() const { return EntityComponent; }

UPhysicsControlComponent* ASimulationCharacter::GetPhysicsControl() const { return PhysicsControlComponent; }

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