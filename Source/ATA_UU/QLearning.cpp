// Fill out your copyright notice in the Description page of Project Settings.

#include "QLearning.h"


// Sets default values
AQLearning::AQLearning()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	gamma = 0.8;
	iterations = 10;
}

// Called when the game starts or when spawned
void AQLearning::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AQLearning::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AQLearning:: DoSomething()
{
	
}

