/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:54 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBSystemGestureManager.h>

@interface SBMainDisplaySystemGestureManager : SBSystemGestureManager {

	BOOL _multitaskingGesturesEnabled;

}

@property (assign,setter=_setMultitaskingGesturesEnabled:,getter=_isMultitaskingGesturesEnabled,nonatomic) BOOL multitaskingGesturesEnabled;              //@synthesize multitaskingGesturesEnabled=_multitaskingGesturesEnabled - In the implementation block
-(BOOL)_isMultitaskingGesturesEnabled;
-(void)_setMultitaskingGesturesEnabled:(BOOL)arg1 ;
-(void)_updateUserPreferences;
-(BOOL)_isGestureWithTypeAllowed:(unsigned long long)arg1 ;
-(BOOL)_shouldEnableSystemGestureWithType:(unsigned long long)arg1 ;
-(id)initWithDisplay:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
@end
