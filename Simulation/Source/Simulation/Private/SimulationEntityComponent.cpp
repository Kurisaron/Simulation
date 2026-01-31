// Fill out your copyright notice in the Description page of Project Settings.


#include "SimulationEntityComponent.h"
#include "GameFramework/Character.h"
#include "EntityAttributeSet.h"

USimulationEntityComponent::USimulationEntityComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	SetIsReplicated(true);
	SetReplicationMode(DefaultReplicationMode);

	if (AActor* Owner = GetOwner())
	{
		Owner->SetCanBeDamaged(bDefault_CanBeDamaged);
		if (Owner->GetLocalRole() == ENetRole::ROLE_Authority)
		{
			Owner->OnTakeAnyDamage.AddDynamic(this, &USimulationEntityComponent::TakeAnyDamage);
			Owner->OnTakePointDamage.AddDynamic(this, &USimulationEntityComponent::TakePointDamage);
			Owner->OnTakeRadialDamage.AddDynamic(this, &USimulationEntityComponent::TakeRadialDamage);
		}
	}
}

void USimulationEntityComponent::BeginPlay()
{
	Super::BeginPlay();
	
}

FName USimulationEntityComponent::GetEntityName() const
{
	return EntityName;
}

void USimulationEntityComponent::AddAttributeSet(UEntityAttributeSet* AttributeSet)
{
	if (AttributeSet)
	{
		AddSpawnedAttribute(AttributeSet);

		OnAttributeAdded.Broadcast(this, AttributeSet);

		/*
		if (FindAttributeSet(AttributeSetClass))
		{
			FString SetClassName = AttributeSetClass->GetName();
			UE_LOG(LogTemp, Warning, TEXT("[%s] Added %s attribute set"), *GetName(), *SetClassName);
		}
		*/
	}

}

void USimulationEntityComponent::AddAttributeSets(TArray<UEntityAttributeSet*> AttributeSets)
{
	for (UEntityAttributeSet* AttributeSet : AttributeSets)
	{
		AddAttributeSet(AttributeSet);
	}
}

void USimulationEntityComponent::AddAttributeSetByClass(TSubclassOf<UEntityAttributeSet> AttributeSetClass)
{
	UEntityAttributeSet* NewAttributeSet = NewObject<UEntityAttributeSet>(this, AttributeSetClass);
	AddAttributeSet(NewAttributeSet);
}

void USimulationEntityComponent::AddAttributeSetsByClass(TArray<TSubclassOf<UEntityAttributeSet>> AttributeSetClasses)
{
	for (TSubclassOf<UEntityAttributeSet> AttributeSetClass : AttributeSetClasses)
	{
		AddAttributeSetByClass(AttributeSetClass);
	}
}

void USimulationEntityComponent::TakeAnyDamage(
	AActor* DamagedActor,
	float Damage,
	const class UDamageType* DamageType,
	class AController* InstigatedBy,
	AActor* DamageCauser
)
{

}

void USimulationEntityComponent::TakePointDamage(
	AActor* DamagedActor,
	float Damage,
	class AController* InstigatedBy,
	FVector HitLcation,
	class UPrimitiveComponent* HitComponent,
	FName BoneName,
	FVector HitDirection,
	const class UDamageType* DamageType,
	AActor* DamageCauser
)
{

}

void USimulationEntityComponent::TakeRadialDamage(
	AActor* DamagedActor,
	float Damage,
	const class UDamageType* DamageType,
	FVector Origin,
	const FHitResult& HitInfo,
	class AController* InstigatedBy,
	AActor* DamageCauser
)
{

}

EGameplayEffectReplicationMode USimulationEntityComponent::GetDefaultReplicationMode() const
{
	return DefaultReplicationMode;
}

void USimulationEntityComponent::OnRep_EntityName()
{

}

void USimulationEntityComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	// Replicate entity name
	DOREPLIFETIME(USimulationEntityComponent, EntityName);
}

bool USimulationEntityComponent::IsSimulationEntity(AActor* Actor, USimulationEntityComponent*& OutEntityComponent)
{
	OutEntityComponent = Actor->FindComponentByClass<USimulationEntityComponent>();
	return OutEntityComponent != nullptr;
}
