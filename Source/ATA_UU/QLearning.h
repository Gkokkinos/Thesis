// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "QLearning.generated.h"

UCLASS()
class ATA_UU_API AQLearning : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AQLearning();

	//generic variables
	UPROPERTY()
	float gamma;
	int iterations;
	int qSize;


	//struct for creating double array
	//USTRUCT()
	//struct DoubleArray
	//{
	//	TArray<int32> ArrToAdd;
	//};

	////Q Array
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Basic)
	//TArray<DoubleArray> Q;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
