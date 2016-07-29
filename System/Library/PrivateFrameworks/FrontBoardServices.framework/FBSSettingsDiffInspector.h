/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:59 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BSMutableSettings;

@interface FBSSettingsDiffInspector : NSObject {

	BSMutableSettings* _observerInfo;
	BSMutableSettings* _otherSettingsObserverInfo;
	BOOL _iteratingObservers;

}
-(void)_addObserver:(id)arg1 forSetting:(unsigned long long)arg2 inInfo:(id)arg3 ;
-(void)_observeSetting:(unsigned long long)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)inspectDiff:(id)arg1 withContext:(void*)arg2 ;
-(void)observeOtherSetting:(unsigned long long)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)removeAllObservers;
@end
