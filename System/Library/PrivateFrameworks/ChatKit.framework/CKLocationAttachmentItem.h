/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:51 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKAttachmentItem.h>

@interface CKLocationAttachmentItem : CKAttachmentItem {

	CGSize _coordinate;

}

@property (assign,nonatomic) CGSize coordinate;              //@synthesize coordinate=_coordinate - In the implementation block
+(id)UTITypes;
-(void)setCoordinate:(CGSize)arg1 ;
-(CGSize)coordinate;
-(void)generatePreviewWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithFileURL:(id)arg1 size:(CGSize)arg2 guid:(id)arg3 ;
-(id)_generateThumbnailFillToSize:(CGSize)arg1 ;
-(id)pin;
-(id)vCardURLProperties;
-(BOOL)isDroppedPin;
@end

