/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:27 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/WebApp.framework/WebApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _WKDownloadDelegate <NSObject>
@optional
-(void)_downloadDidStart:(id)arg1;
-(void)_download:(id)arg1 didReceiveResponse:(id)arg2;
-(void)_download:(id)arg1 didReceiveData:(unsigned long long)arg2;
-(id)_download:(id)arg1 decideDestinationWithSuggestedFilename:(id)arg2 allowOverwrite:(BOOL*)arg3;
-(void)_downloadDidFinish:(id)arg1;
-(void)_download:(id)arg1 didFailWithError:(id)arg2;
-(void)_downloadDidCancel:(id)arg1;

@end

