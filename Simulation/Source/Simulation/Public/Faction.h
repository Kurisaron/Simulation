// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Faction.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, BlueprintType)
class SIMULATION_API UFaction : public UObject
{
	GENERATED_BODY()
	
	/* Name of the faction */
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Faction", meta = (AllowPrivateAccess = "true"))
	FName FactionName;

public:

	UFaction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

};
