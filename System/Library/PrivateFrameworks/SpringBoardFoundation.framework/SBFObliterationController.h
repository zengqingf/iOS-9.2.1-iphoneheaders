/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:30 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
@interface SBFObliterationController : NSObject
+(id)sharedInstance;
-(void)_doObliterateWithType:(CFStringRef)arg1 showingProgress:(BOOL)arg2 options:(id)arg3 ;
-(void)wipeAndBrickShowingProgress:(BOOL)arg1 ;
-(void)obliterateDataPartitionShowingProgress:(BOOL)arg1 skipDataObliteration:(BOOL)arg2 ;
-(void)markObliterationStart;
@end
