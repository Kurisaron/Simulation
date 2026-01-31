// Fill out your copyright notice in the Description page of Project Settings.


#include "EntityAttributeSet.h"

UEntityAttributeSet::UEntityAttributeSet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{

}

const FGameplayTag UEntityAttributeSet::GetID() const
{
	//UE_LOG(LogTemp, Warning, TEXT("[%s] Performed getter on ID, output: %s"), *GetName(), *ID.ToString());

	return ID;
}

const FGameplayTagContainer UEntityAttributeSet::GetAttributeSetTags() const
{
	return AttributeSetTags;
}

bool UEntityAttributeSet::ShouldDisplayName()
{
	return !SetName.IsNone();
}

const FName UEntityAttributeSet::GetSetName() const
{
	return SetName;
}

bool UEntityAttributeSet::ShouldDisplayDescription()
{
	return !SetDescription.IsEmpty();
}

const FString UEntityAttributeSet::GetSetDescription() const
{
	return SetDescription;
}