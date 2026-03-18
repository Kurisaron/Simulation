// Fill out your copyright notice in the Description page of Project Settings.


#include "NeedComponent.h"
#include "Need.h"

UNeedComponent::UNeedComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{

}

TMap<FString, UNeed*> UNeedComponent::GetNeeds() const { return Needs; }

UNeed* UNeedComponent::GetNeed(FString InstanceKey) const { return Needs[InstanceKey]; }