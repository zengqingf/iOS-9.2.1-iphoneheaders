/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:38 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PreferencesUI/PSUILocationServicesListController.h>

@class NSString, NSDictionary, NSBundle;

@interface PSUILocationServicesAuthorizationLevelController : PSUILocationServicesListController {

	NSString* _serviceKey;
	NSDictionary* _details;
	NSString* _displayName;
	NSBundle* _entityBundle;

}

@property (nonatomic,copy) NSString * serviceKey;                  //@synthesize serviceKey=_serviceKey - In the implementation block
@property (nonatomic,retain) NSDictionary * details;               //@synthesize details=_details - In the implementation block
@property (nonatomic,copy) NSString * displayName;                 //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) NSBundle * entityBundle;              //@synthesize entityBundle=_entityBundle - In the implementation block
-(void)dealloc;
-(id)init;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(NSString *)displayName;
-(NSDictionary *)details;
-(void)setDetails:(NSDictionary *)arg1 ;
-(void)setSpecifier:(id)arg1 ;
-(void)setServiceKey:(NSString *)arg1 ;
-(NSString *)serviceKey;
-(void)profileSettingsChanged:(id)arg1 ;
-(id)_constructFooterForAuthorizationLevel:(unsigned long long)arg1 ;
-(id)_usageTextForAuthorizationLevel:(unsigned long long)arg1 ;
-(id)_purposeStringForAuthorizationLevel:(unsigned long long)arg1 ;
-(void)_setLocationAuthorizationLevelForSpecifier:(id)arg1 ;
-(void)_setLocationAuthorizationLevelMaskForAssociatedFramework:(unsigned long long)arg1 ;
-(NSBundle *)entityBundle;
-(void)setEntityBundle:(NSBundle *)arg1 ;
-(id)specifiers;
-(void)setDisplayName:(NSString *)arg1 ;
@end
