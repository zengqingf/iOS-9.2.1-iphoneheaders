/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:45 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MCProfileConnectionObserver.h>

@protocol CRCarPlayPreferencesDelegate;
@class NSString;

@interface CRCarPlayPreferences : NSObject <MCProfileConnectionObserver> {

	BOOL _cachedCarPlayAllowed;
	id<CRCarPlayPreferencesDelegate> _preferencesDelegate;

}

@property (assign,nonatomic,__weak) id<CRCarPlayPreferencesDelegate> preferencesDelegate;              //@synthesize preferencesDelegate=_preferencesDelegate - In the implementation block
@property (assign,nonatomic) BOOL cachedCarPlayAllowed;                                                //@synthesize cachedCarPlayAllowed=_cachedCarPlayAllowed - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(id<CRCarPlayPreferencesDelegate>)preferencesDelegate;
-(void)setPreferencesDelegate:(id<CRCarPlayPreferencesDelegate>)arg1 ;
-(void)handleAssistantLanguageChanged:(id)arg1 ;
-(BOOL)_isCarPlayAllowed;
-(void)setCachedCarPlayAllowed:(BOOL)arg1 ;
-(BOOL)cachedCarPlayAllowed;
-(void)_updateCarPlayAllowed;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(BOOL)isCarPlayAllowed;
-(BOOL)isWirelessCarPlayEnabled;
-(BOOL)isCarPlayCapable;
@end
