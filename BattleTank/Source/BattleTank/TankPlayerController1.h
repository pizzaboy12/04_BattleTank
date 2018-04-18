// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Tank.h"
#include "CoreMinimal.h"
#include "Engine/World.h"
#include "DrawDebugHelpers.h"
#include "GameFramework/PlayerController.h"
#include "Kismet/KismetMathLibrary.h"
#include "TankPlayerController1.generated.h"


/**
 * 
 */
UCLASS()
class BATTLETANK_API ATankPlayerController1 : public APlayerController
{
	GENERATED_BODY()

public:

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime)override;
private:
	
	void AimTowardsCrosshair();
	ATank* GetControlledTank()const;
	bool GetSightRayHitLocation(FVector &OutHitLocation)const;
	bool GetLookDirection(FVector2D ScreenLocation, FVector& LookDirection)const;
	bool GetLookVectorHitLocation(FVector &OutHitLocation, FVector LookDirection)const;


	UPROPERTY(EditAnywhere)
		float CrossHairXLocation = 0.5f;
		float CrossHairYlocation = 0.33333f;
		float LineTraceRange = 1000000.f;
};
