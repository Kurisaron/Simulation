// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "EntityAttribute.generated.h"


/**
 * 
 */
UCLASS(Abstract, Blueprintable, BlueprintType, EditInlineNew, HideDropdown)
class SIMULATION_API UEntityAttribute : public UObject
{
	GENERATED_BODY()

	/**
	 * ID used to identify attributes. Serves as an alternate to casting by type
	 */
	UPROPERTY(BlueprintGetter = GetTypeID, EditDefaultsOnly, Category = "Entity Attribute")
	FGameplayTag TypeID;

	/**
	 * Indicates whether the attribute is hidden from UI
	 */
	UPROPERTY(BlueprintGetter = IsHidden, EditDefaultsOnly, Category = "Entity Attribute")
	bool bHidden = false;

public:

	UEntityAttribute(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	UFUNCTION(BlueprintPure, Category = "Entity Attribute")
	FGameplayTag GetTypeID() const;

	UFUNCTION(BlueprintPure, Category = "Entity Attribute")
	bool IsHidden() const;

};
