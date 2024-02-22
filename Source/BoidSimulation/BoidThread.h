// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BoidManager.h"
#include "HAL/Runnable.h"

/**
 * 
 */
class BOIDSIMULATION_API FBoidThread : public FRunnable
{
public:
	FBoidThread(TArray<class ABoid*> BoidGroupToUpdate, int32 Group);

	~FBoidThread();

	bool Init() override;
	uint32 Run() override;
	void Stop() override;
	
	bool bInputReady = false;

	void EnsureCompletion();

private:

	TArray<class ABoid*> BoidsToUpdate;

	int32 GroupToUpdate;

	FRunnableThread* Thread;

	bool bRunThread = false;
};
