/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:52 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBUIAnimationController.h>

@class BSAnimationSettings;

@interface SBUIBlockAnimationController : SBUIAnimationController {

	BSAnimationSettings* _animationSettings;
	/*^block*/id _animationBlock;

}
-(id)initWithTransitionContextProvider:(id)arg1 ;
-(id)initWithTransitionContextProvider:(id)arg1 animationSettings:(id)arg2 animationBlock:(/*^block*/id)arg3 ;
-(void)dealloc;
-(void)_didComplete;
-(void)_startAnimation;
@end

