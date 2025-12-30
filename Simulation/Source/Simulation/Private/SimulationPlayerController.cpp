// Fill out your copyright notice in the Description page of Project Settings.


#include "SimulationPlayerController.h"
#include "SimulationEntityComponent.h"

ASimulationPlayerController::ASimulationPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	EntityComponent = CreateDefaultSubobject<USimulationEntityComponent>(TEXT("SEC"));
}

void ASimulationPlayerController::BeginPlay()
{
	Super::BeginPlay();
}

void ASimulationPlayerController::OnPossess(APawn* NewPawn)
{
	Super::OnPossess(NewPawn);

	// Set avatar for entity component to new pawn/character/etc.
	if (EntityComponent)
	{
		//EntityComponent->InitAbilityActorInfo(this, NewPawn);
	}

}

void ASimulationPlayerController::OnUnPossess()
{
	// Run code here on the old pawn before it is 'released'
	if (APawn* FormerPawn = GetPawn())
	{
		
	}
	
	// Pawn is unpossessed here
	Super::OnUnPossess();

	// There is no pawn/character/etc. to serve as avatar
	// Set avatar for entity component to this controller
	if (EntityComponent)
	{
		//EntityComponent->InitAbilityActorInfo(this, this);
	}

}

void ASimulationPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	if (IsLocalPlayerController())
	{
		// Add Input Mapping Context
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
		{
			for (UInputMappingContext* CurrentContext : DefaultMappingContexts)
			{
				Subsystem->AddMappingContext(CurrentContext, 0);
			}
		}
	}
}

float ASimulationPlayerController::TakeDamage(
	float DamageAmount,
	FDamageEvent const& DamageEvent,
	AController* EventInstigator,
	AActor* DamageCauser)
{
	float ActualDamage = EntityComponent->TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);
	return Super::TakeDamage(ActualDamage, DamageEvent, EventInstigator, DamageCauser);
}

UAbilitySystemComponent* ASimulationPlayerController::GetAbilitySystemComponent() const { return EntityComponent; }