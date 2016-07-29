/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:23 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HAPSecuritySessionDelegate <NSObject>
@optional
-(void)securitySessionIsOpening:(id)arg1;
-(void)securitySessionDidOpen:(id)arg1;
-(void)securitySession:(id)arg1 didCloseWithError:(id)arg2;

@required
-(void)securitySession:(id)arg1 didReceiveSetupExchangeData:(id)arg2;
-(id)securitySession:(id)arg1 didReceiveRequestForPeerPublicKeyWithIdentifier:(id)arg2;

@end
