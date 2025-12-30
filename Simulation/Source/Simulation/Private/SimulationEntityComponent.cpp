// Fill out your copyright notice in the Description page of Project Settings.


#include "SimulationEntityComponent.h"

USimulationEntityComponent::USimulationEntityComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	SetIsReplicated(true);
	SetReplicationMode(DefaultReplicationMode);

	LastDamageEventInstigator = nullptr;
	LastDamageCauser = nullptr;
}

void USimulationEntityComponent::BeginPlay()
{
	Super::BeginPlay();
}

float USimulationEntityComponent::TakeDamage(
	float DamageAmount,
	FDamageEvent const& DamageEvent,
	AController* EventInstigator,
	AActor* DamageCauser)
{
	LastDamageEventInstigator = EventInstigator;
	LastDamageCauser = DamageCauser;

	// TO-DO: FINISH DAMAGE LOGIC
	return 0.0f;
}

bool USimulationEntityComponent::IsSimulationEntity(AActor* Actor, USimulationEntityComponent*& OutEntityComponent)
{
	OutEntityComponent = Actor->FindComponentByClass<USimulationEntityComponent>();
	return OutEntityComponent != nullptr;
}