// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine/DataTable.h"
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EquipmentDataTable.generated.h"

USTRUCT(Blueprintable)
struct FEquipmentTable:public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

		FString EquipmentID;
		FString EquipmentPath;

};


struct EquiTable
{
	FString m_EquipmentID;
	FString m_EquipmentPath;
};
EquiTable m_EquiTable;





UCLASS()
class ELECSANDTABLE_API UEquipmentDataTable : public UObject
{
	GENERATED_BODY()

		void Begin();
	void Finish();



};
