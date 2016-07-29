/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:11 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSupport/MapsSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOLatLng, GEOMapRegion;

@interface MSPDroppedPin : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOLatLng* _latLng;
	GEOMapRegion* _mapRegion;

}

@property (nonatomic,readonly) BOOL hasLatLng; 
@property (nonatomic,retain) GEOLatLng * latLng;                             //@synthesize latLng=_latLng - In the implementation block
@property (nonatomic,readonly) BOOL hasMapRegion; 
@property (nonatomic,retain) GEOMapRegion * mapRegion;                       //@synthesize mapRegion=_mapRegion - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(id)initWithSearchResult:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setMapRegion:(GEOMapRegion *)arg1 ;
-(GEOMapRegion *)mapRegion;
-(BOOL)hasMapRegion;
-(GEOLatLng *)latLng;
-(void)setLatLng:(GEOLatLng *)arg1 ;
-(PBUnknownFields *)unknownFields;
-(BOOL)hasLatLng;
-(BOOL)readFrom:(id)arg1 ;
@end
