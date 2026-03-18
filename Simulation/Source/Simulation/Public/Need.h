// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EntityAttribute.h"
#include "Need.generated.h"

/**
 * 
 */
UCLASS(Abstract, Blueprintable, BlueprintType, EditInlineNew, HideDropdown)
class SIMULATION_API UNeed : public UEntityAttribute
{
	GENERATED_BODY()

	UPROPERTY(BlueprintGetter = GetFulfillment, Category = "Need", meta = (ClampMin = 0, ClampMax = 100))
	float Fulfillment = 0.0f;

public:

	UNeed(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	UFUNCTION(BlueprintPure, Category = "Need")
	float GetFulfillment() const;
	
};
