// Fill out your copyright notice in the Description page of Project Settings.

#include "DataDocking.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"


UDataDocking::UDataDocking()
{

}

UDataDocking::~UDataDocking()
{
}

void UDataDocking::DoWork()
{
}

void UDataDocking::Init()
{                            
	m_pHttp = &FHttpModule::Get();
	m_Url = "http";
	//异步任务
	AsyncTask(ENamedThreads::GameThread, [&]()
	{
		//TODO
		//DataRequestFromServers();
		//测试用
		for (int32 i = 1; i <= 20000; i++)
		{
			bool isPrime = true;
			for (int32 j = 2; j <= i / 2; j++)
			{
				if (FMath::Fmod(i, j) == 0)
				{
					isPrime = false;
					break;
				}
			}
			if (isPrime)
				GLog->Log("Prime number #" + FString::FromInt(i) + ": " + FString::FromInt(i));
		}
	}
	);
	
	GLog->Log("SyncTask!!!!");


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
	TSharedRef<IHttpRequest> Request = PostRequset("subroute", JsonStr);
	//设置响应函数
	Request->OnProcessRequestComplete().BindUObject(this, &UDataDocking::OnResponseReceived);
	//发送数据
	Send(Request);

}

void UDataDocking::OnResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bIsSuccessful)
{
	Request->OnProcessRequestComplete().Unbind();

	GetStructArrayFromJsonString(Response, m_aEquipmentBaseInfo);



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
//转换响应基本数据
void UDataDocking::GetStructArrayFromJsonString(FHttpResponsePtr Response, TArray<FEquipmentBaseInfo> StructOutput)
{
	FString JsonString = Response->GetContentAsString();
	FJsonObjectConverter::JsonArrayStringToUStruct<FEquipmentBaseInfo>(JsonString, &StructOutput, 0, 0);
}

