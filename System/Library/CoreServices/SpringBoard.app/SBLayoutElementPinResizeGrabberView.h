/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:54 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UIView;

@interface SBLayoutElementPinResizeGrabberView : UIView {

	UIView* _vibrantView;
	UIView* _solidView;
	BOOL _vibrant;

}

@property (assign,getter=isVibrant,nonatomic) BOOL vibrant;              //@synthesize vibrant=_vibrant - In the implementation block
@property (assign,getter=isVisible,nonatomic) BOOL visible; 
-(void)setVibrant:(BOOL)arg1 ;
-(void)_createVibrantVersionIfNeeded;
-(BOOL)isVibrant;
-(void)dealloc;
-(id)init;
-(void)layoutSubviews;
-(void)setVisible:(BOOL)arg1 ;
-(BOOL)isVisible;
@end

