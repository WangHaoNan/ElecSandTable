// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "WholeStateObj.generated.h"

//��Ŀ��ʼ������
USTRUCT()
struct FEquipmentBaseInfo
{
	GENERATED_BODY()
	UPROPERTY()
	FString SoleID;//ΨһID
	UPROPERTY()
	FString EquipmentType;//�豸����
	UPROPERTY()
	double Longitude;//����
	UPROPERTY()
	double Latitude;//γ��
};

//����ʱ��ʾ����
//�豸��Ϣ
USTRUCT()
struct FEquipmentDetailInfo
{
	GENERATED_BODY()

	UPROPERTY()
	FString UpperLineEquipment;//�����豸
	UPROPERTY()
	FString SubordinateLine;//����·��
	UPROPERTY()
	FString EquipmentName;//�豸����
	UPROPERTY()
	FString VoltageValue;//��ѹֵ
	UPROPERTY()
	FString EquipmentAbbreviation;//�豸���
	UPROPERTY()
	double  Longitude;//����
	UPROPERTY()
	double  Latitude;//γ��
	UPROPERTY()
	float   Altitude;//����
	UPROPERTY()
	FString LocationMethod;//��λ��ʽ
	UPROPERTY()
	FString SubordinateCity;//��������
	UPROPERTY()
	FString DevOpsCompany;//��ά��λ
	UPROPERTY()
	FString MaintainTeam;//��ά����
	UPROPERTY()
	FString WorkingNum;//���б��
	UPROPERTY()
	FString PoleMountingNature;//�˴�����
	UPROPERTY()
	FString PoleMountingMaterial;//�˴����
	UPROPERTY()
	FString EquipmentType;//�豸����
	UPROPERTY()
	FString PoleHight;//�˸�
	UPROPERTY()
	FString BaseForm;//������ʽ
	UPROPERTY()
	FString PoleArmMaterial;//�ᵣ����
	UPROPERTY()
	FString WhetherRuralNetwork;//�Ƿ�ũ��
	UPROPERTY()
	FString WhetherSubstituteMaintaining;//�Ƿ��ά

};
//�豸������Ա��Ϣ
USTRUCT()
struct  FManagerInfo
{
	GENERATED_BODY()
	UPROPERTY()
	FString Company;//��˾
	UPROPERTY()
	FString Station;//��λ
	UPROPERTY()
	FString PhoneNum;//�绰


};


//�豸������ʷ��Ϣ
USTRUCT()
struct FHistoryInfo
{
	GENERATED_BODY()

};

//POST Struct
USTRUCT()
struct FInitData
{
	GENERATED_BODY()
	FString InitBegin;

};




UCLASS()
class ELECSANDTABLE_API UWholeStateObj : public UObject
{
	GENERATED_BODY()
	
	
	
	
};
