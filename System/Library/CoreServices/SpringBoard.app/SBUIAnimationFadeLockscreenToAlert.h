/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:52 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBUIMainScreenAnimationController.h>

@class SBLockScreenViewController, SBAlertManager, SBUIFullscreenAlertAdapter, SBAppStatusBarSettingsAssertion;

@interface SBUIAnimationFadeLockscreenToAlert : SBUIMainScreenAnimationController {

	SBLockScreenViewController* _lockScreenViewController;
	SBAlertManager* _alertManager;
	SBUIFullscreenAlertAdapter* _toAlert;
	SBAppStatusBarSettingsAssertion* _hideStatusBarAssertion;
	BOOL _alertViewIsAnimatingItself;
	BOOL _alertIsTransparent;
	BOOL _finishedPrimaryFadeAnimation;
	BOOL _needsLockScreenAlphaRestoredOnCompletion;

}
-(id)initWithTransitionContextProvider:(id)arg1 ;
-(void)_prepareAnimation;
-(void)_cleanupAnimation;
-(void)_animationFinished;
-(void)_evaluateTotalAnimationCompletion;
-(void)_alertViewFinishedAnimatingItself;
-(void)_fadeAnimationFinished;
-(void)dealloc;
-(double)animationDuration;
-(void)_startAnimation;
@end

