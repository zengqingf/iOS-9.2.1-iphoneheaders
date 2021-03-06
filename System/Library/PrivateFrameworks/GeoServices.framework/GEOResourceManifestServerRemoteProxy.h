/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:22 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOResourceManifestServerProxy.h>

@protocol GEOResourceManifestServerProxyDelegate, OS_xpc_object, OS_dispatch_queue;
@class NSObject, NSLock, NSHashTable, GEOResourceManifestConfiguration, NSString, GEOActiveTileGroup;

@interface GEOResourceManifestServerRemoteProxy : NSObject <GEOResourceManifestServerProxy> {

	id<GEOResourceManifestServerProxyDelegate> _delegate;
	NSObject*<OS_xpc_object> _conn;
	NSLock* _connLock;
	NSHashTable* _cancellingConnections;
	NSLock* _cancellingConnectionsLock;
	unsigned long long _retryCount;
	BOOL _isUpdatingManifest;
	BOOL _isLoadingResources;
	NSObject*<OS_dispatch_queue> _serverQueue;
	GEOResourceManifestConfiguration* _configuration;
	NSLock* _authTokenLock;
	NSString* _authToken;
	int _activeTileGroupChangedNotificationToken;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) id<GEOResourceManifestServerProxyDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) GEOActiveTileGroup * activeTileGroup; 
-(void)setDelegate:(id<GEOResourceManifestServerProxyDelegate>)arg1 ;
-(void)dealloc;
-(id<GEOResourceManifestServerProxyDelegate>)delegate;
-(id)configuration;
-(id)authToken;
-(void)getResourceManifestWithHandler:(/*^block*/id)arg1 ;
-(GEOActiveTileGroup *)activeTileGroup;
-(oneway void)setActiveTileGroupIdentifier:(id)arg1 ;
-(void)setManifestToken:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(oneway void)resetActiveTileGroup;
-(id)initWithDelegate:(id)arg1 configuration:(id)arg2 ;
-(void)openConnection;
-(void)closeConnection;
-(void)updateIfNecessary:(/*^block*/id)arg1 ;
-(id)serverQueue;
-(void)forceUpdate:(/*^block*/id)arg1 ;
-(void)_handleMessage:(id)arg1 xpcMessage:(id)arg2 ;
-(void)_setupConnection;
@end

