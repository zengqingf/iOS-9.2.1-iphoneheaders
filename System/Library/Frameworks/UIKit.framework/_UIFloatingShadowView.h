/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:34 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIView, UIImage;

@interface _UIFloatingShadowView : UIView {

	UIView* _shadowView;
	CATransform3D _shadowTransform;
	BOOL _shadowEnabled;
	BOOL __disableOutsetShadowPath;
	double _shadowRadius;
	double _shadowOpacity;
	double _shadowVerticalOffset;
	double _shadowExpansion;
	UIImage* _shadowImage;
	double _cornerRadius;
	CGSize _shadowSize;
	CGRect _shadowContentsCenter;

}

@property (assign,getter=isShadowEnabled,nonatomic) BOOL shadowEnabled;              //@synthesize shadowEnabled=_shadowEnabled - In the implementation block
@property (assign,nonatomic) CGSize shadowSize;                                      //@synthesize shadowSize=_shadowSize - In the implementation block
@property (assign,nonatomic) double shadowRadius;                                    //@synthesize shadowRadius=_shadowRadius - In the implementation block
@property (assign,nonatomic) double shadowOpacity;                                   //@synthesize shadowOpacity=_shadowOpacity - In the implementation block
@property (assign,nonatomic) double shadowVerticalOffset;                            //@synthesize shadowVerticalOffset=_shadowVerticalOffset - In the implementation block
@property (assign,nonatomic) double shadowExpansion;                                 //@synthesize shadowExpansion=_shadowExpansion - In the implementation block
@property (nonatomic,retain) UIImage * shadowImage;                                  //@synthesize shadowImage=_shadowImage - In the implementation block
@property (assign,nonatomic) CGRect shadowContentsCenter;                            //@synthesize shadowContentsCenter=_shadowContentsCenter - In the implementation block
@property (assign,nonatomic) double cornerRadius;                                    //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,nonatomic) BOOL _disableOutsetShadowPath;                          //@synthesize _disableOutsetShadowPath=__disableOutsetShadowPath - In the implementation block
+(Class)layerClass;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setCornerRadius:(double)arg1 ;
-(double)cornerRadius;
-(UIImage *)shadowImage;
-(void)setShadowImage:(UIImage *)arg1 ;
-(void)setShadowContentsCenter:(CGRect)arg1 ;
-(void)setShadowRadius:(double)arg1 ;
-(void)setShadowOpacity:(double)arg1 ;
-(void)setShadowVerticalOffset:(double)arg1 ;
-(void)setShadowExpansion:(double)arg1 ;
-(void)setShadowEnabled:(BOOL)arg1 ;
-(void)_updateShadowLayer;
-(void)_setShadowImageIfNeeded;
-(void)_layoutShadow;
-(BOOL)isShadowEnabled;
-(CGSize)shadowSize;
-(double)shadowRadius;
-(BOOL)_disableOutsetShadowPath;
-(CGRect)shadowContentsCenter;
-(CGPathRef)_shadowPathForSize:(CGSize)arg1 radius:(double)arg2 ;
-(void)setShadowSize:(CGSize)arg1 ;
-(double)shadowOpacity;
-(double)shadowVerticalOffset;
-(double)shadowExpansion;
-(void)set_disableOutsetShadowPath:(BOOL)arg1 ;
@end

