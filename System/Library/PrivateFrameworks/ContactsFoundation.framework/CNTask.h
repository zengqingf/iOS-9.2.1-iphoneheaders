/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:15 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CNTask : NSObject {

	BOOL _cancelled;
	NSString* _name;

}

@property (getter=isCancelled,readonly) BOOL cancelled; 
@property (copy) NSString * name;                                    //@synthesize name=_name - In the implementation block
+(BOOL)isValidResult:(id)arg1 ;
-(BOOL)cancel;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(BOOL)isCancelled;
-(id)initWithName:(id)arg1 ;
-(id)run:(id*)arg1 ;
@end

