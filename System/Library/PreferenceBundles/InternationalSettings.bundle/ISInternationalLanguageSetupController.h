/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:41 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PreferenceBundles/InternationalSettings.bundle/InternationalSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSSetupController.h>

@class NSString;

@interface ISInternationalLanguageSetupController : PSSetupController {

	NSString* _languageToSet;
	BOOL _useOfficialLanguages;

}
-(id)initWithOfficialLanguages;
-(void)saveLanguage:(BOOL)arg1 ;
-(BOOL)useOfficialLanguages;
-(void)handleAlertAction:(BOOL)arg1 ;
-(void)commit;
-(BOOL)disablesAutomaticKeyboardDismissal;
-(void)setupController;
-(void)setLanguage:(id)arg1 specifier:(id)arg2 ;
@end

