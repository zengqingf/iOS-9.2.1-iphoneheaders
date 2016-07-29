/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:02 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPOplockFailure, CKDPUniqueFieldFailure;

@interface CKDPResponseOperationResultErrorClient : PBCodable <NSCopying> {

	CKDPOplockFailure* _oplockFailure;
	int _type;
	CKDPUniqueFieldFailure* _uniqueFieldFailure;
	SCD_Struct_CK1 _has;

}

@property (nonatomic,readonly) BOOL hasUniqueFieldFailure; 
@property (nonatomic,retain) CKDPUniqueFieldFailure * uniqueFieldFailure; 
@property (nonatomic,readonly) BOOL hasOplockFailure; 
@property (nonatomic,retain) CKDPOplockFailure * oplockFailure; 
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                                                 //@synthesize type=_type - In the implementation block
-(id)_prettyDictionaryRepresentation;
-(void)setUniqueFieldFailure:(CKDPUniqueFieldFailure *)arg1 ;
-(BOOL)hasUniqueFieldFailure;
-(CKDPUniqueFieldFailure *)uniqueFieldFailure;
-(void)setOplockFailure:(CKDPOplockFailure *)arg1 ;
-(BOOL)hasOplockFailure;
-(CKDPOplockFailure *)oplockFailure;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasType;
@end
