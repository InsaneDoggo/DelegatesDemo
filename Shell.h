// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Shell.generated.h"

UCLASS(Blueprintable)
class EXPLOREUI_API AShell : public AActor
{
	GENERATED_BODY()

public:
	AShell();

	UFUNCTION(BlueprintCallable)
	void TryBindToEntityDelegate(AActor* Entity);
	
	UFUNCTION()
	void OnEntityDespawned(AActor* Entity);

protected:
	virtual void BeginPlay() override;
};