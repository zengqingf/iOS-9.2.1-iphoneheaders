/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:26 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOVJunction : PBCodable <NSCopying> {

	NSMutableArray* _connectingRoads;
	NSMutableArray* _laneConnections;

}

@property (nonatomic,retain) NSMutableArray * connectingRoads;              //@synthesize connectingRoads=_connectingRoads - In the implementation block
@property (nonatomic,retain) NSMutableArray * laneConnections;              //@synthesize laneConnections=_laneConnections - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned long long)laneConnectionsCount;
-(NSMutableArray *)laneConnections;
-(void)setConnectingRoads:(NSMutableArray *)arg1 ;
-(void)clearConnectingRoads;
-(void)clearLaneConnections;
-(NSMutableArray *)connectingRoads;
-(id)connectingRoadAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)connectingRoadsCount;
-(void)addLaneConnections:(id)arg1 ;
-(void)addConnectingRoad:(id)arg1 ;
-(void)setLaneConnections:(NSMutableArray *)arg1 ;
-(id)laneConnectionsAtIndex:(unsigned long long)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
@end

