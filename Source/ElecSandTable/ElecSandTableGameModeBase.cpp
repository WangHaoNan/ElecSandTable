// Fill out your copyright notice in the Description page of Project Settings.

#include "ElecSandTableGameModeBase.h"

AElecSandTableGameModeBase::AElecSandTableGameModeBase()
{

}

AElecSandTableGameModeBase::~AElecSandTableGameModeBase()
{
	
}

void AElecSandTableGameModeBase::BeginPlay()
{
	Super::BeginPlay();
	m_WholeMgr.Init();


}

void AElecSandTableGameModeBase::Tick(float DeltaSeconds)
{
	m_WholeMgr.TickTime(DeltaSeconds);

}

void AElecSandTableGameModeBase::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	m_WholeMgr.Finish();


	Super::EndPlay(EndPlayReason);
}
