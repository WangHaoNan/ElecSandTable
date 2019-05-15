// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "WholeStateObj.generated.h"

//��Ŀ��ʼ������
USTRUCT()
struct FDXGBaseInfo
{
	GENERATED_BODY()
	FString SoleID;//ΨһID
	FString EquipmentType;//�豸����
	double Longitude;//����
	double Latitude;//γ��
};

//����ʱ��ʾ����
//�豸��Ϣ
USTRUCT()
struct FEquipmentDetailInfo
{
	GENERATED_BODY()
	FString UpperLineEquipment;//�����豸
	FString SubordinateLine;//����·��
	FString EquipmentName;//�豸����
	FString VoltageValue;//��ѹֵ
	FString EquipmentAbbreviation;//�豸���
	double  Longitude;//����
	double  Latitude;//γ��
	float   Altitude;//����
	FString LocationMethod;//��λ��ʽ
	FString SubordinateCity;//��������
	FString DevOpsCompany;//��ά��λ
	FString MaintainTeam;//��ά����
	FString WorkingNum;//���б��
	FString PoleMountingNature;//�˴�����
	FString PoleMountingMaterial;//�˴����
	FString EquipmentType;//�豸����
	FString PoleHight;//�˸�
	FString BaseForm;//������ʽ
	FString PoleArmMaterial;//�ᵣ����
	FString WhetherRuralNetwork;//�Ƿ�ũ��
	FString WhetherSubstituteMaintaining;//�Ƿ��ά

};
//�豸������Ա��Ϣ
USTRUCT()
struct  FManagerInfo
{
	GENERATED_BODY()
	FString Company;//��˾
	FString Station;//��λ
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
