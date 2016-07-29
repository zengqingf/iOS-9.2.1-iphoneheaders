/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:05 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ATSessionObserver <NSObject>
@optional
-(void)session:(id)arg1 willBeginSessionTask:(id)arg2;
-(void)session:(id)arg1 didBeginSessionTask:(id)arg2;
-(void)session:(id)arg1 didUpdateSessionTask:(id)arg2;
-(void)session:(id)arg1 didFinishSessionTask:(id)arg2;
-(void)sessionWillBegin:(id)arg1;
-(void)sessionDidFinish:(id)arg1;

@end
