/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:49 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <FMCore/FMCore-Structs.h>
@interface FMReachability : NSObject {

	BOOL localWiFiRef;
	SCNetworkReachabilityRef reachabilityRef;

}
+(id)reachabilityWithAddress:(const sockaddr_in*)arg1 ;
+(id)reachabilityForInternetConnection;
+(id)reachabilityForLocalWiFi;
+(id)reachabilityWithHostName:(id)arg1 ;
-(void)dealloc;
-(BOOL)connectionRequired;
-(unsigned long long)localWiFiStatusForFlags:(unsigned)arg1 ;
-(unsigned long long)networkStatusForFlags:(unsigned)arg1 ;
-(unsigned long long)currentReachabilityStatus;
-(BOOL)startNotifier;
-(void)stopNotifier;
@end

