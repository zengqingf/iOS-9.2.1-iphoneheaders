/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:28 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVContainerInfoSyncTaskGroup.h>

@interface CalDAVCalendarInfoSyncTaskGroup : CoreDAVContainerInfoSyncTaskGroup {

	BOOL _fetchSharees;

}

@property (assign,nonatomic) BOOL fetchSharees;              //@synthesize fetchSharees=_fetchSharees - In the implementation block
-(BOOL)fetchSharees;
-(void)setFetchSharees:(BOOL)arg1 ;
-(id)copyContainerParserMappings;
-(Class)containerItemClass;
@end
