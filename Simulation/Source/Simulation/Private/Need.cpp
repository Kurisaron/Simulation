// Fill out your copyright notice in the Description page of Project Settings.


#include "Need.h"

UNeed::UNeed(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{

}

float UNeed::GetFulfillment() const { return Fulfillment; }