// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BoidManager.generated.h"

UCLASS()
class BOIDSIMULATION_API ABoidManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABoidManager();

	// Set up Variables
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "General Settings")
	UStaticMesh* boidMesh;

	UPROPERTY(Config, EditAnywhere, BlueprintReadWrite, Category = "General Settings")
	int spawnCount = 1000;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "General Settings")
	int32 spawnRadius = 850;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "General Settings")
	float OriginalBoidSpeed = 1000;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "General Settings")	
	float BoidSpeed = 1000;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "General Settings")
	int NeighbourRadius = 450;

	// Flocking Behaviour Variables
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Boid Settings")
	float SeperationWeight = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Boid Settings")
	float CohesionWeight = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Boid Settings")
	float AlignmentWeight = 1;

	// Containment 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Boid Settings")
	int32 containmentRadius = 2000;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Boid Settings")
	float containmentWeight = 1;

	// Materials of the boids
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Boid Settings")
	UMaterialInterface* team1Mat;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Boid Settings")
	UMaterialInterface* team2Mat;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Boid Settings")
	UMaterialInterface* team3Mat;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Boid Settings")
	UMaterialInterface* team4Mat;

	// Boid variables
	USceneComponent* transform;

	UPROPERTY()
	TArray<class ABoid*> myBoids;

	UPROPERTY()
	TArray<class ABoid*> BoidsTeam1;
	UPROPERTY()
	TArray<class ABoid*> BoidsTeam2;
	UPROPERTY()
	TArray<class ABoid*> BoidsTeam3;
	UPROPERTY()
	TArray<class ABoid*> BoidsTeam4;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "General Settings")
	TArray<class AActor*> obstacles;
	TArray<FVector> ObstaclePositions;

	int32 BoidGroupToUpdate = 0;

	// OctTree
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Oct Tree Settings")
	int32 RootSize = 2000;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Oct Tree Settings")
	class ABoidOctTree* OctTree;

	// User Interface Variables
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI Settings")
	bool ShowSpawnRadius = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI Settings")
	bool ShowMapSize = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI Settings")
	bool Teams = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI Settings")
	bool WrapBoids = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI Settings")
	bool ContainBoids = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI Settings")
	bool ShowBoidDirection = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI Settings")
	bool ShowBoidNeighbourRadius = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI Settings")
	bool ShowOctTree = false;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	TArray<class ABoid*> GetBoidNeighbourhood(ABoid* thisBoid);
	TArray<class ABoid*> GetBoidNearbyTeam(ABoid* thisBoid, int32 BoidTeam);
	//TArray<class ABoid*> GetBoidNeighbourhood(ABoid* thisBoid, int32 BoidTeam);

	TArray<AActor*> GetNearbyObstacles(ABoid* thisBoid);

	UFUNCTION(BlueprintCallable)
	void GenerateBoids();
};
