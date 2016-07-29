/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:12 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, GKSessionInternal, GKRWLock;

@interface GKVoiceChatSessionListener : NSObject {

	NSMutableArray* _conferenceList;
	GKSessionInternal* _gkSession;
	GKRWLock* _rwlock;

}
-(void)dealloc;
-(id)currentSessions;
-(id)initWithSession:(id)arg1 ;
-(void)receivedNewVoiceChatOOBMessage:(id)arg1 fromPeerID:(id)arg2 ;
-(void)registerNewGKVoiceChatSession:(id)arg1 ;
-(void)removeSession:(id)arg1 ;
-(void)session:(id)arg1 peer:(id)arg2 didChangeState:(int)arg3 ;
@end
