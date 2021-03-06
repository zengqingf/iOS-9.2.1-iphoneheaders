/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:27 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ABStyleProvider;

@interface ABCustomAppearanceProvider : NSObject {

	ABStyleProvider* _styleProvider;

}
-(void)dealloc;
-(id)init;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)newActionButton;
-(Class)propertyCellClass;
-(Class)actionCellClass;
-(id)newScrollingBackgroundView;
-(double)distanceBetweenSections;
-(void)setHighlighted:(BOOL)arg1 onPropertyCell:(id)arg2 ;
-(void)setIndicatesFaceTimeHistory:(BOOL)arg1 onActionButton:(id)arg2 ;
-(long long)unknownModalPresentationStyle;
-(BOOL)shouldUseCardContentProviderWhenAvailable;
-(Class)customCardCellClass;
-(Class)customCardActionCellClass;
-(id)newCardActionButton;
-(id)newCustomCardTableScrollingBackgroundView;
-(double)cardTableViewSectionHeaderHeightWhenEditing:(BOOL)arg1 ;
-(double)cardTableViewSectionFooterHeightWhenEditing:(BOOL)arg1 ;
-(BOOL)shouldPropagateStylesToPickers;
-(BOOL)shouldPropagateStylesThroughUnknownPersonActions;
-(void)customSetEmphasized:(BOOL)arg1 onCell:(id)arg2 ;
@end

