// Fill out your copyright notice in the Description page of Project Settings.

#include "TankPlayerController1.h"


void ATankPlayerController1::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("Player Controller beginplay"));
	auto Tank = GetControlledTank();

	if (Tank)
	{
		UE_LOG(LogTemp, Warning, TEXT("%s was possessed"),*Tank->GetName());
	}

}

ATank * ATankPlayerController1::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
}


