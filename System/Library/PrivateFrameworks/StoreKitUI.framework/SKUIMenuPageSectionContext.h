/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:50 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface SKUIMenuPageSectionContext : NSObject {

	NSMutableDictionary* _sections;
	long long _selectedIndex;

}

@property (assign,nonatomic) long long selectedIndex;              //@synthesize selectedIndex=_selectedIndex - In the implementation block
-(long long)selectedIndex;
-(void)setSelectedIndex:(long long)arg1 ;
-(id)sectionsForIndex:(long long)arg1 ;
-(void)setSections:(id)arg1 forIndex:(long long)arg2 ;
@end
