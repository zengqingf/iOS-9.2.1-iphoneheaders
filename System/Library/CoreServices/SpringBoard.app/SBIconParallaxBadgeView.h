/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:51 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBIconBadgeView.h>
#import <libobjc.A.dylib/_UISettingsKeyObserver.h>

@class SBFParallaxSettings, NSString;

@interface SBIconParallaxBadgeView : SBIconBadgeView <_UISettingsKeyObserver> {

	SBFParallaxSettings* _parallaxSettings;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)_applyParallaxSettings;
@end

