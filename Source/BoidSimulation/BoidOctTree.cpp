// Fill out your copyright notice in the Description page of Project Settings.


#include "BoidOctTree.h"
#include "Boid.h"
#include "BoidManager.h"
#include "DrawDebugHelpers.h"

// Sets default values
ABoidOctTree::ABoidOctTree()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SceneComp = CreateDefaultSubobject<USceneComponent>(TEXT("Scene Component"));
	SetRootComponent(SceneComp);

}

// Called when the game starts or when spawned
void ABoidOctTree::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABoidOctTree::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (ready && Manager != nullptr) {
		if (Manager->ShowOctTree) {
			DrawDebugBox(GetWorld(), Position, FVector(Size, Size, Size), FColor::Cyan, false, -1.0f, 0);
		}
	}
}

void ABoidOctTree::SetUpOctTreeNode(FVector OctTreePosition, float OctTreeSize, int32 OctTreeCapacity, bool isRootNode, ABoidManager* boidManager)
{
	Position = OctTreePosition;
	Size = OctTreeSize;
	Capacity = OctTreeCapacity;
	rootNode = isRootNode;
	Manager = boidManager;

	SetActorLocation(OctTreePosition);
	ready = true;
}

bool ABoidOctTree::InsertBoid(ABoid* boid)
{
	if (ready) {
		FVector BoidPosition = boid->GetActorLocation();
		bool BoidInside = BoidWithinNodePosition(BoidPosition);
		if (!BoidInside) {
			return false;
		}

		if (boidsInSection.Num() < Capacity) {
			boidsInSection.Add(boid);
			return true;
		}
		else {
			// If this node has no more room for boids:
			// If this node hasn't subdivided yet, then do so, otherwise carry one
			if (!hasDivided) {
				Subdivide();
				hasDivided = true;
			}
			else {
				if (childNodesDeactivated) {
					ReActivateOctTreeNodeChildren();
				}
			}

			// Insert the point into the correct node
			if (FrontTopLeft->InsertBoid(boid)) { return true; }
			else if (FrontTopRight->InsertBoid(boid)) { return true; }
			else if (FrontBottomRight->InsertBoid(boid)) { return true; }
			else if (FrontBottomLeft->InsertBoid(boid)) { return true; }

			else if (BackTopLeft->InsertBoid(boid)) { return true; }
			else if (BackTopRight->InsertBoid(boid)) { return true; }
			else if (BackBottomRight->InsertBoid(boid)) { return true; }
			else if (BackBottomLeft->InsertBoid(boid)) { return true; }
		}
	}
	return false;
}

void ABoidOctTree::Subdivide()
{
	// Set up local variables to use when creating 8 child nodes
	float NewSize = Size * 0.5f;
	int32 X = GetActorLocation().X;
	int32 Y = GetActorLocation().Y;
	int32 Z = GetActorLocation().Z;
	FVector NewPosition = FVector(X, Y, Z);
	FActorSpawnParameters SpawnParams;

	// Create front 4 oct tree nodes
	// Front TOP LEFT Node
	NewPosition = FVector(X - NewSize, Y - NewSize, Z + NewSize);
	FrontTopLeft = GetWorld()->SpawnActor<ABoidOctTree>(NewPosition, FRotator::ZeroRotator, SpawnParams);
	FrontTopLeft->SetUpOctTreeNode(NewPosition, NewSize, Capacity, false, Manager);

	// Front TOP RIGHT Node
	NewPosition = FVector(X - NewSize, Y + NewSize, Z + NewSize);
	FrontTopRight = GetWorld()->SpawnActor<ABoidOctTree>(NewPosition, FRotator::ZeroRotator, SpawnParams);
	FrontTopRight->SetUpOctTreeNode(NewPosition, NewSize, Capacity, false, Manager);

	// Front BOTTOM LEFT Node
	NewPosition = FVector(X - NewSize, Y - NewSize, Z - NewSize);
	FrontBottomLeft = GetWorld()->SpawnActor<ABoidOctTree>(NewPosition, FRotator::ZeroRotator, SpawnParams);
	FrontBottomLeft->SetUpOctTreeNode(NewPosition, NewSize, Capacity, false, Manager);

	// Front BOTTOM RIGHT Node
	NewPosition = FVector(X - NewSize, Y + NewSize, Z - NewSize);
	FrontBottomRight = GetWorld()->SpawnActor<ABoidOctTree>(NewPosition, FRotator::ZeroRotator, SpawnParams);
	FrontBottomRight->SetUpOctTreeNode(NewPosition, NewSize, Capacity, false, Manager);

	// Create back 4 oct tree nodes
	// Back TOP LEFT Node
	NewPosition = FVector(X + NewSize, Y - NewSize, Z + NewSize);
	BackTopLeft = GetWorld()->SpawnActor<ABoidOctTree>(NewPosition, FRotator::ZeroRotator, SpawnParams);
	BackTopLeft->SetUpOctTreeNode(NewPosition, NewSize, Capacity, false, Manager);

	// Back TOP RIGHT Node
	NewPosition = FVector(X + NewSize, Y + NewSize, Z + NewSize);
	BackTopRight = GetWorld()->SpawnActor<ABoidOctTree>(NewPosition, FRotator::ZeroRotator, SpawnParams);
	BackTopRight->SetUpOctTreeNode(NewPosition, NewSize, Capacity, false, Manager);

	// Back BOTTOM LEFT Node
	NewPosition = FVector(X + NewSize, Y - NewSize, Z - NewSize);
	BackBottomLeft = GetWorld()->SpawnActor<ABoidOctTree>(NewPosition, FRotator::ZeroRotator, SpawnParams);
	BackBottomLeft->SetUpOctTreeNode(NewPosition, NewSize, Capacity, false, Manager);

	// Back BOTTOM RIGHT Node
	NewPosition = FVector(X + NewSize, Y + NewSize, Z - NewSize);
	BackBottomRight = GetWorld()->SpawnActor<ABoidOctTree>(NewPosition, FRotator::ZeroRotator, SpawnParams);
	BackBottomRight->SetUpOctTreeNode(NewPosition, NewSize, Capacity, false, Manager);
}

bool ABoidOctTree::Intersect(FVector BoidPosition, int32 Radius)
{
	// Initialise local variables to be used in conditional check
	int32 thisX = GetActorLocation().X;
	int32 thisY = GetActorLocation().Y;
	int32 thisZ = GetActorLocation().Z;
	//float HalfSize = Size * 0.5f;

	// If this node intersects with	the queried boids neighbour raidus, return true
	if ((BoidPosition.X - Radius > thisX - Size) || (BoidPosition.X + Radius < thisX + Size) ||
		(BoidPosition.Y - Radius > thisY - Size) || (BoidPosition.Y + Radius < thisY + Size) ||
		(BoidPosition.Z - Radius > thisZ - Size) || (BoidPosition.Z + Radius < thisZ + Size)) {
			return true;
	}

	// If this node is not within the queried boids neighbour raidus, return false
	return false;
}

TArray<ABoid*> ABoidOctTree::Query(FVector position, int32 Radius, int32 Team)
{
	TArray<ABoid*> foundBoids;
	foundBoids.Empty();

	// Check if this node intersects the boids neighbour range
	if (Intersect(position, Radius)) {
		//UE_LOG(LogTemp, Warning, TEXT("Boid within Radius"));
		for (ABoid* boid : boidsInSection) {
			//UE_LOG(LogTemp, Warning, TEXT("Should be adding boid now"));
			if (Team == 0) {
				foundBoids.Add(boid);
				//UE_LOG(LogTemp, Warning, TEXT("Adding Boid"));
			}
			else if (Team < 5) {
				int32 otherBoidTeam = boid->GetBoidTeam();
				if (otherBoidTeam == Team) {
					//UE_LOG(LogTemp, Warning, TEXT("Adding Team member"));
					foundBoids.Add(boid);
				}
			}
		}
		if (hasDivided) {
			// If this node has child nodes, add any boids that are part of those children
			// Search front nodes 
			foundBoids.Append(FrontTopLeft->Query(position, Radius, Team));
			foundBoids.Append(FrontTopRight->Query(position, Radius, Team));
			foundBoids.Append(FrontBottomLeft->Query(position, Radius, Team));
			foundBoids.Append(FrontBottomRight->Query(position, Radius, Team));
			// Search bottom nodes
			foundBoids.Append(BackTopLeft->Query(position, Radius, Team));
			foundBoids.Append(BackTopRight->Query(position, Radius, Team));
			foundBoids.Append(BackBottomLeft->Query(position, Radius, Team));
			foundBoids.Append(BackBottomRight->Query(position, Radius, Team));
		}
	}

	return foundBoids;
}

bool ABoidOctTree::BoidWithinNodePosition(FVector BoidPos)
{
	// Caching variables to be usd in calculation
	int32 X = GetActorLocation().X;
	int32 Y = GetActorLocation().Y;
	int32 Z = GetActorLocation().Z;
	float HalfSize = Size * 0.5f;

	// If the boids X, Y and Z co-ordinates are within the X, Y and Z bounds of this node
	if (BoidPos.X >= (X - Size) && BoidPos.X <= (X + Size) &&
		BoidPos.Y >= (Y - Size) && BoidPos.Y <= (Y + Size) &&
		BoidPos.Z >= (Z - Size) && BoidPos.Z <= (Z + Size)) {
		return true;
	}
	// If the boids position is outside of this node, then return false
	return false;
}

void ABoidOctTree::ClearOctTree()
{
	if (hasDivided) {
		// If this node has child nodes, add any boids that are part of those children
		// Search front nodes 
		FrontTopLeft->ClearOctTree();
		FrontTopRight->ClearOctTree();
		FrontBottomLeft->ClearOctTree();
		FrontBottomRight->ClearOctTree();
		// Search bottom nodes
		BackTopLeft->ClearOctTree();
		BackTopRight->ClearOctTree();
		BackBottomLeft->ClearOctTree();
		BackBottomRight->ClearOctTree();
		childNodesDeactivated = true;
	}

	boidsInSection.Empty();
	DeActivateOctTreeNode();
}

void ABoidOctTree::DeActivateOctTreeNode() {
	if (!rootNode) {
		boidsInSection.Empty();
		ready = false;
		PrimaryActorTick.bCanEverTick = false;
	}
}

void ABoidOctTree::ReActivateOctTreeNode() {
	boidsInSection.Empty();
	ready = true;
	PrimaryActorTick.bCanEverTick = true;
}

void ABoidOctTree::ReActivateOctTreeNodeChildren() {
	// Search front nodes 
	FrontTopLeft->ReActivateOctTreeNode();
	FrontTopRight->ReActivateOctTreeNode();
	FrontBottomLeft->ReActivateOctTreeNode();
	FrontBottomRight->ReActivateOctTreeNode();
	// Search bottom nodes
	BackTopLeft->ReActivateOctTreeNode();
	BackTopRight->ReActivateOctTreeNode();
	BackBottomLeft->ReActivateOctTreeNode();
	BackBottomRight->ReActivateOctTreeNode();
	childNodesDeactivated = false;
}

