/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:19 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVTimebaseObserver.h>

@class NSArray;

@interface AVOccasionalTimebaseObserver : AVTimebaseObserver {

	NSArray* _times;
	/*^block*/id _block;

}
-(void)dealloc;
-(id)initWithTimebase:(OpaqueCMTimebaseRef)arg1 times:(id)arg2 queue:(id)arg3 block:(/*^block*/id)arg4 ;
-(void)_effectiveRateChanged;
-(void)_resetNextFireTime;
-(void)_handleTimeDiscontinuity;
-(void)_fireBlock;
-(SCD_Struct_CM5)_nextFiringTimeAfterTime:(SCD_Struct_CM5)arg1 ;
-(SCD_Struct_CM5)_previousFiringTimeBeforeTime:(SCD_Struct_CM5)arg1 ;
@end
