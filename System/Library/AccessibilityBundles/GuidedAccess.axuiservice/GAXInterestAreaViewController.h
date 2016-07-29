/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:21:52 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/AccessibilityBundles/GuidedAccess.axuiservice/GuidedAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GuidedAccess/GuidedAccess-Structs.h>
#import <GuidedAccess/GAXViewController.h>
#import <GuidedAccess/GAXInterestAreaViewDataSource.h>
#import <GuidedAccess/GAXInterestAreaViewDelegate.h>

@protocol GAXInterestAreaViewControllerDelegate;
@class UITouch, UIBezierPath, GAXPathInterpolator, GAXPathMapping, NSMutableArray, GAXStyleProvider, NSSet, GAXInterestAreaView, NSString;

@interface GAXInterestAreaViewController : GAXViewController <GAXInterestAreaViewDataSource, GAXInterestAreaViewDelegate> {

	BOOL _editing;
	BOOL _allowsDimmingInterestAreaPaths;
	BOOL _backgroundShouldCoverEverything;
	BOOL _shouldNotifyDelegateOfInterestAreaPathsChange;
	BOOL _outOfBoundsDrawingEnabled;
	id<GAXInterestAreaViewControllerDelegate> _delegate;
	UITouch* _currentTouch;
	UIBezierPath* _fingerPath;
	GAXPathInterpolator* _pathInterpolator;
	double _snapAnimationDidStartTimeInterval;
	UIBezierPath* _currentInterpolatedPath;
	GAXPathMapping* _interestAreaPathMapping;
	NSMutableArray* _orderedInterestAreaPaths;
	GAXStyleProvider* _styleProvider;
	GAXPathMapping* _cachedInterestAreaPathsForStorage;
	NSSet* _oldInterestAreaPathsIntersectingWithMovingPath;
	unsigned long long _interestAreaPathsUpdateCount;
	CGPoint _lastTranslationAppliedToPathBeingDragged;

}

@property (assign,nonatomic) id<GAXInterestAreaViewControllerDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) GAXStyleProvider * styleProvider;                                     //@synthesize styleProvider=_styleProvider - In the implementation block
@property (assign,getter=isEditing,nonatomic) BOOL editing;                                        //@synthesize editing=_editing - In the implementation block
@property (assign,nonatomic) BOOL allowsDimmingInterestAreaPaths;                                  //@synthesize allowsDimmingInterestAreaPaths=_allowsDimmingInterestAreaPaths - In the implementation block
@property (nonatomic,retain) GAXPathMapping * interestAreaPaths; 
@property (nonatomic,retain) GAXPathMapping * interestAreaPathsForStorage; 
@property (nonatomic,readonly) GAXPathMapping * interestAreaPathsInScreenCoordinates; 
@property (assign,nonatomic) BOOL backgroundShouldCoverEverything;                                 //@synthesize backgroundShouldCoverEverything=_backgroundShouldCoverEverything - In the implementation block
@property (nonatomic,retain,readonly) GAXInterestAreaView * interestAreaView; 
@property (nonatomic,retain) UITouch * currentTouch;                                               //@synthesize currentTouch=_currentTouch - In the implementation block
@property (nonatomic,retain) UIBezierPath * fingerPath;                                            //@synthesize fingerPath=_fingerPath - In the implementation block
@property (nonatomic,retain) GAXPathInterpolator * pathInterpolator;                               //@synthesize pathInterpolator=_pathInterpolator - In the implementation block
@property (assign,nonatomic) double snapAnimationDidStartTimeInterval;                             //@synthesize snapAnimationDidStartTimeInterval=_snapAnimationDidStartTimeInterval - In the implementation block
@property (nonatomic,retain) UIBezierPath * currentInterpolatedPath;                               //@synthesize currentInterpolatedPath=_currentInterpolatedPath - In the implementation block
@property (nonatomic,retain) GAXPathMapping * interestAreaPathMapping;                             //@synthesize interestAreaPathMapping=_interestAreaPathMapping - In the implementation block
@property (nonatomic,retain) NSMutableArray * orderedInterestAreaPaths;                            //@synthesize orderedInterestAreaPaths=_orderedInterestAreaPaths - In the implementation block
@property (nonatomic,retain) GAXPathMapping * cachedInterestAreaPathsForStorage;                   //@synthesize cachedInterestAreaPathsForStorage=_cachedInterestAreaPathsForStorage - In the implementation block
@property (nonatomic,retain) NSSet * oldInterestAreaPathsIntersectingWithMovingPath;               //@synthesize oldInterestAreaPathsIntersectingWithMovingPath=_oldInterestAreaPathsIntersectingWithMovingPath - In the implementation block
@property (assign,nonatomic) unsigned long long interestAreaPathsUpdateCount;                      //@synthesize interestAreaPathsUpdateCount=_interestAreaPathsUpdateCount - In the implementation block
@property (assign,nonatomic) BOOL shouldNotifyDelegateOfInterestAreaPathsChange;                   //@synthesize shouldNotifyDelegateOfInterestAreaPathsChange=_shouldNotifyDelegateOfInterestAreaPathsChange - In the implementation block
@property (assign,nonatomic) CGPoint lastTranslationAppliedToPathBeingDragged;                     //@synthesize lastTranslationAppliedToPathBeingDragged=_lastTranslationAppliedToPathBeingDragged - In the implementation block
@property (assign,nonatomic) BOOL outOfBoundsDrawingEnabled;                                       //@synthesize outOfBoundsDrawingEnabled=_outOfBoundsDrawingEnabled - In the implementation block
@property (nonatomic,readonly) float snapAnimationRawProgress; 
@property (nonatomic,readonly) float snapAnimationProgress; 
@property (nonatomic,readonly) BOOL shouldAllowEditingInterestAreas; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setInterestAreaPathsForStorage:(GAXPathMapping *)arg1 ;
-(GAXPathMapping *)interestAreaPathsForStorage;
-(GAXInterestAreaView *)interestAreaView;
-(void)setInterestAreaPaths:(id)arg1 animated:(BOOL)arg2 ;
-(void)setFingerPath:(UIBezierPath *)arg1 ;
-(UIBezierPath *)fingerPath;
-(void)setInterestAreaPathsForStorage:(id)arg1 animated:(BOOL)arg2 ;
-(void)setAllowsDimmingInterestAreaPaths:(BOOL)arg1 animated:(BOOL)arg2 ;
-(GAXPathMapping *)interestAreaPathsInScreenCoordinates;
-(void)setAllowsDimmingInterestAreaPaths:(BOOL)arg1 ;
-(void)setBackgroundShouldCoverEverything:(BOOL)arg1 ;
-(void)setBackgroundShouldCoverEverything:(BOOL)arg1 animated:(BOOL)arg2 ;
-(unsigned long long)_numberOfInterestAreaPaths;
-(BOOL)interestAreaViewIsAccessibilityElement:(id)arg1 ;
-(BOOL)canInteractWithInterestAreaView:(id)arg1 ;
-(unsigned long long)numberOfInterestAreaPathsForInterestAreaView:(id)arg1 ;
-(void)interestAreaView:(id)arg1 willBeginMovingResizingKnobAtPosition:(unsigned long long)arg2 forInterestAreaPathAtIndex:(unsigned long long)arg3 ;
-(void)interestAreaView:(id)arg1 willBeginMovingInterestAreaPathAtIndex:(unsigned long long)arg2 ;
-(void)interestAreaView:(id)arg1 resizingKnobAtPosition:(unsigned long long)arg2 wasMovedToPoint:(CGPoint)arg3 forInterestAreaPathAtIndex:(unsigned long long)arg4 constrainedResizingKnobCenter:(CGPoint*)arg5 ;
-(void)interestAreaView:(id)arg1 interestAreaPathAtIndex:(unsigned long long)arg2 wasMovedWithTranslation:(CGPoint)arg3 ;
-(void)interestAreaView:(id)arg1 didFinishMovingResizingKnobAtPosition:(unsigned long long)arg2 forInterestAreaPathAtIndex:(unsigned long long)arg3 ;
-(void)interestAreaView:(id)arg1 didFinishMovingInterestAreaPathAtIndex:(unsigned long long)arg2 ;
-(void)interestAreaView:(id)arg1 didActivateCloseButtonForInterestAreaPathAtIndex:(unsigned long long)arg2 ;
-(unsigned long long)interestAreaView:(id)arg1 visibleKnobPositionsForInterestAreaPathAtIndex:(unsigned long long)arg2 ;
-(BOOL)interestAreaView:(id)arg1 shouldAddCloseButtonForInterestAreaPathAtIndex:(unsigned long long)arg2 ;
-(BOOL)backgroundShouldCoverEverything;
-(void)_enumerateInterestAreaPathsUsingBlock:(/*^block*/id)arg1 ;
-(id)interestAreaView:(id)arg1 interestAreaPathAtIndex:(unsigned long long)arg2 ;
-(double)scaleForSpecialControlsInInterestAreaView:(id)arg1 ;
-(BOOL)interestAreaView:(id)arg1 shouldDisableSmartLayoutRelativeToEdgesForInterestAreaPathAtIndex:(unsigned long long)arg2 ;
-(unsigned long long)numberOfDynamicInterestAreaPathsForInterestAreaView:(id)arg1 ;
-(id)interestAreaView:(id)arg1 dynamicInterestAreaPathAtIndex:(unsigned long long)arg2 ;
-(void)setPathInterpolator:(GAXPathInterpolator *)arg1 ;
-(void)setCurrentInterpolatedPath:(UIBezierPath *)arg1 ;
-(void)setInterestAreaPathMapping:(GAXPathMapping *)arg1 ;
-(void)setOrderedInterestAreaPaths:(NSMutableArray *)arg1 ;
-(void)setCachedInterestAreaPathsForStorage:(GAXPathMapping *)arg1 ;
-(void)setOldInterestAreaPathsIntersectingWithMovingPath:(NSSet *)arg1 ;
-(GAXPathMapping *)interestAreaPaths;
-(id)_orientationAgnosticPathsFromOrientationAwarePaths:(id)arg1 shouldConsolidateOrientationsOnSameAxis:(BOOL)arg2 ;
-(void)_applyInterestAreaPathsForStorage;
-(unsigned long long)interestAreaPathsUpdateCount;
-(double)snapAnimationDidStartTimeInterval;
-(float)snapAnimationRawProgress;
-(void)_updateBackgroundVisibilityAnimated:(BOOL)arg1 ;
-(void)_beginInterestAreaPathsUpdate;
-(void)_addInterestAreaPath:(id)arg1 withParent:(id)arg2 notifyInterestAreaView:(BOOL)arg3 notifyDelegate:(BOOL)arg4 ;
-(void)_endInterestAreaPathsUpdateAnimated:(BOOL)arg1 ;
-(void)_applyInterestAreaPathsForStorageAnimated:(BOOL)arg1 ;
-(GAXPathInterpolator *)pathInterpolator;
-(float)snapAnimationProgress;
-(void)_updateInterestAreaPathsWithPath:(id)arg1 updatedInterestAreaPathAlreadyAdded:(BOOL)arg2 ;
-(void)_didFinishRecordingCurrentSequenceOfTouchEvents;
-(BOOL)shouldAllowEditingInterestAreas;
-(void)_didRecordTouchEventAtLocation:(CGPoint)arg1 ;
-(void)setSnapAnimationDidStartTimeInterval:(double)arg1 ;
-(void)_endInterestAreaPathsUpdate;
-(void)_computeFinalPathForFingerPath:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_interestAreaPathsIntersectingPath:(id)arg1 ;
-(id)_parentOfInterestAreaPath:(id)arg1 ;
-(void)_makeInterestAreaPath:(id)arg1 adoptOtherInterestAreaPath:(id)arg2 notifyDelegate:(BOOL)arg3 ;
-(void)_interestAreaPath:(id)arg1 ensureExistenceOfKnownParent:(id)arg2 orFindAdoptiveParentUsingDirectIntersectingInterestAreaPaths:(id)arg3 orphanedInterestAreaPaths:(id)arg4 ;
-(long long)_compareInterestAreaPath:(id)arg1 toPath:(id)arg2 ;
-(void)_removeInterestAreaPathAtIndices:(id)arg1 notifyDelegate:(BOOL)arg2 ;
-(NSSet *)oldInterestAreaPathsIntersectingWithMovingPath;
-(id)_childrenOfParentInterestAreaPath:(id)arg1 ;
-(void)_addInterestAreaPath:(id)arg1 withParent:(id)arg2 notifyDelegate:(BOOL)arg3 ;
-(NSMutableArray *)orderedInterestAreaPaths;
-(GAXPathMapping *)interestAreaPathMapping;
-(void)setInterestAreaPathsUpdateCount:(unsigned long long)arg1 ;
-(BOOL)shouldNotifyDelegateOfInterestAreaPathsChange;
-(void)_interestAreaPathsDidChange;
-(void)setShouldNotifyDelegateOfInterestAreaPathsChange:(BOOL)arg1 ;
-(BOOL)allowsDimmingInterestAreaPaths;
-(int)_backgroundStyleForEditing:(BOOL)arg1 ;
-(int)_backgroundStyleForCurrentState;
-(id)_referenceViewForConvertingFromAndToWindowCoordinateSystem;
-(GAXPathMapping *)cachedInterestAreaPathsForStorage;
-(CGRect)_boundsForConstrainingFingerPath;
-(BOOL)outOfBoundsDrawingEnabled;
-(void)setOutOfBoundsDrawingEnabled:(BOOL)arg1 ;
-(id)_interestAreaPathAtIndex:(unsigned long long)arg1 parent:(id*)arg2 ;
-(UIBezierPath *)currentInterpolatedPath;
-(BOOL)_interestAreaPath:(id)arg1 shouldShowResizingKnobAtPosition:(unsigned long long)arg2 ;
-(CGPoint)lastTranslationAppliedToPathBeingDragged;
-(void)setLastTranslationAppliedToPathBeingDragged:(CGPoint)arg1 ;
-(void)transitionOutIncludingBackground:(BOOL)arg1 ;
-(void)setInterestAreaPaths:(GAXPathMapping *)arg1 ;
-(void)setDelegate:(id<GAXInterestAreaViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<GAXInterestAreaViewControllerDelegate>)delegate;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(BOOL)isEditing;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(UITouch *)currentTouch;
-(void)setCurrentTouch:(UITouch *)arg1 ;
-(void)setEditing:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(void)commonInit;
-(CGPoint)_locationForTouch:(id)arg1 ;
-(void)_displayDidRefresh:(id)arg1 ;
-(GAXStyleProvider *)styleProvider;
-(void)setStyleProvider:(GAXStyleProvider *)arg1 ;
-(void)transitionIn;
@end
