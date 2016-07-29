/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:23 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@interface _GEOCandidateRouteMatch : NSObject {

	double _score;
	double _distanceFromRoute;
	PolylineCoordinate _routeCoordinate;
	SCD_Struct_GE16 _locationCoordinate;
	unsigned long long _stepIndex;

}

@property (assign,nonatomic) double score;                                    //@synthesize score=_score - In the implementation block
@property (assign,nonatomic) double distanceFromRoute;                        //@synthesize distanceFromRoute=_distanceFromRoute - In the implementation block
@property (assign,nonatomic) PolylineCoordinate routeCoordinate;              //@synthesize routeCoordinate=_routeCoordinate - In the implementation block
@property (assign,nonatomic) SCD_Struct_GE16 locationCoordinate;              //@synthesize locationCoordinate=_locationCoordinate - In the implementation block
@property (assign,nonatomic) unsigned long long stepIndex;                    //@synthesize stepIndex=_stepIndex - In the implementation block
-(void)dealloc;
-(id)description;
-(id)initWithRoute:(id)arg1 ;
-(void)setScore:(double)arg1 ;
-(PolylineCoordinate)routeCoordinate;
-(void)setRouteCoordinate:(PolylineCoordinate)arg1 ;
-(unsigned long long)stepIndex;
-(void)setStepIndex:(unsigned long long)arg1 ;
-(double)distanceFromRoute;
-(SCD_Struct_GE16)locationCoordinate;
-(void)setLocationCoordinate:(SCD_Struct_GE16)arg1 ;
-(void)setDistanceFromRoute:(double)arg1 ;
-(double)score;
@end
