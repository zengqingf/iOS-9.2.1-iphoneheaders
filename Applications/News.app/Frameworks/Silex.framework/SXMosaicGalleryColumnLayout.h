/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:44:14 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /Applications/News.app/Frameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Silex/Silex-Structs.h>
@interface SXMosaicGalleryColumnLayout : NSObject {

	double _width;
	double _gutter;

}

@property (nonatomic,readonly) double width;               //@synthesize width=_width - In the implementation block
@property (nonatomic,readonly) double gutter;              //@synthesize gutter=_gutter - In the implementation block
-(double)widthForColumnRange:(NSRange)arg1 numberOfColumns:(unsigned long long)arg2 ;
-(double)positionForColumnRange:(NSRange)arg1 numberOfColumns:(unsigned long long)arg2 ;
-(double)gutter;
-(double)positionOfColumn:(unsigned long long)arg1 inNumberOfColumns:(unsigned long long)arg2 ;
-(double)widthOfColumn:(unsigned long long)arg1 inNumberOfColumns:(unsigned long long)arg2 ;
-(id)initWithWidth:(double)arg1 gutter:(double)arg2 ;
-(double)width;
@end

