// Fill out your copyright notice in the Description page of Project Settings.

#include "TankPlayerController1.h"


void ATankPlayerController1::BeginPlay()
{
	Super::BeginPlay();
	auto Tank = GetControlledTank();
	
	

}

void ATankPlayerController1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	AimTowardsCrosshair();
}



void ATankPlayerController1::AimTowardsCrosshair()
{
	if (!GetControlledTank()) { return; }

	FVector HitLocation;


	if (GetSightRayHitLocation(HitLocation))
	{
		UE_LOG(LogTemp, Warning, TEXT("Hitlocation: %s"), *HitLocation.ToString());
	}
}

ATank * ATankPlayerController1::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
}

bool ATankPlayerController1::GetSightRayHitLocation(FVector &OutHitLocation) const
{
	OutHitLocation = FVector(1.0f);
	return false;
}

//int32 ViewportSizeX;
//int32 ViewportSizeY;
//void SetViewPortCoords();

//SetViewPortCoords();

//void ATankPlayerController1::SetViewPortCoords()
//{
//	GetViewportSize(ViewportSizeX, ViewportSizeY);
//	FString XCoord = FString::FromInt(ViewportSizeX);
//	FString YCoord = FString::FromInt(ViewportSizeY);
//		
//	UE_LOG(LogTemp, Warning, TEXT("x size is: %s, y size is: %s"), *XCoord, *YCoord);
//
//
//}

//FVector CameraForwardVector = GetPawn()->FindComponentByClass<UCameraComponent>()->GetComponentLocation();
//FRotator LookRotation = GetPawn()->FindComponentByClass<UCameraComponent>()->GetComponentRotation();

//FHitResult Hit;
//FVector LineTraceStart;
//FVector MiddlePositionLookat;
//
//
//DeprojectScreenPositionToWorld((float)ViewportSizeX / 2, (float)ViewportSizeY / 3, LineTraceStart, Direction);
//DeprojectScreenPositionToWorld((float)ViewportSizeX / 2, (float)ViewportSizeY / 2, MiddlePositionLookat, Direction);
//
//FVector Delta = LineTraceStart - MiddlePositionLookat;
//FRotator CorrectionRot = UKismetMathLibrary::FindLookAtRotation(CameraForwardVector, (LineTraceStart + (Delta / 3.33f)));
//FVector DirectionTry = UKismetMathLibrary::GetForwardVector(CorrectionRot);
//
//UE_LOG(LogTemp, Warning, TEXT("LineTraceStart is %s"), *LineTraceStart.ToString());
//FVector LineTraceEnd = DirectionTry * 10000.f;
//DrawDebugLine(GetWorld(), LineTraceStart, LineTraceEnd, FColor(255, 0, 0), false, 0.f, 0.f, 10.f);
//FCollisionQueryParams TraceParameters(FName(TEXT("")), false, GetPawn());
//
//GetWorld()->LineTraceSingleByObjectType(Hit, LineTraceStart, LineTraceEnd,
//	FCollisionObjectQueryParams(ECollisionChannel::ECC_PhysicsBody),
//	TraceParameters
//);
//AActor* ActorHit = Hit.GetActor();
//if (ActorHit)
//{
//	UE_LOG(LogTemp, Warning, TEXT("HitLocation is %s"), *ActorHit->GetActorLocation().ToString())
//}

