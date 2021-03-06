/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:55 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/CKBalloonChatItem.h>

@class IMMessage, NSArray;

@interface CKMessagePartChatItem : CKBalloonChatItem

@property (nonatomic,retain,readonly) IMMessage * message; 
@property (nonatomic,readonly) char color; 
@property (nonatomic,copy,readonly) NSArray * pasteboardItems; 
-(id)composition;
-(id)description;
-(IMMessage *)message;
-(id)sender;
-(char)color;
-(id)time;
-(BOOL)canCopy;
-(BOOL)isFromMe;
-(BOOL)canForward;
-(BOOL)canSendAsTextMessage;
-(NSArray *)pasteboardItems;
-(BOOL)failed;
-(void)configureBalloonView:(id)arg1 ;
@end

