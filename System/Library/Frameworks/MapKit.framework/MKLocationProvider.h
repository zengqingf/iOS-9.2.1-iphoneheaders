/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:33 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSBundle, NSString, CLLocation;


@protocol MKLocationProvider <NSObject>
@property (assign,nonatomic,__weak) id<MKLocationProviderDelegate> delegate; 
@property (nonatomic,retain) NSBundle * effectiveBundle; 
@property (nonatomic,copy) NSString * effectiveBundleIdentifier; 
@property (assign,nonatomic) double desiredAccuracy; 
@property (assign,getter=isLocationServicesPreferencesDialogEnabled,nonatomic) BOOL locationServicesPreferencesDialogEnabled; 
@property (assign,nonatomic) double distanceFilter; 
@property (assign,nonatomic) BOOL matchInfoEnabled; 
@property (assign,nonatomic) int headingOrientation; 
@property (nonatomic,copy) id authorizationRequestBlock; 
@property (nonatomic,readonly) double expectedGpsUpdateInterval; 
@property (nonatomic,readonly) int authorizationStatus; 
@property (assign,nonatomic) long long activityType; 
@property (nonatomic,readonly) BOOL usesCLMapCorrection; 
@property (nonatomic,readonly) BOOL isSimulation; 
@property (nonatomic,readonly) BOOL isTracePlayer; 
@property (nonatomic,readonly) double timeScale; 
@property (nonatomic,readonly) CLLocation * lastLocation; 
@optional
-(CLLocation *)lastLocation;

@required
-(void)setDelegate:(id)arg1;
-(id<MKLocationProviderDelegate>)delegate;
-(long long)activityType;
-(NSBundle *)effectiveBundle;
-(int)authorizationStatus;
-(void)startUpdatingHeading;
-(void)stopUpdatingHeading;
-(void)setDistanceFilter:(double)arg1;
-(void)setHeadingOrientation:(int)arg1;
-(double)desiredAccuracy;
-(void)dismissHeadingCalibrationDisplay;
-(void)startUpdatingVehicleHeading;
-(id)authorizationRequestBlock;
-(void)startUpdatingVehicleSpeed;
-(BOOL)isLocationServicesPreferencesDialogEnabled;
-(int)headingOrientation;
-(void)stopUpdatingVehicleHeading;
-(void)setAuthorizationRequestBlock:(/*^block*/id)arg1;
-(NSString *)effectiveBundleIdentifier;
-(void)setActivityType:(long long)arg1;
-(void)setEffectiveBundle:(id)arg1;
-(BOOL)usesCLMapCorrection;
-(void)setEffectiveBundleIdentifier:(id)arg1;
-(void)setLocationServicesPreferencesDialogEnabled:(BOOL)arg1;
-(double)timeScale;
-(void)requestWhenInUseAuthorizationWithPrompt;
-(void)setMatchInfoEnabled:(BOOL)arg1;
-(BOOL)isTracePlayer;
-(BOOL)matchInfoEnabled;
-(BOOL)isSimulation;
-(void)stopUpdatingVehicleSpeed;
-(double)distanceFilter;
-(double)expectedGpsUpdateInterval;
-(void)requestWhenInUseAuthorization;
-(void)setDesiredAccuracy:(double)arg1;
-(void)startUpdatingLocation;
-(void)stopUpdatingLocation;

@end

