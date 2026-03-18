// Fill out your copyright notice in the Description page of Project Settings.


#include "EntityAttribute.h"

UEntityAttribute::UEntityAttribute(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{

}

FGameplayTag UEntityAttribute::GetTypeID() const { return TypeID; }

bool UEntityAttribute::IsHidden() const { return bHidden; }