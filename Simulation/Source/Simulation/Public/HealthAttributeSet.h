// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EntityAttributeSet.h"
#include "HealthAttributeSet.generated.h"

// Use macros from AttributeSet.h
#define ATTRIBUTE_ACCESSORS(UHealthAttributeSet, CurrentHealth) \
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(UHealthAttributeSet, CurrentHealth) \
	GAMEPLAYATTRIBUTE_VALUE_GETTER(CurrentHealth) \
	GAMEPLAYATTRIBUTE_VALUE_SETTER(CurrentHealth) \
	GAMEPLAYATTRIBUTE_VALUE_INITTER(CurrentHealth)
#define ATTRIBUTE_ACCESSORS(UHealthAttributeSet, MaxHealth) \
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(UHealthAttributeSet, MaxHealth) \
	GAMEPLAYATTRIBUTE_VALUE_GETTER(MaxHealth) \
	GAMEPLAYATTRIBUTE_VALUE_SETTER(MaxHealth) \
	GAMEPLAYATTRIBUTE_VALUE_INITTER(MaxHealth)

/**
 * Attribute set types used for health. Health determines how much direct damage an entity can take before death or destruction.
 * Entities can have multiple types of health, each with their own effects on entities
 */
UCLASS(Abstract, Blueprintable, BlueprintType, HideDropdown)
class SIMULATION_API UHealthAttributeSet : public UEntityAttributeSet
{
	GENERATED_BODY()
	
	/* Attribute used to store the current health value for this health type on a given entity */
	UPROPERTY(BlueprintReadOnly, Category = "Health", ReplicatedUsing = OnRep_CurrentHealth, meta = (AllowPrivateAccess = "true"))
	FGameplayAttributeData CurrentHealth;
	ATTRIBUTE_ACCESSORS(UHealthAttributeSet, CurrentHealth)

	/* Attribute used to store the maximum health for this health type on a given entity */
	UPROPERTY(BlueprintReadOnly, Category = "Health", ReplicatedUsing = OnRep_MaxHealth, meta = (AllowPrivateAccess = "true"))
	FGameplayAttributeData MaxHealth;
	ATTRIBUTE_ACCESSORS(UHealthAttributeSet, MaxHealth)

	/* Determines the default health to use for this health type */
	UPROPERTY(BlueprintGetter = GetDefaultHealth, EditDefaultsOnly, Category = "Health", meta = (HideFromModifiers))
	float DefaultHealth = 100.0f;

public:

	UHealthAttributeSet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	UFUNCTION(BlueprintPure, Category = "Health")
	const float GetDefaultHealth() const;

	UFUNCTION()
	virtual void OnRep_CurrentHealth(const FGameplayAttributeData& OldCurrentHealth);

	UFUNCTION()
	virtual void OnRep_MaxHealth(const FGameplayAttributeData& OldMaxHealth);

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};
