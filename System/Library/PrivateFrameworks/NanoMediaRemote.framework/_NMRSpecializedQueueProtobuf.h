/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:37 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoMediaRemote/NanoMediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface _NMRSpecializedQueueProtobuf : PBCodable <NSCopying> {

	NSString* _identifier;
	NSString* _localizedTitle;
	unsigned _queueType;
	NSString* _radioStationID;
	SCD_Struct_NM1 _has;

}

@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                  //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) BOOL hasQueueType; 
@property (assign,nonatomic) unsigned queueType;                     //@synthesize queueType=_queueType - In the implementation block
@property (nonatomic,readonly) BOOL hasLocalizedTitle; 
@property (nonatomic,retain) NSString * localizedTitle;              //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (nonatomic,readonly) BOOL hasRadioStationID; 
@property (nonatomic,retain) NSString * radioStationID;              //@synthesize radioStationID=_radioStationID - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)localizedTitle;
-(void)setLocalizedTitle:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasLocalizedTitle;
-(BOOL)hasIdentifier;
-(void)setQueueType:(unsigned)arg1 ;
-(unsigned)queueType;
-(NSString *)radioStationID;
-(void)setRadioStationID:(NSString *)arg1 ;
-(BOOL)hasRadioStationID;
-(void)setHasQueueType:(BOOL)arg1 ;
-(BOOL)hasQueueType;
-(BOOL)readFrom:(id)arg1 ;
@end
