/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:17 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SL_OOPAuthFlowDelegate
@required
-(BOOL)wantsInitialRedirect;
-(void)setAuthFlowCompletion:(/*^block*/id)arg1;
-(id)authURLForUsername:(id)arg1;
-(id)requestForAuthURL:(id)arg1;
-(BOOL)shouldHideWebViewForLoadWithRequest:(id)arg1;
-(void)webViewDidFinishLoadWithPageTitleSupplier:(/*^block*/id)arg1;

@end
