/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:42 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNCardGroupItem.h>

@class CNContact;

@interface CNCardLinkedCardsGroupItem : CNCardGroupItem {

	CNContact* _contact;

}

@property (nonatomic,retain) CNContact * contact;              //@synthesize contact=_contact - In the implementation block
-(void)setContact:(CNContact *)arg1 ;
-(CNContact *)contact;
-(id)initWithContact:(id)arg1 ;
@end

