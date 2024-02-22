// Fill out your copyright notice in the Description page of Project Settings.


#include "Obstacle.h"
#include "Kismet/KismetSystemLibrary.h"
#include "BoidManager.h"

// Sets default values
AObstacle::AObstacle()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Set up mesh on the obstacle
	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Static Mesh"));
	MeshComponent->SetStaticMesh(Mesh);
	this->SetRootComponent(MeshComponent);

	this->SetRootComponent(MeshComponent);
}

// Called when the game starts or when spawned
void AObstacle::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AObstacle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (isActive) {
		// Calculate if the obstacle needs to be contained back into the scene
		TargetVelocity = Containment(DeltaTime);

		// Apply force to move back towards the center if moving too far away
		FVector newForce = TargetVelocity - CurrentVelocity;
		CurrentVelocity += newForce * DeltaTime;
		// Add the new force to the current location
		FVector location = GetActorLocation();
		location += (CurrentVelocity * speed * DeltaTime);
		// Update the boids position
		SetActorLocation(location);
	}
}

FVector AObstacle::Containment(float deltaTime)
{
	// Initialise variables to be used in the calculation
	FVector MyLocation = GetActorLocation();
	FVector awayDirection = FVector::Zero();
	float containRadius = boidManager->containmentRadius;

	// Get the distance from the location of the obstacle to the centre
	float distanceFromCentre = (MyLocation - (0, 0, 0)).Length();
	if (distanceFromCentre > containRadius) {
		// If the distance is greater than the radius of the map, calculate a vector moving the
		// obstacle towards the centre 
		awayDirection = FVector(0, 0, 0) - GetActorLocation();
		awayDirection.Normalize();
		// Increase speed over time
		speed += (deltaTime * speed);
	}
	else {
		// Reset speed once the obstacle is inside of the map
		speed = originalSpeed;
	}
	// Return the found vector
	return awayDirection;
	
}