// Fill out your copyright notice in the Description page of Project Settings.


#include "SkillComponent.h"
#include "Skill.h"

USkillComponent::USkillComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{

}

void USkillComponent::BeginPlay()
{
	Super::BeginPlay();

}

TMap<FString, USkill*> USkillComponent::GetSkills() const { return Skills; }

USkill* USkillComponent::GetSkill(FString InstanceKey) const { return Skills[InstanceKey]; }