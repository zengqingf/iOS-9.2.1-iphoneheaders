/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:38 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface WLCredentialStore : NSObject {

	NSMutableDictionary* _credentialsByUUID;

}
+(id)sharedInstance;
-(id)init;
-(void)setCredentials:(id)arg1 forAuthentication:(id)arg2 ;
-(id)credentialsForAuthentication:(id)arg1 ;
@end

