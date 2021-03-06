/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:44:17 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /Applications/News.app/Frameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Silex/Silex-Structs.h>
@class UIView, SXAddition;

@interface SXAction : NSObject {

	BOOL _touchAndHold;
	UIView* _sourceView;
	SXAddition* _addition;
	CGPoint _touchPoint;
	CGRect _sourceRect;

}

@property (assign,nonatomic) BOOL touchAndHold;                           //@synthesize touchAndHold=_touchAndHold - In the implementation block
@property (assign,nonatomic) CGPoint touchPoint;                          //@synthesize touchPoint=_touchPoint - In the implementation block
@property (assign,nonatomic) CGRect sourceRect;                           //@synthesize sourceRect=_sourceRect - In the implementation block
@property (assign,nonatomic,__weak) UIView * sourceView;                  //@synthesize sourceView=_sourceView - In the implementation block
@property (nonatomic,__weak,readonly) SXAddition * addition;              //@synthesize addition=_addition - In the implementation block
-(BOOL)touchAndHold;
-(Class)handlerClass;
-(void)setTouchAndHold:(BOOL)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIView *)sourceView;
-(void)setSourceView:(UIView *)arg1 ;
-(CGRect)sourceRect;
-(void)setSourceRect:(CGRect)arg1 ;
-(SXAddition *)addition;
-(id)initWithAddition:(id)arg1 ;
-(CGPoint)touchPoint;
-(void)setTouchPoint:(CGPoint)arg1 ;
@end

