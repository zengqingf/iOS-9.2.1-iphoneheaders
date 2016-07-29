/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:06 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSCH3DNormalDirectionMapper;

@interface TSCH3DTexCoordGeneration : NSObject {

	tmat4x4<float> mTransform;
	TSCH3DNormalDirectionMapper* mNormalDirectionMapper;

}

@property (nonatomic,retain) TSCH3DNormalDirectionMapper * normalDirectionMapper; 
-(TSCH3DNormalDirectionMapper *)normalDirectionMapper;
-(void)setNormalDirectionMapper:(TSCH3DNormalDirectionMapper *)arg1 ;
-(id)initWithTransform:(const tmat4x4<float>*)arg1 ;
-(void)dealloc;
-(id)init;
@end
