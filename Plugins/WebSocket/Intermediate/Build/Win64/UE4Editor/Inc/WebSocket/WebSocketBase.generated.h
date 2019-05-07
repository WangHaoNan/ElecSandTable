// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WEBSOCKET_WebSocketBase_generated_h
#error "WebSocketBase.generated.h already included, missing '#pragma once' in WebSocketBase.h"
#endif
#define WEBSOCKET_WebSocketBase_generated_h

#define ZiXingCheStandAloneZH_Plugins_WebSocket_Source_WebSocket_Public_WebSocketBase_h_35_DELEGATE \
struct _Script_WebSocket_eventWebSocketRecieve_Parms \
{ \
	FString data; \
}; \
static inline void FWebSocketRecieve_DelegateWrapper(const FMulticastScriptDelegate& WebSocketRecieve, const FString& data) \
{ \
	_Script_WebSocket_eventWebSocketRecieve_Parms Parms; \
	Parms.data=data; \
	WebSocketRecieve.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define ZiXingCheStandAloneZH_Plugins_WebSocket_Source_WebSocket_Public_WebSocketBase_h_34_DELEGATE \
static inline void FWebSocketConnected_DelegateWrapper(const FMulticastScriptDelegate& WebSocketConnected) \
{ \
	WebSocketConnected.ProcessMulticastDelegate<UObject>(NULL); \
}


#define ZiXingCheStandAloneZH_Plugins_WebSocket_Source_WebSocket_Public_WebSocketBase_h_33_DELEGATE \
static inline void FWebSocketClosed_DelegateWrapper(const FMulticastScriptDelegate& WebSocketClosed) \
{ \
	WebSocketClosed.ProcessMulticastDelegate<UObject>(NULL); \
}


#define ZiXingCheStandAloneZH_Plugins_WebSocket_Source_WebSocket_Public_WebSocketBase_h_32_DELEGATE \
struct _Script_WebSocket_eventWebSocketConnectError_Parms \
{ \
	FString error; \
}; \
static inline void FWebSocketConnectError_DelegateWrapper(const FMulticastScriptDelegate& WebSocketConnectError, const FString& error) \
{ \
	_Script_WebSocket_eventWebSocketConnectError_Parms Parms; \
	Parms.error=error; \
	WebSocketConnectError.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define ZiXingCheStandAloneZH_Plugins_WebSocket_Source_WebSocket_Public_WebSocketBase_h_46_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execClose) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Close(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendUserExitMsg) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_openid); \
		P_GET_PROPERTY(UStrProperty,Z_Param_MachineName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SendUserExitMsg(Z_Param_openid,Z_Param_MachineName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendMatchOverMsg) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_MatchName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_MatchChildID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SendMatchOverMsg(Z_Param_MatchName,Z_Param_MatchChildID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendMatchMsg) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_matchName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_openid); \
		P_GET_PROPERTY(UStrProperty,Z_Param_bikename); \
		P_GET_PROPERTY(UStrProperty,Z_Param_RankIndex); \
		P_GET_PROPERTY(UStrProperty,Z_Param_kll); \
		P_GET_PROPERTY(UStrProperty,Z_Param_time); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Avgspeed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SendMatchMsg(Z_Param_matchName,Z_Param_openid,Z_Param_bikename,Z_Param_RankIndex,Z_Param_kll,Z_Param_time,Z_Param_Avgspeed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendLoginMsg) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_MatchName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_MatchChildID); \
		P_GET_TARRAY_REF(FString,Z_Param_Out_Bikes); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SendLoginMsg(Z_Param_MatchName,Z_Param_MatchChildID,Z_Param_Out_Bikes); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendText) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_data); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SendText(Z_Param_data); \
		P_NATIVE_END; \
	}


#define ZiXingCheStandAloneZH_Plugins_WebSocket_Source_WebSocket_Public_WebSocketBase_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClose) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Close(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendUserExitMsg) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_openid); \
		P_GET_PROPERTY(UStrProperty,Z_Param_MachineName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SendUserExitMsg(Z_Param_openid,Z_Param_MachineName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendMatchOverMsg) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_MatchName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_MatchChildID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SendMatchOverMsg(Z_Param_MatchName,Z_Param_MatchChildID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendMatchMsg) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_matchName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_openid); \
		P_GET_PROPERTY(UStrProperty,Z_Param_bikename); \
		P_GET_PROPERTY(UStrProperty,Z_Param_RankIndex); \
		P_GET_PROPERTY(UStrProperty,Z_Param_kll); \
		P_GET_PROPERTY(UStrProperty,Z_Param_time); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Avgspeed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SendMatchMsg(Z_Param_matchName,Z_Param_openid,Z_Param_bikename,Z_Param_RankIndex,Z_Param_kll,Z_Param_time,Z_Param_Avgspeed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendLoginMsg) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_MatchName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_MatchChildID); \
		P_GET_TARRAY_REF(FString,Z_Param_Out_Bikes); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SendLoginMsg(Z_Param_MatchName,Z_Param_MatchChildID,Z_Param_Out_Bikes); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendText) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_data); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SendText(Z_Param_data); \
		P_NATIVE_END; \
	}


#define ZiXingCheStandAloneZH_Plugins_WebSocket_Source_WebSocket_Public_WebSocketBase_h_46_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWebSocketBase(); \
	friend WEBSOCKET_API class UClass* Z_Construct_UClass_UWebSocketBase(); \
public: \
	DECLARE_CLASS(UWebSocketBase, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/WebSocket"), NO_API) \
	DECLARE_SERIALIZER(UWebSocketBase) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define ZiXingCheStandAloneZH_Plugins_WebSocket_Source_WebSocket_Public_WebSocketBase_h_46_INCLASS \
private: \
	static void StaticRegisterNativesUWebSocketBase(); \
	friend WEBSOCKET_API class UClass* Z_Construct_UClass_UWebSocketBase(); \
public: \
	DECLARE_CLASS(UWebSocketBase, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/WebSocket"), NO_API) \
	DECLARE_SERIALIZER(UWebSocketBase) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define ZiXingCheStandAloneZH_Plugins_WebSocket_Source_WebSocket_Public_WebSocketBase_h_46_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWebSocketBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWebSocketBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWebSocketBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebSocketBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWebSocketBase(UWebSocketBase&&); \
	NO_API UWebSocketBase(const UWebSocketBase&); \
public:


#define ZiXingCheStandAloneZH_Plugins_WebSocket_Source_WebSocket_Public_WebSocketBase_h_46_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWebSocketBase(UWebSocketBase&&); \
	NO_API UWebSocketBase(const UWebSocketBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWebSocketBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebSocketBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWebSocketBase)


#define ZiXingCheStandAloneZH_Plugins_WebSocket_Source_WebSocket_Public_WebSocketBase_h_46_PRIVATE_PROPERTY_OFFSET
#define ZiXingCheStandAloneZH_Plugins_WebSocket_Source_WebSocket_Public_WebSocketBase_h_43_PROLOG
#define ZiXingCheStandAloneZH_Plugins_WebSocket_Source_WebSocket_Public_WebSocketBase_h_46_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ZiXingCheStandAloneZH_Plugins_WebSocket_Source_WebSocket_Public_WebSocketBase_h_46_PRIVATE_PROPERTY_OFFSET \
	ZiXingCheStandAloneZH_Plugins_WebSocket_Source_WebSocket_Public_WebSocketBase_h_46_RPC_WRAPPERS \
	ZiXingCheStandAloneZH_Plugins_WebSocket_Source_WebSocket_Public_WebSocketBase_h_46_INCLASS \
	ZiXingCheStandAloneZH_Plugins_WebSocket_Source_WebSocket_Public_WebSocketBase_h_46_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ZiXingCheStandAloneZH_Plugins_WebSocket_Source_WebSocket_Public_WebSocketBase_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ZiXingCheStandAloneZH_Plugins_WebSocket_Source_WebSocket_Public_WebSocketBase_h_46_PRIVATE_PROPERTY_OFFSET \
	ZiXingCheStandAloneZH_Plugins_WebSocket_Source_WebSocket_Public_WebSocketBase_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	ZiXingCheStandAloneZH_Plugins_WebSocket_Source_WebSocket_Public_WebSocketBase_h_46_INCLASS_NO_PURE_DECLS \
	ZiXingCheStandAloneZH_Plugins_WebSocket_Source_WebSocket_Public_WebSocketBase_h_46_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ZiXingCheStandAloneZH_Plugins_WebSocket_Source_WebSocket_Public_WebSocketBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
