/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:51 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <identityservicesd/identityservicesd-Structs.h>
#import <identityservicesd/IDSPeerMessage.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface IDSPeerAccessoryMessage : IDSPeerMessage <NSCopying> {

	NSData* _accessToken;

}

@property (copy) NSData * accessToken;              //@synthesize accessToken=_accessToken - In the implementation block
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAccessToken:(NSData *)arg1 ;
-(id)messageBody;
-(id)requiredKeys;
-(NSData *)accessToken;
@end
