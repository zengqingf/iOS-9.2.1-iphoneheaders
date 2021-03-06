/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:53 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/UserEventPlugins/ADEventListenerPlugin.plugin/ADEventListenerPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/LSApplicationWorkspaceObserverProtocol.h>

@protocol OS_dispatch_queue, OS_dispatch_source, OS_xpc_object;
@class NSObject, NSString, NSMutableDictionary, BKSApplicationStateMonitor;

@interface ADApplicationStateChangeEventListener : NSObject <LSApplicationWorkspaceObserverProtocol> {

	NSObject*<OS_dispatch_queue> _session_queue;
	NSString* _OSVersion;
	NSString* _Model;
	NSMutableDictionary* _activeBundles;
	NSMutableDictionary* _versedBundles;
	unsigned char _debugSession;
	NSObject*<OS_dispatch_source> mem_alerts;
	NSObject*<OS_xpc_object> _connection;
	BKSApplicationStateMonitor* _appStateMonitor;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)gatherActivatedInfo;
-(void)addProxy:(id)arg1 event:(unsigned)arg2 at:(unsigned)arg3 ;
-(void)writeSessionLogUsingBundles:(id)arg1 ;
-(void)applicationStateChanged:(id)arg1 ;
-(void)writePreviousSessionLog;
-(void)writeSessionLog;
-(void)dealloc;
-(id)init;
-(void)applicationInstallsDidStart:(id)arg1 ;
-(void)applicationsDidInstall:(id)arg1 ;
-(void)applicationsDidFailToInstall:(id)arg1 ;
-(void)applicationsDidUninstall:(id)arg1 ;
-(void)applicationInstallsDidCancel:(id)arg1 ;
-(void)networkUsageChanged:(BOOL)arg1 ;
@end

