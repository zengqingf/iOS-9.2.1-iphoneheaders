/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:23 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CoreFollowUpUI.framework/CoreFollowUpUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FLFollowUpController;

@interface FLPreferencesController : NSObject {

	FLFollowUpController* _controller;
	int _notifyToken;
	/*^block*/id _itemChangeObserver;

}

@property (nonatomic,copy) id itemChangeObserver;              //@synthesize itemChangeObserver=_itemChangeObserver - In the implementation block
-(void)dealloc;
-(id)init;
-(void)setItemChangeObserver:(id)arg1 ;
-(id)topLevelSpecifiers;
-(id)followUpItemSpecifiers;
-(unsigned long long)_countOfPendingFollowUpItemsToShowInSettings;
-(id)_pendingFollowUpItemsToShowInSettings;
-(id)_specifiersForFollowUpItem:(id)arg1 ;
-(void)actionTapped:(id)arg1 ;
-(id)itemChangeObserver;
@end

