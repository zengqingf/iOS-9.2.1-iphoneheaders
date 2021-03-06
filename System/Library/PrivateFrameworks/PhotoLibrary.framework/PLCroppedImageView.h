/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:15 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, UIImage;

@interface PLCroppedImageView : UIView {

	UIImageView* _imageView;
	CGRect _cropRect;

}

@property (nonatomic,retain) UIImage * image; 
@property (assign,nonatomic) CGRect cropRect; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIImage *)image;
-(CGRect)cropRect;
-(void)setCropRect:(CGRect)arg1 ;
@end

