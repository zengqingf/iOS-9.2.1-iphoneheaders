/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:53 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_xpc_object;
@class NSObject, LSDXPCServer, LSDatabaseBuilder, LSInstallProgressDelegate;

@interface LSServerDelegate : NSObject {

	NSObject*<OS_dispatch_queue> _xpcListenerQueue;
	NSObject*<OS_dispatch_queue> _databaseAccessQueue;
	NSObject*<OS_dispatch_queue> _ioQueue;
	NSObject*<OS_xpc_object> _listenerArray;
	unsigned char _runAsRoot;
	int _msgsReceived;
	LSDXPCServer* _server;
	LSDatabaseBuilder* _dbBuilder;
	LSInstallProgressDelegate* _progressDelegate;

}
-(id)initWithQueue:(id)arg1 asRoot:(unsigned char)arg2 ;
-(void)beginListening;
-(void)dispatchXPCEvent:(id)arg1 ;
-(void)dispatchMessage:(id)arg1 withConnection:(id)arg2 ;
-(void)languagePrefChanged;
-(void)dealloc;
@end

