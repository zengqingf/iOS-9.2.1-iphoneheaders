/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:07 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, QLDismissTrackingInformation;

@interface QLDismissGestureRecognizer : NSObject {

	NSMutableArray* _actions;
	long long _state;
	QLDismissTrackingInformation* _trackingInformation;

}

@property (assign,nonatomic) long long state;                                       //@synthesize state=_state - In the implementation block
@property (retain) QLDismissTrackingInformation * trackingInformation;              //@synthesize trackingInformation=_trackingInformation - In the implementation block
-(void)dealloc;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(void)removeTarget:(id)arg1 action:(SEL)arg2 ;
-(void)addTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setTrackingInformation:(QLDismissTrackingInformation *)arg1 ;
-(QLDismissTrackingInformation *)trackingInformation;
@end

