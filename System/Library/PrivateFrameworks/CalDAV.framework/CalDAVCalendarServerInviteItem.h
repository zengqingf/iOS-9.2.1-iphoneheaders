/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:29 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet;

@interface CalDAVCalendarServerInviteItem : CoreDAVItem {

	NSMutableSet* _users;

}

@property (nonatomic,retain) NSMutableSet * users;              //@synthesize users=_users - In the implementation block
-(id)init;
-(id)initWithNameSpace:(id)arg1 andName:(id)arg2 ;
-(id)copyParseRules;
-(void)addUser:(id)arg1 ;
-(NSMutableSet *)users;
-(void)setUsers:(NSMutableSet *)arg1 ;
@end

