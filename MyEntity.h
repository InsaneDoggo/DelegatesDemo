// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseEntity.h"
#include "GameFramework/Actor.h"
#include "MyEntity.generated.h"

// aka Mushroom
UCLASS(Blueprintable)
class EXPLOREUI_API AMyEntity : public AActor, public IBaseEntity
{
	GENERATED_BODY()

public:
	AMyEntity();

	FOnDespawned* GetOnDespawnedDelegate() override;

	UFUNCTION(BlueprintCallable)
	void DebugTriggerDespawn();
	
protected:
	virtual void BeginPlay() override;
	
	UPROPERTY(BlueprintAssignable)
	FOnDespawned OnDespawned;
};