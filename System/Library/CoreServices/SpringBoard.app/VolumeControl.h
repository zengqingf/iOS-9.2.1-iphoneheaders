/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:51 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SpringBoard/SpringBoard-Structs.h>
@class NSMutableSet, NSString;

@interface VolumeControl : NSObject {

	BOOL _debounce;
	int _numberOfVolumeDecreasesSinceDownButtonDown;
	int _mode;
	NSMutableSet* _alwaysHiddenCategories;
	NSString* _lastDisplayedCategory;
	NSString* _lastEventCategory;
	BOOL _hudHandledLastVolumeChange;
	BOOL _euDevice;
	float _euVolumeLimit;
	BOOL _euVolumeLimitEnforced;
	BOOL _lastVolumeChangedWasBlocked;
	BOOL _volumeDownButtonIsDown;
	BOOL _volumeUpButtonIsDown;

}
+(id)sharedVolumeControl;
-(void)_registerForAVSystemControllerNotifications;
-(void)_unregisterForAVSystemControllerNotifications;
-(void)cancelVolumeEvent;
-(void)handleVolumeEvent:(IOHIDEventRef)arg1 ;
-(void)removeAlwaysHiddenCategory:(id)arg1 ;
-(void)addAlwaysHiddenCategory:(id)arg1 ;
-(void)hideVolumeHUDIfVisible;
-(void)increaseVolume;
-(void)decreaseVolume;
-(float)volumeStepUp;
-(BOOL)headphonesPresent;
-(void)_initializeEUVolumeLimits;
-(BOOL)_isCategoryAlwaysHidden:(id)arg1 ;
-(BOOL)_isMusicPlayingSomewhere;
-(float)_calcButtonRepeatDelay;
-(void)_changeVolumeBy:(float)arg1 ;
-(float)volumeStepDown;
-(void)sendEUVolumeLimitAcknowledgementIfNecessary;
-(BOOL)_turnOnScreenIfNecessaryForEULimit:(BOOL)arg1 ;
-(void)_EUVolumeLimitChanged:(id)arg1 ;
-(void)_EUVolumeEnforcementChanged:(id)arg1 ;
-(void)_serverConnectionDied:(id)arg1 ;
-(int)_volumeModeForCategory:(id)arg1 ;
-(BOOL)_HUDIsDisplayableForCategory:(id)arg1 ;
-(id)_volumeHUDViewWithMode:(int)arg1 volume:(float)arg2 ;
-(BOOL)_isVolumeHUDVisible;
-(BOOL)_isVolumeHUDVisibleOrFading;
-(void)_userAcknowledgedEUEnforcement;
-(float)getMediaVolume;
-(void)clearAlwaysHiddenCategories;
-(id)lastDisplayedCategory;
-(id)volumeHUDForCurrentCategory;
-(void)setMediaVolume:(float)arg1 ;
-(void)dealloc;
-(id)init;
-(void)toggleMute;
-(void)_effectiveVolumeChanged:(id)arg1 ;
-(void)_presentVolumeHUDWithMode:(int)arg1 volume:(float)arg2 ;
-(float)volume;
@end
