// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EntityAttributeSet.h"
#include "NeedAttributeSet.generated.h"

// Use macros from AttributeSet.h
#define ATTRIBUTE_ACCESSORS(UNeedAttributeSet, CurrentSatisfaction) \
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(UNeedAttributeSet, CurrentSatisfaction) \
	GAMEPLAYATTRIBUTE_VALUE_GETTER(CurrentSatisfaction) \
	GAMEPLAYATTRIBUTE_VALUE_SETTER(CurrentSatisfaction) \
	GAMEPLAYATTRIBUTE_VALUE_INITTER(CurrentSatisfaction)

/**
 * 
 */
UCLASS(Abstract, Blueprintable, BlueprintType, HideDropdown)
class SIMULATION_API UNeedAttributeSet : public UEntityAttributeSet
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadOnly, Category = "Need", ReplicatedUsing = OnRep_CurrentSatisfaction, meta = (AllowPrivateAccess = "true"))
	FGameplayAttributeData CurrentSatisfaction;
	ATTRIBUTE_ACCESSORS(UNeedAttributeSet, CurrentSatisfaction)

public:

	UNeedAttributeSet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	UFUNCTION()
	virtual void OnRep_CurrentSatisfaction(const FGameplayAttributeData& OldSatisfaction);

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};
