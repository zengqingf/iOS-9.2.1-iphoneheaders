/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:00 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSArray, NSNumber, SAUIImageResource, NSString;

@interface SAUIAlternateProviderResult : SADomainObject

@property (nonatomic,copy) NSArray * commands; 
@property (nonatomic,copy) NSNumber * numberOfResults; 
@property (nonatomic,retain) SAUIImageResource * providerImage; 
@property (nonatomic,copy) NSString * providerName; 
+(id)alternateProviderResult;
+(id)alternateProviderResultWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)providerName;
-(void)setCommands:(NSArray *)arg1 ;
-(NSArray *)commands;
-(NSNumber *)numberOfResults;
-(void)setNumberOfResults:(NSNumber *)arg1 ;
-(id)groupIdentifier;
-(void)setProviderImage:(SAUIImageResource *)arg1 ;
-(void)setProviderName:(NSString *)arg1 ;
-(SAUIImageResource *)providerImage;
-(id)encodedClassName;
@end
