/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:58 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AccessibilityUI.framework/XPCServices/com.apple.accessibility.AccessibilityUIServer.xpc/com.apple.accessibility.AccessibilityUIServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <com.apple.accessibility.AccessibilityUIServer/com.apple.accessibility.AccessibilityUIServer-Structs.h>
#import <UIKit/UIApplication.h>

@interface AXUIApplication : UIApplication

@property (nonatomic,readonly) long long _expectedViewOrientation; 
-(void)_run;
-(BOOL)_shouldAllowKeyboardArbiter;
-(long long)_expectedViewOrientation;
-(id)accessibilityLabel;
-(CGRect)accessibilityFrame;
-(BOOL)_accessibilityIsAccessibilityUIServer;
-(id)_accessibilityIsolatedWindows;
@end
