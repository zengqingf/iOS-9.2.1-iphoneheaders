/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:22 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_group;
@class NSObject;

@interface PFCoalescerActivityToken : NSObject {

	NSObject*<OS_dispatch_group> _group;

}

@property (retain) NSObject*<OS_dispatch_group> group;              //@synthesize group=_group - In the implementation block
-(void)dealloc;
-(void)setGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(NSObject*<OS_dispatch_group>)group;
-(void)endActivity;
-(id)initWithDispatchGroup:(id)arg1 ;
@end
