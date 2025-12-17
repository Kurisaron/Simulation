// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "EnhancedAbilityComponent.generated.h"

class UEnhancedAttributeSet;

/**
 * 
 */
UCLASS(BlueprintType, HideCategories = ("Attribute Test"))
class SIMULATION_API UEnhancedAbilityComponent : public UAbilitySystemComponent
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Attributes", meta = (AllowPrivateAccess = "true"))
	TArray<TSubclassOf<UEnhancedAttributeSet>> StartingAttributeSets;
	
	AController* LastDamageEventInstigator;
	AActor* LastDamageCauser;

public:

	UEnhancedAbilityComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	virtual float TakeDamage(
		float DamageAmount,
		FDamageEvent const& DamageEvent,
		AController* EventInstigator,
		AActor* DamageCauser);
};
