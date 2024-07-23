// Fill out your copyright notice in the Description page of Project Settings.


#include "Shell.h"

#include "BaseEntity.h"

AShell::AShell()
{
}

void AShell::TryBindToEntityDelegate(AActor* Entity)
{
	if(!IsValid(Entity))
	{
		return;
	}

	IBaseEntity* BaseEntity = Cast<IBaseEntity>(Entity);
	if(!BaseEntity)
	{
		return;
	}

	BaseEntity->GetOnDespawnedDelegate()->AddDynamic(this, &AShell::OnEntityDespawned);
	UE_LOG(LogTemp, Warning, TEXT("Bind Successful!"));
}

void AShell::OnEntityDespawned(AActor* Entity)
{
	if(!IsValid(Entity))
	{
		return;
	}
	
	UE_LOG(LogTemp, Warning, TEXT("AShell::OnEntityDespawned %s"), *Entity->GetName());
}

void AShell::BeginPlay()
{
	Super::BeginPlay();
}