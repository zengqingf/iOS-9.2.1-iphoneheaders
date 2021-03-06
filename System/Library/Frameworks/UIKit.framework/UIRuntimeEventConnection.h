/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:41 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIRuntimeConnection.h>

@interface UIRuntimeEventConnection : UIRuntimeConnection {

	unsigned long long eventMask;

}

@property (assign) unsigned long long eventMask; 
@property (readonly) SEL action; 
@property (readonly) id target; 
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(SEL)action;
-(id)target;
-(void)connectForSimulator;
-(void)connect;
-(unsigned long long)eventMask;
-(void)setEventMask:(unsigned long long)arg1 ;
@end

