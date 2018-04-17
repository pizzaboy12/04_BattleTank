// Fill out your copyright notice in the Description page of Project Settings.

#include "TankPlayerController.h"




ATankPlayerController::ATank* GetControlledTank() const;
{
	return Cast<ATank>(GetPawn());
}
