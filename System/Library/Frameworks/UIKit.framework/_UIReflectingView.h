/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:53 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIView;

@interface _UIReflectingView : UIView {

	UIView* _containerView;
	UIView* _gradientView;
	double _reflectionAlpha;

}

@property (nonatomic,retain,readonly) UIView * containerView;              //@synthesize containerView=_containerView - In the implementation block
@property (assign,nonatomic) double reflectionFraction; 
@property (assign,nonatomic) double reflectionAlpha; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIView *)containerView;
-(id)_gradientLayer;
-(void)setReflectionAlpha:(double)arg1 ;
-(void)setReflectionFraction:(double)arg1 ;
-(double)reflectionAlpha;
-(void)_updateGradientColors;
-(double)reflectionFraction;
@end

