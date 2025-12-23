// Fill out your copyright notice in the Description page of Project Settings.


#include "SkillAttributeSet.h"

USkillAttributeSet::USkillAttributeSet(const FObjectInitializer& ObjectInitializer)
{

}

float USkillAttributeSet::GetRequiredXPForNextLevel()
{
	return 2500.0f * (GetCurrentLevel() + 1.0f);
}

void USkillAttributeSet::OnRep_Experience(const FGameplayAttributeData& OldExperience)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(USkillAttributeSet, Experience, OldExperience);
}

void USkillAttributeSet::OnRep_ExperienceGainMultiplier(const FGameplayAttributeData& OldMultiplier)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(USkillAttributeSet, ExperienceGainMultiplier, OldMultiplier);
}

void USkillAttributeSet::OnRep_CurrentLevel(const FGameplayAttributeData& OldLevel)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(USkillAttributeSet, CurrentLevel, OldLevel);
}

void USkillAttributeSet::OnRep_MinLevel(const FGameplayAttributeData& OldMin)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(USkillAttributeSet, MinLevel, OldMin);
}

void USkillAttributeSet::OnRep_MaxLevel(const FGameplayAttributeData& OldMax)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(USkillAttributeSet, MaxLevel, OldMax);
}

void USkillAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION_NOTIFY(USkillAttributeSet, Experience, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(USkillAttributeSet, ExperienceGainMultiplier, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(USkillAttributeSet, CurrentLevel, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(USkillAttributeSet, MinLevel, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(USkillAttributeSet, MaxLevel, COND_None, REPNOTIFY_Always);
}