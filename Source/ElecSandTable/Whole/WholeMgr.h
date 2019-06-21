// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DataDock/DataDocking.h"
#include "DataTable/EquipmentDataTable.h"

/**
 * 
 */
class ELECSANDTABLE_API WholeMgr
{
public:
	WholeMgr();
	~WholeMgr();


	void Init();
	void TickTime(float DeltaSecond);
	void Finish();

	UDataDocking *m_pDataDocking;
	UEquipmentDataTable* m_pEquipmentDataTable;


};
