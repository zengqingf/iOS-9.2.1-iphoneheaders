/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:44 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIItemViewElement.h>

@class SKUIImageViewElement, NSArray;

@interface SKUIBrowseItemViewElement : SKUIItemViewElement {

	BOOL _expands;

}

@property (nonatomic,readonly) SKUIImageViewElement * decorationImage; 
@property (nonatomic,readonly) BOOL expands;                                        //@synthesize expands=_expands - In the implementation block
@property (nonatomic,readonly) NSArray * metadata; 
-(SKUIImageViewElement *)decorationImage;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(long long)pageComponentType;
-(BOOL)expands;
-(NSArray *)metadata;
@end

