/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:18 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AFUIDelayedActionCommandCacheDelegate;
@class NSMutableDictionary;

@interface AFUIDelayedActionCommandCache : NSObject {

	NSMutableDictionary* _delayedActionTimersByIdentifier;
	NSMutableDictionary* _dismissalDelayedActionCommandsByIdentifier;
	id<AFUIDelayedActionCommandCacheDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<AFUIDelayedActionCommandCacheDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL hasPendingCommands; 
-(void)setDelegate:(id<AFUIDelayedActionCommandCacheDelegate>)arg1 ;
-(void)dealloc;
-(id<AFUIDelayedActionCommandCacheDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 ;
-(void)invalidatePendingCommands;
-(void)_performDelayedActionCommandTimerAction:(id)arg1 ;
-(void)_invalidateDelayedActionTimer:(id)arg1 withKey:(id)arg2 ;
-(void)handleDelayedActionCommand:(id)arg1 ;
-(void)handleDelayedActionCancelCommand:(id)arg1 ;
-(void)performDismissalCommands;
-(BOOL)hasPendingCommands;
@end
