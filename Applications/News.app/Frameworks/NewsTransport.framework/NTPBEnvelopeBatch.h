/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:44:10 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /Applications/News.app/Frameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface NTPBEnvelopeBatch : PBCodable <NSCopying> {

	NSMutableArray* _envelopes;
	int _majorVersion;
	int _minorVersion;
	int _patchVersion;
	SCD_Struct_NT8 _has;

}

@property (nonatomic,retain) NSMutableArray * envelopes;              //@synthesize envelopes=_envelopes - In the implementation block
@property (assign,nonatomic) BOOL hasMajorVersion; 
@property (assign,nonatomic) int majorVersion;                        //@synthesize majorVersion=_majorVersion - In the implementation block
@property (assign,nonatomic) BOOL hasMinorVersion; 
@property (assign,nonatomic) int minorVersion;                        //@synthesize minorVersion=_minorVersion - In the implementation block
@property (assign,nonatomic) BOOL hasPatchVersion; 
@property (assign,nonatomic) int patchVersion;                        //@synthesize patchVersion=_patchVersion - In the implementation block
-(void)addEnvelope:(id)arg1 ;
-(void)clearEnvelopes;
-(unsigned long long)envelopesCount;
-(id)envelopeAtIndex:(unsigned long long)arg1 ;
-(void)setMajorVersion:(int)arg1 ;
-(void)setHasMajorVersion:(BOOL)arg1 ;
-(BOOL)hasMajorVersion;
-(void)setMinorVersion:(int)arg1 ;
-(void)setHasMinorVersion:(BOOL)arg1 ;
-(BOOL)hasMinorVersion;
-(void)setPatchVersion:(int)arg1 ;
-(void)setHasPatchVersion:(BOOL)arg1 ;
-(BOOL)hasPatchVersion;
-(NSMutableArray *)envelopes;
-(void)setEnvelopes:(NSMutableArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)majorVersion;
-(int)minorVersion;
-(int)patchVersion;
-(BOOL)readFrom:(id)arg1 ;
@end

