/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:02 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreMotion/CoreMotion-Structs.h>
@interface CMMotionUtils : NSObject
+(id)sendMessageWithReplySync:(shared_ptr<CLConnectionMessage>*)arg1 ;
+(BOOL)featureAvailability:(const char*)arg1 ;
+(void)tccServiceMotionAccess;
+(BOOL)sendMessageSync:(shared_ptr<CLConnectionMessage>*)arg1 onConnection:(CLConnectionClient*)arg2 timeoutAfter:(double)arg3 withReplyHandler:(/*^block*/id)arg4 ;
+(void)setUpCMLogging;
+(BOOL)isMotionActivityEntitled;
+(id)logDirectory;
@end
