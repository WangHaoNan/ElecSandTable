#pragma once

#include "CoreMinimal.h"

//Response Struct


//项目初始化数据
struct DXGBaseInfo
{
	FString SoleID;//唯一ID
	FString EquipmentType;//设备类型
	double Longitude;//经度
	double Latitude;//纬度
};

//运行时显示数据
//设备信息
struct EquipmentDetailInfo
{
	FString UpperLineEquipment;//上联设备
	FString SubordinateLine;//所属路线
	FString EquipmentName;//设备名称
	FString VoltageValue;//电压值
	FString EquipmentAbbreviation;//设备简称
	double  Longitude;//经度
	double  Latitude;//纬度
	float   Altitude;//海拔
	FString LocationMethod;//定位方式
	FString SubordinateCity;//所属城市
	FString DevOpsCompany;//运维单位
	FString MaintainTeam;//运维班组
	FString WorkingNum;//运行编号
	FString PoleMountingNature;//杆搭性质
	FString PoleMountingMaterial;//杆搭材质
	FString EquipmentType;//设备类型
	FString PoleHight;//杆高
	FString BaseForm;//基础形式
	FString PoleArmMaterial;//横担材质
	FString WhetherRuralNetwork;//是否农网
	FString WhetherSubstituteMaintaining;//是否代维

};
//设备管理人员信息
struct  ManagerInfo
{
	FString Company;//公司
	FString Station;//岗位
	FString PhoneNum;//电话


};


//设备操作历史信息
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
