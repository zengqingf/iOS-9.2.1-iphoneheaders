/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:53 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UIAppearance.h>

@class NSDictionary;

@interface _UIPropertyBasedAppearance : _UIAppearance {

	NSDictionary* _propertiesToMatch;

}

@property (setter=_setPropertiesToMatch:,nonatomic,retain) NSDictionary * _propertiesToMatch;              //@synthesize propertiesToMatch=_propertiesToMatch - In the implementation block
+(id)_appearanceMatchingProperties:(id)arg1 forClass:(Class)arg2 withContainerList:(id)arg3 ;
+(id)_appearanceObjectKeyForProperties:(id)arg1 ;
-(void)dealloc;
-(BOOL)_isValidAppearanceForCustomizableObject:(id)arg1 ;
-(BOOL)_isRecordingInvocations;
-(NSDictionary *)_propertiesToMatch;
-(void)_setPropertiesToMatch:(id)arg1 ;
@end

