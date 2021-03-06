/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:08 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EKPersistentObject.h>

@class NSString, NSData, EKPersistentCalendarItem;

@interface EKPersistentEventAction : EKPersistentObject

@property (nonatomic,copy) NSString * externalID; 
@property (nonatomic,copy) NSString * externalModTag; 
@property (nonatomic,copy) NSString * externalFolderID; 
@property (nonatomic,copy) NSString * externalScheduleID; 
@property (nonatomic,copy) NSData * externalData; 
@property (nonatomic,retain) EKPersistentCalendarItem * owner; 
+(id)relations;
-(int)entityType;
-(NSString *)externalFolderID;
-(void)setExternalFolderID:(NSString *)arg1 ;
-(NSString *)externalScheduleID;
-(void)setExternalScheduleID:(NSString *)arg1 ;
-(NSString *)externalModTag;
-(void)setExternalModTag:(NSString *)arg1 ;
-(void)setExternalID:(NSString *)arg1 ;
-(NSString *)externalID;
-(NSData *)externalData;
-(void)setExternalData:(NSData *)arg1 ;
-(void)setOwner:(EKPersistentCalendarItem *)arg1 ;
-(EKPersistentCalendarItem *)owner;
@end

