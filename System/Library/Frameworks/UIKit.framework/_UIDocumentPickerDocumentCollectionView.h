/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:56 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UICollectionView.h>

@interface _UIDocumentPickerDocumentCollectionView : UICollectionView {

	BOOL _avoidNegativeContentOffset;
	double _contentSizeAdjustment;

}

@property (assign,nonatomic) double contentSizeAdjustment;              //@synthesize contentSizeAdjustment=_contentSizeAdjustment - In the implementation block
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setContentOffset:(CGPoint)arg1 ;
-(void)setContentSize:(CGSize)arg1 ;
-(double)contentSizeAdjustment;
-(void)setAdjustedContentSize:(CGSize)arg1 withFrameSize:(CGSize)arg2 ;
-(void)_performWhileAvoidingNegativeContentOffset:(/*^block*/id)arg1 ;
-(void)setContentSizeAdjustment:(double)arg1 ;
@end

