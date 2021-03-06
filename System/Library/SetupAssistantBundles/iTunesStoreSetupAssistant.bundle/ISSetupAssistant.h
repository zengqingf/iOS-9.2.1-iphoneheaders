/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:42 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/SetupAssistantBundles/iTunesStoreSetupAssistant.bundle/iTunesStoreSetupAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AASetupAssistantDelegateService.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface ISSetupAssistant : NSObject <AASetupAssistantDelegateService> {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _handler;

}

@property (nonatomic,copy) id handler;              //@synthesize handler=_handler - In the implementation block
-(void)_setupITunesMatchWithParameters:(id)arg1 ;
-(void)_setCookiesWithString:(id)arg1 userIdentifier:(id)arg2 ;
-(void)_setupHomeSharingWithParameters:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(id)delegateServiceIdentifier;
-(id)accountSetupRequestParameters;
-(void)completeSetupWithResponseParameters:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)setupOperationFailed;
@end

