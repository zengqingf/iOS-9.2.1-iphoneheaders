/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:05 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPRecordFieldIdentifier, CKDPRecordFieldValue;

@interface CKDPRecordField : PBCodable <NSCopying> {

	CKDPRecordFieldIdentifier* _identifier;
	CKDPRecordFieldValue* _value;

}

@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) CKDPRecordFieldIdentifier * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL hasValue; 
@property (nonatomic,retain) CKDPRecordFieldValue * value;                        //@synthesize value=_value - In the implementation block
+(id)emptyFieldWithKey:(id)arg1 ;
-(void)_CKLogToFileHandle:(id)arg1 atDepth:(int)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(CKDPRecordFieldIdentifier *)identifier;
-(CKDPRecordFieldValue *)value;
-(void)setValue:(CKDPRecordFieldValue *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(CKDPRecordFieldIdentifier *)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasIdentifier;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasValue;
@end
