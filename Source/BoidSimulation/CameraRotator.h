// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CameraRotator.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BOIDSIMULATION_API UCameraRotator : public UActorComponent
{
	GENERATED_BODY()

	class UInputMappingContext;

public:	
	// Sets default values for this component's properties
	UCameraRotator();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "EnhancedInput")
	UInputMappingContext* InputMapping;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings")
	FTransform MyTransform;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings")
	int32 rotateSpeed;

	int32 VerticalRotationClamp;

	UFUNCTION(BlueprintCallable)
	void RotateHorizontal(float DeltaTime, int multiplier);

	UFUNCTION(BlueprintCallable)
	void RotateVertical(float DeltaTime, int multiplier);
};
