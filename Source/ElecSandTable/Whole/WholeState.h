#pragma once

#include "CoreMinimal.h"

//Response Struct


//��Ŀ��ʼ������
struct DXGBaseInfo
{
	FString SoleID;//ΨһID
	FString EquipmentType;//�豸����
	double Longitude;//����
	double Latitude;//γ��
};

//����ʱ��ʾ����
//�豸��Ϣ
struct EquipmentDetailInfo
{
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
struct  ManagerInfo
{
	FString Company;//��˾
	FString Station;//��λ
	FString PhoneNum;//�绰


};


//�豸������ʷ��Ϣ
struct HistoryInfo
{


};

//POST Struct
struct InitData
{
	FString InitBegin;

};

class ELECSANDTABLE_API WholeState
{
	
};
