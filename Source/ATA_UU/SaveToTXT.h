// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FileHelper.h"
#include "PlatformFilemanager.h"
#include "SavedStatesQ.h"
#include "GameFramework/Actor.h"
#include "SaveToTXT.generated.h"

UCLASS()
class ATA_UU_API ASaveToTXT : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASaveToTXT();

protected:
	// Called when the game starts or when spawned
	

public:	
	// Called every frame
	

	UFUNCTION(BlueprintCallable, Category = "Export")
	static void SaveMatrixToText(TArray<FStateAndActions> test);
	
};
