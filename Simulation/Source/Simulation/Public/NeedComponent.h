// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EntityComponent.h"
#include "NeedComponent.generated.h"

/**
 * 
 */
UCLASS()
class SIMULATION_API UNeedComponent : public UEntityComponent
{
	GENERATED_BODY()

	UPROPERTY(BlueprintGetter = GetNeeds, EditDefaultsOnly, Instanced, Category = "Needs")
	TMap<FString, class UNeed*> Needs;
	
public:

	UNeedComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	UFUNCTION(BlueprintPure, Category = "Needs")
	TMap<FString, UNeed*> GetNeeds() const;

	UFUNCTION(BlueprintPure, Category = "Needs")
	UNeed* GetNeed(FString InstanceKey) const;



};
