/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:04 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSpotlight/CoreSpotlight-Structs.h>
#import <libobjc.A.dylib/CSCoderEncoder.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface CSPerson : NSObject <CSCoderEncoder, NSSecureCoding, NSCopying> {

	NSString* _displayName;
	NSArray* _handles;
	NSString* _handleIdentifier;
	NSString* _contactIdentifier;

}

@property (retain) NSString * displayName;                   //@synthesize displayName=_displayName - In the implementation block
@property (retain) NSArray * handles;                        //@synthesize handles=_handles - In the implementation block
@property (retain) NSString * handleIdentifier;              //@synthesize handleIdentifier=_handleIdentifier - In the implementation block
@property (copy) NSString * contactIdentifier;               //@synthesize contactIdentifier=_contactIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCSCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)handles;
-(NSString *)displayName;
-(NSString *)handleIdentifier;
-(void)setHandleIdentifier:(NSString *)arg1 ;
-(id)initWithDisplayName:(id)arg1 handles:(id)arg2 handleIdentifier:(id)arg3 ;
-(NSString *)contactIdentifier;
-(void)setContactIdentifier:(NSString *)arg1 ;
-(void)setHandles:(NSArray *)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
@end

