/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:54 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBAssertionDelegate, OS_dispatch_source;
@class NSString, NSObject;

@interface SBAssertion : NSObject {

	id<SBAssertionDelegate> _delegate;
	NSString* _reason;
	unsigned _clientPort;
	NSObject*<OS_dispatch_source> _source;

}

@property (assign,nonatomic) id<SBAssertionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSString * reason;                      //@synthesize reason=_reason - In the implementation block
-(id)initWithClientPort:(unsigned)arg1 reason:(id)arg2 ;
-(void)setDelegate:(id<SBAssertionDelegate>)arg1 ;
-(void)dealloc;
-(id)description;
-(id<SBAssertionDelegate>)delegate;
-(NSString *)reason;
@end

