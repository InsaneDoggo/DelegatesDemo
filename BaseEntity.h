// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseEntity.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDespawned, AActor*, DespawnedEntity);

UINTERFACE()
class EXPLOREUI_API UBaseEntity : public UInterface
{
	GENERATED_BODY()
};

class EXPLOREUI_API IBaseEntity
{
	GENERATED_BODY()

public:
	virtual FOnDespawned* GetOnDespawnedDelegate() = 0;
};