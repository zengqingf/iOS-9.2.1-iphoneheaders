/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:44 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <itunesstored/itunesstored-Structs.h>
@interface UserNotification : NSObject {

	/*^block*/id _completionBlock;
	BOOL _isCanceled;
	CFDictionaryRef _notificationDictionary;
	unsigned long long _notificationOptions;
	CFRunLoopSourceRef _runLoopSource;
	CFUserNotificationRef _userNotification;

}

@property (nonatomic,copy) id completionBlock;                                      //@synthesize completionBlock=_completionBlock - In the implementation block
@property (getter=isCanceled,nonatomic,readonly) BOOL canceled;                     //@synthesize isCanceled=_isCanceled - In the implementation block
@property (nonatomic,readonly) CFUserNotificationRef userNotification; 
-(id)initWithDictionary:(CFDictionaryRef)arg1 options:(unsigned long long)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)updateWithDictionary:(CFDictionaryRef)arg1 options:(unsigned long long)arg2 ;
-(void)cancel;
-(void)show;
-(void)dealloc;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(BOOL)isCanceled;
-(CFUserNotificationRef)userNotification;
@end

