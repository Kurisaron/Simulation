// Fill out your copyright notice in the Description page of Project Settings.


#include "SimulationPawn.h"
#include "SimulationEntityComponent.h"

// Sets default values
ASimulationPawn::ASimulationPawn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	EntityComponent = CreateDefaultSubobject<USimulationEntityComponent>(TEXT("SEC"));
}

// Called when the game starts or when spawned
void ASimulationPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

void ASimulationPawn::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);

	if (EntityComponent)
	{
		EntityComponent->InitAbilityActorInfo(this, this);
	}
}

void ASimulationPawn::OnRep_PlayerState()
{
	Super::OnRep_PlayerState();

	if (EntityComponent)
	{
		EntityComponent->InitAbilityActorInfo(this, this);
	}
}

// Called every frame
void ASimulationPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ASimulationPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

float ASimulationPawn::TakeDamage(
	float DamageAmount,
	FDamageEvent const& DamageEvent,
	AController* EventInstigator,
	AActor* DamageCauser)
{
	float ActualDamage = EntityComponent->TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);

	return Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);
}

UAbilitySystemComponent* ASimulationPawn::GetAbilitySystemComponent() const { return EntityComponent; }
