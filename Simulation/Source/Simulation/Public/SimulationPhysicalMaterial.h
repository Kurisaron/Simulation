// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PhysicalMaterials/PhysicalMaterial.h"
#include "SimulationPhysicalMaterial.generated.h"

/**
 * 
 */
UCLASS(BlueprintType, Blueprintable, CollapseCategories)
class SIMULATION_API USimulationPhysicalMaterial : public UPhysicalMaterial
{
	GENERATED_BODY()

	/**	Heat Resistance, determines how efficiently and quickly the material conducts heat. Higher values = less heat conducted */
	UPROPERTY(BlueprintGetter = GetHeatResistance, EditAnywhere, Category = PhysicalMaterial, meta = (ClampMin = 0, ClampMax = 1))
	float HeatResistance;
	
	USimulationPhysicalMaterial(FVTableHelper& Helper);

public:

	UFUNCTION(BlueprintPure, Category = "")
	float GetHeatResistance() const;

};
