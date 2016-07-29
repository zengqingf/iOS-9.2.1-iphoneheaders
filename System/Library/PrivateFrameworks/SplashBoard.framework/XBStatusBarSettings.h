/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:28 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SplashBoard/SplashBoard-Structs.h>
#import <libobjc.A.dylib/BSSettingDescriptionProvider.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class BSMutableSettings, BSSettings, NSString;

@interface XBStatusBarSettings : NSObject <BSSettingDescriptionProvider, NSCopying, NSMutableCopying, NSCoding> {

	BSMutableSettings* _settings;

}

@property (getter=isHidden,nonatomic,readonly) BOOL hidden; 
@property (nonatomic,readonly) long long style; 
@property (nonatomic,copy,readonly) BSSettings * BSSettings;              //@synthesize settings=_settings - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isHidden;
-(id)init;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)style;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 ;
-(id)initWithBSSettings:(id)arg1 ;
-(BSSettings *)BSSettings;
@end
