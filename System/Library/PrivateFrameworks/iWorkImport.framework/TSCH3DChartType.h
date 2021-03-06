/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:09 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH2DChartType.h>

@interface TSCH3DChartType : TSCH2DChartType
+(tvec3<float>)adjustedScaleForInfoChartScale:(const tvec3<float>*)arg1 chartType:(id)arg2 barShape:(int)arg3 ;
+(id)allAnimationFilters;
-(int)deprecated3DBevelEdgesSpecificProperty;
-(int)deprecated3DShadowSpecificProperty;
-(BOOL)layoutFrameShouldEncloseInfoGeometry;
-(id)valueLabelPositioner;
-(id)categoryLabelPositioner;
-(BOOL)supportsReferenceLines;
-(Class)repClass;
-(id)sceneWithChartInfo:(id)arg1 layoutSettings:(SCD_Struct_TS432)arg2 ;
-(Class)stageClass;
-(double)sageMaxDepthRatio;
-(double)maxDepthRatio;
-(unsigned long long)depthRatioDimension;
-(BOOL)supportsSeriesFill;
-(BOOL)supportsSeriesStroke;
-(BOOL)supportsShadowOffset;
-(Class)presetImagerClass;
-(BOOL)supportsBorderFrame;
-(BOOL)supportsGroupedShadows;
-(BOOL)supportsBackgroundFill;
-(BOOL)supportsTrendLines;
-(BOOL)supportsErrorBars;
-(BOOL)supportsCategoryAxisMinorTickmarks;
-(BOOL)supportsConnectingLines;
-(BOOL)supportsBubbleOptions;
-(id)animationFiltersWithDefaultFilters:(id)arg1 ;
-(id)renderers;
-(Class)chartLayoutItemClass;
-(Class)chartLayoutClass;
-(Class)sageGeometeryHelperClass;
-(id)animationFilters;
-(BOOL)supportsMinorGridlines;
-(BOOL)supportsAxisLine;
-(int)labelOrientation;
-(BOOL)isHomogeneous;
-(BOOL)supportsBevels;
-(BOOL)supportsColumnShape;
-(id)columnShapeUIName;
-(id)animationDeliveryStylesForFilter:(id)arg1 ;
-(unsigned long long)presentationDimension;
-(int)chartBodyBoundsDefinition;
-(CGSize)minimumChartBodySize;
-(BOOL)approximatesTitleAccommodationUsingLegendSize;
-(BOOL)supportsSeriesShadow;
-(BOOL)supportsValueAxisLabelsPosition;
-(BOOL)supportsAxisLabelsOrientation;
-(BOOL)supportsTickmarks;
-(BOOL)supportsIncrementalResize;
-(tvec3<float>)adjustedScaleForInfoChartScale:(const tvec3<float>*)arg1 barShape:(int)arg2 ;
-(BOOL)supportsInterSetDepthGap;
-(double)minDepthRatio;
-(BOOL)needsRefinementForInwardLayout;
-(Class)layoutClass;
@end

