// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Net/UnrealNetwork.h"
#include "AbilitySystemComponent.h"
#include "AttributeSet.h"
#include "GameplayTagContainer.h"
#include "EntityAttributeSet.generated.h"

/**
 * 
 */
UCLASS(Abstract, Blueprintable, BlueprintType, HideDropdown)
class SIMULATION_API UEntityAttributeSet : public UAttributeSet
{
	GENERATED_BODY()

	/* Used for lookup or to find matches between attribute sets of similar types */
	UPROPERTY(BlueprintGetter = GetID, EditDefaultsOnly, Category = "Entity Attribute Set")
	FGameplayTag ID;

	/* These tags may be used for loose categorization, ie. finding groups of attribute sets based on tags */
	UPROPERTY(BlueprintGetter = GetAttributeSetTags, EditDefaultsOnly, Category = "Entity Attribute Set")
	FGameplayTagContainer AttributeSetTags;

	/* This name is used for UI to display the attribute in a user-friendly way. Does not display if empty */
	UPROPERTY(BlueprintGetter = GetSetName, EditDefaultsOnly, Category = "Entity Attribute Set|UI Settings")
	FName SetName;

	UPROPERTY(BlueprintGetter = GetSetDescription, EditDefaultsOnly, Category = "Entity Attribute Set|UI Settings", meta = (MultiLine = true))
	FString SetDescription;

public:

	UEntityAttributeSet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	UFUNCTION(BlueprintPure, Category = "Entity Attribute Set")
	const FGameplayTag GetID() const;

	UFUNCTION(BlueprintPure, Category = "Entity Attribute Set")
	const FGameplayTagContainer GetAttributeSetTags() const;

	UFUNCTION(BlueprintCallable, Category = "Entity Attribute Set|UI Settings")
	virtual bool ShouldDisplayName();

	UFUNCTION(BlueprintPure, Category = "Entity Attribute Set|UI Settings")
	const FName GetSetName() const;

	UFUNCTION(BlueprintCallable, Category = "Entity Attribute Set|UI Settings")
	virtual bool ShouldDisplayDescription();

	UFUNCTION(BlueprintPure, Category = "Entity Attribute Set|UI Settings")
	const FString GetSetDescription() const;

};
