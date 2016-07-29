/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:18 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel, UIImage, NSString;

@interface MSCLAudioCoverImageSelectionTableViewCell : UITableViewCell {

	UIImageView* _cameraImageView;
	UIImageView* _coverImageView;
	UILabel* _placeholderLabel;

}

@property (nonatomic,retain) UIImage * coverImage; 
@property (nonatomic,copy) NSString * placeholderText; 
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(NSString *)placeholderText;
-(void)setPlaceholderText:(NSString *)arg1 ;
-(void)setCoverImage:(UIImage *)arg1 ;
-(UIImage *)coverImage;
@end
