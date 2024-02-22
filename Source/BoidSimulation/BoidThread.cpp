// Fill out your copyright notice in the Description page of Project Settings.


#include "BoidThread.h"
#include "Boid.h"

#pragma region Main Thread Code

FBoidThread::FBoidThread(TArray<class ABoid*> BoidGroupToUpdate, int32 Group)
{
	// Initialise variables passed into constructor
	BoidsToUpdate = BoidGroupToUpdate;
	GroupToUpdate = Group;
	// Start thread
	bRunThread = true;
	bInputReady = true;
	Thread = FRunnableThread::Create(this, TEXT("Calculate Boid Directiions"));
}

FBoidThread::~FBoidThread()
{
	// Destroy Thread in destructor
	if (Thread) {
		Thread->Kill();
		delete Thread;
	}
}

#pragma endregion

bool FBoidThread::Init()
{
	// Log that the thread has started
	//UE_LOG(LogTemp, Warning, TEXT("Calculating Boid Directions Thread Started"));

	return true;
}

uint32 FBoidThread::Run()
{
	// Log that the thread has running
	//UE_LOG(LogTemp, Warning, TEXT("Calculating Boid Directions!"));
	while (bRunThread) {
		if (bInputReady) {
			// For each boid in the group of boids to update, calculate their velocities
			for (ABoid* boid : BoidsToUpdate) {
				boid->CalculateVelocity(GroupToUpdate);
			}
			// When finished, end the loop
			bInputReady = false;

			FPlatformProcess::Sleep(0.01f);
		}
	}

	return 0;
}

void FBoidThread::Stop()
{
	// Log that the thread has ended
	//UE_LOG(LogTemp, Warning, TEXT("Calculating Boid Direction Thread Ending!"));
	bRunThread = false;
}

void FBoidThread::EnsureCompletion() {
	Stop();
	Thread->WaitForCompletion();
}
