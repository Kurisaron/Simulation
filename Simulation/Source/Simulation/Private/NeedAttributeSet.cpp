// Fill out your copyright notice in the Description page of Project Settings.


#include "NeedAttributeSet.h"

UNeedAttributeSet::UNeedAttributeSet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	
}

void UNeedAttributeSet::OnRep_CurrentSatisfaction(const FGameplayAttributeData& OldSatisfaction)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UNeedAttributeSet, CurrentSatisfaction, OldSatisfaction);
}

void UNeedAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION_NOTIFY(UNeedAttributeSet, CurrentSatisfaction, COND_None, REPNOTIFY_Always);
}