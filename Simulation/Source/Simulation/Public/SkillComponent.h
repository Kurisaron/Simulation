// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EntityComponent.h"
#include "SkillComponent.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, BlueprintType)
class SIMULATION_API USkillComponent : public UEntityComponent
{
	GENERATED_BODY()

	// List of current skills active on this component
	UPROPERTY(BlueprintGetter = GetSkills, EditDefaultsOnly, Instanced, Category = "Skills")
	TMap<FString, class USkill*> Skills;

public:

	// Sets default values for this component's properties
	USkillComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

protected:

	// Called when the game starts
	virtual void BeginPlay() override;

public:

	// Called to return the list of skills that are active on this component
	UFUNCTION(BlueprintPure, Category = "Skills")
	TMap<FString, USkill*> GetSkills() const;

	UFUNCTION(BlueprintPure, Category = "Skills")
	USkill* GetSkill(FString InstanceKey) const;

};
