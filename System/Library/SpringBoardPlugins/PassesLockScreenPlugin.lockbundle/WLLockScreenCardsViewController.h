/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:45 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/SpringBoardPlugins/PassesLockScreenPlugin.lockbundle/PassesLockScreenPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUI/SBAwayViewPluginController.h>
#import <PassesLockScreenPlugin/WLLockScreenViewDataSource.h>
#import <PassesLockScreenPlugin/WLLockScreenViewDelegate.h>
#import <libobjc.A.dylib/PKPassLibraryDelegate.h>
#import <FindMyiPhoneLockScreen/SBLockScreenBundleController.h>

@class PKPassLibrary, NSArray, NSMutableDictionary, PKDiff, NSTimer, PKAssertion, NSString;

@interface WLLockScreenCardsViewController : SBAwayViewPluginController <WLLockScreenViewDataSource, WLLockScreenViewDelegate, PKPassLibraryDelegate, SBLockScreenBundleController> {

	unsigned long long _startIndex;
	PKPassLibrary* _passLibrary;
	NSArray* _cardUniqueIDs;
	NSMutableDictionary* _cardsByUniqueID;
	PKDiff* _diff;
	NSTimer* _resetIdleTimerTimer;
	NSTimer* _notifyPassViewedTimer;
	PKAssertion* _contactlessInterfaceAssertion;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)rootViewController;
-(id)diffForCardAtIndex:(unsigned long long)arg1 ;
-(void)updateBacklightWithProgress:(double)arg1 ;
-(void)_presentAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)disableIdleTimer;
-(BOOL)showsBeneathNotifications;
-(id)_newPassesDictionaryFromSet:(id)arg1 ;
-(void)_passViewNotificationTimerFired;
-(id)cardAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)cardCount;
-(void)enableIdleTimer;
-(BOOL)_verifyArrayOfStrings:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)dismissAnimated:(BOOL)arg1 ;
-(BOOL)viewWantsOverlayLayout;
-(BOOL)showDateView;
-(void)setActivationContext:(id)arg1 ;
-(/*^block*/id)_disableTransitionBlock;
-(/*^block*/id)enableTransitionBlock;
-(BOOL)viewWantsFullscreenLayout;
-(BOOL)shouldDisableOnRelock;
-(BOOL)shouldDisableOnUnlock;
-(BOOL)shouldShowLockStatusBarTime;
-(long long)pluginPriority;
-(BOOL)showAwayItems;
-(BOOL)wantsUserWallpaper;
-(BOOL)showsDuringCall;
-(BOOL)handleMenuButtonTap;
-(BOOL)wantsMesaAutoUnlock;
-(void)passLibrary:(id)arg1 receivedUpdatedCatalog:(id)arg2 passes:(id)arg3 ;
-(unsigned long long)startIndex;
@end

