/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:32 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/MobileMailSettings.bundle/MobileMailSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoMailBridgeSettings/MFNanoBridgeSettingsMailbox.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface MFNanoBridgeSettingsUnifiedMailbox : MFNanoBridgeSettingsMailbox <NSSecureCoding> {

	int _type;

}

@property (nonatomic,readonly) int type;              //@synthesize type=_type - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(int)type;
-(id)initWithType:(int)arg1 ;
-(id)icon;
-(id)displayName;
@end

