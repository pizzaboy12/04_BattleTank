// Fill out your copyright notice in the Description page of Project Settings.

#include "TankPlayerController1.h"

ATank * ATankPlayerController1::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
}
