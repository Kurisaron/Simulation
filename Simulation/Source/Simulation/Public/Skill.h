// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EntityAttribute.h"
#include "Skill.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnCurrentLevelChanged, USkill*, Skill, int, NewLevel, int, OldLevel);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnExperienceChanged, USkill*, Skill, float, NewExperience, float, OldExperience);

/**
 * 
 */
UCLASS(Abstract, Blueprintable, BlueprintType, EditInlineNew, HideDropdown)
class SIMULATION_API USkill : public UEntityAttribute
{
	GENERATED_BODY()

	/**
	 * Current level in this skill that the owning entity has.
	 * Modifying the default value will change the starting value for this skill
	 */
	UPROPERTY(BlueprintGetter = GetCurrentLevel, EditDefaultsOnly, Category = "Skill|Level")
	int CurrentLevel = 1;

	/**
	 * Minimum level in this skill that an entity may have (by default)
	 */
	UPROPERTY(BlueprintGetter = GetMinLevel, EditDefaultsOnly, Category = "Skill|Level", meta = (EditCondition = "bMinLevelInfinite"))
	int MinLevel = 0;

	/**
	 * Maximum level in this skill that an entity may have (by default)
	 */
	UPROPERTY(BlueprintGetter = GetMaxLevel, EditDefaultsOnly, Category = "Skill|Level")
	int MaxLevel = 100;

	/**
	 * Experience earned towards this skill's level
	 */
	UPROPERTY(BlueprintGetter = GetExperience, Category = "Skill|Experience")
	float Experience = 0.0f;

	/**
	 * Amount of intuition in this skill, influencing how much of an implicit understanding an entity has with it
	 */
	UPROPERTY(BlueprintGetter = GetIntuition, Category = "Skill|Modifiers")
	float Intuition = 0.0f;

	/**
	 * Amount of passion in this skill, influencing how motivated an entity is to engage in it
	 * Higher value = greater motivation (ie. will prefer this activity, get more enjoyment from it, and learn more quickly)
	 */
	UPROPERTY(BlueprintGetter = GetPassion, Category = "Skill|Modifiers")
	float Passion = 0.0f;

public:

	UPROPERTY(BlueprintAssignable)
	FOnCurrentLevelChanged OnCurrentLevelChanged;

	UPROPERTY(BlueprintAssignable)
	FOnExperienceChanged OnExperienceChanged;
	
public:

	USkill(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	UFUNCTION(BlueprintPure, Category = "Skill|Level")
	int GetCurrentLevel() const;

	UFUNCTION(BlueprintPure, Category = "Skill|Level")
	int GetMinLevel() const;

	UFUNCTION(BlueprintPure, Category = "Skill|Level")
	int GetMaxLevel() const;

	UFUNCTION(BlueprintCallable, Category = "Skill|Level")
	virtual void AddLevel(int Amount);

	UFUNCTION(BlueprintPure, Category = "Skill|Experience")
	float GetExperience() const;

	UFUNCTION(BlueprintCallable, Category = "Skill|Experience")
	virtual void AddExperience(float Amount);

	UFUNCTION(BlueprintPure, Category = "Skill|Experience")
	virtual float GetExperienceRequirement(int TargetLevel) const;

	UFUNCTION(BlueprintPure, Category = "Skill|Modifiers")
	float GetIntuition() const;

	UFUNCTION(BlueprintPure, Category = "Skill|Modifiers")
	float GetPassion() const;

};
