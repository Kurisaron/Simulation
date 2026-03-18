// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EntityAttribute.h"
#include "Trait.generated.h"

/**
 * 
 */
UCLASS(Abstract, Blueprintable, BlueprintType, HideDropdown)
class SIMULATION_API UTrait : public UEntityAttribute
{
	GENERATED_BODY()

public:

	UTrait(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

};
