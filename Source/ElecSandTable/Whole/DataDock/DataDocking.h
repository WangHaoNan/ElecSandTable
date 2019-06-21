// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"


#include "Runtime/Json/Public/Dom/JsonObject.h"
#include "Runtime/JsonUtilities/Public/JsonObjectConverter.h"
#include "Runtime/JsonUtilities/Public/JsonObjectWrapper.h"
#include "Json.h"
#include "Http.h"
#include <Runtime/CoreUObject/Public/UObject/NoExportTypes.h>
#include <Runtime/Engine/Classes/Engine/StreamableManager.h>
#include <Runtime/Engine/Classes/Engine/AssetManager.h>
#include "../WholeStateObj.h"
#include <Runtime/Core/Public/Async/AsyncWork.h>
#include "DataDocking.generated.h"





UCLASS()
class ELECSANDTABLE_API UDataDocking : public UObject , public FNonAbandonableTask
{
	GENERATED_BODY()
public:
	UDataDocking();
	~UDataDocking();
	FORCEINLINE TStatId GetStatId() const
	{
		RETURN_QUICK_DECLARE_CYCLE_STAT(PrimeCalculationAsyncTask, STATGROUP_ThreadPoolAsyncTasks);
	}

	void DoWork();
	//add parameter



public:
	void Init();
	void TickTime(float DeltaSeconds);
	void Finish();

		UFUNCTION(BlueprintCallable)
	void DataRequestFromServers();
	void OnResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bIsSuccessful);
	

private:
	//设置url的子路径
	TSharedRef<IHttpRequest> RequestWithRoute(FString SubRoute);
	//设置Header
	void SetRequestHeaders(TSharedRef<IHttpRequest>& Request);

	TSharedRef<IHttpRequest> GetRequest(FString SubRoute);
	//设置JsonString到Request中
	TSharedRef<IHttpRequest> PostRequset(FString SubRoute, FString ContentString);
	//发送数据
	void Send(TSharedRef<IHttpRequest> &Request);
	//检索响应数据是否有效
	bool ResponeValid(FHttpResponsePtr Response, bool bWasSuccessful);

	//JsonStringToStruct
	template <typename StructType>
	void GetJsonStringFromStruct(StructType FilledStruct, FString& StringOutput);

	//StructToJsonString
	template <typename StructType>
	void GetStructFromJsonString(FHttpResponsePtr Response, StructType& StructOutput);


	//StructArrayToJsonString
	void GetStructArrayFromJsonString(FHttpResponsePtr Response, TArray<FEquipmentBaseInfo> StructOutput);


	//声明http模式
	FHttpModule* m_pHttp;
	//请求地址
	FString m_Url;

	//接收设备基础信息
	TArray<FEquipmentBaseInfo > m_aEquipmentBaseInfo;

};

template<typename StructType>
inline void UDataDocking::GetJsonStringFromStruct(StructType FilledStruct, FString & StringOutput)
{
	FJsonObjectConverter::UStructToJsonObjectString(StructType::StaticStruct(), &FilledStruct, StringOutput, 0, 0);
}


template<typename StructType>
inline void UDataDocking::GetStructFromJsonString(FHttpResponsePtr Response, StructType & StructOutput)
{
	//StructType StructData;
	FString JsonString = Response->GetContentAsString();
	FJsonObjectConverter::JsonObjectStringToUStruct<StructType>(JsonString, &StructOutput, 0, 0);

}



