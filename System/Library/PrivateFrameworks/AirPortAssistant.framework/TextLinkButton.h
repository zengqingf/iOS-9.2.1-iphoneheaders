/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:04 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AirPortAssistant/AirPortAssistant-Structs.h>
#import <UIKit/UIButton.h>

@protocol TextLinkButtonDelegate;
@class NSString;

@interface TextLinkButton : UIButton {

	NSString* _urlString;
	id<TextLinkButtonDelegate> _delegate;

}

@property (assign,nonatomic) id<TextLinkButtonDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSString * urlString;                             //@synthesize urlString=_urlString - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<TextLinkButtonDelegate>)arg1 ;
-(void)dealloc;
-(id<TextLinkButtonDelegate>)delegate;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(NSString *)urlString;
-(void)setUrlString:(NSString *)arg1 ;
-(void)tapAction:(id)arg1 ;
@end

