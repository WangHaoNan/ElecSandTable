// Fill out your copyright notice in the Description page of Project Settings.

#include "WholeMgr.h"

WholeMgr::WholeMgr()
{
}

WholeMgr::~WholeMgr()
{
}

void WholeMgr::Init()
{
	m_pDataDocking = NewObject<UDataDocking>();
	m_pDataDocking->AddToRoot();
	m_pDataDocking->Init();
	
	m_pEquipmentDataTable = NewObject<UEquipmentDataTable>();
	m_pEquipmentDataTable->AddToRoot();
	m_pEquipmentDataTable->Init();


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
