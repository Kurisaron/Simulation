// Fill out your copyright notice in the Description page of Project Settings.


#include "HealthAttributeSet.h"

UHealthAttributeSet::UHealthAttributeSet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	InitCurrentHealth(DefaultHealth);
	InitMaxHealth(DefaultHealth);
}

const float UHealthAttributeSet::GetDefaultHealth() const
{
	return DefaultHealth;
}

void UHealthAttributeSet::OnRep_CurrentHealth(const FGameplayAttributeData& OldCurrentHealth)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UHealthAttributeSet, CurrentHealth, OldCurrentHealth);
}

void UHealthAttributeSet::OnRep_MaxHealth(const FGameplayAttributeData& OldMaxHealth)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UHealthAttributeSet, MaxHealth, OldMaxHealth);
}

void UHealthAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION_NOTIFY(UHealthAttributeSet, CurrentHealth, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UHealthAttributeSet, MaxHealth, COND_None, REPNOTIFY_Always);
}