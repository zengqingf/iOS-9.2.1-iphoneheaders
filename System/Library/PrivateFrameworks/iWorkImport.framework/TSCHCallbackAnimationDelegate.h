/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:13 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TSCHCallbackAnimationDelegate : NSObject {

	id target;
	SEL selector;

}

@property (nonatomic,retain) id target; 
@property (assign,nonatomic) SEL selector; 
-(void)dealloc;
-(void)setTarget:(id)arg1 ;
-(void)setSelector:(SEL)arg1 ;
-(id)target;
-(SEL)selector;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
@end
