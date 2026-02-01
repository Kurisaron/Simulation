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

			SetEntityName(GetRandomEntityName());
		}
	}
}

void USimulationEntityComponent::BeginPlay()
{
	Super::BeginPlay();
	
	if (GetOwner()->GetLocalRole() == ENetRole::ROLE_Authority)
	{
		AddAttributeSets(DefaultAttributes);
	}
}

FName USimulationEntityComponent::GetEntityName() const
{
	return EntityName;
}

void USimulationEntityComponent::SetEntityName(FName NewName)
{
	if (GetOwner()->GetLocalRole() != ENetRole::ROLE_Authority)
		return;

	FName OldName = EntityName;
	EntityName = NewName;
	OnEntityNameChanged(OldName);
}

void USimulationEntityComponent::OnRep_EntityName(FName OldName)
{
	OnEntityNameChanged(OldName);
}

void USimulationEntityComponent::OnEntityNameChanged(FName OldName)
{
	UE_LOG(LogTemp, Warning, TEXT("[%s] Entity name changed from %s to %s"), *GetOwner()->GetName(), *OldName.ToString(), *EntityName.ToString());
}

FName USimulationEntityComponent::GetRandomEntityName() const
{
	TArray<FName> PossibleNames =
	{
		"Sam",
		"Sue",
		"Mike"
	};

	int NameIndex = FMath::RandRange(0, PossibleNames.Num() - 1);
	return PossibleNames[NameIndex];
}

void USimulationEntityComponent::AddAttributeSet(UEntityAttributeSet* AttributeSet)
{
	if (GetOwner()->GetLocalRole() != ENetRole::ROLE_Authority)
		return;
	
	if (AttributeSet)
	{
		AddSpawnedAttribute(AttributeSet);

	}

}

void USimulationEntityComponent::AddAttributeSet(TSubclassOf<UEntityAttributeSet> AttributeSetClass)
{
	if (GetOwner()->GetLocalRole() != ENetRole::ROLE_Authority)
		return;

	UEntityAttributeSet* NewAttributeSet = NewObject<UEntityAttributeSet>(this, AttributeSetClass);
	AddAttributeSet(NewAttributeSet);
}

void USimulationEntityComponent::AddAttributeSets(TArray<TSubclassOf<UEntityAttributeSet>> AttributeSetClasses)
{
	if (GetOwner()->GetLocalRole() != ENetRole::ROLE_Authority)
		return;

	for (TSubclassOf<UEntityAttributeSet> AttributeSetClass : AttributeSetClasses)
	{
		AddAttributeSet(AttributeSetClass);
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
	// Insert logic for taking any damage
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
	// Insert logic for taking point damage
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
	// Insert logic for taking radial damage
}

EGameplayEffectReplicationMode USimulationEntityComponent::GetDefaultReplicationMode() const
{
	return DefaultReplicationMode;
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
