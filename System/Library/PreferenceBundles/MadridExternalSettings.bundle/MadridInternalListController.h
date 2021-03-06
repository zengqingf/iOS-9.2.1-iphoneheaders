/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:42 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PreferenceBundles/MadridExternalSettings.bundle/MadridExternalSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class IMServiceImpl, FTRegConnectionHandler, CNFAutomationOptions;

@interface MadridInternalListController : PSListController {

	IMServiceImpl* _service;
	FTRegConnectionHandler* _connectionHandler;
	CNFAutomationOptions* _automationOptions;

}

@property (retain) CNFAutomationOptions * automationOptions;              //@synthesize automationOptions=_automationOptions - In the implementation block
@property (nonatomic,retain) IMServiceImpl * service;                     //@synthesize service=_service - In the implementation block
-(id)readReceiptSettingsConfirmed:(id)arg1 ;
-(id)technicalFailureUI:(id)arg1 ;
-(id)registrationLoggingEnabled:(id)arg1 ;
-(id)environment:(id)arg1 ;
-(void)setEnvironment:(id)arg1 specifier:(id)arg2 ;
-(id)registrationSMSAttempts:(id)arg1 ;
-(void)setRegistrationLoggingEnabled:(id)arg1 forSpecifier:(id)arg2 ;
-(void)viewAccountsTapped:(id)arg1 ;
-(void)resetSMSCounter:(id)arg1 ;
-(void)setNotifySMS:(id)arg1 specifier:(id)arg2 ;
-(void)clearLogs:(id)arg1 ;
-(id)notifySMS:(id)arg1 ;
-(void)setTechnicalFailureUI:(id)arg1 specifier:(id)arg2 ;
-(id)pushLoggingEnabled:(id)arg1 ;
-(void)dumpLogs:(id)arg1 ;
-(void)setAutomationOptions:(CNFAutomationOptions *)arg1 ;
-(void)setSTKLogging:(id)arg1 specifier:(id)arg2 ;
-(CNFAutomationOptions *)automationOptions;
-(void)stopAutomationTapped:(id)arg1 ;
-(id)madridBasicLoggingDefaults;
-(void)setFMFDLogging:(id)arg1 specifier:(id)arg2 ;
-(id)pushDebugBannersEnabled:(id)arg1 ;
-(id)stkLogging:(id)arg1 ;
-(void)setTimeStampValue:(id)arg1 forSpecifier:(id)arg2 ;
-(void)startAutomationTapped:(id)arg1 ;
-(id)madridBasicLogging:(id)arg1 ;
-(id)getTimeStampValueForSpecifier:(id)arg1 ;
-(id)sliderValues;
-(id)madridDebugLogging:(id)arg1 ;
-(id)automationIntervalForSpecifier:(id)arg1 ;
-(id)fmfdLogging:(id)arg1 ;
-(void)setPushLoggingEnabled:(id)arg1 forSpecifier:(id)arg2 ;
-(void)setPushDebugBannersEnabled:(id)arg1 forSpecifier:(id)arg2 ;
-(void)setMadridDebugLogging:(id)arg1 specifier:(id)arg2 ;
-(void)setMadridBasicLogging:(id)arg1 specifier:(id)arg2 ;
-(id)pendingAutomationRemoteForSpecifier:(id)arg1 ;
-(void)setAutomationRemote:(id)arg1 forSpecifier:(id)arg2 ;
-(void)setAutomationInterval:(id)arg1 forSpecifier:(id)arg2 ;
-(id)automationRepetitionsForSpecifier:(id)arg1 ;
-(void)setAutomationRepetitions:(id)arg1 forSpecifier:(id)arg2 ;
-(void)setReadReceiptSettingsConfirmed:(id)arg1 specifier:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setService:(IMServiceImpl *)arg1 ;
-(void)_handleReturnKeyTapped:(id)arg1 ;
-(void)_startListeningForReturnKey;
-(void)_stopListeningForReturnKey;
-(IMServiceImpl *)service;
-(id)specifiers;
@end

