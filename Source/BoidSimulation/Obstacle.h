// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Obstacle.generated.h"

UCLASS()
class BOIDSIMULATION_API AObstacle : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AObstacle();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Settings")
	class ABoidManager* boidManager;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings")
	UStaticMeshComponent* MeshComponent;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings")
	UStaticMesh* Mesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings")
	float speed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings")
	bool IsSelected;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings")
	bool isActive;

	float originalSpeed = 1250;

	FVector CurrentVelocity = FVector::Zero();

	FVector TargetVelocity = FVector::Zero();

	FVector Containment(float deltaTime);
};
