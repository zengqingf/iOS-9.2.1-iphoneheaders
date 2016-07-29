/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:52 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIWindow, UIView, SBHUDView;

@interface SBHUDController : NSObject {

	UIWindow* _hudWindow;
	UIView* _hudContentView;
	SBHUDView* _hudView;
	long long _orientation;
	BOOL _hudVisibleOrFading;

}
+(id)sharedHUDController;
-(void)_orderWindowOut:(id)arg1 ;
-(id)visibleHUDView;
-(void)hideHUDView;
-(id)visibleOrFadingHUDView;
-(void)_recenterHUDView;
-(void)_createUI;
-(void)presentHUDView:(id)arg1 ;
-(void)dealloc;
-(void)_tearDown;
-(void)reorientHUDIfNeeded:(BOOL)arg1 ;
-(void)presentHUDView:(id)arg1 autoDismissWithDelay:(double)arg2 ;
@end
