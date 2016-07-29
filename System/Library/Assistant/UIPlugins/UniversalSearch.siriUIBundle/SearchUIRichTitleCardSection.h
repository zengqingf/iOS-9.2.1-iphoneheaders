/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:42 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Assistant/UIPlugins/UniversalSearch.siriUIBundle/UniversalSearch
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, UIImage;


@protocol SearchUIRichTitleCardSection <SearchUITitleCardSection>
@property (nonatomic,copy,readonly) NSString * subtitle; 
@property (nonatomic,copy,readonly) NSString * contentRatingText; 
@property (nonatomic,readonly) UIImage * titleImage; 
@property (nonatomic,readonly) BOOL centered; 
@property (nonatomic,readonly) BOOL shouldCropImageToCircle; 
@optional
-(BOOL)shouldCropImageToCircle;

@required
-(NSString *)subtitle;
-(NSString *)contentRatingText;
-(UIImage *)titleImage;
-(BOOL)centered;

@end
