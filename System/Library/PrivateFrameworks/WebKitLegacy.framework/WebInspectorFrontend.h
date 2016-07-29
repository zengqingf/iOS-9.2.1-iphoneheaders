/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:35 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebKitLegacy/WebKitLegacy-Structs.h>
@interface WebInspectorFrontend : NSObject {

	WebInspectorFrontendClient* m_frontendClient;

}
-(void)showConsole;
-(BOOL)isDebuggingEnabled;
-(void)setDebuggingEnabled:(BOOL)arg1 ;
-(BOOL)isTimelineProfilingEnabled;
-(void)setTimelineProfilingEnabled:(BOOL)arg1 ;
-(BOOL)isProfilingJavaScript;
-(id)initWithFrontendClient:(WebInspectorFrontendClient*)arg1 ;
-(void)startProfilingJavaScript;
-(void)stopProfilingJavaScript;
-(void)detach;
-(void)attach;
@end
