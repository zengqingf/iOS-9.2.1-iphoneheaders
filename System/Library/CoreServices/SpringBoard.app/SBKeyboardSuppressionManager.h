/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:52 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface SBKeyboardSuppressionManager : NSObject {

	NSMutableDictionary* _keyboardSuppressionAssertions;

}
+(id)sharedInstance;
-(void)_setKeyboardSuppressed:(BOOL)arg1 forReason:(id)arg2 withPredicate:(/*^block*/id)arg3 ;
-(void)startSuppressingKeyboardWithReason:(id)arg1 predicate:(/*^block*/id)arg2 ;
-(void)stopSuppressingKeyboardWithReason:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
@end

