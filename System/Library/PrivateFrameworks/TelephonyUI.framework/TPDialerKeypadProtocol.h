/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:59 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TPDialerKeypadProtocol <NSObject>
@optional
-(void)performTapActionDownForHighlightedKey;
-(void)performTapActionEndForHighlightedKey;
-(void)performTapActionCancelForHighlightedKey;
-(void)replaceButton:(id)arg1 atIndex:(unsigned long long)arg2;

@required
-(void)setDelegate:(id)arg1;
-(void)setPlaysSounds:(BOOL)arg1;
-(BOOL)supportsHardPause;
-(void)setSupportsHardPause:(BOOL)arg1;
-(void)highlightKeyAtIndex:(long long)arg1;
-(long long)indexForHighlightedKey;

@end
