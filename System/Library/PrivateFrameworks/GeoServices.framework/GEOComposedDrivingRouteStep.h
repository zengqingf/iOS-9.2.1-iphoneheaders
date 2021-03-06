/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:17 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOComposedRouteStep.h>

@interface GEOComposedDrivingRouteStep : GEOComposedRouteStep {

	int _drivingSide;

}

@property (nonatomic,readonly) int drivingSide;              //@synthesize drivingSide=_drivingSide - In the implementation block
-(id)initWithComposedRoute:(id)arg1 GEOStep:(id)arg2 stepIndex:(unsigned long long)arg3 pointRange:(NSRange)arg4 maneuverPointRange:(NSRange)arg5 ;
-(int)drivingSide;
@end

