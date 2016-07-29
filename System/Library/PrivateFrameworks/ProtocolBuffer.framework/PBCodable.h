/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:42 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/ProtocolBuffer-Structs.h>
#import <libobjc.A.dylib/PQLValuable.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface PBCodable : NSObject <PQLValuable, NSSecureCoding>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSData * data; 
+(id)newFromSqliteValue:(MemRef)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)options;
-(id)nmr_valueForPotentiallyUndefinedKey:(id)arg1 ;
-(void)sqliteBind:(sqlite3_stmtRef)arg1 index:(int)arg2 ;
-(id)redact;
-(id)_redact:(id)arg1 ;
-(BOOL)_isRedactable:(id)arg1 ;
-(void)_CKLogToFileHandle:(id)arg1 atDepth:(int)arg2 ;
-(BOOL)_hasIvar:(objc_ivarRef)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(NSData *)data;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(id)formattedText;
-(BOOL)readFrom:(id)arg1 ;
@end
