/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:54 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAMicroblogMicroblogSearchResultPost.h>

@class NSNumber, NSURL;

@interface SAMicroblogMicroblogSearchEmbeddedImage : SAMicroblogMicroblogSearchResultPost

@property (nonatomic,copy) NSNumber * height; 
@property (nonatomic,copy) NSURL * imageURL; 
@property (nonatomic,copy) NSNumber * width; 
+(id)microblogSearchEmbeddedImage;
+(id)microblogSearchEmbeddedImageWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSNumber *)width;
-(NSNumber *)height;
-(void)setWidth:(NSNumber *)arg1 ;
-(void)setHeight:(NSNumber *)arg1 ;
-(id)groupIdentifier;
-(void)setImageURL:(NSURL *)arg1 ;
-(NSURL *)imageURL;
-(id)encodedClassName;
@end

