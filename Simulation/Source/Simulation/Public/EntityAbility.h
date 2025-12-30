// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "EntityAbility.generated.h"

/**
 * 
 */
UCLASS(Abstract, Blueprintable, BlueprintType)
class SIMULATION_API UEntityAbility : public UGameplayAbility
{
	GENERATED_BODY()

	/* Used for lookup or to find matches between abilities of similar types */
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Entity Ability", meta = (AllowPrivateAccess = "true"))
	FGameplayTag ID;



public:
	
	UEntityAbility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

};
