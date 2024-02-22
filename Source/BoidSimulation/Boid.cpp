// Fill out your copyright notice in the Description page of Project Settings.


#include "Boid.h"
#include "BoidManager.h"
#include "Bullet.h"
#include "DrawDebugHelpers.h"

// Sets default values
ABoid::ABoid()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	// Initialise Mesh for the boid
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Sphere"));
	UStaticMesh* shipMesh1 = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Models/craft_cargoA.craft_cargoA'")).Object;
	UStaticMesh* shipMesh2 = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Models/craft_cargoB.craft_cargoB'")).Object;
	UStaticMesh* shipMesh3 = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Models/craft_miner.craft_miner'")).Object;
	UStaticMesh* shipMesh4 = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Models/craft_racer.craft_racer'")).Object;
	UStaticMesh* shipMesh5 = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Models/craft_speederA.craft_speederA''")).Object;
	UStaticMesh* shipMesh6 = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Models/craft_speederB.craft_speederB'")).Object;
	UStaticMesh* shipMesh7 = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Models/craft_speederC.craft_speederC'")).Object;
	UStaticMesh* shipMesh8 = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Models/craft_speederD.craft_speederD'")).Object;
	boidMeshNumber = FMath::RandRange(0, 8);
	switch (boidMeshNumber) {
		case(0):
			Mesh->SetStaticMesh(shipMesh1);
			break;
		case(1):
			Mesh->SetStaticMesh(shipMesh2);
			break;
		case(2):
			Mesh->SetStaticMesh(shipMesh3);
			break;
		case(3):
			Mesh->SetStaticMesh(shipMesh4);
			break;
		case(4):
			Mesh->SetStaticMesh(shipMesh5);
			break;
		case(5):
			Mesh->SetStaticMesh(shipMesh6);
			break;
		case(6):
			Mesh->SetStaticMesh(shipMesh7);
			break;
		case(7):
			Mesh->SetStaticMesh(shipMesh8);
			break;
	}
	Mesh->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Overlap);
	this->SetRootComponent(Mesh);
}

// Called when the game starts or when spawned
void ABoid::BeginPlay()
{
	Super::BeginPlay();

	// Randomise initial velocity
	CurrentVelocity = (FMath::VRand());
	TargetVelocity = (FMath::VRand());
}

FVector ABoid::Seek(FVector Position)
{
	// Calculate vector to move towards a given position
	FVector newVelocity = Position - GetActorLocation();
	newVelocity.Normalize();
	return newVelocity;
}

FVector ABoid::Flee(FVector Position)
{
	// Calculate vector to move away from a given position
	FVector newVelocity = GetActorLocation() - Position;
	newVelocity.Normalize();
	return newVelocity;
}

FVector ABoid::Wander(float radius, float distance, float jitter)
{
	// Make the boid wander to a random position within range
	FVector MyLocation = GetActorLocation();
	// If the boid is outside of the bounds of the map, don't calculate a new wander position
	if (FVector::Dist(MyLocation, FVector::Zero()) > Manager->containmentRadius) {
		return FVector::Zero();
	}
	// If the boid is close to their current wander position
	if (FVector::Dist(MyLocation, WanderDestination) < 15.0f) {
		// Get a new destination in front of the boid
		FVector projectPos = MyLocation + (GetActorForwardVector() * distance);
		// Add a random offset
		WanderDestination = projectPos + (FMath::VRand() * FMath::RandRange(jitter * 0.5f, jitter));
	}
	// Continue going to the new current destination
	FVector jitterDestination = Seek(WanderDestination) + (FMath::VRand() * FMath::RandRange(jitter * 0.5f, jitter));
	return jitterDestination;
}

FVector ABoid::Alignment(TArray<ABoid*> Neighbours)
{
	// If the boid has no neighbours, don't try to allign
	if (Neighbours.Num() == 0) {
		return FVector::Zero();
	}
	// Initialise variables to be used in the calculations
	FVector newVelocity;
	int32 count = 0;
	// Add up all the velocities of each neighbouring boid
	for (ABoid* boid : Neighbours) {
		newVelocity += boid->CurrentVelocity;
		count++;
	}
	// Divide the total by the amount of neighbours, finding the average velocity
	newVelocity /= count;
	newVelocity.Normalize();
	// Return the calculated value
	return newVelocity;
}

FVector ABoid::Cohesion(TArray<ABoid*> Neighbours)
{
	// If the boid has no neighbours, don't try cohesion
	if (Neighbours.Num() == 0) {
		return FVector::Zero();
	}
	// Initialise variables to be used in the calculations
	FVector avgLocation;
	float count = 0;
	// Add up all the locations of the neighbouring boids
	for (ABoid* boid : Neighbours) {
		avgLocation += boid->GetActorLocation();
		count++;
	}
	// Divide the total by the amount of neighbours, getting the average positions
	avgLocation /= count;
	// Return the calculated value
	return Seek(avgLocation);
}

FVector ABoid::Seperation(TArray<ABoid*> Neighbours)
{
	// If the boid has no neighbours, don't try and seperate
	if (Neighbours.Num() == 0) {
		return FVector::Zero();
	}
	// Initialise variables to be used in the calculations
	FVector avgFlee;
	int32 count = 0;
	// Add up the flee value from this boid to every boid in the neighbourhood
	for (ABoid* boid : Neighbours) {
		avgFlee += Flee(boid->GetActorLocation());
		count++;
	}
	// Divide the total by the amount of neighbours, getting the avaerage flee direction
	avgFlee /= count;
	// Return the normalised value of the vector
	avgFlee.Normalize();
	return avgFlee;
}

FVector ABoid::AvoidObstacle(TArray<AActor*> Obstacles)
{
	// If there are no obstacles nearby, don't try to avoid
	if (Obstacles.Num() == 0) {
		return FVector::Zero();
	}
	// Initialise variable to be used in the calculations
	FVector avgObstacleAvoidance;
	// Add up the flee values from this boid to every nearby obstacle
	for (AActor* obstacle : Obstacles) {
		avgObstacleAvoidance += Flee(obstacle->GetActorLocation());
	}
	// Divide the total by amount of obstacles
	avgObstacleAvoidance /= Obstacles.Num();
	// Retrun the normalised vector
	avgObstacleAvoidance.Normalize();
	return avgObstacleAvoidance;
}

FVector ABoid::Containment()
{
	// Keep the boids within the range of the map sizw
	// Initialise variables to be used in the calculations
	FVector MyLocation = GetActorLocation();
	//FVector PredictedLocation = MyLocation + (GetActorForwardVector() * (Manager->BoidSpeed * 0.5f));
	FVector DirectionToCenter = FVector::Zero();
	float containRadius = Manager->containmentRadius;
	// Get the distacne of this boids position from the centre
	float distanceFromCentre = (MyLocation - (0, 0, 0)).Length();
	if (distanceFromCentre > containRadius) {
		DirectionToCenter = FVector(0, 0, 0) - MyLocation;
		DirectionToCenter.Normalize();
	}
	// Return the found value (this will be (0, 0, 0) if the boid isn't outside of the map)
	return DirectionToCenter;
}

void ABoid::WrapBoidToOtherSide()
{
	// Calculate the distance from the center to the boids location
	FVector boidLocation = GetActorLocation();
	int32 distanceFromCentre = (boidLocation - (0, 0, 0)).Length();
	if (distanceFromCentre >= Manager->containmentRadius) {
		// If the boid is outside the bounds of the map, calculate the direction from the boid to the center
		FVector directionToCentre = FVector(0, 0, 0) - boidLocation;
		// Subtract vector from centre to get position on the opposite side
		directionToCentre = FVector(0, 0, 0) - (-directionToCentre * 0.85f);
		SetActorLocation(directionToCentre);
	}
}

// Called every frame
void ABoid::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

FVector ABoid::CalculateVelocity(int32 GroupToUpdate)
{
	// Only calculate velocity if this boid is in the group to update
	if (GroupToUpdate == BoidGroup) {
		// Find closest neighbouring boids and obstacles
		TArray<ABoid*> Neighbours = Manager->GetBoidNeighbourhood(this);
		TArray<AActor*> Obstacles = Manager->GetNearbyObstacles(this);		

		// If teams is set to true on the in game UI, calculate all nearby team members
		TArray<ABoid*> TeamNeighbours;
		if (Manager->Teams) {
			TeamNeighbours = Manager->GetBoidNearbyTeam(this, team);
		}
		// Calculate the seperation value from all nearby boids and obstacles
		TargetVelocity += (Seperation(Neighbours) * Manager->SeperationWeight);
		TargetVelocity += (AvoidObstacle(Obstacles) * Manager->SeperationWeight);

		if (Manager->Teams) {
			TargetVelocity += (Alignment(TeamNeighbours) * Manager->AlignmentWeight);
			TargetVelocity += (Cohesion(TeamNeighbours) * Manager->CohesionWeight);
		} else {
			// If teams is NOT set to true on the in-game UI, calculate the cohesion and alignment
			// values to all nearby boids, regardless of the team they're on
			TargetVelocity += (Alignment(Neighbours) * Manager->AlignmentWeight);
			TargetVelocity += (Cohesion(Neighbours) * Manager->CohesionWeight);
		}


		// Normalise the calculated velocity
		TargetVelocity.Normalize();

		// Find a wander value make the boid move in a random direction
		if (TargetVelocity.Size() < 1.0f) {
			TargetVelocity += Wander(250, 500, 250);
			TargetVelocity.Normalize();
		}
		// If contain is set to true, calculate the potential containment value so they remain in the map
		if (Manager->ContainBoids) {
			TargetVelocity += (Containment() * Manager->containmentWeight);
		}

		// Normalise the new velocity
		TargetVelocity.Normalize();
	}
	// Return the final calculated velocity
	return TargetVelocity;
}

void ABoid::Update(float DeltaTime, int32 GroupToUpdate)
{
	if (!IsValidLowLevel()) {
		return;
	}

	// Calculate the velocity of the direction to move in
	CalculateVelocity(GroupToUpdate);

	// If wrap is set to true, wrap boids to the opposite side of the map if they leave
	if (Manager->WrapBoids) {
		WrapBoidToOtherSide();
	}

	// Calculate the amount to move
	FVector newForce = TargetVelocity - CurrentVelocity;
	CurrentVelocity += newForce * DeltaTime;

	// Calculate the new position to set the boid to
	FVector location = GetActorLocation();
	location += (CurrentVelocity * (Manager->BoidSpeed * SpeedVariety) * DeltaTime);

	// Calculate the rotation value of the direction moving towards the new position
	FVector Direction = location - GetActorLocation();
	FRotator newRotation = Direction.Rotation();

	// If 'Show Boid Direction' is set to true on the in-game UI, draw a debug line of the boids target direction
	if (Manager->ShowBoidDirection) {
		DrawDebugLine(GetWorld(), location, location + CurrentVelocity * (Manager->BoidSpeed * 0.35f), FColor::Red);
	}
	
	// Update the boids position and rotation with the new values
	SetActorRotation(newRotation);
	SetActorLocation(location);
}

// Shoot Function not included in final version

//void ABoid::Shoot(int32 GroupToUpdate)
//{
//	// If this boid is part of the group being updted
//	if (GroupToUpdate == BoidGroup) {
//		// Initialise variables to be used in the line trace
//		FHitResult Hit;
//		FVector start = GetActorLocation();
//		FVector end = GetActorForwardVector() * 2500;
//		FCollisionQueryParams TraceParams;
//		// Cast line trace to search for enemy ships
//		bool bHit = GetWorld()->LineTraceSingleByChannel(Hit, start, end, ECC_Visibility, TraceParams);
//
//		if (bHit) {
//			// If we hit something, try casting the hit actor to the type 'ABoid'
//			AActor* hitActor = Hit.GetActor();
//			ABoid* hitBoid = Cast<ABoid>(Hit.GetActor());
//			if (hitBoid != nullptr) {
//				// If the cast was successful, and the hit boid is on a different team, fire a lazer
//				if (hitBoid->team != team) {
//					FireBullet();
//				}
//			}
//		}
//	}
//}

// Fire Bullet Function not included in final version

//void ABoid::FireBullet()
//{
//	// Initialise variables to be used when spawning a bullet
//	FVector SpawnLocation = GetActorLocation();
//	FRotator SpawnRotation = GetActorRotation();
//	FActorSpawnParameters SpawnParams;
//	SpawnParams.Owner = this;
//	SpawnParams.Instigator = GetInstigator();
//
//	// Spawn a new bullet
//	ABullet* newBullet = GetWorld()->SpawnActor<ABullet>(SpawnLocation, SpawnRotation, SpawnParams);
//	if (newBullet) {
//		// If the spawn was successful, set the bullets velocity to be the direction this boid is facing
//		FVector FireDirectioin = SpawnRotation.Vector();
//		newBullet->SetForwardDirection(FireDirectioin);
//		// Set the bullets team variable to this boids team variable so that the bullet only hits enemy team mates
//		newBullet->teamShotFrom = team;
//	}
//}

void ABoid::SetMaterial(UMaterialInterface* newMaterial)
{
	// Depending on the model the boid is using, set the correct material element to the new material
	if (boidMeshNumber == 6) {
		SpeedVariety = 1.1f;
		Mesh->SetMaterial(0, newMaterial);
	}
	else if (boidMeshNumber == 0) {
		SpeedVariety = 0.9f;
		Mesh->SetMaterial(2, newMaterial);
	}
	else if (boidMeshNumber == 4 || boidMeshNumber == 5) {
		SpeedVariety = 1.0f;
		Mesh->SetMaterial(1, newMaterial);
	}
	else {
		SpeedVariety = 1.25f;
		Mesh->SetMaterial(3, newMaterial);
	}
}

void ABoid::SetBoidGroup(int32 value)
{
	BoidGroup = value;
}

void ABoid::SetBoidTeam(int32 value)
{
	team = value;
}

int32 ABoid::GetBoidTeam()
{
	return team;
}

