// Fill out your copyright notice in the Description page of Project Settings.


#include "ArmorAttributeSet.h"

UArmorAttributeSet::UArmorAttributeSet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	
}

void UArmorAttributeSet::OnRep_Protection(const FGameplayAttributeData& OldProtection)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UArmorAttributeSet, Protection, OldProtection);
}

void UArmorAttributeSet::OnRep_CurrentDurability(const FGameplayAttributeData& OldCurrentDurability)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UArmorAttributeSet, CurrentDurability, OldCurrentDurability);
}

void UArmorAttributeSet::OnRep_MaxDurability(const FGameplayAttributeData& OldMaxDurability)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UArmorAttributeSet, MaxDurability, OldMaxDurability);
}

void UArmorAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION_NOTIFY(UArmorAttributeSet, Protection, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UArmorAttributeSet, CurrentDurability, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UArmorAttributeSet, MaxDurability, COND_None, REPNOTIFY_Always);
}