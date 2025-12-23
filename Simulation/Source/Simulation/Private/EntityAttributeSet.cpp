// Fill out your copyright notice in the Description page of Project Settings.


#include "EntityAttributeSet.h"

UEntityAttributeSet::UEntityAttributeSet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{

}

bool UEntityAttributeSet::ShouldDisplayName()
{
	return !SetName.IsNone();
}

FName UEntityAttributeSet::GetSetName()
{
	return SetName;
}

bool UEntityAttributeSet::ShouldDisplayDescription()
{
	return !SetDescription.IsEmpty();
}

FString UEntityAttributeSet::GetSetDescription()
{
	return SetDescription;
}