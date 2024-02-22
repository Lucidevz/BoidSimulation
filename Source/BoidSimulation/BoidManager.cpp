// Fill out your copyright notice in the Description page of Project Settings.


#include "BoidManager.h"
#include "Boid.h"
#include "Kismet/KismetSystemLibrary.h"
#include "BoidOctTree.h"
#include "DrawDebugHelpers.h"
#include "BoidThread.h"
#include "Obstacle.h"

// Sets default values
ABoidManager::ABoidManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	// Set up root component
	transform = CreateDefaultSubobject<USceneComponent>("RootSceneComponent");
	this->SetRootComponent(transform);
}

// Called when the game starts or when spawned
void ABoidManager::BeginPlay()
{
	Super::BeginPlay();
	
	OctTree->SetUpOctTreeNode(FVector::Zero(), 2500, 15, true, this);

	GenerateBoids();
}

// Called every frame
void ABoidManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Alternate between updating 2 groups of boids every other frame (optimisation)
	BoidGroupToUpdate++;
	if (BoidGroupToUpdate > 1) {
		BoidGroupToUpdate = 0;
	}

	// ---------- MultiThreading ---------- //

	// Create 4 threads to calculate the new velocities for each boid team individually
	// FBoidThread* boidThread1 = new FBoidThread(BoidsTeam1, BoidGroupToUpdate);
	// FBoidThread* boidThread2 = new FBoidThread(BoidsTeam2, BoidGroupToUpdate);
	// FBoidThread* boidThread3 = new FBoidThread(BoidsTeam3, BoidGroupToUpdate);
	// FBoidThread* boidThread4 = new FBoidThread(BoidsTeam4, BoidGroupToUpdate);

	// Wait for the threads to complete
	// boidThread1->EnsureCompletion();
	// boidThread2->EnsureCompletion();
	// boidThread3->EnsureCompletion();
	// boidThread4->EnsureCompletion();

	// ---------- ------------- ---------- //

	OctTree->ClearOctTree();
	//FActorSpawnParameters SpawnParams;
	//OctTree = GetWorld()->SpawnActor<ABoidOctTree>(FVector::Zero(), FRotator::ZeroRotator, SpawnParams);
	OctTree->ReActivateOctTreeNode();
	OctTree->SetUpOctTreeNode(FVector::Zero(), 2500, 15, true, this);

	// Loop through all boids and add them to the oct tree
	for (ABoid* boid : myBoids) {
		if (boid == nullptr || !boid) {
			continue;
		}
		else {
			OctTree->InsertBoid(boid);
		}
	}

	// Call the Update function on all boids
	for (ABoid* boid : myBoids) {
		if (boid == nullptr || !boid) {
			continue;
		} else {
			boid->Update(DeltaTime, BoidGroupToUpdate);
		}
	}
	// If Show Spawn Radius is set to true on the in-game UI, draw a debug sphere of the spawn size
	if (ShowSpawnRadius) {
		DrawDebugSphere(GetWorld(), FVector(0, 0, 0), spawnRadius, 20, FColor::Green);
	}
	// If Show Map Size is set to true on the in-game UI, draw a debug sphere of the map size
	if (ShowMapSize) {
		DrawDebugSphere(GetWorld(), FVector(0, 0, 0), containmentRadius, 20, FColor::Yellow);
	}
}

TArray<class ABoid*> ABoidManager::GetBoidNeighbourhood(ABoid* thisBoid)
{
	FVector BoidPosition = thisBoid->GetActorLocation();
	TArray<ABoid*> boidsToSearch;
	if (OctTree != nullptr){
		boidsToSearch = OctTree->Query(BoidPosition, NeighbourRadius, 0);
	}

	
	// Initialise local variable to return
	TArray<class ABoid*> ReturnBoids;

	if (boidsToSearch.Num() > 0) {
		// For each boid, calculate if all other boids close enough to be a neighbour
		for (ABoid* boid : boidsToSearch) {
			// Don't calculate if the boid is this boid, or it isn't a boid
			if (boid == thisBoid || !boid) {
				continue;
			}
			// Get the distace from this boid to the current boid, and add to the neighbours list if
			// distance is less than the neighbour radius
			FVector thisBoidLocation = FVector::Zero();
			FVector otherBoidLocation = FVector::Zero();
			if (thisBoid != nullptr) {
				thisBoidLocation = thisBoid->GetActorLocation();
			}
			if (boid != nullptr) {
				otherBoidLocation = boid->GetActorLocation();
			}
			float aDistance = (otherBoidLocation - thisBoidLocation).Size();
			if (aDistance < NeighbourRadius) {
				ReturnBoids.Add(boid);
			}
		}
	}
	return ReturnBoids;
}

TArray<class ABoid*> ABoidManager::GetBoidNearbyTeam(ABoid* thisBoid, int32 thisBoidTeam)
{
	FVector BoidPosition = thisBoid->GetActorLocation();
	TArray<ABoid*> boidsToSearch = OctTree->Query(BoidPosition, NeighbourRadius, thisBoidTeam);

	// Initialise local variable to return
	TArray<class ABoid*> ReturnBoids;

	if (boidsToSearch.Num() > 0) {
		// For each boid in the boids to search, calculate if that boid is close enough to be a neighbour
		for (ABoid* boid : boidsToSearch) {
			// Don't calculate if the boid is this boid, or it isn't a boid
			if (boid == thisBoid || !boid) {
				continue;
			}
			// Get the distace from this boid to the current boid, and add to the neighbours list if
			// distance is less than the neighbour radius
			float aDistance = (boid->GetActorLocation() - thisBoid->GetActorLocation()).Size();
			if (aDistance < NeighbourRadius) {
				ReturnBoids.Add(boid);
			}
		}
	}
	// Return the found boids
	return ReturnBoids;
}

TArray<AActor*> ABoidManager::GetNearbyObstacles(ABoid* thisBoid)
{
	// Initialise local variable to return
	TArray<AActor*> ReturnObstacles;
	// For each obstacle, calculate if it is close enough to be avoided
	for (AActor* obstacle : obstacles) {
		// Get the distace from this boid to the obstacle, and add to the obstacles list if
		// distance is less than double the neighbour radius (acount for obstacles being larger)
		float aDistance = (obstacle->GetActorLocation() - thisBoid->GetActorLocation()).Size();
		if (aDistance < (NeighbourRadius * 2)) {
			ReturnObstacles.Add(obstacle);
		}
	}
	// Return the found obstacles
	return ReturnObstacles;
}

void ABoidManager::GenerateBoids()
{
	// Clear the boids from the all boids list, and each team list
	for (int i = 0; i < myBoids.Num(); i++) {
		if (myBoids[i] != NULL) {
			myBoids[i]->Destroy();
		}
	}
	for (int i = 0; i < BoidsTeam1.Num(); i++) {
		if (BoidsTeam1[i] != NULL) {
			BoidsTeam1[i]->Destroy();
		}
	}
	for (int i = 0; i < BoidsTeam2.Num(); i++) {
		if (BoidsTeam2[i] != NULL) {
			BoidsTeam2[i]->Destroy();
		}
	}
	for (int i = 0; i < BoidsTeam3.Num(); i++) {
		if (BoidsTeam3[i] != NULL) {
			BoidsTeam3[i]->Destroy();
		}
	}
	for (int i = 0; i < BoidsTeam4.Num(); i++) {
		if (BoidsTeam4[i] != NULL) {
			BoidsTeam4[i]->Destroy();
		}
	}

	// Empty all the boid arrays
	myBoids.Empty();
	BoidsTeam1.Empty();
	BoidsTeam2.Empty();
	BoidsTeam3.Empty();
	BoidsTeam4.Empty();

	// Initialise team number to be assigned to each boid
	int32 TeamNumber = 0;
	// Spawn the desired amount of boids into the scene
	for (int i = 0; i < spawnCount; i++) {
		// Initialise spawning variables
		FVector SpawnLocation = (FMath::VRand() * FMath::RandRange(0, spawnRadius)) + GetActorLocation();
		FRotator SpawnRotation = GetActorRotation();
		// Spanw boid into the world, and add it to boids list
		ABoid* newBoid = GetWorld()->SpawnActor<ABoid>(SpawnLocation, SpawnRotation);
		myBoids.Add(newBoid);
		// Initialise variables on the new boid, and assign it to be either in 
		// group 0 or 1 (used to alternate between when updating the boids)
		newBoid->Manager = this;
		//newBoid->Speed = BoidSpeed;
		if (i % 2 == 0) {
			newBoid->SetBoidGroup(0);
		}
		else {
			newBoid->SetBoidGroup(1);
		}

		// Set team number, and wrap it back down to 1 if it exceeds the max amount of teams
		TeamNumber++;
		if (TeamNumber > 4) {
			TeamNumber = 1;
		}

		// Add boids to their corresponding team list, and assign the correct team color as their material
		newBoid->SetBoidTeam(TeamNumber);
		if (TeamNumber == 1) {
			BoidsTeam1.Add(newBoid);
			newBoid->SetMaterial(team1Mat);
		} else if (TeamNumber == 2) {
			BoidsTeam2.Add(newBoid);
			newBoid->SetMaterial(team2Mat);
		} else if (TeamNumber == 3) {
			BoidsTeam3.Add(newBoid);
			newBoid->SetMaterial(team3Mat);
		} else {
			BoidsTeam4.Add(newBoid);
			newBoid->SetMaterial(team4Mat);
		}
	}
}

