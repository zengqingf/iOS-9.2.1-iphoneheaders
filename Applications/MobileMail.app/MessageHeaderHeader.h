/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:44:00 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <UIKit/UIView.h>

@class MFMailMessage, UILabel, SeparatorLayer, UITextView, MFMessageDisplayMetrics;

@interface MessageHeaderHeader : UIView {

	MFMailMessage* _lastMessage;
	UILabel* _dateLabel;
	UILabel* _mailboxLabel;
	SeparatorLayer* _bottomSeparator;
	SeparatorLayer* _topSeparator;
	int _displayStyle;
	BOOL _isOutgoing;
	BOOL _showMailboxName;
	BOOL _bottomSeparatorDrawsFlushWithLeadingEdge;
	UITextView* _subjectTextView;
	MFMessageDisplayMetrics* _displayMetrics;

}

@property (nonatomic,readonly) UITextView * subjectTextView;                             //@synthesize subjectTextView=_subjectTextView - In the implementation block
@property (assign,nonatomic) BOOL bottomSeparatorDrawsFlushWithLeadingEdge;              //@synthesize bottomSeparatorDrawsFlushWithLeadingEdge=_bottomSeparatorDrawsFlushWithLeadingEdge - In the implementation block
@property (nonatomic,retain) MFMessageDisplayMetrics * displayMetrics;                   //@synthesize displayMetrics=_displayMetrics - In the implementation block
-(void)clearMessage;
-(void)displayMessage:(id)arg1 withStyle:(int)arg2 ;
-(id)initWithFrame:(CGRect)arg1 displayStyle:(int)arg2 ;
-(void)setBottomSeparatorDrawsFlushWithLeadingEdge:(BOOL)arg1 ;
-(CGRect)subjectFrame;
-(void)reloadFontSizes;
-(void)setDisplayMetrics:(MFMessageDisplayMetrics *)arg1 ;
-(MFMessageDisplayMetrics *)displayMetrics;
-(UITextView *)subjectTextView;
-(void)setMailboxNameVisible:(BOOL)arg1 ;
-(void)updateDateAndTime;
-(BOOL)bottomSeparatorDrawsFlushWithLeadingEdge;
-(double)subjectFontBaseline;
-(void)_updateVeryLargeSubjectAllowed;
-(id)_addSeparatorAtPosition:(double)arg1 ;
-(id)contextForDDDetectionController;
-(void)_setSubjectText:(id)arg1 ;
-(double)_subjectTextViewBaselineOffsetFromBottom;
-(CGRect)_layoutSubjectTextView;
-(CGRect)_layoutDate:(id)arg1 subjectRect:(CGRect)arg2 ;
-(CGRect)rectForMailboxNameWithDateRect:(CGRect)arg1 ;
-(double)contentHeightWithDateRect:(CGRect)arg1 subjectRect:(CGRect)arg2 mailboxRect:(CGRect)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)addSubview:(id)arg1 ;
-(void)layoutSubviews;
-(id)subject;
-(void)_significantTimeChange:(id)arg1 ;
-(id)mailboxName;
-(id)dateSent;
-(id)bottomSeparator;
-(BOOL)shouldDisplay;
@end

