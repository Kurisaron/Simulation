// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EntityAttributeSet.h"
#include "ShieldAttributeSet.generated.h"

/**
 * 
 */
UCLASS(Abstract, Blueprintable, BlueprintType)
class SIMULATION_API UShieldAttributeSet : public UEntityAttributeSet
{
	GENERATED_BODY()
	
public:

	UShieldAttributeSet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

};
