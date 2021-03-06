/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:40 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/CNPredicate.h>
#import <libobjc.A.dylib/CNSuggestedContactPredicate.h>

@class NSString;

@interface CNContactWithNamePredicate : CNPredicate <CNSuggestedContactPredicate> {

	NSString* _name;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * name;                //@synthesize name=_name - In the implementation block
-(id)sgContactMatchesWithSortOrder:(long long)arg1 mutableObjects:(BOOL)arg2 service:(id)arg3 error:(id*)arg4 ;
-(void)dealloc;
-(NSString *)description;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
@end

