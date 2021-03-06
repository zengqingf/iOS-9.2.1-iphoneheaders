/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:17 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOAdditionalEnabledMarkets, GEOClientCapabilities, GEOMapRegion, GEOLocation, GEODirectionsRequestFeedback, NSData, GEOOriginalRoute, GEORouteAttributes, GEORouteSummaryAttributes, NSMutableArray, GEOTFTrafficSnapshot;

@interface GEODirectionsRequest : PBRequest <NSCopying> {

	SCD_Struct_GE4 _sessionID;
	unsigned long long _maxDecoderVersion;
	unsigned long long _maxGraphVersion;
	unsigned long long _sharedLibraryVersion;
	GEOAdditionalEnabledMarkets* _additionalEnabledMarkets;
	GEOClientCapabilities* _clientCapabilities;
	GEOMapRegion* _currentMapRegion;
	GEOLocation* _currentUserLocation;
	int _departureTime;
	GEODirectionsRequestFeedback* _feedback;
	unsigned _mainTransportTypeMaxRouteCount;
	NSData* _originalDirectionsResponseID;
	GEOOriginalRoute* _originalRoute;
	NSData* _originalRouteID;
	NSData* _originalRouteZilchPoints;
	GEORouteAttributes* _routeAttributes;
	GEORouteSummaryAttributes* _routeSummaryAttributes;
	unsigned _sequenceNumber;
	NSMutableArray* _serviceTags;
	NSData* _sessionState;
	unsigned _timeSinceLastRerouteRequest;
	GEOTFTrafficSnapshot* _trafficSnapshot;
	NSMutableArray* _waypointTypeds;
	BOOL _getRouteForZilchPoints;
	BOOL _isFromAPI;
	BOOL _needLatency;
	BOOL _useLiveTrafficAsFallback;
	SCD_Struct_GE5 _has;

}

@property (assign,nonatomic) BOOL hasNeedLatency; 
@property (assign,nonatomic) BOOL needLatency; 
@property (nonatomic,readonly) BOOL hasTrafficSnapshot; 
@property (nonatomic,retain) GEOTFTrafficSnapshot * trafficSnapshot; 
@property (assign,nonatomic) BOOL hasUseLiveTrafficAsFallback; 
@property (assign,nonatomic) BOOL useLiveTrafficAsFallback; 
@property (nonatomic,readonly) BOOL hasRouteAttributes; 
@property (nonatomic,retain) GEORouteAttributes * routeAttributes;                                //@synthesize routeAttributes=_routeAttributes - In the implementation block
@property (assign,nonatomic) BOOL hasMainTransportTypeMaxRouteCount; 
@property (assign,nonatomic) unsigned mainTransportTypeMaxRouteCount;                             //@synthesize mainTransportTypeMaxRouteCount=_mainTransportTypeMaxRouteCount - In the implementation block
@property (nonatomic,readonly) BOOL hasCurrentUserLocation; 
@property (nonatomic,retain) GEOLocation * currentUserLocation;                                   //@synthesize currentUserLocation=_currentUserLocation - In the implementation block
@property (nonatomic,readonly) BOOL hasCurrentMapRegion; 
@property (nonatomic,retain) GEOMapRegion * currentMapRegion;                                     //@synthesize currentMapRegion=_currentMapRegion - In the implementation block
@property (nonatomic,readonly) BOOL hasOriginalRouteID; 
@property (nonatomic,retain) NSData * originalRouteID;                                            //@synthesize originalRouteID=_originalRouteID - In the implementation block
@property (nonatomic,readonly) BOOL hasOriginalRouteZilchPoints; 
@property (nonatomic,retain) NSData * originalRouteZilchPoints;                                   //@synthesize originalRouteZilchPoints=_originalRouteZilchPoints - In the implementation block
@property (assign,nonatomic) BOOL hasTimeSinceLastRerouteRequest; 
@property (assign,nonatomic) unsigned timeSinceLastRerouteRequest;                                //@synthesize timeSinceLastRerouteRequest=_timeSinceLastRerouteRequest - In the implementation block
@property (nonatomic,readonly) BOOL hasClientCapabilities; 
@property (nonatomic,retain) GEOClientCapabilities * clientCapabilities;                          //@synthesize clientCapabilities=_clientCapabilities - In the implementation block
@property (nonatomic,readonly) BOOL hasOriginalDirectionsResponseID; 
@property (nonatomic,retain) NSData * originalDirectionsResponseID;                               //@synthesize originalDirectionsResponseID=_originalDirectionsResponseID - In the implementation block
@property (assign,nonatomic) BOOL hasDepartureTime; 
@property (assign,nonatomic) int departureTime;                                                   //@synthesize departureTime=_departureTime - In the implementation block
@property (assign,nonatomic) BOOL hasGetRouteForZilchPoints; 
@property (assign,nonatomic) BOOL getRouteForZilchPoints;                                         //@synthesize getRouteForZilchPoints=_getRouteForZilchPoints - In the implementation block
@property (assign,nonatomic) BOOL hasSessionID; 
@property (assign,nonatomic) SCD_Struct_GE4 sessionID;                                            //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,readonly) BOOL hasFeedback; 
@property (nonatomic,retain) GEODirectionsRequestFeedback * feedback;                             //@synthesize feedback=_feedback - In the implementation block
@property (nonatomic,readonly) BOOL hasAdditionalEnabledMarkets; 
@property (nonatomic,retain) GEOAdditionalEnabledMarkets * additionalEnabledMarkets;              //@synthesize additionalEnabledMarkets=_additionalEnabledMarkets - In the implementation block
@property (nonatomic,retain) NSMutableArray * waypointTypeds;                                     //@synthesize waypointTypeds=_waypointTypeds - In the implementation block
@property (nonatomic,readonly) BOOL hasOriginalRoute; 
@property (nonatomic,retain) GEOOriginalRoute * originalRoute;                                    //@synthesize originalRoute=_originalRoute - In the implementation block
@property (assign,nonatomic) BOOL hasSequenceNumber; 
@property (assign,nonatomic) unsigned sequenceNumber;                                             //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (nonatomic,readonly) BOOL hasSessionState; 
@property (nonatomic,retain) NSData * sessionState;                                               //@synthesize sessionState=_sessionState - In the implementation block
@property (assign,nonatomic) BOOL hasIsFromAPI; 
@property (assign,nonatomic) BOOL isFromAPI;                                                      //@synthesize isFromAPI=_isFromAPI - In the implementation block
@property (nonatomic,readonly) BOOL hasRouteSummaryAttributes; 
@property (nonatomic,retain) GEORouteSummaryAttributes * routeSummaryAttributes;                  //@synthesize routeSummaryAttributes=_routeSummaryAttributes - In the implementation block
@property (nonatomic,retain) NSMutableArray * serviceTags;                                        //@synthesize serviceTags=_serviceTags - In the implementation block
@property (assign,nonatomic) BOOL hasMaxDecoderVersion; 
@property (assign,nonatomic) unsigned long long maxDecoderVersion;                                //@synthesize maxDecoderVersion=_maxDecoderVersion - In the implementation block
@property (assign,nonatomic) BOOL hasMaxGraphVersion; 
@property (assign,nonatomic) unsigned long long maxGraphVersion;                                  //@synthesize maxGraphVersion=_maxGraphVersion - In the implementation block
@property (assign,nonatomic) BOOL hasSharedLibraryVersion; 
@property (assign,nonatomic) unsigned long long sharedLibraryVersion;                             //@synthesize sharedLibraryVersion=_sharedLibraryVersion - In the implementation block
-(BOOL)hasNeedLatency;
-(void)setHasNeedLatency:(BOOL)arg1 ;
-(void)setNeedLatency:(BOOL)arg1 ;
-(BOOL)useLiveTrafficAsFallback;
-(GEOTFTrafficSnapshot *)trafficSnapshot;
-(BOOL)hasTrafficSnapshot;
-(BOOL)hasUseLiveTrafficAsFallback;
-(void)setHasUseLiveTrafficAsFallback:(BOOL)arg1 ;
-(void)setTrafficSnapshot:(GEOTFTrafficSnapshot *)arg1 ;
-(BOOL)needLatency;
-(void)setUseLiveTrafficAsFallback:(BOOL)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasSessionID;
-(void)setHasSessionID:(BOOL)arg1 ;
-(SCD_Struct_GE4)sessionID;
-(void)setSessionID:(SCD_Struct_GE4)arg1 ;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(void)setOriginalDirectionsResponseID:(NSData *)arg1 ;
-(BOOL)hasOriginalDirectionsResponseID;
-(NSData *)originalDirectionsResponseID;
-(BOOL)hasSharedLibraryVersion;
-(BOOL)hasCurrentMapRegion;
-(GEORouteSummaryAttributes *)routeSummaryAttributes;
-(BOOL)getRouteForZilchPoints;
-(void)setWaypointTypeds:(NSMutableArray *)arg1 ;
-(BOOL)hasDepartureTime;
-(void)setHasMaxDecoderVersion:(BOOL)arg1 ;
-(void)setCurrentUserLocation:(GEOLocation *)arg1 ;
-(void)setGetRouteForZilchPoints:(BOOL)arg1 ;
-(BOOL)isFromAPI;
-(BOOL)hasOriginalRoute;
-(GEOClientCapabilities *)clientCapabilities;
-(BOOL)hasOriginalRouteID;
-(NSData *)originalRouteZilchPoints;
-(BOOL)hasOriginalRouteZilchPoints;
-(NSData *)sessionState;
-(void)setClientCapabilities:(GEOClientCapabilities *)arg1 ;
-(void)setRouteSummaryAttributes:(GEORouteSummaryAttributes *)arg1 ;
-(void)clearWaypointTypeds;
-(void)setMaxDecoderVersion:(unsigned long long)arg1 ;
-(unsigned)timeSinceLastRerouteRequest;
-(BOOL)hasGetRouteForZilchPoints;
-(BOOL)hasRouteAttributes;
-(void)setMaxGraphVersion:(unsigned long long)arg1 ;
-(void)setCurrentMapRegion:(GEOMapRegion *)arg1 ;
-(GEORouteAttributes *)routeAttributes;
-(void)setHasMaxGraphVersion:(BOOL)arg1 ;
-(unsigned long long)maxDecoderVersion;
-(void)setHasGetRouteForZilchPoints:(BOOL)arg1 ;
-(unsigned)mainTransportTypeMaxRouteCount;
-(void)setTimeSinceLastRerouteRequest:(unsigned)arg1 ;
-(NSMutableArray *)serviceTags;
-(BOOL)hasMaxDecoderVersion;
-(void)setServiceTags:(NSMutableArray *)arg1 ;
-(void)setHasTimeSinceLastRerouteRequest:(BOOL)arg1 ;
-(void)setHasSequenceNumber:(BOOL)arg1 ;
-(int)departureTime;
-(void)setFeedback:(GEODirectionsRequestFeedback *)arg1 ;
-(void)setSharedLibraryVersion:(unsigned long long)arg1 ;
-(GEOLocation *)currentUserLocation;
-(void)setOriginalRouteID:(NSData *)arg1 ;
-(void)setIsFromAPI:(BOOL)arg1 ;
-(NSMutableArray *)waypointTypeds;
-(void)setSessionState:(NSData *)arg1 ;
-(void)addServiceTag:(id)arg1 ;
-(GEOAdditionalEnabledMarkets *)additionalEnabledMarkets;
-(void)setMainTransportTypeMaxRouteCount:(unsigned)arg1 ;
-(BOOL)hasTimeSinceLastRerouteRequest;
-(BOOL)hasSequenceNumber;
-(void)setRouteAttributes:(GEORouteAttributes *)arg1 ;
-(void)setOriginalRoute:(GEOOriginalRoute *)arg1 ;
-(BOOL)hasClientCapabilities;
-(GEODirectionsRequestFeedback *)feedback;
-(void)setHasMainTransportTypeMaxRouteCount:(BOOL)arg1 ;
-(BOOL)hasSessionState;
-(unsigned long long)serviceTagsCount;
-(id)serviceTagAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasMaxGraphVersion;
-(unsigned long long)maxGraphVersion;
-(BOOL)hasAdditionalEnabledMarkets;
-(void)setOriginalRouteZilchPoints:(NSData *)arg1 ;
-(BOOL)hasRouteSummaryAttributes;
-(void)setAdditionalEnabledMarkets:(GEOAdditionalEnabledMarkets *)arg1 ;
-(unsigned)sequenceNumber;
-(NSData *)originalRouteID;
-(unsigned long long)sharedLibraryVersion;
-(BOOL)hasFeedback;
-(void)setDepartureTime:(int)arg1 ;
-(void)setSequenceNumber:(unsigned)arg1 ;
-(unsigned long long)waypointTypedsCount;
-(void)setHasIsFromAPI:(BOOL)arg1 ;
-(GEOOriginalRoute *)originalRoute;
-(void)setHasDepartureTime:(BOOL)arg1 ;
-(void)setHasSharedLibraryVersion:(BOOL)arg1 ;
-(BOOL)hasMainTransportTypeMaxRouteCount;
-(void)addWaypointTyped:(id)arg1 ;
-(BOOL)hasCurrentUserLocation;
-(BOOL)hasIsFromAPI;
-(void)clearServiceTags;
-(id)waypointTypedAtIndex:(unsigned long long)arg1 ;
-(GEOMapRegion *)currentMapRegion;
-(BOOL)readFrom:(id)arg1 ;
@end

