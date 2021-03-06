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

@class NSString, NSMutableArray;

@interface GEOPDAnalyticMetadata : PBCodable <NSCopying> {

	SCD_Struct_GE4 _sessionId;
	NSString* _appIdentifier;
	NSString* _appMajorVersion;
	NSString* _appMinorVersion;
	NSString* _hardwareModel;
	NSString* _osVersion;
	int _requestSource;
	unsigned _sequenceNumber;
	NSMutableArray* _serviceTags;
	BOOL _isFromApi;
	BOOL _isInternalInstall;
	BOOL _isInternalTool;
	SCD_Struct_GE60 _has;

}

@property (nonatomic,readonly) BOOL hasAppIdentifier; 
@property (nonatomic,retain) NSString * appIdentifier;                  //@synthesize appIdentifier=_appIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasAppMajorVersion; 
@property (nonatomic,retain) NSString * appMajorVersion;                //@synthesize appMajorVersion=_appMajorVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasAppMinorVersion; 
@property (nonatomic,retain) NSString * appMinorVersion;                //@synthesize appMinorVersion=_appMinorVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasHardwareModel; 
@property (nonatomic,retain) NSString * hardwareModel;                  //@synthesize hardwareModel=_hardwareModel - In the implementation block
@property (nonatomic,readonly) BOOL hasOsVersion; 
@property (nonatomic,retain) NSString * osVersion;                      //@synthesize osVersion=_osVersion - In the implementation block
@property (assign,nonatomic) BOOL hasIsInternalTool; 
@property (assign,nonatomic) BOOL isInternalTool;                       //@synthesize isInternalTool=_isInternalTool - In the implementation block
@property (assign,nonatomic) BOOL hasIsInternalInstall; 
@property (assign,nonatomic) BOOL isInternalInstall;                    //@synthesize isInternalInstall=_isInternalInstall - In the implementation block
@property (assign,nonatomic) BOOL hasSessionId; 
@property (assign,nonatomic) SCD_Struct_GE4 sessionId;                  //@synthesize sessionId=_sessionId - In the implementation block
@property (assign,nonatomic) BOOL hasSequenceNumber; 
@property (assign,nonatomic) unsigned sequenceNumber;                   //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (assign,nonatomic) BOOL hasRequestSource; 
@property (assign,nonatomic) int requestSource;                         //@synthesize requestSource=_requestSource - In the implementation block
@property (assign,nonatomic) BOOL hasIsFromApi; 
@property (assign,nonatomic) BOOL isFromApi;                            //@synthesize isFromApi=_isFromApi - In the implementation block
@property (nonatomic,retain) NSMutableArray * serviceTags;              //@synthesize serviceTags=_serviceTags - In the implementation block
-(id)initWithTraits:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setSessionId:(SCD_Struct_GE4)arg1 ;
-(SCD_Struct_GE4)sessionId;
-(BOOL)hasSessionId;
-(void)setHasSessionId:(BOOL)arg1 ;
-(NSMutableArray *)serviceTags;
-(void)setServiceTags:(NSMutableArray *)arg1 ;
-(void)setHasSequenceNumber:(BOOL)arg1 ;
-(void)addServiceTag:(id)arg1 ;
-(BOOL)hasSequenceNumber;
-(unsigned long long)serviceTagsCount;
-(id)serviceTagAtIndex:(unsigned long long)arg1 ;
-(unsigned)sequenceNumber;
-(void)setSequenceNumber:(unsigned)arg1 ;
-(void)clearServiceTags;
-(void)setOsVersion:(NSString *)arg1 ;
-(BOOL)hasOsVersion;
-(NSString *)osVersion;
-(BOOL)hasHardwareModel;
-(BOOL)hasAppMinorVersion;
-(NSString *)appMinorVersion;
-(NSString *)hardwareModel;
-(BOOL)hasAppMajorVersion;
-(NSString *)appMajorVersion;
-(void)setAppMinorVersion:(NSString *)arg1 ;
-(void)setHardwareModel:(NSString *)arg1 ;
-(void)setAppMajorVersion:(NSString *)arg1 ;
-(BOOL)isInternalInstall;
-(void)setAppIdentifier:(NSString *)arg1 ;
-(void)setHasIsFromApi:(BOOL)arg1 ;
-(NSString *)appIdentifier;
-(BOOL)hasAppIdentifier;
-(BOOL)hasIsFromApi;
-(BOOL)hasIsInternalInstall;
-(BOOL)isFromApi;
-(void)setHasRequestSource:(BOOL)arg1 ;
-(BOOL)hasRequestSource;
-(void)setIsFromApi:(BOOL)arg1 ;
-(void)setHasIsInternalTool:(BOOL)arg1 ;
-(int)requestSource;
-(BOOL)isInternalTool;
-(void)setIsInternalTool:(BOOL)arg1 ;
-(void)setRequestSource:(int)arg1 ;
-(void)setHasIsInternalInstall:(BOOL)arg1 ;
-(void)setIsInternalInstall:(BOOL)arg1 ;
-(BOOL)hasIsInternalTool;
-(BOOL)readFrom:(id)arg1 ;
@end

