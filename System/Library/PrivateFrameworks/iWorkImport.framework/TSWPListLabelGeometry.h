/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:26 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSWPListLabelGeometry : NSObject {

	double mScale;
	double mBaselineOffset;
	BOOL mScaleWithText;

}

@property (assign,nonatomic) double scale; 
@property (assign,nonatomic) double baselineOffset; 
@property (assign,nonatomic) BOOL scaleWithText; 
+(id)listLabelGeometry;
-(BOOL)scaleWithText;
-(id)initWithScale:(double)arg1 scaleWithText:(BOOL)arg2 baselineOffset:(double)arg3 ;
-(void)setScaleWithText:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)setScale:(double)arg1 ;
-(double)scale;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)baselineOffset;
-(void)setBaselineOffset:(double)arg1 ;
@end
