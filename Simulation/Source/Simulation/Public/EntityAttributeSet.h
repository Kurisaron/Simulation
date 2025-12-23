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
UCLASS(Abstract, Blueprintable, BlueprintType)
class SIMULATION_API UEntityAttributeSet : public UAttributeSet
{
	GENERATED_BODY()

	/* Used for lookup or to find matches between attribute sets of similar types */
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Entity Attribute Set", meta = (AllowPrivateAccess = "true"))
	FGameplayTag ID;

	/* These tags may be used for loose categorization, ie. finding groups of attribute sets based on tags */
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Entity Attribute Set", meta = (AllowPrivateAccess = "true"))
	FGameplayTagContainer AttributeTags;

	/* This name is used for UI to display the attribute in a user-friendly way. Does not display if empty */
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Entity Attribute Set|UI Settings", meta = (AllowPrivateAccess = "true"))
	FName SetName;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Entity Attribute Set|UI Settings", meta = (AllowPrivateAccess = "true", MultiLine = true))
	FString SetDescription;

public:

	UEntityAttributeSet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	UFUNCTION(BlueprintCallable, Category = "Entity Attribute Set|UI Settings")
	virtual bool ShouldDisplayName();

	UFUNCTION(BlueprintCallable, Category = "Entity Attribute Set|UI Settings")
	virtual FName GetSetName();

	UFUNCTION(BlueprintCallable, Category = "Entity Attribute Set|UI Settings")
	virtual bool ShouldDisplayDescription();

	UFUNCTION(BlueprintCallable, Category = "Entity Attribute Set|UI Settings")
	virtual FString GetSetDescription();

};
