// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine/DataTable.h"
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EquipmentDataTable.generated.h"

USTRUCT(Blueprintable)
struct FEquipmentTableStruct:public FTableRowBase
{
	GENERATED_USTRUCT_BODY()
public:
	FEquipmentTableStruct() :EquipmentID(""), EquipmentPath("")
	{
	}
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "EquipmentTable")
		FString EquipmentID;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "EquipmentTable")
		FString EquipmentPath;

};







UCLASS()
class ELECSANDTABLE_API UEquipmentDataTable : public UObject
{
	GENERATED_BODY()

public:
	void Init();
	void Finish();

private:
	TMap<FString, FString> m_mEquipmentMap;

};
