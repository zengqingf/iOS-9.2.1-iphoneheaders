/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:29 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/AppleAccountSettings.bundle/AppleAccountSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURLSession;

@interface AAUIImageFetcher : NSObject {

	NSURLSession* _urlSession;

}
+(id)sharedImageFetcher;
-(void)fetchImageAtURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_urlSession;
@end
