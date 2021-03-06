/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:42 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MPMusicPlayerControllerServerInternal, MPAVController;

@interface MPMusicPlayerControllerServer : NSObject {

	MPMusicPlayerControllerServerInternal* _internal;

}

@property (nonatomic,readonly) MPAVController * player; 
+(id)sharedInstance;
+(void)startMusicPlayerControllerServerWithDelegate:(id)arg1 ;
+(BOOL)isMusicPlayerControllerServerRunning;
-(void)_runMigServer;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(MPAVController *)player;
@end

