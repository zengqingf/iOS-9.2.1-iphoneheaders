/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:59 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, FBSApplicationDataStoreRepositoryClient;

@interface FBSApplicationDataStoreClientFactory : NSObject {

	unsigned long long _count;
	NSObject*<OS_dispatch_queue> _queue;
	FBSApplicationDataStoreRepositoryClient* _sharedClient;

}
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(id)checkout;
-(void)checkin;
@end

