/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:21 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSPortNameServer.h>

@interface NSMachBootstrapServer : NSPortNameServer
+(id)sharedInstance;
-(BOOL)registerPort:(id)arg1 name:(id)arg2 ;
-(id)portForName:(id)arg1 host:(id)arg2 ;
-(id)portForName:(id)arg1 ;
-(BOOL)removePortForName:(id)arg1 ;
-(id)portForName:(id)arg1 options:(unsigned long long)arg2 ;
-(id)servicePortWithName:(id)arg1 ;
@end

