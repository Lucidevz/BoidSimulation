// Fill out your copyright notice in the Description page of Project Settings.


#include "CameraRotator.h"


// Sets default values for this component's properties
UCameraRotator::UCameraRotator()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UCameraRotator::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UCameraRotator::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UCameraRotator::RotateHorizontal(float DeltaTime, int multiplier)
{
	FRotator name = FRotator(MyTransform.GetRotation());
	int yawRot = name.Yaw;
	yawRot += rotateSpeed * multiplier * DeltaTime;
	name.Yaw = yawRot;
	MyTransform.SetRotation(FQuat(name));
}

void UCameraRotator::RotateVertical(float DeltaTime, int multiplier)
{
	FRotator name = FRotator(MyTransform.GetRotation());
	int yawPitch = name.Pitch;
	yawPitch += rotateSpeed * multiplier * DeltaTime;
	name.Pitch = yawPitch;
	MyTransform.SetRotation(FQuat(name));
}

