/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:19 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <iWorkImport/TSDMixing.h>

@interface TSDImageAdjustments : NSObject <NSCopying, NSMutableCopying, TSDMixing> {

	double mExposure;
	double mSaturation;
	double mContrast;
	double mHighlights;
	double mShadows;
	double mSharpness;
	double mDenoise;
	double mTemperature;
	double mTint;
	double mBottomLevel;
	double mTopLevel;
	double mGamma;
	BOOL mEnhance;
	BOOL mRepresentsSageAdjustments;

}

@property (nonatomic,readonly) double exposure; 
@property (nonatomic,readonly) double saturation; 
@property (nonatomic,readonly) double contrast; 
@property (nonatomic,readonly) double highlights; 
@property (nonatomic,readonly) double shadows; 
@property (nonatomic,readonly) double sharpness; 
@property (nonatomic,readonly) double denoise; 
@property (nonatomic,readonly) double temperature; 
@property (nonatomic,readonly) double tint; 
@property (nonatomic,readonly) double bottomLevel; 
@property (nonatomic,readonly) double topLevel; 
@property (nonatomic,readonly) double gamma; 
@property (nonatomic,readonly) BOOL enhance; 
@property (nonatomic,readonly) BOOL representsSageAdjustments; 
-(void)saveToArchive:(ImageAdjustmentsArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithArchive:(const ImageAdjustmentsArchive*)arg1 unarchiver:(id)arg2 ;
-(void)i_initFromDefaultArchive;
-(id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2 ;
-(long long)mixingTypeWithObject:(id)arg1 context:(id)arg2 ;
-(BOOL)enhance;
-(double)bottomLevel;
-(double)highlights;
-(double)denoise;
-(BOOL)representsSageAdjustments;
-(id)imageAdjustmentsWithoutEnhance;
-(double)sharpness;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(double)contrast;
-(double)shadows;
-(double)saturation;
-(double)temperature;
-(double)exposure;
-(double)topLevel;
-(double)gamma;
-(double)tint;
@end

