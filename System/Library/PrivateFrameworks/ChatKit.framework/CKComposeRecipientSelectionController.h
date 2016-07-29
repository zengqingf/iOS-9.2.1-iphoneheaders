/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:55 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/CKRecipientSelectionController.h>
#import <UIKit/UITextFieldDelegate.h>

@class NSArray, NSString;

@interface CKComposeRecipientSelectionController : CKRecipientSelectionController <UITextFieldDelegate> {

	/*^block*/id _sendBlock;

}

@property (assign,nonatomic) id<CKComposeRecipientSelectionControllerDelegate> delegate; 
@property (nonatomic,retain,readonly) NSArray * expandedRecipients; 
@property (nonatomic,retain,readonly) NSArray * proposedRecipients; 
@property (nonatomic,copy) id sendBlock;                                                              //@synthesize sendBlock=_sendBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)reset;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)addRecipient:(id)arg1 ;
-(BOOL)homogenizePreferredServiceForiMessage;
-(void)recipientSelectionControllerDidChange;
-(BOOL)shouldAtomizeToConversationName;
-(BOOL)shouldSuppressSearchResultsTable;
-(BOOL)alwaysShowSearchResultsTable;
-(NSArray *)proposedRecipients;
-(NSArray *)expandedRecipients;
-(void)atomizeAndInvokeBlock:(/*^block*/id)arg1 ;
-(void)setSendBlock:(id)arg1 ;
-(void)atomizeAndSendTimeoutHandler;
-(id)sendBlock;
-(void)_updateBackfillForNewRecipients;
@end
