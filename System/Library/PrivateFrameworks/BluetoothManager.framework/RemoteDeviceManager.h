/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:24 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/BluetoothManager.framework/BluetoothManager
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSObject;

@interface RemoteDeviceManager : NSObject {

	NSObject*<OS_xpc_object> _connection;

}
-(void)dealloc;
-(id)init;
-(void)sendMessage:(const char*)arg1 args:(id)arg2 ;
-(void)disconnectDevice:(id)arg1 ;
@end

