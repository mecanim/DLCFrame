// Fill out your copyright notice in the Description page of Project Settings.


#include "DLCsManager.h"
#include "IPlatformFilePak.h"
#include "HAL/PlatformFilemanager.h"

// Sets default values
ADLCsManager::ADLCsManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADLCsManager::BeginPlay()
{
	Super::BeginPlay();

	TArray<FString> mountedPakFiles;
	FPakPlatformFile* CurrentPlatformFile;
	IPlatformFile*  PlatformFileInstance = FPlatformFileManager::Get().GetPlatformFile(TEXT("PakFile"));
	if (PlatformFileInstance)
	{
		CurrentPlatformFile = static_cast<FPakPlatformFile*>(PlatformFileInstance);
		CurrentPlatformFile->GetMountedPakFilenames(mountedPakFiles);
	}

	BuildMenu(mountedPakFiles);
}

// Called every frame
void ADLCsManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

