/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:33 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/iCloudDriveSettings.bundle/iCloudDriveSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iCloudDriveSettings/iCloudDriveSettings-Structs.h>
@class NSMutableDictionary;

@interface CDSServiceAccessCache : NSObject {

	NSMutableDictionary* _accessInfoByBundleID;

}
-(void)setAccessGranted:(BOOL)arg1 forBundleID:(id)arg2 ;
-(CFBundleRef)bundleForBundleID:(id)arg1 ;
-(id)servicesForBundleID:(id)arg1 ;
-(void)addAccessInfo:(id)arg1 forServiceName:(id)arg2 ;
-(id)allBundleIDs;
-(id)serviceNamesForBundleID:(id)arg1 ;
-(BOOL)isAccessGrantedForBundleID:(id)arg1 ;
@end

