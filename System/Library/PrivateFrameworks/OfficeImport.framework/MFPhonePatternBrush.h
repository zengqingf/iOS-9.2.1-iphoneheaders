/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:56 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/MFPhoneBrush.h>

@class MFPhoneBitmap;

@interface MFPhonePatternBrush : MFPhoneBrush {

	MFPhoneBitmap* m_pattern;
	BOOL m_usePaletteForBilevel;

}
+(id)patternBrushWithBitmap:(id)arg1 usePaletteForBilevel:(BOOL)arg2 ;
-(void)dealloc;
-(void)fillPath:(id)arg1 :(id)arg2 ;
-(id)initWithBitmap:(id)arg1 usePaletteForBilevel:(BOOL)arg2 ;
@end

