/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:38 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface DAUserNotificationInfo : NSObject {

	/*^block*/id _handler;
	NSString* _groupIdentifier;

}

@property (nonatomic,copy) NSString * groupIdentifier;              //@synthesize groupIdentifier=_groupIdentifier - In the implementation block
-(void)setGroupIdentifier:(NSString *)arg1 ;
-(/*^block*/id)handler;
-(void)setHandler:(/*^block*/id)arg1 ;
-(NSString *)groupIdentifier;
@end
