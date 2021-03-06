/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:52 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OADProperties.h>
#import <libobjc.A.dylib/OADEffectsParent.h>

@class NSString, OADHyperlink, OADFill, OADStroke, NSArray, OADColor;

@interface OADCharacterProperties : OADProperties <OADEffectsParent> {

	NSString* mLatinFont;
	NSString* mEastAsianFont;
	NSString* mBidiFont;
	NSString* mHAnsiFont;
	NSString* mSymbolFont;
	OADHyperlink* mClickHyperlink;
	OADHyperlink* mHoverHyperlink;
	OADFill* mFill;
	OADStroke* mStroke;
	NSArray* mEffects;
	OADFill* mUnderlineFill;
	OADStroke* mUnderlineStroke;
	OADColor* mHighlight;
	float mOpacity;
	float mSize;
	float mSpacing;
	float mBaseline;
	unsigned char mUnderlineType;
	unsigned char mFormatType;
	unsigned char mFormatKerningType;
	unsigned char mStrikeThroughType;
	unsigned char mCaps;
	int mLanguage;
	unsigned mHasUnderlineFill : 1;
	unsigned mHasUnderlineStroke : 1;
	unsigned mHasHighlight : 1;
	unsigned mHasOpacity : 1;
	unsigned mHasIsBold : 1;
	unsigned mIsBold : 1;
	unsigned mHasIsItalic : 1;
	unsigned mIsItalic : 1;
	unsigned mHasUnderlineType : 1;
	unsigned mHasFormatType : 1;
	unsigned mHasFormatKerningType : 1;
	unsigned mHasStrikeThroughType : 1;
	unsigned mHasSize : 1;
	unsigned mHasSpacing : 1;
	unsigned mHasKerning : 1;
	unsigned mHasIsVerticalText : 1;
	unsigned mIsVerticalText : 1;
	unsigned mHasIsRightToLeft : 1;
	unsigned mIsRightToLeft : 1;
	unsigned mHasBaseline : 1;
	unsigned mHasIsHorizontalNormalized : 1;
	unsigned mIsHorizontalNormalized : 1;
	unsigned mHasCaps : 1;
	unsigned mHasLanguage : 1;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(float)size;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)fill;
-(id)stroke;
-(void)setSize:(float)arg1 ;
-(float)opacity;
-(void)setOpacity:(float)arg1 ;
-(BOOL)isBold;
-(void)setHighlight:(id)arg1 ;
-(id)highlight;
-(id)symbolFont;
-(void)setSpacing:(float)arg1 ;
-(float)spacing;
-(int)language;
-(void)setLanguage:(int)arg1 ;
-(id)clickHyperlink;
-(unsigned char)caps;
-(void)setFill:(id)arg1 ;
-(void)setStroke:(id)arg1 ;
-(unsigned char)formatType;
-(BOOL)isItalic;
-(BOOL)hasFill;
-(BOOL)hasStroke;
-(id)latinFont;
-(BOOL)hasSize;
-(BOOL)hasLatinFont;
-(id)eastAsianFont;
-(id)bidiFont;
-(BOOL)hasBaseline;
-(float)baseline;
-(BOOL)hasIsBold;
-(id)effects;
-(unsigned char)underlineType;
-(BOOL)hasStrikeThroughType;
-(unsigned char)strikeThroughType;
-(BOOL)hasCaps;
-(BOOL)hasSpacing;
-(id)hoverHyperlink;
-(void)setEffects:(id)arg1 ;
-(void)setIsBold:(BOOL)arg1 ;
-(void)setUnderlineType:(unsigned char)arg1 ;
-(void)setIsItalic:(BOOL)arg1 ;
-(void)setBaseline:(float)arg1 ;
-(void)setIsVerticalText:(BOOL)arg1 ;
-(void)setIsRightToLeft:(BOOL)arg1 ;
-(void)setStrikeThroughType:(unsigned char)arg1 ;
-(void)setCaps:(unsigned char)arg1 ;
-(void)setUnderlineFill:(id)arg1 ;
-(void)setUnderlineStroke:(id)arg1 ;
-(void)setClickHyperlink:(id)arg1 ;
-(void)setHoverHyperlink:(id)arg1 ;
-(void)setFormatType:(unsigned char)arg1 ;
-(void)setLatinFont:(id)arg1 ;
-(void)setEastAsianFont:(id)arg1 ;
-(void)setBidiFont:(id)arg1 ;
-(void)setHAnsiFont:(id)arg1 ;
-(void)setSymbolFont:(id)arg1 ;
-(void)setFormatKerningType:(unsigned char)arg1 ;
-(void)setIsHorizontalNormalized:(BOOL)arg1 ;
-(BOOL)hasOpacity;
-(BOOL)hasUnderlineType;
-(BOOL)hasHighlight;
-(BOOL)hasUnderlineFill;
-(BOOL)hasUnderlineStroke;
-(BOOL)hasFormatType;
-(BOOL)hasFormatKerningType;
-(BOOL)hasIsVerticalText;
-(BOOL)hasIsHorizontalNormalized;
-(BOOL)hasLanguage;
-(BOOL)hasHAnsiFont;
-(BOOL)hasSymbolFont;
-(id)hansiFont;
-(id)underlineFill;
-(id)underlineStroke;
-(unsigned char)formatKerningType;
-(BOOL)isVerticalText;
-(BOOL)isHorizontalNormalized;
-(void)overrideWithCharacterProperties:(id)arg1 ;
-(BOOL)isAnyCharacterPropertyOverridden;
-(id)initWithDefaults;
-(void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1 ;
-(BOOL)isAnythingOverridden;
-(void)removeUnnecessaryOverrides;
-(BOOL)hasEastAsianFont;
-(BOOL)hasBidiFont;
-(BOOL)hasIsRightToLeft;
-(BOOL)isRightToLeft;
-(void)overrideWithProperties:(id)arg1 ;
-(BOOL)hasEffects;
-(BOOL)hasIsItalic;
@end

