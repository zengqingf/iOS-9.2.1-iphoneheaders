/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:55 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject, NSArray, IMAVCamera;

@interface IMAVCameraController : NSObject {

	NSMutableArray* _cameras;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain,readonly) NSArray * cameras; 
@property (nonatomic,retain) IMAVCamera * currentCamera; 
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(NSArray *)cameras;
-(void)setCurrentCamera:(IMAVCamera *)arg1 ;
-(id)cameraWithDeviceID:(unsigned)arg1 ;
-(void)_rebuildCameraList;
-(void)_loadSavedCamera;
-(IMAVCamera *)currentCamera;
@end
