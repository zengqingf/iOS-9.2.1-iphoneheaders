/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:25 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceTrigger/_VTStatePolicy.h>
#import <libobjc.A.dylib/MCProfileConnectionObserver.h>

@class NSString;

@interface _VTLockscreenPolicy : _VTStatePolicy <MCProfileConnectionObserver> {

	BOOL _siriRestrictedOnLockScreen;
	unsigned char _lockedState;
	int _lockscreenNotifyToken;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(BOOL)isEnabled;
-(id)initWithCallback:(/*^block*/id)arg1 queue:(id)arg2 ;
-(BOOL)_deviceLockedWithPasscode;
-(void)_registerForLockscreenUpdates;
-(void)_unregisterForLockscreenUpdates;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
@end
