// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "SavedStatesQ.generated.h"

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

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Basic)
	int32 TestInt;
	//USavedStatesQ();
	
	
};
