/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:30 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOCarInfo, GEOMapRegion, GEOPlaceActionDetails, NSString, GEORouteDetails, GEOMapsServerMetadata;

@interface GEOMapsUsageFeedbackCollection : PBCodable <NSCopying> {

	SCD_Struct_GE4 _sessionID;
	double _sessionRelativeTimestamp;
	double _zoomLevel;
	int _actionType;
	GEOCarInfo* _carInfo;
	int _locationBucket;
	GEOMapRegion* _mapRegion;
	GEOPlaceActionDetails* _placeActionDetails;
	NSString* _providerId;
	GEORouteDetails* _routeDetails;
	int _sequenceNumber;
	GEOMapsServerMetadata* _serverMetadata;
	int _uiTarget;
	SCD_Struct_GE63 _has;

}

@property (assign,nonatomic) BOOL hasSessionID; 
@property (assign,nonatomic) SCD_Struct_GE4 sessionID;                                //@synthesize sessionID=_sessionID - In the implementation block
@property (assign,nonatomic) BOOL hasActionType; 
@property (assign,nonatomic) int actionType;                                          //@synthesize actionType=_actionType - In the implementation block
@property (assign,nonatomic) BOOL hasSessionRelativeTimestamp; 
@property (assign,nonatomic) double sessionRelativeTimestamp;                         //@synthesize sessionRelativeTimestamp=_sessionRelativeTimestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasPlaceActionDetails; 
@property (nonatomic,retain) GEOPlaceActionDetails * placeActionDetails;              //@synthesize placeActionDetails=_placeActionDetails - In the implementation block
@property (nonatomic,readonly) BOOL hasCarInfo; 
@property (nonatomic,retain) GEOCarInfo * carInfo;                                    //@synthesize carInfo=_carInfo - In the implementation block
@property (nonatomic,readonly) BOOL hasMapRegion; 
@property (nonatomic,retain) GEOMapRegion * mapRegion;                                //@synthesize mapRegion=_mapRegion - In the implementation block
@property (assign,nonatomic) BOOL hasZoomLevel; 
@property (assign,nonatomic) double zoomLevel;                                        //@synthesize zoomLevel=_zoomLevel - In the implementation block
@property (assign,nonatomic) BOOL hasSequenceNumber; 
@property (assign,nonatomic) int sequenceNumber;                                      //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (nonatomic,readonly) BOOL hasRouteDetails; 
@property (nonatomic,retain) GEORouteDetails * routeDetails;                          //@synthesize routeDetails=_routeDetails - In the implementation block
@property (nonatomic,readonly) BOOL hasProviderId; 
@property (nonatomic,retain) NSString * providerId;                                   //@synthesize providerId=_providerId - In the implementation block
@property (nonatomic,readonly) BOOL hasServerMetadata; 
@property (nonatomic,retain) GEOMapsServerMetadata * serverMetadata;                  //@synthesize serverMetadata=_serverMetadata - In the implementation block
@property (assign,nonatomic) BOOL hasLocationBucket; 
@property (assign,nonatomic) int locationBucket;                                      //@synthesize locationBucket=_locationBucket - In the implementation block
@property (assign,nonatomic) BOOL hasUiTarget; 
@property (assign,nonatomic) int uiTarget;                                            //@synthesize uiTarget=_uiTarget - In the implementation block
+(id)feedbackCollectionWithTraits:(id)arg1 placeActionDetails:(id)arg2 routeDetails:(id)arg3 ;
+(id)feedbackCollectionWithTraits:(id)arg1 flyoverAnimationID:(unsigned long long)arg2 timestamp:(double)arg3 resultIndex:(int)arg4 ;
+(id)feedbackCollectionWithTraits:(id)arg1 mapItem:(id)arg2 timestamp:(double)arg3 resultIndex:(int)arg4 ;
+(id)feedbackCollectionWithTraits:(id)arg1 placeActionDetails:(id)arg2 uiTarget:(int)arg3 ;
-(id)initWithTraits:(id)arg1 ;
-(id)initWithTraits:(id)arg1 flyoverAnimationID:(unsigned long long)arg2 timestamp:(double)arg3 resultIndex:(int)arg4 ;
-(id)initWithTraits:(id)arg1 placeActionDetails:(id)arg2 uiTarget:(int)arg3 ;
-(id)initWithTraits:(id)arg1 mapItem:(id)arg2 timestamp:(double)arg3 resultIndex:(int)arg4 ;
-(id)initWithTraits:(id)arg1 placeActionDetails:(id)arg2 routeDetails:(id)arg3 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setMapRegion:(GEOMapRegion *)arg1 ;
-(BOOL)hasSessionID;
-(GEOMapRegion *)mapRegion;
-(void)setHasSessionID:(BOOL)arg1 ;
-(SCD_Struct_GE4)sessionID;
-(void)setSessionID:(SCD_Struct_GE4)arg1 ;
-(BOOL)hasMapRegion;
-(GEOPlaceActionDetails *)placeActionDetails;
-(void)setProviderId:(NSString *)arg1 ;
-(void)setServerMetadata:(GEOMapsServerMetadata *)arg1 ;
-(BOOL)hasServerMetadata;
-(BOOL)hasLocationBucket;
-(BOOL)hasProviderId;
-(int)locationBucket;
-(GEORouteDetails *)routeDetails;
-(int)uiTarget;
-(BOOL)hasPlaceActionDetails;
-(void)setUiTarget:(int)arg1 ;
-(void)setLocationBucket:(int)arg1 ;
-(void)setPlaceActionDetails:(GEOPlaceActionDetails *)arg1 ;
-(BOOL)hasRouteDetails;
-(GEOMapsServerMetadata *)serverMetadata;
-(void)setHasUiTarget:(BOOL)arg1 ;
-(void)setHasLocationBucket:(BOOL)arg1 ;
-(void)setRouteDetails:(GEORouteDetails *)arg1 ;
-(BOOL)hasUiTarget;
-(NSString *)providerId;
-(void)setHasSequenceNumber:(BOOL)arg1 ;
-(BOOL)hasSequenceNumber;
-(int)sequenceNumber;
-(void)setSequenceNumber:(int)arg1 ;
-(double)sessionRelativeTimestamp;
-(BOOL)hasSessionRelativeTimestamp;
-(void)setHasSessionRelativeTimestamp:(BOOL)arg1 ;
-(void)setSessionRelativeTimestamp:(double)arg1 ;
-(void)setActionType:(int)arg1 ;
-(void)setHasActionType:(BOOL)arg1 ;
-(BOOL)hasActionType;
-(void)setZoomLevel:(double)arg1 ;
-(BOOL)hasZoomLevel;
-(void)setHasZoomLevel:(BOOL)arg1 ;
-(GEOCarInfo *)carInfo;
-(BOOL)hasCarInfo;
-(void)setCarInfo:(GEOCarInfo *)arg1 ;
-(double)zoomLevel;
-(int)actionType;
-(BOOL)readFrom:(id)arg1 ;
@end

