/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:52 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIScreen, NSString, NSMutableArray, SBStarkScreenFocusAssertion, BSZeroingWeakReference;

@interface SBStarkScreenFocusController : NSObject {

	UIScreen* _screen;
	NSString* _displayID;
	NSMutableArray* _assertions;
	SBStarkScreenFocusAssertion* _lastFocusAssertion;
	BSZeroingWeakReference* _weak_lastFocusWindow;

}
-(id)focusWindow;
-(void)_updateEventFocus;
-(void)_applyAssertion:(id)arg1 ;
-(void)takeWithPriority:(double)arg1 reason:(id)arg2 forWindow:(id)arg3 bundleIdentifier:(id)arg4 pid:(int)arg5 ;
-(void)dropReason:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(void)invalidate;
-(id)initWithScreen:(id)arg1 ;
@end
