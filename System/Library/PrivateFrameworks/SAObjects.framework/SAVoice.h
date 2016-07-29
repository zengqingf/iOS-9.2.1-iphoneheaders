/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:51 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSString;

@interface SAVoice : SADomainObject

@property (nonatomic,copy) NSString * gender; 
@property (nonatomic,copy) NSString * languageString; 
@property (nonatomic,copy) NSString * masteredVersion; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * quality; 
+(id)voice;
+(id)voiceWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)groupIdentifier;
-(NSString *)gender;
-(void)setGender:(NSString *)arg1 ;
-(NSString *)languageString;
-(void)setLanguageString:(NSString *)arg1 ;
-(NSString *)masteredVersion;
-(void)setMasteredVersion:(NSString *)arg1 ;
-(NSString *)quality;
-(void)setQuality:(NSString *)arg1 ;
-(id)encodedClassName;
@end
