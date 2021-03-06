/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:36 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>

@class NSString;

@interface WBUPasswordPickerViewController : UINavigationController {

	NSString* _prompt;
	/*^block*/id _completionHandler;

}

@property (nonatomic,copy,readonly) NSString * prompt;              //@synthesize prompt=_prompt - In the implementation block
-(void)dealloc;
-(NSString *)prompt;
-(void)_cancel;
-(void)_pickSavedPassword:(id)arg1 ;
-(id)initWithPrompt:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_appDidEnterBackground:(id)arg1 ;
@end

