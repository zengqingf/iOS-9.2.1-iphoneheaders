/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:27 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <CorePDF/CPRegion.h>

@interface CPLayoutArea : CPRegion {

	BOOL isFirstLayout;

}
-(id)init;
-(id)description;
-(id)properties;
-(void)accept:(id)arg1 ;
-(double)selectionBottom;
-(BOOL)isBoxRegion;
-(BOOL)isGraphicalRegion;
-(BOOL)isRowRegion;
-(void)setIsImageRegion:(BOOL)arg1 ;
-(BOOL)isImageRegion;
-(BOOL)isShapeRegion;
-(CGRect)layoutAreaBounds;
-(BOOL)isSimilarTo:(id)arg1 ;
-(BOOL)isFirstLayout;
-(void)setIsFirstLayout:(BOOL)arg1 ;
-(void)addColumnBreaks;
@end
