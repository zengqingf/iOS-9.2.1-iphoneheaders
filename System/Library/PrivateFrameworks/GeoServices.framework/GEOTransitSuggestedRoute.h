/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:31 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, GEOTransitRouteDisplayStrings, NSData, GEOPBTransitRoutingIncidentMessage;

@interface GEOTransitSuggestedRoute : PBCodable <NSCopying> {

	SCD_Struct_GE1* _routeBadges;
	unsigned _absEndTime;
	unsigned _absStartTime;
	NSMutableArray* _connectionSets;
	GEOTransitRouteDisplayStrings* _displayStrings;
	NSMutableArray* _legs;
	unsigned _rank;
	NSData* _routeHandle;
	NSMutableArray* _routePlanningArtworks;
	NSMutableArray* _steps;
	GEOPBTransitRoutingIncidentMessage* _transitIncidentMessage;
	SCD_Struct_GE49 _has;

}

@property (assign,nonatomic) BOOL hasAbsStartTime; 
@property (assign,nonatomic) unsigned absStartTime;                                                    //@synthesize absStartTime=_absStartTime - In the implementation block
@property (assign,nonatomic) BOOL hasAbsEndTime; 
@property (assign,nonatomic) unsigned absEndTime;                                                      //@synthesize absEndTime=_absEndTime - In the implementation block
@property (nonatomic,retain) NSMutableArray * steps;                                                   //@synthesize steps=_steps - In the implementation block
@property (nonatomic,readonly) BOOL hasRouteHandle; 
@property (nonatomic,retain) NSData * routeHandle;                                                     //@synthesize routeHandle=_routeHandle - In the implementation block
@property (assign,nonatomic) BOOL hasRank; 
@property (assign,nonatomic) unsigned rank;                                                            //@synthesize rank=_rank - In the implementation block
@property (nonatomic,readonly) BOOL hasTransitIncidentMessage; 
@property (nonatomic,retain) GEOPBTransitRoutingIncidentMessage * transitIncidentMessage;              //@synthesize transitIncidentMessage=_transitIncidentMessage - In the implementation block
@property (nonatomic,retain) NSMutableArray * routePlanningArtworks;                                   //@synthesize routePlanningArtworks=_routePlanningArtworks - In the implementation block
@property (nonatomic,readonly) BOOL hasDisplayStrings; 
@property (nonatomic,retain) GEOTransitRouteDisplayStrings * displayStrings;                           //@synthesize displayStrings=_displayStrings - In the implementation block
@property (nonatomic,readonly) unsigned long long routeBadgesCount; 
@property (nonatomic,readonly) int* routeBadges; 
@property (nonatomic,retain) NSMutableArray * legs;                                                    //@synthesize legs=_legs - In the implementation block
@property (nonatomic,retain) NSMutableArray * connectionSets;                                          //@synthesize connectionSets=_connectionSets - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setRouteHandle:(NSData *)arg1 ;
-(NSData *)routeHandle;
-(BOOL)hasRouteHandle;
-(void)setTransitIncidentMessage:(GEOPBTransitRoutingIncidentMessage *)arg1 ;
-(BOOL)hasTransitIncidentMessage;
-(GEOPBTransitRoutingIncidentMessage *)transitIncidentMessage;
-(NSMutableArray *)steps;
-(void)clearSteps;
-(unsigned long long)stepsCount;
-(void)setSteps:(NSMutableArray *)arg1 ;
-(NSMutableArray *)legs;
-(void)setLegs:(NSMutableArray *)arg1 ;
-(NSMutableArray *)routePlanningArtworks;
-(void)setHasAbsStartTime:(BOOL)arg1 ;
-(BOOL)hasAbsStartTime;
-(void)setAbsStartTime:(unsigned)arg1 ;
-(void)setHasAbsEndTime:(BOOL)arg1 ;
-(BOOL)hasAbsEndTime;
-(unsigned)absEndTime;
-(unsigned)absStartTime;
-(void)setAbsEndTime:(unsigned)arg1 ;
-(unsigned long long)routePlanningArtworksCount;
-(int*)routeBadges;
-(GEOTransitRouteDisplayStrings *)displayStrings;
-(void)addConnectionSet:(id)arg1 ;
-(NSMutableArray *)connectionSets;
-(void)clearRouteBadges;
-(id)connectionSetAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)connectionSetsCount;
-(void)addRouteBadge:(int)arg1 ;
-(id)stepsAtIndex:(unsigned long long)arg1 ;
-(void)setRoutePlanningArtworks:(NSMutableArray *)arg1 ;
-(void)addRoutePlanningArtwork:(id)arg1 ;
-(void)setRouteBadges:(int*)arg1 count:(unsigned long long)arg2 ;
-(void)clearConnectionSets;
-(void)setConnectionSets:(NSMutableArray *)arg1 ;
-(void)clearRoutePlanningArtworks;
-(void)setDisplayStrings:(GEOTransitRouteDisplayStrings *)arg1 ;
-(void)setHasRank:(BOOL)arg1 ;
-(BOOL)hasRank;
-(unsigned long long)legsCount;
-(id)legAtIndex:(unsigned long long)arg1 ;
-(void)addSteps:(id)arg1 ;
-(int)routeBadgeAtIndex:(unsigned long long)arg1 ;
-(void)addLeg:(id)arg1 ;
-(void)clearLegs;
-(id)routePlanningArtworkAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)routeBadgesCount;
-(BOOL)hasDisplayStrings;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned)rank;
-(void)setRank:(unsigned)arg1 ;
@end
