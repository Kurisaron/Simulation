// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "SimulationEntityComponent.generated.h"

class UEntityAttributeSet;
class UHealthAttributeSet;

/**
 * 
 */
UCLASS(BlueprintType, HideCategories = ("AttributeTest"))
class SIMULATION_API USimulationEntityComponent : public UAbilitySystemComponent
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Attributes", meta = (AllowPrivateAccess = "true"))
	TArray<TSubclassOf<UEntityAttributeSet>> StartingAttributeSets;

	AController* LastDamageEventInstigator;
	AActor* LastDamageCauser;

public:

	USimulationEntityComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	virtual float TakeDamage(
		float DamageAmount,
		FDamageEvent const& DamageEvent,
		AController* EventInstigator,
		AActor* DamageCauser);

};
