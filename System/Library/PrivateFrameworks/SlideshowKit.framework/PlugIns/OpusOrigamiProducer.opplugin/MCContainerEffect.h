/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:23 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/MCContainer.h>
#import <OpusOrigamiProducer/MCActionSupport.h>

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSString, NSSet, NSArray;

@interface MCContainerEffect : MCContainer <MCActionSupport> {

	NSMutableArray* mSlides;
	NSMutableArray* mTexts;
	NSMutableDictionary* mActions;
	NSMutableDictionary* mEffectAttributes;
	BOOL mIsLive;
	NSString* mEffectID;

}

@property (readonly) NSDictionary * actions; 
@property (nonatomic,readonly) unsigned long long countOfActions; 
@property (readonly) NSSet * slides; 
@property (readonly) NSArray * orderedSlides; 
@property (nonatomic,readonly) unsigned long long countOfSlides; 
@property (nonatomic,readonly) unsigned long long nextAvailableSlideIndex; 
@property (readonly) NSSet * texts; 
@property (readonly) NSArray * orderedTexts; 
@property (nonatomic,readonly) unsigned long long countOfTexts; 
@property (nonatomic,readonly) unsigned long long nextAvailableTextIndex; 
@property (copy) NSString * effectID; 
@property (copy) NSDictionary * effectAttributes; 
@property (assign,nonatomic) BOOL isLive; 
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
-(void)demolishActions;
-(void)initActionsWithImprints:(id)arg1 ;
-(id)imprintsForActions;
-(NSDictionary *)actions;
-(id)actionForKey:(id)arg1 ;
-(void)removeAllActions;
-(void)setAction:(id)arg1 forKey:(id)arg2 ;
-(void)removeActionForKey:(id)arg1 ;
-(unsigned long long)countOfActions;
-(NSArray *)orderedSlides;
-(NSSet *)slides;
-(NSSet *)texts;
-(unsigned long long)countOfSlides;
-(NSString *)effectID;
-(id)addSlides:(long long)arg1 ;
-(void)removeAllTexts;
-(void)setIsLive:(BOOL)arg1 ;
-(unsigned long long)countOfTexts;
-(id)addSlide;
-(void)setEffectID:(NSString *)arg1 ;
-(void)demolish;
-(NSDictionary *)effectAttributes;
-(id)initWithImprint:(id)arg1 andMontage:(id)arg2 ;
-(void)setEffectAttribute:(id)arg1 forKey:(id)arg2 ;
-(unsigned long long)nextAvailableSlideIndex;
-(id)insertSlidesForAssets:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)insertSlideForContainer:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)removeSlidesAtIndices:(id)arg1 ;
-(unsigned long long)nextAvailableTextIndex;
-(id)insertTextsForAttributedStrings:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)insertTextsForAssets:(id)arg1 andKey:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)removeTextsAtIndices:(id)arg1 ;
-(id)insertSlideForAsset:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)insertSlideAtIndex:(long long)arg1 ;
-(void)moveSlidesAtIndices:(id)arg1 toIndex:(unsigned long long)arg2 ;
-(void)moveTextsAtIndices:(id)arg1 toIndex:(unsigned long long)arg2 ;
-(void)setEffectAttributes:(NSDictionary *)arg1 ;
-(id)addSlidesForAssets:(id)arg1 ;
-(id)addTextsForAttributedStrings:(id)arg1 ;
-(id)effectAttributeForKey:(id)arg1 ;
-(id)insertTextForAttributedString:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)addSlideForContainer:(id)arg1 ;
-(NSArray *)orderedTexts;
-(id)addSlideForAsset:(id)arg1 ;
-(id)insertTextForAsset:(id)arg1 andKey:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)addEffectAttributes:(id)arg1 ;
-(id)addTextForAttributedString:(id)arg1 ;
-(id)addTextForAsset:(id)arg1 andKey:(id)arg2 ;
-(id)addTextsForAssets:(id)arg1 andKey:(id)arg2 ;
-(void)removeAllSlides;
-(BOOL)isLive;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)textAtIndex:(unsigned long long)arg1 ;
-(id)imprint;
-(id)slideAtIndex:(unsigned long long)arg1 ;
@end
