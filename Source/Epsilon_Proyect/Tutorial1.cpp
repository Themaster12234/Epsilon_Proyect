// Fill out your copyright notice in the Description page of Project Settings.

#include "Epsilon_Proyect.h"
#include "Tutorial1.h"


// Sets default values
ATutorial1::ATutorial1()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATutorial1::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATutorial1::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );
	FVector NewLocation = GetActorLocation();
	float DeltaHeight = (FMath::Sin(RunningTime + DeltaTime) - FMath::Sin(RunningTime));
	NewLocation.Z += DeltaHeight * 20.0f;
	RunningTime += DeltaTime;
	SetActorLocation(NewLocation);
}

