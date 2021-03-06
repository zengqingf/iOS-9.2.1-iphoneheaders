/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:50 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>
#import <SpringBoard/SBWallpaperObserver.h>
#import <SpringBoard/SBMainAppSwitcherPageContentView.h>

@class UIView, SBFakeStatusBarView, SBAppSwitcherStatusBarViewCache, NSString;

@interface SBAppSwitcherHomePageCellView : UIView <SBWallpaperObserver, SBMainAppSwitcherPageContentView> {

	UIView* _possiblyRotatedContainer;
	UIView* _nonRotatedContainer;
	UIView* _homeScreenView;
	UIView* _homeSnapshot;
	UIView* _wallpaperView;
	SBFakeStatusBarView* _fakeStatusBar;
	SBAppSwitcherStatusBarViewCache* _statusBarCache;
	BOOL _usesSnapshots;
	long long _snapshotOrientation;
	long long _orientation;

}

@property (nonatomic,retain,readonly) UIView * homeSnapshot;              //@synthesize homeSnapshot=_homeSnapshot - In the implementation block
@property (nonatomic,retain) UIView * homeScreenView;                     //@synthesize homeScreenView=_homeScreenView - In the implementation block
@property (assign,nonatomic) long long orientation;                       //@synthesize orientation=_orientation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)wallpaperSnapshotForZoomFactor:(double)arg1 orientation:(long long)arg2 ;
-(void)wallpaperDidChangeForVariant:(long long)arg1 ;
-(void)_viewPresenting:(id)arg1 ;
-(void)_viewDismissing:(id)arg1 ;
-(void)_viewDidAnimatePresentation:(id)arg1 ;
-(void)_statusBarStyleOverridesDidChange:(id)arg1 ;
-(void)_updateWallpaperView;
-(void)_addHomeScreenViewAsSubview:(id)arg1 ;
-(void)setHomeSnapshot:(id)arg1 inOrientation:(long long)arg2 ;
-(id)initWithFrame:(CGRect)arg1 statusBarCache:(id)arg2 ;
-(void)setHomeScreenView:(UIView *)arg1 ;
-(UIView *)homeSnapshot;
-(UIView *)homeScreenView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)invalidate;
-(void)setOrientation:(long long)arg1 ;
-(long long)orientation;
-(void)setCornerRadius:(double)arg1 ;
-(double)cornerRadius;
-(void)setLegibilitySettings:(id)arg1 ;
@end

