/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:44 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
@class NSDictionary, NSString, NSObject, NSURL;

@interface DelayedGotoSemaphore : NSObject {

	NSDictionary* _bodyDictionary;
	double _delay;
	NSString* _pushToken;
	NSObject*<OS_dispatch_semaphore> _semaphore;
	NSURL* _url;

}

@property (nonatomic,readonly) NSDictionary * bodyDictionary;              //@synthesize bodyDictionary=_bodyDictionary - In the implementation block
@property (nonatomic,readonly) NSURL * URL;                                //@synthesize url=_url - In the implementation block
+(void)signalSemaphoreForPushToken:(id)arg1 ;
+(void)_accessSemaphorePoolUsingBlock:(/*^block*/id)arg1 ;
-(id)initWithDelayedGoto:(id)arg1 ;
-(NSDictionary *)bodyDictionary;
-(NSURL *)URL;
-(void)wait;
@end

