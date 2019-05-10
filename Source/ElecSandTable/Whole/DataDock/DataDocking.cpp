// Fill out your copyright notice in the Description page of Project Settings.

#include "DataDocking.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"


UDataDocking::UDataDocking()
{

}

UDataDocking::~UDataDocking()
{
}

void UDataDocking::Begin()
{
	m_pHttp = &FHttpModule::Get();
	m_Url = "http";


}

void UDataDocking::TickTime(float DeltaSeconds)
{
}

void UDataDocking::Finish()
{
}

void UDataDocking::DataRequestFromServers()
{
	//
	FString JsonStr;
	FInitData m_Initdata;
	m_Initdata.InitBegin = "Begin";
	//将结构体转换为JsonString
	GetJsonStringFromStruct(m_Initdata, JsonStr);
	//将JsonString设置到Request中
	//TSharedRef<IHttpRequest> Request = PostRequset("subroute", JsonStr);
	//设置响应函数
	//Request->OnProcessRequestComplete().BindUObject(this, &UDataDocking::OnResponseReceived);
	//发送数据
	//Send(Request);

}

void UDataDocking::OnResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bIsSuccessful)
{
	

	//EquipmentDetailInfo m_equiDetailInfo;
	//GetStructFromJsonString(Response, m_equiDetailInfo);










	//bool bIsSuccess = false;

	//FString ContentString = Response->GetContentAsString();
	//TSharedPtr<FJsonObject> JsonObj;
	//TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(ContentString);
	//if (FJsonSerializer::Deserialize(Reader,JsonObj))
	//{
	//	

	//	TMap<FString, TSharedPtr<FJsonValue>> Values = JsonObj->Values;
	//	for (auto It=Values.CreateIterator();It;++It)
	//	{
	//		//TO DO
	//		


	//	}
	//}
}

TSharedRef<IHttpRequest> UDataDocking::RequestWithRoute(FString SubRoute)
{
	TSharedRef<IHttpRequest> Request = m_pHttp->CreateRequest();
	Request->SetURL(m_Url+SubRoute);
	SetRequestHeaders(Request);
	return Request;
}

void UDataDocking::SetRequestHeaders(TSharedRef<IHttpRequest>& Request)
{
	Request->SetHeader(TEXT("User-Agent"), TEXT("X-UnrealEngine-Agent"));
	Request->SetHeader(TEXT("Content-Type"), TEXT("application/json"));
	Request->SetHeader(TEXT("Accepts"), TEXT("application/json"));
}

TSharedRef<IHttpRequest> UDataDocking::GetRequest(FString SubRoute)
{

	TSharedRef<IHttpRequest> Request = RequestWithRoute(SubRoute);
	Request->SetVerb("GET");
	return Request;
}

TSharedRef<IHttpRequest> UDataDocking::PostRequset(FString SubRoute, FString ContentString)
{
	TSharedRef<IHttpRequest> Request = RequestWithRoute(SubRoute);
	Request->SetVerb("POST");
	Request->SetContentAsString(ContentString);
	return Request;
}

void UDataDocking::Send(TSharedRef<IHttpRequest>& Request)
{
	Request->ProcessRequest();
}

bool UDataDocking::ResponeValid(FHttpResponsePtr Response, bool bWasSuccessful)
{
	if (!bWasSuccessful || !Response.IsValid())
	{
		return false;
	}
	if (EHttpResponseCodes::IsOk(Response->GetResponseCode()))
	{
		return true;
	}
	else
	{
		//输出日志信息，给出错误代码.
	}



	return false;
}

