// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayEffect.h"
#include "EntityEffect.generated.h"

/**
 * 
 */
UCLASS(Abstract, Blueprintable, BlueprintType)
class SIMULATION_API UEntityEffect : public UGameplayEffect
{
	GENERATED_BODY()

	/* Used for lookup or to find matches between effects of similar types */
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Entity Effect", meta = (AllowPrivateAccess = "true"))
	FGameplayTag ID;

public:

	UEntityEffect(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

};
