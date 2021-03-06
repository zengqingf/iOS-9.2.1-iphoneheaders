/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:44:00 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MCSChange.h>

@class NSSet, MCSMessageOperation;

@interface MailMessageChangeSet : MCSChange {

	NSSet* _messagesSet;
	NSSet* _messagesMarkedRead;
	NSSet* _messagesMarkedUnread;
	NSSet* _messagesUnflagged;
	NSSet* _messagesFlagged;
	MCSMessageOperation* _operation;

}

@property (readonly) MCSMessageOperation * operation;              //@synthesize operation=_operation - In the implementation block
-(id)initWithMessages:(id)arg1 operation:(id)arg2 ;
-(void)_setMessages:(id)arg1 ;
-(void)_populateMessageSets;
-(id)applyPendingChangeToObjects:(id)arg1 ;
-(id)initWithMessages:(id)arg1 unreadMessages:(id)arg2 readMessages:(id)arg3 flaggedMessages:(id)arg4 unflaggedMessages:(id)arg5 operation:(id)arg6 ;
-(void)readOperationsFlagged:(id)arg1 unflagged:(id)arg2 ;
-(void)readOperationsUnread:(id)arg1 read:(id)arg2 ;
-(id)localizedErrorDescription;
-(id)localizedErrorTitle;
-(id)localizedChangeDescription;
-(long long)localizedChangeDescriptionPriority;
-(id)messagesSet;
-(BOOL)isRevertible;
-(id)copyChangeSetForFullPath:(id)arg1 ;
-(unsigned long long)adjustUnreadCount:(unsigned long long)arg1 withCriterion:(id)arg2 ;
-(id)stores;
-(void)dealloc;
-(id)description;
-(MCSMessageOperation *)operation;
-(BOOL)commit;
-(BOOL)revert;
-(id)accounts;
-(id)URLStrings;
@end

