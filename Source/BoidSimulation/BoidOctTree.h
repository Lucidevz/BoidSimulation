// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BoidOctTree.generated.h"

UCLASS()
class BOIDSIMULATION_API ABoidOctTree : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABoidOctTree();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	USceneComponent* SceneComp;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Set up variables
	FVector Position = FVector::Zero();
	float Size = 2000;
	int32 Capacity = 20;
	bool ready = false;
	bool rootNode = false;
	UPROPERTY()
	class ABoidManager* Manager;

	// Boids in this Oct Tree node
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Settings");
	TArray<class ABoid*> boidsInSection;

	// Child Oct Tree node
	// Font 4
	UPROPERTY()
	class ABoidOctTree* FrontTopLeft;
	UPROPERTY()
	class ABoidOctTree* FrontTopRight;
	UPROPERTY()
	class ABoidOctTree* FrontBottomLeft;
	UPROPERTY()
	class ABoidOctTree* FrontBottomRight;
	// Back 4	 
	UPROPERTY()
	class ABoidOctTree* BackTopLeft;
	UPROPERTY()
	class ABoidOctTree* BackTopRight;
	UPROPERTY()
	class ABoidOctTree* BackBottomLeft;
	UPROPERTY()
	class ABoidOctTree* BackBottomRight;

	bool hasDivided;
	bool childNodesDeactivated = false;

	// Functions
	void SetUpOctTreeNode(FVector OctTreePosition, float OctTreeSize, int32 OctTreeCapacity, bool isRootNode, ABoidManager* boidManager);
	bool InsertBoid(ABoid* boid);
	void Subdivide();
	bool Intersect(FVector position, int32 Radius);
	TArray<ABoid*> Query(FVector position, int32 Radius, int32 Team);
	bool BoidWithinNodePosition(FVector BoidPos);
	void ClearOctTree();
	void DeActivateOctTreeNode();
	void ReActivateOctTreeNode();
	void ReActivateOctTreeNodeChildren();
};
