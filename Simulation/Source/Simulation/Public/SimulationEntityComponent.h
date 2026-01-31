// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "SimulationEntityComponent.generated.h"

class UEntityAttributeSet;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAttributeAdded, USimulationEntityComponent*, EntityComponent, UEntityAttributeSet*, AttributeSet);

/**
 * The Simulation Entity Component is a subtype of Ability System Component that designates an Actor as a simulation entity. 
 */
UCLASS(BlueprintType, HideCategories = ("AttributeTest"), meta = (BlueprintSpawnableComponent))
class SIMULATION_API USimulationEntityComponent : public UAbilitySystemComponent
{
	GENERATED_BODY()

	UPROPERTY(BlueprintGetter = GetEntityName, EditDefaultsOnly, ReplicatedUsing = OnRep_EntityName, Category = "Simulation Entity")
	FName EntityName;

	UPROPERTY(EditDefaultsOnly, Category = "Simulation Entity|Attributes")
	TArray<TSubclassOf<UEntityAttributeSet>> DefaultAttributes;

	UPROPERTY(EditDefaultsOnly, Category = "Simulation Entity|Damage", meta = (DisplayName="Default 'Can Be Damaged'"))
	bool bDefault_CanBeDamaged = true;

	UPROPERTY(BlueprintGetter = GetDefaultReplicationMode, EditDefaultsOnly, Category = "Simulation Entity|Replication")
	EGameplayEffectReplicationMode DefaultReplicationMode = EGameplayEffectReplicationMode::Mixed;

public:

	UPROPERTY(BlueprintAssignable, Category = "Simulation Entity|Attributes")
	FOnAttributeAdded OnAttributeAdded;

public:

	USimulationEntityComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	virtual void BeginPlay() override;

	UFUNCTION(BlueprintPure, Category = "Simulation Entity")
	FName GetEntityName() const;

public:

	UFUNCTION(BlueprintCallable, Category = "Simulation Entity|Attributes")
	virtual void AddAttributeSet(UEntityAttributeSet* AttributeSet);

	UFUNCTION(BlueprintCallable, Category = "Simulation Entity|Attributes")
	virtual void AddAttributeSets(TArray<UEntityAttributeSet*> AttributeSets);

	UFUNCTION(BlueprintCallable, Category = "Simulation Entity|Attributes")
	virtual void AddAttributeSetByClass(TSubclassOf<UEntityAttributeSet> AttributeSetClass);

	UFUNCTION(BlueprintCallable, Category = "Simulation Entity|Attributes")
	virtual void AddAttributeSetsByClass(TArray<TSubclassOf<UEntityAttributeSet>> AttributeSetClasses);

protected:

	/** Subscribes to owning Actor's OnTakeAnyDamage delegate. Runs only on the server */
	UFUNCTION()
	virtual void TakeAnyDamage(
		AActor* DamagedActor,
		float Damage,
		const class UDamageType* DamageType,
		class AController* InstigatedBy,
		AActor* DamageCauser
	);

	/** Subscribes to owning Actor's OnTakePointDamage delegate. Runs only on the server */
	UFUNCTION()
	virtual void TakePointDamage(
		AActor* DamagedActor,
		float Damage,
		class AController* InstigatedBy,
		FVector HitLcation,
		class UPrimitiveComponent* HitComponent,
		FName BoneName,
		FVector HitDirection,
		const class UDamageType* DamageType,
		AActor* DamageCauser
	);

	/** Subscribes to owning Actor's OnTakeRadialDamage delegate. Runs only on the server */
	UFUNCTION()
	virtual void TakeRadialDamage(
		AActor* DamagedActor,
		float Damage,
		const class UDamageType* DamageType,
		FVector Origin,
		const FHitResult& HitInfo,
		class AController* InstigatedBy,
		AActor* DamageCauser
	);

public:

	UFUNCTION(BlueprintPure, Category = "Simulation Entity|Replication")
	EGameplayEffectReplicationMode GetDefaultReplicationMode() const;

	/** RepNotify for changes made to current health.*/
	UFUNCTION()
	virtual void OnRep_EntityName();

	/** Property replication */
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:

	UFUNCTION(BlueprintCallable, Category = "Simulation Entity")
	static bool IsSimulationEntity(AActor* Actor, USimulationEntityComponent*& OutEntityComponent);

};
