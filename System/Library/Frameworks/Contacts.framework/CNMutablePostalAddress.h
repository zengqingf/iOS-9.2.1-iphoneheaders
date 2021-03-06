/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:39 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/Contacts-Structs.h>
#import <Contacts/CNPostalAddress.h>

@class NSString;

@interface CNMutablePostalAddress : CNPostalAddress

@property (nonatomic,copy) NSString * street; 
@property (nonatomic,copy) NSString * city; 
@property (nonatomic,copy) NSString * state; 
@property (nonatomic,copy) NSString * postalCode; 
@property (nonatomic,copy) NSString * country; 
@property (nonatomic,copy) NSString * ISOCountryCode; 
@property (nonatomic,copy) NSString * formattedAddress; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)freeze;
@end

