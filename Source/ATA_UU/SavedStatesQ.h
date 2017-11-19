// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "SavedStatesQ.generated.h"


USTRUCT(BlueprintType)
struct FDoubleArray
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Basic)
	TArray<int32> ArrToAdd;
};

USTRUCT(BlueprintType)
struct FStateAndActions
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Basic)
	TArray<int32> actionArray;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Basic)
	FString stateName;
};

/**
 * 
 */
UCLASS()
class ATA_UU_API USavedStatesQ : public USaveGame
{
	GENERATED_BODY()
	
public:

	/*UPROPERTY(VisibleAnywhere, Category = Basic)
		FString PlayerName;*/

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Basic)
	TArray<FVector> LowPerfLocations;

	//struct for creating double array
	

	//Reward Array
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Basic)
	TArray<FDoubleArray> RewardMatrix;

	//reward array 2
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Basic)
	TArray<FStateAndActions> RewardArrayComplete;
	//USavedStatesQ();
	
	
};
