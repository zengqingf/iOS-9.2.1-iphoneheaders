/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:55 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMCore/IMTranscriptChatItem.h>
#import <IMCore/IMMessageChatItem.h>
@class NSDate, IMHandle;


@protocol IMMessageChatItem <NSObject>
@property (nonatomic,readonly) BOOL isFromMe; 
@property (nonatomic,readonly) BOOL failed; 
@property (nonatomic,retain,readonly) NSDate * time; 
@property (nonatomic,retain,readonly) IMHandle * sender; 
@required
-(IMHandle *)sender;
-(NSDate *)time;
-(BOOL)isFromMe;
-(BOOL)failed;

@end


@class NSDate, IMHandle, IMMessage, NSString;

@interface IMMessageChatItem : IMTranscriptChatItem <IMMessageChatItem>

@property (nonatomic,retain,readonly) IMMessage * message; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isFromMe; 
@property (nonatomic,readonly) BOOL failed; 
@property (nonatomic,retain,readonly) NSDate * time; 
@property (nonatomic,retain,readonly) IMHandle * sender; 
-(IMMessage *)message;
-(IMHandle *)sender;
-(NSDate *)time;
-(BOOL)isFromMe;
-(BOOL)failed;
@end

