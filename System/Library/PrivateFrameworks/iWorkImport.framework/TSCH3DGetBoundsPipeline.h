/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:09 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DSceneRenderPipeline.h>

@interface TSCH3DGetBoundsPipeline : TSCH3DSceneRenderPipeline

@property (nonatomic,readonly) const ObjectBounds* bounds; 
+(id)pipelineWithScene:(id)arg1 ;
+(id)pipelineWithScene:(id)arg1 renderProcessor:(id)arg2 ;
-(Class)labelsMeshRendererClassForLabelsRenderer:(id)arg1 ;
-(BOOL)shouldSkipLabelsIfHidden;
-(void)getBounds:(id)arg1 ;
-(void)resetBounds;
-(BOOL)useIndividualBounds;
-(void)extend2DProjectedBounds:(const box<glm::detail::tvec3<float> >*)arg1 ;
-(id)initWithScene:(id)arg1 renderProcessor:(id)arg2 ;
-(id)boundsProcessor;
-(void)set2DProjectedRenderingMode:(BOOL)arg1 ;
-(void)runScene:(id)arg1 selector:(SEL)arg2 ;
-(void)get3DBounds:(id)arg1 ;
-(void)getProjectedBounds:(id)arg1 ;
-(void)setObjectRenderMode:(int)arg1 ;
-(const ObjectBounds*)bounds;
-(BOOL)run;
-(id)initWithScene:(id)arg1 ;
@end

