/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:59 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PKPassbookSettingsDataSource.h>

@class PKPassLibraryDefaultDataProvider, PKPaymentDefaultDataProvider, PKPaymentOptionsDefaults, NSString;

@interface PKPassbookSettingsDefaultBehavior : NSObject <PKPassbookSettingsDataSource> {

	PKPassLibraryDefaultDataProvider* _passLibraryDataProvider;
	PKPaymentDefaultDataProvider* _paymentDataProvider;
	PKPaymentOptionsDefaults* _options;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(id)setupDelegate;
-(id)passLibraryDataProvider;
-(id)paymentDataProvider;
-(id)optionsDelegate;
-(BOOL)secureElementIsProductionSigned;
-(BOOL)deviceInRestrictedMode;
-(BOOL)showPassState;
-(BOOL)deviceSupportsInAppPayments;
-(id)secureElementID;
@end
