/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:28 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Assistant/Plugins/Applications.assistantBundle/Applications
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBook/AFSyncHandler.h>
#import <Applications/AAPSyncMetaDataSourceObserver.h>

@protocol OS_dispatch_queue;
@class NSObject, AAPSyncStatePersistence, AAPSyncMetaDataSource, AAPSyncMetaDataProcessor, NSString;

@interface AAPSyncHandler : NSObject <AFSyncHandler, AAPSyncMetaDataSourceObserver> {

	NSObject*<OS_dispatch_queue> _stateQueue;
	AAPSyncStatePersistence* _statePersistence;
	AAPSyncMetaDataSource* _source;
	AAPSyncMetaDataProcessor* _processor;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)sourceIsReady:(id)arg1 ;
-(void)beginSyncWithAnchor:(id)arg1 validity:(id)arg2 count:(long long)arg3 forKey:(id)arg4 beginInfo:(id)arg5 configuration:(id)arg6 ;
-(void)getChangeAfterAnchor:(id)arg1 changeInfo:(id)arg2 ;
-(void)syncDidEnd;
-(void)dealloc;
-(id)init;
@end
