// Fill out your copyright notice in the Description page of Project Settings.

#include "SaveToTXT.h"


// Sets default values
ASaveToTXT::ASaveToTXT()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}



void ASaveToTXT::SaveMatrixToText(TArray<FStateAndActions> test)
{
	FString SaveDirectory = FString("C:/Users/lalai/Documents/Visual Studio 2015/Projects/QLearningAlgorithm/QLearningAlgorithm");
	//C:/Users/lalai/Documents/Visual Studio 2015/Projects/QLearningAlgorithm/QLearningAlgorithm
	//"C:/Users/lalai/Documents/GitHub/Thesis"
	FString FileName = FString("MyFileName.sav");
	bool AllowOverwriting = false;

	IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();

	//filemanager
	IFileManager& FileManager = IFileManager::Get();

	// CreateDirectoryTree returns true if the destination
	// directory existed prior to call or has been created
	// during the call.
	if (PlatformFile.CreateDirectoryTree(*SaveDirectory))
	{
		// Get absolute file path
		FString AbsoluteFilePath = SaveDirectory + "/" + FileName;
		//delete previous content
		FFileHelper::SaveStringToFile("", *AbsoluteFilePath);
		// for each element write to .sav
		for (int i = 0; i < test.Num(); i++)
		{
			FFileHelper::SaveStringToFile(test[i].stateName + "\n", *AbsoluteFilePath, FFileHelper::EEncodingOptions::AutoDetect, &FileManager,EFileWrite::FILEWRITE_Append);
			for (int j = 0; j < test[i].actionArray.Num(); j++)
			{
				FFileHelper::SaveStringToFile(FString::FromInt(test[i].actionArray[j]) + ",", *AbsoluteFilePath, FFileHelper::EEncodingOptions::AutoDetect, &FileManager, EFileWrite::FILEWRITE_Append);
			}
			FFileHelper::SaveStringToFile( "\n", *AbsoluteFilePath, FFileHelper::EEncodingOptions::AutoDetect, &FileManager, EFileWrite::FILEWRITE_Append);
		}
		
	}
}

