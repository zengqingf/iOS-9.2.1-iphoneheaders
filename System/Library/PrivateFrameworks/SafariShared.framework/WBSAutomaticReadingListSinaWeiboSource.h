/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:01 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/WBSAutomaticReadingListSocialSource.h>

@interface WBSAutomaticReadingListSinaWeiboSource : WBSAutomaticReadingListSocialSource
+(id)sharedSource;
-(id)serviceName;
-(id)serviceType;
-(id)accountTypeIdentifier;
-(id)resourceURLString;
-(id)requestParametersForRecordsWithAge:(int)arg1 relativeTo:(id)arg2 ;
-(long long)compareNewestRecordInRange:(id)arg1 toOldestRecordInRange:(id)arg2 ;
-(long long)compareNewestRecordInRange:(id)arg1 toNewestRecordInRange:(id)arg2 ;
-(long long)compareOldestRecordInRange:(id)arg1 toOldestRecordInRange:(id)arg2 ;
-(long long)compareItem:(id)arg1 toItem:(id)arg2 ;
-(Class)itemClass;
@end

