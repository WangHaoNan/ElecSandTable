// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "WholeStateObj.generated.h"

//项目初始化数据
USTRUCT()
struct FEquipmentBaseInfo
{
	GENERATED_BODY()
	UPROPERTY()
	FString SoleID;//唯一ID
	UPROPERTY()
	FString EquipmentType;//设备类型
	UPROPERTY()
	double Longitude;//经度
	UPROPERTY()
	double Latitude;//纬度
};

//运行时显示数据
//设备信息
USTRUCT()
struct FEquipmentDetailInfo
{
	GENERATED_BODY()

	UPROPERTY()
	FString UpperLineEquipment;//上联设备
	UPROPERTY()
	FString SubordinateLine;//所属路线
	UPROPERTY()
	FString EquipmentName;//设备名称
	UPROPERTY()
	FString VoltageValue;//电压值
	UPROPERTY()
	FString EquipmentAbbreviation;//设备简称
	UPROPERTY()
	double  Longitude;//经度
	UPROPERTY()
	double  Latitude;//纬度
	UPROPERTY()
	float   Altitude;//海拔
	UPROPERTY()
	FString LocationMethod;//定位方式
	UPROPERTY()
	FString SubordinateCity;//所属城市
	UPROPERTY()
	FString DevOpsCompany;//运维单位
	UPROPERTY()
	FString MaintainTeam;//运维班组
	UPROPERTY()
	FString WorkingNum;//运行编号
	UPROPERTY()
	FString PoleMountingNature;//杆搭性质
	UPROPERTY()
	FString PoleMountingMaterial;//杆搭材质
	UPROPERTY()
	FString EquipmentType;//设备类型
	UPROPERTY()
	FString PoleHight;//杆高
	UPROPERTY()
	FString BaseForm;//基础形式
	UPROPERTY()
	FString PoleArmMaterial;//横担材质
	UPROPERTY()
	FString WhetherRuralNetwork;//是否农网
	UPROPERTY()
	FString WhetherSubstituteMaintaining;//是否代维

};
//设备管理人员信息
USTRUCT()
struct  FManagerInfo
{
	GENERATED_BODY()
	UPROPERTY()
	FString Company;//公司
	UPROPERTY()
	FString Station;//岗位
	UPROPERTY()
	FString PhoneNum;//电话


};


//设备操作历史信息
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
