/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:16 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OKViewControllerAudioSupport <NSObject>
@optional
-(void)beginDuckingToLevel:(double)arg1 fadeDuration:(double)arg2;
-(void)endDucking;
-(void)beginFadingWithDuration:(double)arg1;
-(double)requiredDuckLevel;
-(void)endFading;
-(void)setPlaybackAudioVolume:(double)arg1;

@end
