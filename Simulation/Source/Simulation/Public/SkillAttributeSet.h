// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EntityAttributeSet.h"
#include "SkillAttributeSet.generated.h"

// Use macros from AttributeSet.h
#define ATTRIBUTE_ACCESSORS(USkillAttributeSet, Experience) \
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(USkillAttributeSet, Experience) \
	GAMEPLAYATTRIBUTE_VALUE_GETTER(Experience) \
	GAMEPLAYATTRIBUTE_VALUE_SETTER(Experience) \
	GAMEPLAYATTRIBUTE_VALUE_INITTER(Experience)
#define ATTRIBUTE_ACCESSORS(USkillAttributeSet, ExperienceGainMultiplier) \
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(USkillAttributeSet, ExperienceGainMultiplier) \
	GAMEPLAYATTRIBUTE_VALUE_GETTER(ExperienceGainMultiplier) \
	GAMEPLAYATTRIBUTE_VALUE_SETTER(ExperienceGainMultiplier) \
	GAMEPLAYATTRIBUTE_VALUE_INITTER(ExperienceGainMultiplier)
#define ATTRIBUTE_ACCESSORS(USkillAttributeSet, CurrentLevel) \
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(USkillAttributeSet, CurrentLevel) \
	GAMEPLAYATTRIBUTE_VALUE_GETTER(CurrentLevel) \
	GAMEPLAYATTRIBUTE_VALUE_SETTER(CurrentLevel) \
	GAMEPLAYATTRIBUTE_VALUE_INITTER(CurrentLevel)
#define ATTRIBUTE_ACCESSORS(USkillAttributeSet, MinLevel) \
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(USkillAttributeSet, MinLevel) \
	GAMEPLAYATTRIBUTE_VALUE_GETTER(MinLevel) \
	GAMEPLAYATTRIBUTE_VALUE_SETTER(MinLevel) \
	GAMEPLAYATTRIBUTE_VALUE_INITTER(MinLevel)
#define ATTRIBUTE_ACCESSORS(USkillAttributeSet, MaxLevel) \
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(USkillAttributeSet, MaxLevel) \
	GAMEPLAYATTRIBUTE_VALUE_GETTER(MaxLevel) \
	GAMEPLAYATTRIBUTE_VALUE_SETTER(MaxLevel) \
	GAMEPLAYATTRIBUTE_VALUE_INITTER(MaxLevel)

/**
 * Attribute sets used for skills.
 * Skills gain experience based on using associated actions, and that experience builds until the next level is reached.
 */
UCLASS(Abstract, Blueprintable, BlueprintType)
class SIMULATION_API USkillAttributeSet : public UEntityAttributeSet
{
	GENERATED_BODY()

	/* When looking at the Skill UI screen, this will be the category that this skill will display under */
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Skill", meta = (AllowPrivateAccess = "true"))
	FGameplayTag SkillCategory;

	/* Attribute used to store how much experience in the given skill an entity has */
	UPROPERTY(BlueprintReadOnly, Category = "Skill|Experience & Levels", ReplicatedUsing = OnRep_Experience, meta = (AllowPrivateAccess = "true", HideFromModifiers))
	FGameplayAttributeData Experience;
	ATTRIBUTE_ACCESSORS(USkillAttributeSet, Experience)
	/* Determines the experience an entity starts with for this skill */
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Skill|Experience & Levels", meta = (AllowPrivateAccess = "true"))
	float DefaultExperience = 0.0f;
	/* Attribute used to store how much experience gain will be increased by */
	UPROPERTY(BlueprintReadOnly, Category = "Skill|Experience & Levels", ReplicatedUsing = OnRep_ExperienceGainMultiplier, meta = (AllowPrivateAccess = "true", HideFromModifiers))
	FGameplayAttributeData ExperienceGainMultiplier;
	ATTRIBUTE_ACCESSORS(USkillAttributeSet, ExperienceGainMultiplier)
	/* Determines the experience gain multiplier and entity starts with for this skill*/
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category= "Skill|Experience & Levels", meta = (AllowPrivateAccess = "true"))
	float DefaultExperienceGainMultiplier = 1.0f;
	/* Determines whether an entity can earn experience for this skill */
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Skill|Experience & Levels", meta = (AllowPrivateAccess = "true"))
	bool bCanGainExperience = true;
	/* Determines whether an entity can lose experience for this skill */
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Skill|Experience & Levels", meta = (AllowPrivateAccess = "true"))
	bool bCanLoseExperience = false;

	/* Attribute used to store what skill level an entity is currently at */
	UPROPERTY(BlueprintReadOnly, Category = "Skill|Experience & Levels", ReplicatedUsing = OnRep_CurrentLevel, meta = (AllowPrivateAccess = "true", HideFromModifiers))
	FGameplayAttributeData CurrentLevel;
	ATTRIBUTE_ACCESSORS(USkillAttributeSet, CurrentLevel)
	/* Determines whether an entity can gain levels in this skill */
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Skill|Experience & Levels", meta = (AllowPrivateAccess = "true"))
	bool bCanGainLevels = true;
	/* Determines whether an entity can lose levels in this skill */
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Skill|Experience & Levels", meta = (AllowPrivateAccess = "true"))
	bool bCanLoseLevels = false;

	/* Attribute used to store the minimum level a skill can be */
	UPROPERTY(BlueprintReadOnly, Category = "Skill|Experience & Levels", ReplicatedUsing = OnRep_MinLevel, meta = (AllowPrivateAccess = "true", HideFromModifiers))
	FGameplayAttributeData MinLevel;
	ATTRIBUTE_ACCESSORS(USkillAttributeSet, MinLevel)
	/* Determines default minimum skill level without adjustments/modifiers */
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Skill|Experience & Levels", meta = (AllowPrivateAccess = "true", EditCondition = "!bInfiniteMinLevel"))
	int DefaultMinLevel = 0;
	/* If true, skill level has no minimum */
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Skill|Experience & Levels", meta = (AllowPrivateAccess = "true"))
	bool bInfiniteMinLevel = false;

	/* Attribute used to store the maximum level a skill can be */
	UPROPERTY(BlueprintReadOnly, Category = "Skill|Experience & Levels", ReplicatedUsing = OnRep_MaxLevel, meta = (AllowPrivateAccess = "true", HideFromModifiers))
	FGameplayAttributeData MaxLevel;
	ATTRIBUTE_ACCESSORS(USkillAttributeSet, MaxLevel)
	/* Determines default maximum skill level without adjustments/modifiers */
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Skill|Experience & Levels", meta = (AllowPrivateAccess = "true", EditCondition = "!bInfiniteMaxLevel"))
	int DefaultMaxLevel = 99;
	/* If true, skill level has no maximum */
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Skill|Experience & Levels", meta = (AllowPrivateAccess = "true"))
	bool bInfiniteMaxLevel = false;

	/* Skills considered parts of this skill */
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Skill", meta = (AllowPrivateAccess = "true"))
	FGameplayTagContainer Subskills;

public:

	USkillAttributeSet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

protected:

	UFUNCTION()
	virtual float GetRequiredXPForNextLevel();

public:

	// REPLICATION function for Experience Attribute
	UFUNCTION()
	virtual void OnRep_Experience(const FGameplayAttributeData& OldExperience);
	// REPLICATION function for ExperienceGainMultiplier
	UFUNCTION()
	virtual void OnRep_ExperienceGainMultiplier(const FGameplayAttributeData& OldMultiplier);
	// REPLICATION function for CurrentLevel Attribute
	UFUNCTION()
	virtual void OnRep_CurrentLevel(const FGameplayAttributeData& OldLevel);
	// REPLICATION function for MinLevel Attribute
	UFUNCTION()
	virtual void OnRep_MinLevel(const FGameplayAttributeData& OldMin);
	// REPLICATION function for MaxLevel Attribute
	UFUNCTION()
	virtual void OnRep_MaxLevel(const FGameplayAttributeData& OldMax);
	// REPLICATION function (idk why it's necessary, but attributes need it for replication so *shrug*)
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};
