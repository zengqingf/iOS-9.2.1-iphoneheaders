/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:39 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NPKProtoMarkPaymentPassForDeleteRequest : PBRequest <NSCopying> {

	NSString* _passID;

}

@property (nonatomic,retain) NSString * passID;              //@synthesize passID=_passID - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setPassID:(NSString *)arg1 ;
-(NSString *)passID;
-(BOOL)readFrom:(id)arg1 ;
@end

