/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:33 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Assistant/UIPlugins/Calendar.siriUIBundle/Calendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol EKDayViewDelegate <NSObject>
@optional
-(void)dayViewDidFinishScrollingToOccurrence:(id)arg1;
-(void)dayView:(id)arg1 scrollViewWillBeginDragging:(id)arg2;
-(void)dayView:(id)arg1 didUpdateScrollPosition:(CGPoint)arg2;
-(void)dayView:(id)arg1 firstVisibleSecondChanged:(unsigned long long)arg2;
-(void)dayView:(id)arg1 didScaleDayViewWithScale:(double)arg2;
-(void)dayView:(id)arg1 didSelectEvent:(id)arg2;
-(void)dayView:(id)arg1 didCreateOccurrenceViews:(id)arg2;
-(void)dayViewDidTapEmptySpace:(id)arg1;
-(void)dayView:(id)arg1 isPinchingDayViewWithScale:(double)arg2;

@end
