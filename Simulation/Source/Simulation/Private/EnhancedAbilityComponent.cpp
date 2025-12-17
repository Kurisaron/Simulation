// Fill out your copyright notice in the Description page of Project Settings.


#include "EnhancedAbilityComponent.h"
#include "EnhancedAttributeSet.h"

UEnhancedAbilityComponent::UEnhancedAbilityComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{

}

float UEnhancedAbilityComponent::TakeDamage(
	float DamageAmount,
	FDamageEvent const& DamageEvent,
	AController* EventInstigator,
	AActor* DamageCauser)
{
	LastDamageEventInstigator = EventInstigator;
	LastDamageCauser = DamageCauser;


	// TO-DO: Finish damage logic, this is temp for compilation
	return 0.0f;
}