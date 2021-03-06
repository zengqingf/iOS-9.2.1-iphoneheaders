/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:57 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/GQDDrawable.h>
#import <iWorkImport/GQDNameMappable.h>

@class GQDWPExternalTextWrap, NSString;

@interface GQDGroup : GQDDrawable <GQDNameMappable> {

	CFArrayRef mDrawables;
	GQDWPExternalTextWrap* mExternalTextWrap;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(const StateSpec*)stateForReading;
-(id)externalTextWrap;
-(void)dealloc;
-(CFArrayRef)drawables;
@end

