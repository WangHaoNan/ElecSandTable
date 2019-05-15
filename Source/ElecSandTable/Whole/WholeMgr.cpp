// Fill out your copyright notice in the Description page of Project Settings.

#include "WholeMgr.h"

WholeMgr::WholeMgr()
{
}

WholeMgr::~WholeMgr()
{
}

void WholeMgr::Begin()
{
	m_pDataDocking = NewObject<UDataDocking>();
	//auto tast = new FAutoDeleteAsyncTask<>

	m_pDataDocking->AddToRoot();
	m_pDataDocking->Begin();
	



}

void WholeMgr::TickTime(float DeltaSecond)
{
	m_pDataDocking->TickTime(DeltaSecond);
}

void WholeMgr::Finish()
{

	m_pDataDocking->Finish();
	m_pDataDocking->RemoveFromRoot();

}
