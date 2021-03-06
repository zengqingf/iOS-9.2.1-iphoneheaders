/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:56 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UISettings.h>

@class _UISettingsGroup;

@interface SBControlCenterButtonSectionSettings : _UISettings {

	_UISettingsGroup* _settingsGroup;

}

@property (retain) _UISettingsGroup * settingsGroup;              //@synthesize settingsGroup=_settingsGroup - In the implementation block
+(id)supportedButtonModuleClasses;
+(id)buttonModuleClasses;
+(id)settingsControllerModule;
-(BOOL)buttonEnabledForIdentifier:(id)arg1 ;
-(id)buttonSortKeyForIdentifier:(id)arg1 ;
-(Class)buttonSettingsClass;
-(void)setDefaultValues;
-(_UISettingsGroup *)settingsGroup;
-(void)setSettingsGroup:(_UISettingsGroup *)arg1 ;
@end

