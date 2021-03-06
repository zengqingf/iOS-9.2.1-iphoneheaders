/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:58 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UIFocusScrollAnimator <NSObject>
@property (assign,nonatomic) double defaultConvergenceRate; 
@property (nonatomic,readonly) BOOL requiresExtendingScrollViewVisibleBounds; 
@required
-(void)setDefaultConvergenceRate:(double)arg1;
-(BOOL)isAnimatingScrollView:(id)arg1;
-(void)cancelScrollingForScrollView:(id)arg1;
-(CGPoint*)targetContentOffsetForScrollView:(id)arg1;
-(BOOL)requiresExtendingScrollViewVisibleBounds;
-(void)cancelPeekAdjustmentForScrollView:(id)arg1 performRollback:(BOOL)arg2;
-(void)setPeekOffsetAdjustment:(CGPoint)arg1 forScrollView:(id)arg2;
-(CGPoint*)velocityToScrollFromOffset:(CGPoint)arg1 toOffset:(CGPoint)arg2;
-(void)setTargetContentOffset:(CGPoint)arg1 forScrollView:(id)arg2 convergenceRate:(double)arg3 completion:(/*^block*/id)arg4;
-(double)defaultConvergenceRate;

@end

