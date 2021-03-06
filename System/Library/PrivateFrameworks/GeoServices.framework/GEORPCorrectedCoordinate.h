/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:29 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOLatLng;

@interface GEORPCorrectedCoordinate : PBCodable <NSCopying> {

	GEOLatLng* _correctedCoordinate;
	GEOLatLng* _originalCoordinate;

}

@property (nonatomic,readonly) BOOL hasOriginalCoordinate; 
@property (nonatomic,retain) GEOLatLng * originalCoordinate;               //@synthesize originalCoordinate=_originalCoordinate - In the implementation block
@property (nonatomic,readonly) BOOL hasCorrectedCoordinate; 
@property (nonatomic,retain) GEOLatLng * correctedCoordinate;              //@synthesize correctedCoordinate=_correctedCoordinate - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasCorrectedCoordinate;
-(void)setCorrectedCoordinate:(GEOLatLng *)arg1 ;
-(GEOLatLng *)correctedCoordinate;
-(void)setOriginalCoordinate:(GEOLatLng *)arg1 ;
-(BOOL)hasOriginalCoordinate;
-(GEOLatLng *)originalCoordinate;
-(BOOL)readFrom:(id)arg1 ;
@end

