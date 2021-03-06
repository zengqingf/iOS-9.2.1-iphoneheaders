/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:54 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libextension.dylib/NSExtensionContext.h>
#import <UIKit/_UIIVCResponseDelegate.h>

@protocol _UIIVCResponseDelegate;
@class NSString;

@interface UIRemoteInputViewControllerInterface : NSExtensionContext <_UIIVCResponseDelegate> {

	id<_UIIVCResponseDelegate> _responseDelegate;

}

@property (nonatomic,retain) id<_UIIVCResponseDelegate> responseDelegate;              //@synthesize responseDelegate=_responseDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryVendorProtocol;
+(id)_extensionAuxiliaryHostProtocol;
-(id<_UIIVCResponseDelegate>)responseDelegate;
-(void)setResponseDelegate:(id<_UIIVCResponseDelegate>)arg1 ;
-(void)_performInputViewControllerOutput:(id)arg1 ;
-(void)_handleInputViewControllerState:(id)arg1 ;
-(void)_tearDownRemoteService;
-(void)_openURL:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

