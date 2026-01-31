// Fill out your copyright notice in the Description page of Project Settings.


#include "SimulationPhysicalMaterial.h"

USimulationPhysicalMaterial::USimulationPhysicalMaterial(FVTableHelper& Helper) : Super(Helper)
{

}

float USimulationPhysicalMaterial::GetHeatResistance() const
{
	return HeatResistance;
}