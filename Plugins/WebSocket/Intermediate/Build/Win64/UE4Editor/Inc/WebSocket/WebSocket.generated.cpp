// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/WebSocket.h"
#include "WebSocket.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1WebSocket() {}
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	COREUOBJECT_API class UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API class UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();

	WEBSOCKET_API class UFunction* Z_Construct_UDelegateFunction_WebSocket_WebSocketRecieve__DelegateSignature();
	WEBSOCKET_API class UFunction* Z_Construct_UDelegateFunction_WebSocket_WebSocketConnected__DelegateSignature();
	WEBSOCKET_API class UFunction* Z_Construct_UDelegateFunction_WebSocket_WebSocketClosed__DelegateSignature();
	WEBSOCKET_API class UFunction* Z_Construct_UDelegateFunction_WebSocket_WebSocketConnectError__DelegateSignature();
	WEBSOCKET_API class UFunction* Z_Construct_UFunction_UWebSocketBase_Close();
	WEBSOCKET_API class UFunction* Z_Construct_UFunction_UWebSocketBase_SendLoginMsg();
	WEBSOCKET_API class UFunction* Z_Construct_UFunction_UWebSocketBase_SendMatchMsg();
	WEBSOCKET_API class UFunction* Z_Construct_UFunction_UWebSocketBase_SendMatchOverMsg();
	WEBSOCKET_API class UFunction* Z_Construct_UFunction_UWebSocketBase_SendText();
	WEBSOCKET_API class UFunction* Z_Construct_UFunction_UWebSocketBase_SendUserExitMsg();
	WEBSOCKET_API class UClass* Z_Construct_UClass_UWebSocketBase_NoRegister();
	WEBSOCKET_API class UClass* Z_Construct_UClass_UWebSocketBase();
	WEBSOCKET_API class UScriptStruct* Z_Construct_UScriptStruct_FWebSocketHeaderPair();
	WEBSOCKET_API class UClass* Z_Construct_UClass_UTest_NoRegister();
	WEBSOCKET_API class UClass* Z_Construct_UClass_UTest();
	WEBSOCKET_API class UClass* Z_Construct_UClass_UTest2_NoRegister();
	WEBSOCKET_API class UClass* Z_Construct_UClass_UTest2();
	WEBSOCKET_API class UFunction* Z_Construct_UFunction_UWebSocketBlueprintLibrary_Connect();
	WEBSOCKET_API class UFunction* Z_Construct_UFunction_UWebSocketBlueprintLibrary_ConnectWithHeader();
	WEBSOCKET_API class UFunction* Z_Construct_UFunction_UWebSocketBlueprintLibrary_GetJosonStringField();
	WEBSOCKET_API class UFunction* Z_Construct_UFunction_UWebSocketBlueprintLibrary_GetJsonIntField();
	WEBSOCKET_API class UFunction* Z_Construct_UFunction_UWebSocketBlueprintLibrary_JsonToObject();
	WEBSOCKET_API class UFunction* Z_Construct_UFunction_UWebSocketBlueprintLibrary_ObjectToJson();
	WEBSOCKET_API class UClass* Z_Construct_UClass_UWebSocketBlueprintLibrary_NoRegister();
	WEBSOCKET_API class UClass* Z_Construct_UClass_UWebSocketBlueprintLibrary();
	WEBSOCKET_API class UClass* Z_Construct_UClass_UWebSocketContext_NoRegister();
	WEBSOCKET_API class UClass* Z_Construct_UClass_UWebSocketContext();
	WEBSOCKET_API class UPackage* Z_Construct_UPackage__Script_WebSocket();
	UFunction* Z_Construct_UDelegateFunction_WebSocket_WebSocketRecieve__DelegateSignature()
	{
		struct _Script_WebSocket_eventWebSocketRecieve_Parms
		{
			FString data;
		};
		UObject* Outer=Z_Construct_UPackage__Script_WebSocket();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("WebSocketRecieve__DelegateSignature"), RF_Public|RF_Transient|RF_MarkAsNative) UDelegateFunction(FObjectInitializer(), NULL, 0x00130000, 65535, sizeof(_Script_WebSocket_eventWebSocketRecieve_Parms));
			UProperty* NewProp_data = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("data"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(data, _Script_WebSocket_eventWebSocketRecieve_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/WebSocketBase.h"));
			MetaData->SetValue(NewProp_data, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_WebSocket_WebSocketConnected__DelegateSignature()
	{
		UObject* Outer=Z_Construct_UPackage__Script_WebSocket();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("WebSocketConnected__DelegateSignature"), RF_Public|RF_Transient|RF_MarkAsNative) UDelegateFunction(FObjectInitializer(), NULL, 0x00130000, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/WebSocketBase.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_WebSocket_WebSocketClosed__DelegateSignature()
	{
		UObject* Outer=Z_Construct_UPackage__Script_WebSocket();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("WebSocketClosed__DelegateSignature"), RF_Public|RF_Transient|RF_MarkAsNative) UDelegateFunction(FObjectInitializer(), NULL, 0x00130000, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/WebSocketBase.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_WebSocket_WebSocketConnectError__DelegateSignature()
	{
		struct _Script_WebSocket_eventWebSocketConnectError_Parms
		{
			FString error;
		};
		UObject* Outer=Z_Construct_UPackage__Script_WebSocket();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("WebSocketConnectError__DelegateSignature"), RF_Public|RF_Transient|RF_MarkAsNative) UDelegateFunction(FObjectInitializer(), NULL, 0x00130000, 65535, sizeof(_Script_WebSocket_eventWebSocketConnectError_Parms));
			UProperty* NewProp_error = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("error"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(error, _Script_WebSocket_eventWebSocketConnectError_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/WebSocketBase.h"));
			MetaData->SetValue(NewProp_error, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	void UWebSocketBase::StaticRegisterNativesUWebSocketBase()
	{
		UClass* Class = UWebSocketBase::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "Close", (Native)&UWebSocketBase::execClose },
			{ "SendLoginMsg", (Native)&UWebSocketBase::execSendLoginMsg },
			{ "SendMatchMsg", (Native)&UWebSocketBase::execSendMatchMsg },
			{ "SendMatchOverMsg", (Native)&UWebSocketBase::execSendMatchOverMsg },
			{ "SendText", (Native)&UWebSocketBase::execSendText },
			{ "SendUserExitMsg", (Native)&UWebSocketBase::execSendUserExitMsg },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 6);
	}
	UFunction* Z_Construct_UFunction_UWebSocketBase_Close()
	{
		UObject* Outer=Z_Construct_UClass_UWebSocketBase();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Close"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("WebSocket"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/WebSocketBase.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UWebSocketBase_SendLoginMsg()
	{
		struct WebSocketBase_eventSendLoginMsg_Parms
		{
			FString MatchName;
			FString MatchChildID;
			TArray<FString> Bikes;
		};
		UObject* Outer=Z_Construct_UClass_UWebSocketBase();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SendLoginMsg"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04420401, 65535, sizeof(WebSocketBase_eventSendLoginMsg_Parms));
			UProperty* NewProp_Bikes = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Bikes"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Bikes, WebSocketBase_eventSendLoginMsg_Parms), 0x0010000008000182);
			UProperty* NewProp_Bikes_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Bikes, TEXT("Bikes"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_MatchChildID = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("MatchChildID"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(MatchChildID, WebSocketBase_eventSendLoginMsg_Parms), 0x0010000000000080);
			UProperty* NewProp_MatchName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("MatchName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(MatchName, WebSocketBase_eventSendLoginMsg_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("WebSocket"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/WebSocketBase.h"));
			MetaData->SetValue(NewProp_Bikes, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_MatchChildID, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_MatchName, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UWebSocketBase_SendMatchMsg()
	{
		struct WebSocketBase_eventSendMatchMsg_Parms
		{
			FString matchName;
			FString openid;
			FString bikename;
			FString RankIndex;
			FString kll;
			FString time;
			FString Avgspeed;
		};
		UObject* Outer=Z_Construct_UClass_UWebSocketBase();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SendMatchMsg"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(WebSocketBase_eventSendMatchMsg_Parms));
			UProperty* NewProp_Avgspeed = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Avgspeed"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(Avgspeed, WebSocketBase_eventSendMatchMsg_Parms), 0x0010000000000080);
			UProperty* NewProp_time = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("time"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(time, WebSocketBase_eventSendMatchMsg_Parms), 0x0010000000000080);
			UProperty* NewProp_kll = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("kll"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(kll, WebSocketBase_eventSendMatchMsg_Parms), 0x0010000000000080);
			UProperty* NewProp_RankIndex = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("RankIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(RankIndex, WebSocketBase_eventSendMatchMsg_Parms), 0x0010000000000080);
			UProperty* NewProp_bikename = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bikename"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(bikename, WebSocketBase_eventSendMatchMsg_Parms), 0x0010000000000080);
			UProperty* NewProp_openid = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("openid"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(openid, WebSocketBase_eventSendMatchMsg_Parms), 0x0010000000000080);
			UProperty* NewProp_matchName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("matchName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(matchName, WebSocketBase_eventSendMatchMsg_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("WebSocket"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/WebSocketBase.h"));
			MetaData->SetValue(NewProp_Avgspeed, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_time, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_kll, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_RankIndex, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_bikename, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_openid, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_matchName, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UWebSocketBase_SendMatchOverMsg()
	{
		struct WebSocketBase_eventSendMatchOverMsg_Parms
		{
			FString MatchName;
			FString MatchChildID;
		};
		UObject* Outer=Z_Construct_UClass_UWebSocketBase();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SendMatchOverMsg"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(WebSocketBase_eventSendMatchOverMsg_Parms));
			UProperty* NewProp_MatchChildID = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("MatchChildID"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(MatchChildID, WebSocketBase_eventSendMatchOverMsg_Parms), 0x0010000000000080);
			UProperty* NewProp_MatchName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("MatchName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(MatchName, WebSocketBase_eventSendMatchOverMsg_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("WebSocket"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/WebSocketBase.h"));
			MetaData->SetValue(NewProp_MatchChildID, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_MatchName, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UWebSocketBase_SendText()
	{
		struct WebSocketBase_eventSendText_Parms
		{
			FString data;
		};
		UObject* Outer=Z_Construct_UClass_UWebSocketBase();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SendText"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(WebSocketBase_eventSendText_Parms));
			UProperty* NewProp_data = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("data"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(data, WebSocketBase_eventSendText_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("WebSocket"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/WebSocketBase.h"));
			MetaData->SetValue(NewProp_data, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UWebSocketBase_SendUserExitMsg()
	{
		struct WebSocketBase_eventSendUserExitMsg_Parms
		{
			FString openid;
			FString MachineName;
		};
		UObject* Outer=Z_Construct_UClass_UWebSocketBase();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SendUserExitMsg"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(WebSocketBase_eventSendUserExitMsg_Parms));
			UProperty* NewProp_MachineName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("MachineName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(MachineName, WebSocketBase_eventSendUserExitMsg_Parms), 0x0010000000000080);
			UProperty* NewProp_openid = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("openid"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(openid, WebSocketBase_eventSendUserExitMsg_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("WebSocket"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/WebSocketBase.h"));
			MetaData->SetValue(NewProp_MachineName, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_openid, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWebSocketBase_NoRegister()
	{
		return UWebSocketBase::StaticClass();
	}
	UClass* Z_Construct_UClass_UWebSocketBase()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UObject();
			Z_Construct_UPackage__Script_WebSocket();
			OuterClass = UWebSocketBase::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;

				OuterClass->LinkChild(Z_Construct_UFunction_UWebSocketBase_Close());
				OuterClass->LinkChild(Z_Construct_UFunction_UWebSocketBase_SendLoginMsg());
				OuterClass->LinkChild(Z_Construct_UFunction_UWebSocketBase_SendMatchMsg());
				OuterClass->LinkChild(Z_Construct_UFunction_UWebSocketBase_SendMatchOverMsg());
				OuterClass->LinkChild(Z_Construct_UFunction_UWebSocketBase_SendText());
				OuterClass->LinkChild(Z_Construct_UFunction_UWebSocketBase_SendUserExitMsg());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_OnReceiveData = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OnReceiveData"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(OnReceiveData, UWebSocketBase), 0x0010000010080000, Z_Construct_UDelegateFunction_WebSocket_WebSocketRecieve__DelegateSignature());
				UProperty* NewProp_OnConnectComplete = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OnConnectComplete"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(OnConnectComplete, UWebSocketBase), 0x0010000010080000, Z_Construct_UDelegateFunction_WebSocket_WebSocketConnected__DelegateSignature());
				UProperty* NewProp_OnClosed = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OnClosed"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(OnClosed, UWebSocketBase), 0x0010000010080000, Z_Construct_UDelegateFunction_WebSocket_WebSocketClosed__DelegateSignature());
				UProperty* NewProp_OnConnectError = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OnConnectError"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(OnConnectError, UWebSocketBase), 0x0010000010080000, Z_Construct_UDelegateFunction_WebSocket_WebSocketConnectError__DelegateSignature());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UWebSocketBase_Close(), "Close"); // 1643593944
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UWebSocketBase_SendLoginMsg(), "SendLoginMsg"); // 536930883
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UWebSocketBase_SendMatchMsg(), "SendMatchMsg"); // 2574670082
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UWebSocketBase_SendMatchOverMsg(), "SendMatchOverMsg"); // 1342250856
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UWebSocketBase_SendText(), "SendText"); // 3170886495
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UWebSocketBase_SendUserExitMsg(), "SendUserExitMsg"); // 4055929598
				static TCppClassTypeInfo<TCppClassTypeTraits<UWebSocketBase> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("WebSocketBase.h"));
				MetaData->SetValue(OuterClass, TEXT("IsBlueprintBase"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/WebSocketBase.h"));
				MetaData->SetValue(NewProp_OnReceiveData, TEXT("Category"), TEXT("WebSocket"));
				MetaData->SetValue(NewProp_OnReceiveData, TEXT("ModuleRelativePath"), TEXT("Public/WebSocketBase.h"));
				MetaData->SetValue(NewProp_OnConnectComplete, TEXT("Category"), TEXT("WebSocket"));
				MetaData->SetValue(NewProp_OnConnectComplete, TEXT("ModuleRelativePath"), TEXT("Public/WebSocketBase.h"));
				MetaData->SetValue(NewProp_OnClosed, TEXT("Category"), TEXT("WebSocket"));
				MetaData->SetValue(NewProp_OnClosed, TEXT("ModuleRelativePath"), TEXT("Public/WebSocketBase.h"));
				MetaData->SetValue(NewProp_OnConnectError, TEXT("Category"), TEXT("WebSocket"));
				MetaData->SetValue(NewProp_OnConnectError, TEXT("ModuleRelativePath"), TEXT("Public/WebSocketBase.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWebSocketBase, 1777120613);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWebSocketBase(Z_Construct_UClass_UWebSocketBase, &UWebSocketBase::StaticClass, TEXT("/Script/WebSocket"), TEXT("UWebSocketBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebSocketBase);
class UScriptStruct* FWebSocketHeaderPair::StaticStruct()
{
	extern WEBSOCKET_API class UPackage* Z_Construct_UPackage__Script_WebSocket();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern WEBSOCKET_API class UScriptStruct* Z_Construct_UScriptStruct_FWebSocketHeaderPair();
		extern WEBSOCKET_API uint32 Get_Z_Construct_UScriptStruct_FWebSocketHeaderPair_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWebSocketHeaderPair, Z_Construct_UPackage__Script_WebSocket(), TEXT("WebSocketHeaderPair"), sizeof(FWebSocketHeaderPair), Get_Z_Construct_UScriptStruct_FWebSocketHeaderPair_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWebSocketHeaderPair(FWebSocketHeaderPair::StaticStruct, TEXT("/Script/WebSocket"), TEXT("WebSocketHeaderPair"), false, nullptr, nullptr);
static struct FScriptStruct_WebSocket_StaticRegisterNativesFWebSocketHeaderPair
{
	FScriptStruct_WebSocket_StaticRegisterNativesFWebSocketHeaderPair()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("WebSocketHeaderPair")),new UScriptStruct::TCppStructOps<FWebSocketHeaderPair>);
	}
} ScriptStruct_WebSocket_StaticRegisterNativesFWebSocketHeaderPair;
	UScriptStruct* Z_Construct_UScriptStruct_FWebSocketHeaderPair()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_WebSocket();
		extern uint32 Get_Z_Construct_UScriptStruct_FWebSocketHeaderPair_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WebSocketHeaderPair"), sizeof(FWebSocketHeaderPair), Get_Z_Construct_UScriptStruct_FWebSocketHeaderPair_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("WebSocketHeaderPair"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FWebSocketHeaderPair>, EStructFlags(0x00000001));
			UProperty* NewProp_value = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("value"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(value, FWebSocketHeaderPair), 0x0010000000000005);
			UProperty* NewProp_key = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("key"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(key, FWebSocketHeaderPair), 0x0010000000000005);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/WebSocketBlueprintLibrary.h"));
			MetaData->SetValue(NewProp_value, TEXT("Category"), TEXT("WebSocket"));
			MetaData->SetValue(NewProp_value, TEXT("ModuleRelativePath"), TEXT("Public/WebSocketBlueprintLibrary.h"));
			MetaData->SetValue(NewProp_key, TEXT("Category"), TEXT("WebSocket"));
			MetaData->SetValue(NewProp_key, TEXT("ModuleRelativePath"), TEXT("Public/WebSocketBlueprintLibrary.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWebSocketHeaderPair_CRC() { return 3867904360U; }
	void UTest::StaticRegisterNativesUTest()
	{
	}
	UClass* Z_Construct_UClass_UTest_NoRegister()
	{
		return UTest::StaticClass();
	}
	UClass* Z_Construct_UClass_UTest()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UObject();
			Z_Construct_UPackage__Script_WebSocket();
			OuterClass = UTest::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20000080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_mAge = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("mAge"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(CPP_PROPERTY_BASE(mAge, UTest), 0x0010000000000005);
				UProperty* NewProp_mName = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("mName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(mName, UTest), 0x0010000000000005);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				static TCppClassTypeInfo<TCppClassTypeTraits<UTest> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("WebSocketBlueprintLibrary.h"));
				MetaData->SetValue(OuterClass, TEXT("IsBlueprintBase"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/WebSocketBlueprintLibrary.h"));
				MetaData->SetValue(NewProp_mAge, TEXT("Category"), TEXT("Test"));
				MetaData->SetValue(NewProp_mAge, TEXT("ModuleRelativePath"), TEXT("Public/WebSocketBlueprintLibrary.h"));
				MetaData->SetValue(NewProp_mName, TEXT("Category"), TEXT("Test"));
				MetaData->SetValue(NewProp_mName, TEXT("ModuleRelativePath"), TEXT("Public/WebSocketBlueprintLibrary.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTest, 3582839248);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTest(Z_Construct_UClass_UTest, &UTest::StaticClass, TEXT("/Script/WebSocket"), TEXT("UTest"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTest);
	void UTest2::StaticRegisterNativesUTest2()
	{
	}
	UClass* Z_Construct_UClass_UTest2_NoRegister()
	{
		return UTest2::StaticClass();
	}
	UClass* Z_Construct_UClass_UTest2()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UObject();
			Z_Construct_UPackage__Script_WebSocket();
			OuterClass = UTest2::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20000080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_mTest = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("mTest"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(mTest, UTest2), 0x0010000000000005, Z_Construct_UClass_UTest_NoRegister());
				UProperty* NewProp_mAge = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("mAge"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(CPP_PROPERTY_BASE(mAge, UTest2), 0x0010000000000005);
				UProperty* NewProp_mName = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("mName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(mName, UTest2), 0x0010000000000005);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				static TCppClassTypeInfo<TCppClassTypeTraits<UTest2> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("WebSocketBlueprintLibrary.h"));
				MetaData->SetValue(OuterClass, TEXT("IsBlueprintBase"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/WebSocketBlueprintLibrary.h"));
				MetaData->SetValue(NewProp_mTest, TEXT("Category"), TEXT("Test"));
				MetaData->SetValue(NewProp_mTest, TEXT("ModuleRelativePath"), TEXT("Public/WebSocketBlueprintLibrary.h"));
				MetaData->SetValue(NewProp_mAge, TEXT("Category"), TEXT("Test"));
				MetaData->SetValue(NewProp_mAge, TEXT("ModuleRelativePath"), TEXT("Public/WebSocketBlueprintLibrary.h"));
				MetaData->SetValue(NewProp_mName, TEXT("Category"), TEXT("Test"));
				MetaData->SetValue(NewProp_mName, TEXT("ModuleRelativePath"), TEXT("Public/WebSocketBlueprintLibrary.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTest2, 253280009);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTest2(Z_Construct_UClass_UTest2, &UTest2::StaticClass, TEXT("/Script/WebSocket"), TEXT("UTest2"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTest2);
	void UWebSocketBlueprintLibrary::StaticRegisterNativesUWebSocketBlueprintLibrary()
	{
		UClass* Class = UWebSocketBlueprintLibrary::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "Connect", (Native)&UWebSocketBlueprintLibrary::execConnect },
			{ "ConnectWithHeader", (Native)&UWebSocketBlueprintLibrary::execConnectWithHeader },
			{ "GetJosonStringField", (Native)&UWebSocketBlueprintLibrary::execGetJosonStringField },
			{ "GetJsonIntField", (Native)&UWebSocketBlueprintLibrary::execGetJsonIntField },
			{ "JsonToObject", (Native)&UWebSocketBlueprintLibrary::execJsonToObject },
			{ "ObjectToJson", (Native)&UWebSocketBlueprintLibrary::execObjectToJson },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 6);
	}
	UFunction* Z_Construct_UFunction_UWebSocketBlueprintLibrary_Connect()
	{
		struct WebSocketBlueprintLibrary_eventConnect_Parms
		{
			FString url;
			UWebSocketBase* ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UWebSocketBlueprintLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Connect"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04022401, 65535, sizeof(WebSocketBlueprintLibrary_eventConnect_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ReturnValue, WebSocketBlueprintLibrary_eventConnect_Parms), 0x0010000000000580, Z_Construct_UClass_UWebSocketBase_NoRegister());
			UProperty* NewProp_url = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("url"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(url, WebSocketBlueprintLibrary_eventConnect_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("WebSocket"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/WebSocketBlueprintLibrary.h"));
			MetaData->SetValue(NewProp_url, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UWebSocketBlueprintLibrary_ConnectWithHeader()
	{
		struct WebSocketBlueprintLibrary_eventConnectWithHeader_Parms
		{
			FString url;
			TArray<FWebSocketHeaderPair> header;
			UWebSocketBase* ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UWebSocketBlueprintLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ConnectWithHeader"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04422401, 65535, sizeof(WebSocketBlueprintLibrary_eventConnectWithHeader_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ReturnValue, WebSocketBlueprintLibrary_eventConnectWithHeader_Parms), 0x0010000000000580, Z_Construct_UClass_UWebSocketBase_NoRegister());
			UProperty* NewProp_header = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("header"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(header, WebSocketBlueprintLibrary_eventConnectWithHeader_Parms), 0x0010000008000182);
			UProperty* NewProp_header_Inner = new(EC_InternalUseOnlyConstructor, NewProp_header, TEXT("header"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FWebSocketHeaderPair());
			UProperty* NewProp_url = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("url"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(url, WebSocketBlueprintLibrary_eventConnectWithHeader_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("WebSocket"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/WebSocketBlueprintLibrary.h"));
			MetaData->SetValue(NewProp_header, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_url, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UWebSocketBlueprintLibrary_GetJosonStringField()
	{
		struct WebSocketBlueprintLibrary_eventGetJosonStringField_Parms
		{
			FString data;
			FString key;
			FString ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UWebSocketBlueprintLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetJosonStringField"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04022401, 65535, sizeof(WebSocketBlueprintLibrary_eventGetJosonStringField_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(ReturnValue, WebSocketBlueprintLibrary_eventGetJosonStringField_Parms), 0x0010000000000580);
			UProperty* NewProp_key = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("key"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(key, WebSocketBlueprintLibrary_eventGetJosonStringField_Parms), 0x0010000000000080);
			UProperty* NewProp_data = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("data"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(data, WebSocketBlueprintLibrary_eventGetJosonStringField_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("WebSocket"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/WebSocketBlueprintLibrary.h"));
			MetaData->SetValue(NewProp_key, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_data, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UWebSocketBlueprintLibrary_GetJsonIntField()
	{
		struct WebSocketBlueprintLibrary_eventGetJsonIntField_Parms
		{
			FString data;
			FString key;
			int32 iValue;
			bool ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UWebSocketBlueprintLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetJsonIntField"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04422401, 65535, sizeof(WebSocketBlueprintLibrary_eventGetJsonIntField_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, WebSocketBlueprintLibrary_eventGetJsonIntField_Parms, bool);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, WebSocketBlueprintLibrary_eventGetJsonIntField_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, WebSocketBlueprintLibrary_eventGetJsonIntField_Parms), sizeof(bool), true);
			UProperty* NewProp_iValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("iValue"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(CPP_PROPERTY_BASE(iValue, WebSocketBlueprintLibrary_eventGetJsonIntField_Parms), 0x0010000000000180);
			UProperty* NewProp_key = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("key"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(key, WebSocketBlueprintLibrary_eventGetJsonIntField_Parms), 0x0010000000000080);
			UProperty* NewProp_data = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("data"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(data, WebSocketBlueprintLibrary_eventGetJsonIntField_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("WebSocket"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/WebSocketBlueprintLibrary.h"));
			MetaData->SetValue(NewProp_key, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_data, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UWebSocketBlueprintLibrary_JsonToObject()
	{
		struct WebSocketBlueprintLibrary_eventJsonToObject_Parms
		{
			FString data;
			UClass* StructDefinition;
			bool checkAll;
			UObject* ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UWebSocketBlueprintLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("JsonToObject"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04022401, 65535, sizeof(WebSocketBlueprintLibrary_eventJsonToObject_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ReturnValue, WebSocketBlueprintLibrary_eventJsonToObject_Parms), 0x0010000000000580, Z_Construct_UClass_UObject_NoRegister());
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(checkAll, WebSocketBlueprintLibrary_eventJsonToObject_Parms, bool);
			UProperty* NewProp_checkAll = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("checkAll"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(checkAll, WebSocketBlueprintLibrary_eventJsonToObject_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(checkAll, WebSocketBlueprintLibrary_eventJsonToObject_Parms), sizeof(bool), true);
			UProperty* NewProp_StructDefinition = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("StructDefinition"), RF_Public|RF_Transient|RF_MarkAsNative) UClassProperty(CPP_PROPERTY_BASE(StructDefinition, WebSocketBlueprintLibrary_eventJsonToObject_Parms), 0x0010000000000080, Z_Construct_UClass_UObject_NoRegister(), UClass::StaticClass());
			UProperty* NewProp_data = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("data"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(data, WebSocketBlueprintLibrary_eventJsonToObject_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("WebSocket"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/WebSocketBlueprintLibrary.h"));
			MetaData->SetValue(NewProp_data, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UWebSocketBlueprintLibrary_ObjectToJson()
	{
		struct WebSocketBlueprintLibrary_eventObjectToJson_Parms
		{
			UObject* Object;
			FString data;
			bool ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UWebSocketBlueprintLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ObjectToJson"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04422401, 65535, sizeof(WebSocketBlueprintLibrary_eventObjectToJson_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, WebSocketBlueprintLibrary_eventObjectToJson_Parms, bool);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, WebSocketBlueprintLibrary_eventObjectToJson_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, WebSocketBlueprintLibrary_eventObjectToJson_Parms), sizeof(bool), true);
			UProperty* NewProp_data = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("data"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(data, WebSocketBlueprintLibrary_eventObjectToJson_Parms), 0x0010000000000180);
			UProperty* NewProp_Object = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Object"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Object, WebSocketBlueprintLibrary_eventObjectToJson_Parms), 0x0010000000000080, Z_Construct_UClass_UObject_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("WebSocket"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/WebSocketBlueprintLibrary.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWebSocketBlueprintLibrary_NoRegister()
	{
		return UWebSocketBlueprintLibrary::StaticClass();
	}
	UClass* Z_Construct_UClass_UWebSocketBlueprintLibrary()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UBlueprintFunctionLibrary();
			Z_Construct_UPackage__Script_WebSocket();
			OuterClass = UWebSocketBlueprintLibrary::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20100080;

				OuterClass->LinkChild(Z_Construct_UFunction_UWebSocketBlueprintLibrary_Connect());
				OuterClass->LinkChild(Z_Construct_UFunction_UWebSocketBlueprintLibrary_ConnectWithHeader());
				OuterClass->LinkChild(Z_Construct_UFunction_UWebSocketBlueprintLibrary_GetJosonStringField());
				OuterClass->LinkChild(Z_Construct_UFunction_UWebSocketBlueprintLibrary_GetJsonIntField());
				OuterClass->LinkChild(Z_Construct_UFunction_UWebSocketBlueprintLibrary_JsonToObject());
				OuterClass->LinkChild(Z_Construct_UFunction_UWebSocketBlueprintLibrary_ObjectToJson());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UWebSocketBlueprintLibrary_Connect(), "Connect"); // 3033399885
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UWebSocketBlueprintLibrary_ConnectWithHeader(), "ConnectWithHeader"); // 1618249167
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UWebSocketBlueprintLibrary_GetJosonStringField(), "GetJosonStringField"); // 1781806086
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UWebSocketBlueprintLibrary_GetJsonIntField(), "GetJsonIntField"); // 996256767
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UWebSocketBlueprintLibrary_JsonToObject(), "JsonToObject"); // 2150594239
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UWebSocketBlueprintLibrary_ObjectToJson(), "ObjectToJson"); // 876525079
				static TCppClassTypeInfo<TCppClassTypeTraits<UWebSocketBlueprintLibrary> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("WebSocketBlueprintLibrary.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/WebSocketBlueprintLibrary.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWebSocketBlueprintLibrary, 2093025084);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWebSocketBlueprintLibrary(Z_Construct_UClass_UWebSocketBlueprintLibrary, &UWebSocketBlueprintLibrary::StaticClass, TEXT("/Script/WebSocket"), TEXT("UWebSocketBlueprintLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebSocketBlueprintLibrary);
	void UWebSocketContext::StaticRegisterNativesUWebSocketContext()
	{
	}
	UClass* Z_Construct_UClass_UWebSocketContext_NoRegister()
	{
		return UWebSocketContext::StaticClass();
	}
	UClass* Z_Construct_UClass_UWebSocketContext()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UObject();
			Z_Construct_UPackage__Script_WebSocket();
			OuterClass = UWebSocketContext::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20000080;


				static TCppClassTypeInfo<TCppClassTypeTraits<UWebSocketContext> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("WebSocketContext.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Private/WebSocketContext.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWebSocketContext, 2325113709);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWebSocketContext(Z_Construct_UClass_UWebSocketContext, &UWebSocketContext::StaticClass, TEXT("/Script/WebSocket"), TEXT("UWebSocketContext"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebSocketContext);
	UPackage* Z_Construct_UPackage__Script_WebSocket()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/WebSocket")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0x5CAF7C50;
			Guid.B = 0xA699D91A;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

			Z_Construct_UDelegateFunction_WebSocket_WebSocketConnectError__DelegateSignature();
			Z_Construct_UDelegateFunction_WebSocket_WebSocketClosed__DelegateSignature();
			Z_Construct_UDelegateFunction_WebSocket_WebSocketConnected__DelegateSignature();
			Z_Construct_UDelegateFunction_WebSocket_WebSocketRecieve__DelegateSignature();
		}
		return ReturnPackage;
	}
#endif
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
