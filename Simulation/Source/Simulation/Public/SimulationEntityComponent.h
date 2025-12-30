// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "SimulationEntityComponent.generated.h"

class UEntityAttributeSet;

/**
 * 
 */
UCLASS(BlueprintType, HideCategories = ("AttributeTest"), meta = (BlueprintSpawnableComponent))
class SIMULATION_API USimulationEntityComponent : public UAbilitySystemComponent
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Attributes", meta = (AllowPrivateAccess = "true"))
	TArray<TSubclassOf<UEntityAttributeSet>> StartingAttributeSets;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Replication", meta = (AllowPrivateAccess = "true"))
	EGameplayEffectReplicationMode DefaultReplicationMode = EGameplayEffectReplicationMode::Mixed;

	AController* LastDamageEventInstigator;
	AActor* LastDamageCauser;

public:

	USimulationEntityComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	virtual void BeginPlay() override;

	virtual float TakeDamage(
		float DamageAmount,
		FDamageEvent const& DamageEvent,
		AController* EventInstigator,
		AActor* DamageCauser);

	UFUNCTION(BlueprintCallable, Category = "Simulation Entity")
	static bool IsSimulationEntity(AActor* Actor, USimulationEntityComponent*& OutEntityComponent);

};
