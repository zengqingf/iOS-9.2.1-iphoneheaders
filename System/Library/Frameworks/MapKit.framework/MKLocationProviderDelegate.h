/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:34 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MKLocationProviderDelegate <NSObject>
@required
-(void)locationProvider:(id)arg1 didUpdateLocation:(id)arg2 lastKnownNavCourse:(double)arg3;
-(void)locationProviderDidPauseLocationUpdates:(id)arg1;
-(void)locationProviderDidResumeLocationUpdates:(id)arg1;
-(void)locationProvider:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;
-(void)locationProvider:(id)arg1 didReceiveError:(id)arg2;
-(void)locationProviderDidChangeAuthorizationStatus:(id)arg1;
-(BOOL)locationProviderShouldPauseLocationUpdates:(id)arg1;
-(void)locationProvider:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;
-(void)locationProvider:(id)arg1 didUpdateLocation:(id)arg2;
-(void)locationProvider:(id)arg1 didUpdateHeading:(id)arg2;

@end
