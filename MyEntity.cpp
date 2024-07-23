// Fill out your copyright notice in the Description page of Project Settings.

#include "MyEntity.h"

AMyEntity::AMyEntity()
{
}

void AMyEntity::BeginPlay()
{
	Super::BeginPlay();
}

FOnDespawned* AMyEntity::GetOnDespawnedDelegate()
{
	return &OnDespawned;
}

void AMyEntity::DebugTriggerDespawn()
{
	UE_LOG(LogTemp, Warning, TEXT("AMyEntity::DebugTriggerDespawn"));
	
	OnDespawned.Broadcast(this);
}