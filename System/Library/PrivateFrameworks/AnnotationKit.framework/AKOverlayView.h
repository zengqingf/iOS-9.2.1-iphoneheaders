/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:08 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class AKPageController, AKMainEventHandler, UIScrollView;

@interface AKOverlayView : UIView {

	BOOL _isObserving;
	BOOL _deferWasMovedToSuperviewUntilMoveToWindow;
	BOOL _scrollViewIsInLiveMagnify;
	AKPageController* _pageController;
	AKMainEventHandler* _mainEventHandler;
	UIScrollView* _observedScrollView;

}

@property (__weak) AKPageController * pageController;                           //@synthesize pageController=_pageController - In the implementation block
@property (__weak) AKMainEventHandler * mainEventHandler;                       //@synthesize mainEventHandler=_mainEventHandler - In the implementation block
@property (assign) BOOL isObserving;                                            //@synthesize isObserving=_isObserving - In the implementation block
@property (assign) BOOL deferWasMovedToSuperviewUntilMoveToWindow;              //@synthesize deferWasMovedToSuperviewUntilMoveToWindow=_deferWasMovedToSuperviewUntilMoveToWindow - In the implementation block
@property (retain) UIScrollView * observedScrollView;                           //@synthesize observedScrollView=_observedScrollView - In the implementation block
@property (assign) BOOL scrollViewIsInLiveMagnify;                              //@synthesize scrollViewIsInLiveMagnify=_scrollViewIsInLiveMagnify - In the implementation block
+(void)initialize;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)canBecomeFirstResponder;
-(void)didMoveToSuperview;
-(void)willMoveToSuperview:(id)arg1 ;
-(void)layoutSublayersOfLayer:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(AKPageController *)pageController;
-(void)setPageController:(AKPageController *)arg1 ;
-(void)_scrollViewDidEndDragging:(id)arg1 ;
-(AKMainEventHandler *)mainEventHandler;
-(id)initWithPageController:(id)arg1 ;
-(void)setMainEventHandler:(AKMainEventHandler *)arg1 ;
-(void)updateLayers;
-(void)_teardownObservation;
-(void)_willRemoveFromOldSuperview;
-(void)_wasMovedToNewSuperview;
-(void)setDeferWasMovedToSuperviewUntilMoveToWindow:(BOOL)arg1 ;
-(BOOL)deferWasMovedToSuperviewUntilMoveToWindow;
-(void)_updateLayersUsingScrollView;
-(void)_postScrollViewNotification;
-(void)_updateLayersUsingScrollViewWithForcedUpdate:(BOOL)arg1 ;
-(UIScrollView *)observedScrollView;
-(BOOL)scrollViewIsInLiveMagnify;
-(BOOL)isObserving;
-(void)setIsObserving:(BOOL)arg1 ;
-(void)setObservedScrollView:(UIScrollView *)arg1 ;
-(void)_willStartLiveMagnify:(id)arg1 ;
-(void)_willEndLiveMagnify:(id)arg1 ;
-(void)_scrollViewDidEndDecelerating:(id)arg1 ;
-(void)_scrollViewDidEndAnimation:(id)arg1 ;
-(void)_scrollViewDidScrollToTop:(id)arg1 ;
-(void)_setupObservation;
-(void)setScrollViewIsInLiveMagnify:(BOOL)arg1 ;
-(void)superTouchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)superTouchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)superTouchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)superTouchesCancelled:(id)arg1 withEvent:(id)arg2 ;
@end
