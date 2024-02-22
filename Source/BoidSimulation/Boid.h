// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Boid.generated.h"

UCLASS()
class BOIDSIMULATION_API ABoid : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABoid();

	FVector CurrentVelocity = FVector::ZeroVector;

	UPROPERTY()
	class ABoidManager* Manager;
	int32 Speed;
	float SpeedVariety;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Calculating velocity
	FVector TargetVelocity = FVector::ZeroVector;

	FVector Seek(FVector Position);
	FVector Flee(FVector Position);

	FVector Wander(float radius, float distance, float jitter);
	FVector WanderDestination = FVector::Zero();

	// Flocking
	FVector Alignment(TArray<ABoid*> Neighbours);
	FVector Cohesion(TArray<ABoid*> Neighbours);
	FVector Seperation(TArray<ABoid*> Neighbours);
	FVector AvoidObstacle(TArray<AActor*> Obstacles);

	// Containment
	FVector Containment();

	// Wrap
	void WrapBoidToOtherSide();

	// General
	UStaticMeshComponent* Mesh;
	UPROPERTY(EditAnywhere, Category = "Settings")
	int32 boidMeshNumber;
	int32 BoidGroup;
	int32 team;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Calculating where to move
	FVector CalculateVelocity(int32 GroupToUpdate);
	void Update(float DeltaTime, int32 GroupToUpdate);

	// Firing Lazers
	void Shoot(int32 GroupToUpdate);
	void FireBullet();

	// General Functions
	void SetMaterial(UMaterialInterface* newMaterial);
	void SetBoidGroup(int32 value);
	void SetBoidTeam(int32 value);
	int32 GetBoidTeam();
};
