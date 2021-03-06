/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:13 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSCH3DRenderProcessor, TSCH3DSession, TSCH3DGLContext;

@interface TSCH3DRenderPipeline : NSObject {

	TSCH3DRenderProcessor* mProcessor;
	TSCH3DSession* mSession;

}

@property (nonatomic,retain) TSCH3DRenderProcessor * processor; 
@property (nonatomic,readonly) TSCH3DSession * session; 
@property (nonatomic,readonly) TSCH3DGLContext * context; 
+(id)pipelineWithProcessor:(id)arg1 session:(id)arg2 ;
+(id)clipRectForTargetSize:(const tvec2<int>*)arg1 intermediateSize:(const tvec2<int>*)arg2 ;
-(TSCH3DRenderProcessor *)processor;
-(id)initWithProcessor:(id)arg1 session:(id)arg2 ;
-(void)setProcessor:(TSCH3DRenderProcessor *)arg1 ;
-(void)dealloc;
-(TSCH3DGLContext *)context;
-(TSCH3DSession *)session;
@end

