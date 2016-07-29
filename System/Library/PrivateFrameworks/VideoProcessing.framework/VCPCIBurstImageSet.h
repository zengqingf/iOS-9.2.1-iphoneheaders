/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:19 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@class VCPCIBurstImageSetInternal;

@interface VCPCIBurstImageSet : NSObject {

	VCPCIBurstImageSetInternal* _priv;

}
+(id)defaultVersionString;
+(id)burstImageSet;
+(id)burstImageSetWithOptions:(id)arg1 ;
-(id)imageClusterForIdentifier:(id)arg1 ;
-(BOOL)isPortrait;
-(BOOL)isAction;
-(void)setEnableFaceCore:(BOOL)arg1 ;
-(double)secondsSinceStart;
-(id)statsForImageWithIdentifier:(id)arg1 ;
-(unsigned long long)imageClusterCount;
-(id)imageClusterForIndex:(unsigned long long)arg1 ;
-(void)setLoggingListener:(void*)arg1 withUserInfo:(void*)arg2 ;
-(void)dealloc;
-(id)init;
-(void)setLowFrameRateMode:(BOOL)arg1 ;
-(void)setUseMotionInfoForClustering:(BOOL)arg1 ;
-(void)addImageFromCVPixelBuffer:(CVBufferRef)arg1 properties:(id)arg2 identifier:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)addImageFromCGImage:(CGImageRef)arg1 properties:(id)arg2 identifier:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(id)sceneChangeClusters;
-(id)initWithOptions:(id)arg1 ;
-(id)burstId;
-(id)allImageIdentifiers;
-(id)bestImageIdentifiers;
-(id)coverImageIdentifier;
@end
