/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:29 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AddressBookUI/AddressBookUI-Structs.h>
@class ABPeoplePickerNavigationController, NSMutableArray;

@interface ABPeoplePickerNavigationControllerPromptHandler : NSObject {

	ABPeoplePickerNavigationController* _ppnc;
	NSMutableArray* _prompts;

}
-(void)dealloc;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)promptForViewControllerType:(int)arg1 orientation:(long long)arg2 ;
-(void)setPrompt:(id)arg1 forViewControllerType:(int)arg2 ;
-(BOOL)_shouldShowPromptForOrientation:(long long)arg1 ;
-(unsigned long long)indexForViewControllerType:(int)arg1 ;
-(id)initWithNavigationController:(id)arg1 ;
@end

