/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:28 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Assistant/Plugins/ChatKitAssistant.assistantBundle/ChatKitAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObjectCommit.h>
#import <Accessibility/AFServiceCommand.h>

@class NSString;

@interface CKAssistantSMSSend : SADomainObjectCommit <AFServiceCommand>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)sendSMS:(id)arg1 toAddresses:(id)arg2 ;
-(id)_getAddressesFromRecipients:(id)arg1 ;
-(id)_validateSMS:(id)arg1 ;
-(void)_connectToDaemonIfNeeded;
-(id)errorWithDescription:(id)arg1 ;
-(void)performWithCompletion:(/*^block*/id)arg1 ;
@end

