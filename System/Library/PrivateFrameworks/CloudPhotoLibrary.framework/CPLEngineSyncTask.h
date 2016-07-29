/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:08 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CPLEngineSyncTaskDelegate, NSCoding;
@class CPLEngineLibrary, NSString;

@interface CPLEngineSyncTask : NSObject {

	BOOL _foreground;
	BOOL _paused;
	BOOL _cancelled;
	id<CPLEngineSyncTaskDelegate> _delegate;
	CPLEngineLibrary* _engineLibrary;
	id<NSCoding> _transportUserIdentifier;

}

@property (retain) id<CPLEngineSyncTaskDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) CPLEngineLibrary * engineLibrary;                //@synthesize engineLibrary=_engineLibrary - In the implementation block
@property (nonatomic,retain) id<NSCoding> transportUserIdentifier;              //@synthesize transportUserIdentifier=_transportUserIdentifier - In the implementation block
@property (assign,nonatomic) BOOL foreground;                                   //@synthesize foreground=_foreground - In the implementation block
@property (nonatomic,readonly) NSString * taskIdentifier; 
@property (getter=isPaused) BOOL paused;                                        //@synthesize paused=_paused - In the implementation block
@property (getter=isCancelled) BOOL cancelled;                                  //@synthesize cancelled=_cancelled - In the implementation block
+(id)taskWithEngineLibrary:(id)arg1 ;
-(void)launch;
-(void)cancel;
-(void)setDelegate:(id<CPLEngineSyncTaskDelegate>)arg1 ;
-(id)description;
-(id<CPLEngineSyncTaskDelegate>)delegate;
-(BOOL)isCancelled;
-(void)resume;
-(void)pause;
-(CPLEngineLibrary *)engineLibrary;
-(id)initWithEngineLibrary:(id)arg1 ;
-(void)taskDidFinishWithError:(id)arg1 ;
-(unsigned long long)diskPressureState;
-(void)taskDidProgress:(float)arg1 userInfo:(id)arg2 ;
-(id<NSCoding>)transportUserIdentifier;
-(void)setTransportUserIdentifier:(id<NSCoding>)arg1 ;
-(NSString *)taskIdentifier;
-(void)_setCancelled:(BOOL)arg1 ;
-(BOOL)isPaused;
-(void)_setPaused:(BOOL)arg1 ;
-(BOOL)foreground;
-(void)setForeground:(BOOL)arg1 ;
@end
