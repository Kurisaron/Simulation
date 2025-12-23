// Fill out your copyright notice in the Description page of Project Settings.


#include "SimulationEntityComponent.h"

USimulationEntityComponent::USimulationEntityComponent(const FObjectInitializer& ObjectInitializer)
{

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
