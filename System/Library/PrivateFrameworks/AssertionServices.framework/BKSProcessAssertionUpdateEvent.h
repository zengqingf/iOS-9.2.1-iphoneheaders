/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:16 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/AssertionServices.framework/AssertionServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssertionServices/BKSProcessAssertionEvent.h>

@class NSString;

@interface BKSProcessAssertionUpdateEvent : BKSProcessAssertionEvent {

	NSString* _name;
	unsigned _flags;

}

@property (nonatomic,copy) NSString * name;               //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) unsigned flags;              //@synthesize flags=_flags - In the implementation block
-(void)dealloc;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(void)setFlags:(unsigned)arg1 ;
-(unsigned)flags;
@end

