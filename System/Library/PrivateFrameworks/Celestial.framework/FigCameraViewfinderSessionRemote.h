/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:47 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/FigCameraViewfinderSession.h>

@protocol FigCameraViewfinderSessionRemoteObject;
@class FigStateMachine;

@interface FigCameraViewfinderSessionRemote : FigCameraViewfinderSession {

	id<FigCameraViewfinderSessionRemoteObject> _remoteViewfinderSession;
	unsigned _state;
	FigStateMachine* _stateMachine;

}
-(void)dealloc;
-(void)_setupStateMachine;
-(void)openPreviewStreamWithOptions:(id)arg1 ;
-(void)closePreviewStream;
-(void)_clientDisconnectedFromServer;
-(id)_initWithRemoteViewfinderSession:(id)arg1 delegateStorage:(id)arg2 ;
-(void)_previewStreamDidOpen;
-(void)_previewStreamDidCloseWithStatus:(int)arg1 ;
-(void)_serverDied;
@end
