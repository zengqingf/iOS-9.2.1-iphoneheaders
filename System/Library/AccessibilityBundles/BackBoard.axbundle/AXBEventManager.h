/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:21:39 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/AccessibilityBundles/BackBoard.axbundle/BackBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <BackBoard/BackBoard-Structs.h>
@class NSString, AXEventRepresentation;

@interface AXBEventManager : NSObject {

	NSString* _eventTapIdentifier;
	BOOL _homeIsDown;
	BOOL _overrideGestureRecognitionState;
	BOOL _eventListenerEnabled;
	IOHIDUserDeviceRef _userDevice;
	AXEventRepresentation* _lastHIDRecord;

}

@property (assign,nonatomic) BOOL homeIsDown;              //@synthesize homeIsDown=_homeIsDown - In the implementation block
+(id)sharedManager;
-(unsigned)contextIdHosterForContextId:(unsigned)arg1 ;
-(unsigned)contextIdForPosition:(CGPoint)arg1 displayId:(unsigned)arg2 ;
-(void)enableEventTap:(BOOL)arg1 forApplication:(int)arg2 ;
-(unsigned)machPortForPoint:(CGPoint)arg1 ;
-(BOOL)homeIsDown;
-(void)clearLastRecordPostedThrougHID;
-(unsigned)clientPortForContextId:(unsigned)arg1 ;
-(id)lastRecordPostedThroughHID;
-(unsigned)systemAppPort;
-(unsigned)systemEventPort;
-(void)setHomeIsDown:(BOOL)arg1 ;
-(int)systemAppPid;
-(id)windowServer;
-(void)dispatchEventRepresentationToClient:(id)arg1 ;
-(void)postEvent:(id)arg1 systemEvent:(BOOL)arg2 afterNamedTap:(id)arg3 namedTaps:(id)arg4 ;
-(void)setDisableSystemGestureRecognitionInEvents:(BOOL)arg1 ;
-(BOOL)_assistiveTouchEventTap:(id)arg1 ;
-(void)_enableAssistiveTouchEventTap:(BOOL)arg1 ;
-(void)_processHIDEvent:(IOHIDEventRef)arg1 ;
-(void)_normalizeEventForContext:(id)arg1 ;
-(CGPoint)convertPoint:(CGPoint)arg1 toContextId:(unsigned)arg2 ;
-(CGPoint)convertPoint:(CGPoint)arg1 fromContextId:(unsigned)arg2 ;
-(id)init;
-(void)wakeUpDeviceIfNecessary;
-(void)registerEventListener:(BOOL)arg1 ;
@end

