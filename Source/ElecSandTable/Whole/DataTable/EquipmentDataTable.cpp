// Fill out your copyright notice in the Description page of Project Settings.

#include "EquipmentDataTable.h"

void UEquipmentDataTable::Init()
{
	TArray<FEquipmentTableStruct*> aEquipmentStruct;
	UDataTable* datatable = LoadObject<UDataTable>(NULL, TEXT(""));
	datatable->GetAllRows<FEquipmentTableStruct>(TEXT("EquipmentTable Csv"), aEquipmentStruct);

	for (int i=0;i<aEquipmentStruct.Num();++i)
	{
		m_mEquipmentMap.Add(aEquipmentStruct[i]->EquipmentID, aEquipmentStruct[i]->EquipmentPath);
	}
	
	//m_mEquipmentMap.Add()

}

void UEquipmentDataTable::Finish()
{
}
