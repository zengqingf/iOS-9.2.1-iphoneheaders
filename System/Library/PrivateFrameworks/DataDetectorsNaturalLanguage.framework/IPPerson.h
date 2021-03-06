/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:44 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsNaturalLanguage.framework/DataDetectorsNaturalLanguage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface IPPerson : NSObject {

	NSString* _fullName;
	NSString* _email;
	NSString* _ABUUID;

}

@property (retain) NSString * fullName;                            //@synthesize fullName=_fullName - In the implementation block
@property (retain) NSString * email;                               //@synthesize email=_email - In the implementation block
@property (retain) NSString * ABUUID;                              //@synthesize ABUUID=_ABUUID - In the implementation block
@property (copy,readonly) NSString * displayableName; 
-(id)init;
-(id)initWithString:(id)arg1 ;
-(void)setEmail:(NSString *)arg1 ;
-(void)setFullName:(NSString *)arg1 ;
-(NSString *)displayableName;
-(NSString *)email;
-(NSString *)ABUUID;
-(void)setABUUID:(NSString *)arg1 ;
-(id)initWithEmail:(id)arg1 fullName:(id)arg2 ;
-(NSString *)fullName;
@end

