/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:49 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UIImageView, UIView, UILabel;

@interface CertUIItemSummaryCell : UITableViewCell {

	UIImageView* _itemImageView;
	UIView* _itemTitleView;
	UILabel* _itemTitleLabel;
	UILabel* _itemSubtitleLabel;

}

@property (nonatomic,retain) UIImageView * itemImageView;              //@synthesize itemImageView=_itemImageView - In the implementation block
@property (nonatomic,retain) UIView * itemTitleView;                   //@synthesize itemTitleView=_itemTitleView - In the implementation block
@property (nonatomic,retain) UILabel * itemTitleLabel;                 //@synthesize itemTitleLabel=_itemTitleLabel - In the implementation block
@property (nonatomic,retain) UILabel * itemSubtitleLabel;              //@synthesize itemSubtitleLabel=_itemSubtitleLabel - In the implementation block
+(double)titleOriginX;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_setupConstraints;
-(UIImageView *)itemImageView;
-(double)cellHeight;
-(void)_setupCell;
-(id)_profileImageAppropriateForDevice;
-(UIView *)itemTitleView;
-(UILabel *)itemTitleLabel;
-(UILabel *)itemSubtitleLabel;
-(void)setItemImageView:(UIImageView *)arg1 ;
-(void)setItemTitleView:(UIView *)arg1 ;
-(void)setItemTitleLabel:(UILabel *)arg1 ;
-(void)setItemSubtitleLabel:(UILabel *)arg1 ;
@end

