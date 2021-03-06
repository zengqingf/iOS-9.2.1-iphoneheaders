/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:30 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarDaemon/CADOperationGroup.h>
#import <libobjc.A.dylib/CADDebugInterface.h>

@interface CADDebugOperationGroup : CADOperationGroup <CADDebugInterface>
+(BOOL)requiresEventAccess;
+(BOOL)requiresReminderAccess;
+(BOOL)requiresEventOrReminderAccess;
+(id)whitelistedBundles;
-(id)_trimAndCompressTextData:(id)arg1 toMaxLength:(unsigned long long)arg2 ;
-(id)_compressData:(id)arg1 ;
-(id)_trimTextData:(id)arg1 toLength:(unsigned long long)arg2 ;
-(void)CADDebugMoveDiagnosticsDBToCrashReporterFolderWithError:(/*^block*/id)arg1 ;
-(void)CADDebugGatherLogsWithError:(/*^block*/id)arg1 ;
@end

