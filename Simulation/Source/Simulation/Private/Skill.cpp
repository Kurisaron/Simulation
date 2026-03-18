// Fill out your copyright notice in the Description page of Project Settings.


#include "Skill.h"

USkill::USkill(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	
}

int USkill::GetCurrentLevel() const { return CurrentLevel; }

int USkill::GetMinLevel() const { return MinLevel; }

int USkill::GetMaxLevel() const { return MaxLevel; }

void USkill::AddLevel(int Amount)
{
	int OldLevel = CurrentLevel;
	CurrentLevel += Amount;
	OnCurrentLevelChanged.Broadcast(this, CurrentLevel, OldLevel);
}

float USkill::GetExperience() const { return Experience; }

void USkill::AddExperience(float Amount)
{
	float OldExperience = Experience;
	Experience += Amount;
	OnExperienceChanged.Broadcast(this, Experience, OldExperience);

}

float USkill::GetExperienceRequirement(int TargetLevel) const
{
	return (5000.0f * FMath::Clamp(TargetLevel, 0, 2)) + (FMath::Max<int>(TargetLevel - 2, 0) * 1000.0f);
}

float USkill::GetIntuition() const { return Intuition; }

float USkill::GetPassion() const { return Passion; }