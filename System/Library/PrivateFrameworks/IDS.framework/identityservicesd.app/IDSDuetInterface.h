/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:50 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source, IDSDuetInterfaceDelegate;
#import <identityservicesd/identityservicesd-Structs.h>
@class CDSession, CDAttribute, NSMutableDictionary, NSObject;

@interface IDSDuetInterface : NSObject {

	CDSession* _session;
	CDAttribute* _attribute;
	NSMutableDictionary* _allowedBundleIDs;
	opaque_pthread_mutex_t _allowedBundleIDsLock;
	NSObject*<OS_dispatch_source> _meteringTimer;
	opaque_pthread_mutex_t _initialSyncInProgressLock;
	BOOL _initialSyncInProgress;
	id<IDSDuetInterfaceDelegate> _delegate;

}

@property (assign,nonatomic) BOOL initialSyncInProgress;                         //@synthesize initialSyncInProgress=_initialSyncInProgress - In the implementation block
@property (assign,nonatomic) id<IDSDuetInterfaceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)sharedInstance;
-(void)_sendMeteringUpdateToDuet;
-(void)_startMeteringTimer;
-(void)_resourceAvailabilityChangedForIdentifiers:(id)arg1 ;
-(void)clearAdmissionCheckCache;
-(id)_localDevice;
-(id)_deviceToSendTo;
-(BOOL)initialSyncInProgress;
-(id)_newKeyForValues:(id)arg1 priority:(long long)arg2 ;
-(void)_checkAvailabilityForValues:(id)arg1 priority:(long long)arg2 logString:(id)arg3 fromQueue:(id)arg4 withCompletionBlock:(/*^block*/id)arg5 ;
-(void)setInitialSyncInProgress:(BOOL)arg1 ;
-(void)forceCheckAvailabilityForValues:(id)arg1 priority:(long long)arg2 logString:(id)arg3 fromQueue:(id)arg4 withCompletionBlock:(/*^block*/id)arg5 ;
-(void)checkAvailabilityForValues:(id)arg1 priority:(long long)arg2 logString:(id)arg3 fromQueue:(id)arg4 withCompletionBlock:(/*^block*/id)arg5 ;
-(void)setDelegate:(id<IDSDuetInterfaceDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<IDSDuetInterfaceDelegate>)delegate;
-(id)_pairedDevice;
@end
