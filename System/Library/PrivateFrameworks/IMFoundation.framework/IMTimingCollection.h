/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:58 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface IMTimingCollection : NSObject {

	NSMutableDictionary* _timings;
	NSObject*<OS_dispatch_queue> _queue;

}
+(id)globalTimingCollectionForKey:(id)arg1 ;
+(void)logTimingCollectionForKey:(id)arg1 ;
+(void)invalidateGlobalTimingCollectionForKey:(id)arg1 ;
+(id)activeGlobalTimingCollections;
+(void)invalidateGlobalTimingCollections;
+(id)IMCoreSetupTimingCollection;
+(void)IMCoreSetupTimingCollectionEnd;
-(void)dealloc;
-(id)init;
-(id)description;
-(BOOL)hasKey:(id)arg1 ;
-(double)totalTimeForKey:(id)arg1 ;
-(void)removeTimingForKey:(id)arg1 ;
-(void)startTimingForKey:(id)arg1 ;
-(void)stopTimingForKey:(id)arg1 ;
@end
