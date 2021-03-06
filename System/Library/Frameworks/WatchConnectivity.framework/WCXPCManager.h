/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:07 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/WatchConnectivity.framework/WatchConnectivity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCConnectionDelegate.h>
#import <libobjc.A.dylib/WCXPCManagerClientProtocol.h>

@protocol WCXPCManagerDelegate, OS_dispatch_queue;
@class NSXPCConnection, NSObject, NSString;

@interface WCXPCManager : NSObject <NSXPCConnectionDelegate, WCXPCManagerClientProtocol> {

	BOOL _connectionInvalidated;
	NSXPCConnection* _connection;
	NSObject*<WCXPCManagerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _workQueue;

}

@property (__weak) NSObject*<WCXPCManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) NSXPCConnection * connection;                        //@synthesize connection=_connection - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
@property (assign) BOOL connectionInvalidated;                            //@synthesize connectionInvalidated=_connectionInvalidated - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)clientInterface;
+(id)sharedManager;
+(id)daemonInterface;
-(void)setDelegate:(NSObject*<WCXPCManagerDelegate>)arg1 ;
-(id)init;
-(NSObject*<WCXPCManagerDelegate>)delegate;
-(NSXPCConnection *)connection;
-(void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(BOOL)arg3 ;
-(void)handleRequest:(id)arg1 ;
-(void)invalidateConnection;
-(void)handleResponse:(id)arg1 ;
-(void)setupConnection;
-(void)retrieveSessionStateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)updateApplicationContext:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)transferFile:(id)arg1 sandboxToken:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)cancelSendWithIdentifier:(id)arg1 ;
-(void)transferUserInfo:(id)arg1 withURL:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)handleSentMessageWithIdentifier:(id)arg1 error:(id)arg2 ;
-(void)acknowledgeFileIndexWithIdentifier:(id)arg1 ;
-(void)acknowledgeFileResultIndexWithIdentifier:(id)arg1 ;
-(void)acknowledgeUserInfoIndexWithIdentifier:(id)arg1 ;
-(void)acknowledgeUserInfoResultIndexWithIdentifier:(id)arg1 ;
-(void)sendMessage:(id)arg1 acceptanceHandler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)cancelAllOutstandingMessages;
-(void)handleMessageSendingAllowed;
-(void)handleSessionStateChanged:(id)arg1 ;
-(void)handleApplicationContext:(id)arg1 ;
-(void)handleSessionFile:(id)arg1 ;
-(void)handleUserInfoTransfer:(id)arg1 ;
-(void)handleFileTransferFinishedWithIdentifier:(id)arg1 error:(id)arg2 ;
-(void)handleUserInfoTransferFinishedWithIdentifier:(id)arg1 error:(id)arg2 ;
-(BOOL)connectionInvalidated;
-(void)handleInterruptedConnection;
-(void)onqueue_reconnect;
-(void)handleSessionStateChanged:(id)arg1 forceReachableChanged:(BOOL)arg2 ;
-(void)setConnectionInvalidated:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
@end

