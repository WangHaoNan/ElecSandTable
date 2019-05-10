// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"


#include "Whole/WholeMgr.h"
#include "GameFramework/GameModeBase.h"
#include "ElecSandTableGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class ELECSANDTABLE_API AElecSandTableGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
		AElecSandTableGameModeBase();
	~AElecSandTableGameModeBase();

private:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaSeconds) override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	WholeMgr m_WholeMgr;
	
	
};
