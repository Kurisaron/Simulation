// Fill out your copyright notice in the Description page of Project Settings.


#include "SimulationCharacter.h"
#include "SimulationEntityComponent.h"

// Sets default values
ASimulationCharacter::ASimulationCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Set this character so that it can be damaged
	SetCanBeDamaged(true);

	// Create the simulation entity component (subtype of ability system component)
	EntityComponent = CreateDefaultSubobject<USimulationEntityComponent>(TEXT("SEC"));

	// Set physics transform update mode on character mesh to "component transform is kinematic
	// This is necessary for physics control
	USkeletalMeshComponent* CharacterMesh = GetMesh();
	CharacterMesh->PhysicsTransformUpdateMode = EPhysicsTransformUpdateMode::Type::ComponentTransformIsKinematic;

	// Create the physics control component
	PhysicsControlComponent = CreateDefaultSubobject<UPhysicsControlComponent>(TEXT("PhysicsControl"));
	PhysicsControlComponent->SetupAttachment(CharacterMesh);

}

// Called when the game starts or when spawned
void ASimulationCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	// Enable physics control on character mesh
	PhysicsControlComponent->CreateControlsAndBodyModifiersFromPhysicsControlAsset(GetMesh(), nullptr, FName());

}

void ASimulationCharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);

	if (EntityComponent)
	{
		EntityComponent->InitAbilityActorInfo(this, this);
	}
	
}

void ASimulationCharacter::OnRep_PlayerState()
{
	Super::OnRep_PlayerState();

	if (EntityComponent)
	{
		EntityComponent->InitAbilityActorInfo(this, this);
	}
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

}

void ASimulationCharacter::Move(FVector2D MoveInput)
{
	FRotator ControlRotation = GetControlRotation();
	FVector MovementForward = UKismetMathLibrary::GetForwardVector(FRotator(0.0, ControlRotation.Yaw, 0.0));
	AddMovementInput(MovementForward, MoveInput.Y);
	FVector MovementRight = UKismetMathLibrary::GetRightVector(FRotator(0.0, ControlRotation.Yaw, ControlRotation.Roll));
	AddMovementInput(MovementRight, MoveInput.X);
}

float ASimulationCharacter::TakeDamage(
	float DamageAmount,
	FDamageEvent const& DamageEvent,
	AController* EventInstigator,
	AActor* DamageCauser)
{
	float ActualDamage = EntityComponent->TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);

	return Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);
}

UAbilitySystemComponent* ASimulationCharacter::GetAbilitySystemComponent() const { return EntityComponent; }

UPhysicsControlComponent* ASimulationCharacter::GetPhysicsControl() const { return PhysicsControlComponent; }