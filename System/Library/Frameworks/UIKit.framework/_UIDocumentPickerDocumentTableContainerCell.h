/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:49 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UIDocumentPickerDocumentTableCell.h>

@class UIImageView;

@interface _UIDocumentPickerDocumentTableContainerCell : _UIDocumentPickerDocumentTableCell {

	UIImageView* _containerIconView;

}

@property (nonatomic,retain) UIImageView * containerIconView;              //@synthesize containerIconView=_containerIconView - In the implementation block
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)prepareForReuse;
-(void)reloadItem:(BOOL)arg1 ;
-(UIImageView *)containerIconView;
-(void)containersChangedWithSnapshot:(id)arg1 differences:(id)arg2 ;
-(void)setContainerIconView:(UIImageView *)arg1 ;
@end
