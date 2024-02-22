// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Bullet.generated.h"

UCLASS()
class BOIDSIMULATION_API ABullet : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABullet();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Components
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Settings")
	class UProjectileMovementComponent* projectileMotion;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings")
	UStaticMeshComponent* MeshComponent;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings")
	UStaticMesh* Mesh;

	// Material
	UMaterial* mat;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings")
	float BulletSpeed = 1000;

	// Inherited by boid shooting this projectile
	void SetForwardDirection(FVector& Direction);
	FVector ForwardDirection = FVector::Zero();
	int32 teamShotFrom = 0;

	// Collision
	UFUNCTION()
	void OnActorBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UParticleSystem* explodeParticles;
};
