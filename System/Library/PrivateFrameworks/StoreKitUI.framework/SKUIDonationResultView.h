/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:37 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UIImageView, UILabel, UIImage, NSString;

@interface SKUIDonationResultView : UIView {

	UIImageView* _imageView;
	UILabel* _messageLabel;
	UILabel* _titleLabel;

}

@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,copy) NSString * message; 
@property (nonatomic,copy) NSString * title; 
-(void)setImage:(UIImage *)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(UIImage *)image;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
@end

