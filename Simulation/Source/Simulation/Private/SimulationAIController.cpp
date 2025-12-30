// Fill out your copyright notice in the Description page of Project Settings.


#include "SimulationAIController.h"
#include "SimulationEntityComponent.h"

ASimulationAIController::ASimulationAIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	bAttachToPawn = true;
	
	EntityComponent = CreateDefaultSubobject<USimulationEntityComponent>(TEXT("SEC"));
	AI_Perception = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("AI_Perception"));
}

float ASimulationAIController::TakeDamage(
	float DamageAmount,
	FDamageEvent const& DamageEvent,
	AController* EventInstigator,
	AActor* DamageCauser)
{
	float ActualDamage = EntityComponent->TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);
	return Super::TakeDamage(ActualDamage, DamageEvent, EventInstigator, DamageCauser);
}

void ASimulationAIController::OnPossess(APawn* NewPawn)
{
	Super::OnPossess(NewPawn);

	if (EntityComponent)
	{
		EntityComponent->InitAbilityActorInfo(this, NewPawn);
	}
}

void ASimulationAIController::OnUnPossess()
{
	Super::OnUnPossess();

	if (EntityComponent)
	{
		EntityComponent->InitAbilityActorInfo(this, this);
	}
}

UAbilitySystemComponent* ASimulationAIController::GetAbilitySystemComponent() const { return EntityComponent; }