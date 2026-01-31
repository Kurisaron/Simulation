// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EntityAttributeSet.h"
#include "ArmorAttributeSet.generated.h"

// Use macros from AttributeSet.h
#define ATTRIBUTE_ACCESSORS(UArmorAttributeSet, Protection) \
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(UArmorAttributeSet, Protection) \
	GAMEPLAYATTRIBUTE_VALUE_GETTER(Protection) \
	GAMEPLAYATTRIBUTE_VALUE_SETTER(Protection) \
	GAMEPLAYATTRIBUTE_VALUE_INITTER(Protection)
#define ATTRIBUTE_ACCESSORS(UArmorAttributeSet, CurrentDurability) \
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(UArmorAttributeSet, CurrentDurability) \
	GAMEPLAYATTRIBUTE_VALUE_GETTER(CurrentDurability) \
	GAMEPLAYATTRIBUTE_VALUE_SETTER(CurrentDurability) \
	GAMEPLAYATTRIBUTE_VALUE_INITTER(CurrentDurability)
#define ATTRIBUTE_ACCESSORS(UArmorAttributeSet, MaxDurability) \
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(UArmorAttributeSet, MaxDurability) \
	GAMEPLAYATTRIBUTE_VALUE_GETTER(MaxDurability) \
	GAMEPLAYATTRIBUTE_VALUE_SETTER(MaxDurability) \
	GAMEPLAYATTRIBUTE_VALUE_INITTER(MaxDurability)

/**
 * Attribute sets used for armor. Armor is a non-depleting defense against damage, reducing incoming instances of damage before they are applied to health
 * Like health, entities may have multiple types each with their own basis on entities' defenses
 */
UCLASS(Abstract, Blueprintable, BlueprintType, HideDropdown)
class SIMULATION_API UArmorAttributeSet : public UEntityAttributeSet
{
	GENERATED_BODY()
	
	/* Attribute used to store the amount of protection this armor type provides for a given entity */
	UPROPERTY(BlueprintReadOnly, Category = "Armor|Protection", ReplicatedUsing = OnRep_Protection, meta = (AllowPrivateAccess = "true", HideFromModifiers))
	FGameplayAttributeData Protection;
	ATTRIBUTE_ACCESSORS(UArmorAttributeSet, Protection)
	/* Determines default protection this armor type provides */
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Armor|Protection", meta = (AllowPrivateAccess = "true"))
	float DefaultProtection = 10.0f;

	/* Attribute used to store the current amount of durability this armor type has */
	UPROPERTY(BlueprintReadOnly, Category = "Armor|Durability", ReplicatedUsing = OnRep_CurrentDurability, meta = (AllowPrivateAccess = "true", HideFromModifiers))
	FGameplayAttributeData CurrentDurability;
	ATTRIBUTE_ACCESSORS(UArmorAttributeSet, CurrentDurability)
	/* Attribute used to store the max amount of durability this armor type has */
	UPROPERTY(BlueprintReadOnly, Category = "Armor|Durability", ReplicatedUsing = OnRep_MaxDurability, meta = (AllowPrivateAccess = "true", HideFromModifiers))
	FGameplayAttributeData MaxDurability;
	ATTRIBUTE_ACCESSORS(UArmorAttributeSet, MaxDurability)
	/* Determines whether durability should use durability */
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Armor|Durability", meta = (AllowPrivateAccess = "true"))
	bool bUseDurability = true;
	/* Determines default durability for this armor type */
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Armor|Durability", meta = (AllowPrivateAccess = "true", EditCondition = "bUseDurability", EditConditionHides))
	float DefaultDurability = 100.0f;

public:

	UArmorAttributeSet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	UFUNCTION()
	virtual void OnRep_Protection(const FGameplayAttributeData& OldProtection);

	UFUNCTION()
	virtual void OnRep_CurrentDurability(const FGameplayAttributeData& OldCurrentDurability);

	UFUNCTION()
	virtual void OnRep_MaxDurability(const FGameplayAttributeData& OldMaxDurability);

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
};
