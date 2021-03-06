/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:27 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOPBTransitLineDisplayHints : PBCodable <NSCopying> {

	BOOL _showVehicleNumber;
	SCD_Struct_GE3 _has;

}

@property (assign,nonatomic) BOOL hasShowVehicleNumber; 
@property (assign,nonatomic) BOOL showVehicleNumber;                 //@synthesize showVehicleNumber=_showVehicleNumber - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasShowVehicleNumber;
-(void)setShowVehicleNumber:(BOOL)arg1 ;
-(BOOL)showVehicleNumber;
-(void)setHasShowVehicleNumber:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
@end

