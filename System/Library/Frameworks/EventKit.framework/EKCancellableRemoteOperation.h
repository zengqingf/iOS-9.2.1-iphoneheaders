/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:07 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol EKCancellableRemoteOperation <NSObject>
@optional
-(void)receivedBatchResultsFromServer:(id)arg1 finished:(BOOL)arg2;

@required
-(void)cancel;
-(void)disconnect;

@end

