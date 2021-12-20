// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DLCsManager.generated.h"


/**
 * Available DLC manageer
 * Searches installed DLC and informs UI about that
 */
UCLASS()
class DLCFRAME_API ADLCsManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADLCsManager();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	//
	UFUNCTION(BlueprintImplementableEvent)
	void BuildMenu(const TArray<FString>& DLCNames);
};
