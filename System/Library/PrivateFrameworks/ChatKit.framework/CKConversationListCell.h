/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:51 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKit/UITableViewCell.h>
#import <libobjc.A.dylib/CNAvatarViewDelegate.h>

@class UIDateLabel, UILabel, UIImageView, NSString, NSDate, CKAvatarView, UIViewController, CKConversation;

@interface CKConversationListCell : UITableViewCell <CNAvatarViewDelegate> {

	UIDateLabel* _dateLabel;
	UILabel* _summaryLabel;
	UIImageView* _unreadIndicatorImageView;
	UIImageView* _chevronImageView;
	UILabel* _fromLabel;
	BOOL _isPlaceholder;
	NSString* _searchSummaryText;
	NSString* _searchMessageGUID;
	NSDate* _searchMessageDate;
	CKAvatarView* _avatarView;
	UIViewController* _viewController;
	CKConversation* _conversation;

}

@property (nonatomic,retain) CKAvatarView * avatarView;                      //@synthesize avatarView=_avatarView - In the implementation block
@property (assign,nonatomic) UIViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,retain) NSDate * searchMessageDate;                     //@synthesize searchMessageDate=_searchMessageDate - In the implementation block
@property (nonatomic,copy) NSString * searchMessageGUID;                     //@synthesize searchMessageGUID=_searchMessageGUID - In the implementation block
@property (nonatomic,retain) CKConversation * conversation;                  //@synthesize conversation=_conversation - In the implementation block
@property (nonatomic,copy) NSString * searchSummaryText;                     //@synthesize searchSummaryText=_searchSummaryText - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)cellHeight;
+(id)identifierForConversation:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)prepareForReuse;
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
-(void)setConversation:(CKConversation *)arg1 ;
-(CKConversation *)conversation;
-(id)presentingViewControllerForAvatarView:(id)arg1 ;
-(id)avatarView:(id)arg1 orderedPropertiesForProperties:(id)arg2 category:(id)arg3 ;
-(BOOL)avatarView:(id)arg1 shouldShowContact:(id)arg2 ;
-(void)updateWithSearchResult:(id)arg1 ;
-(void)updateContentsForConversation:(id)arg1 ;
-(void)_setupAvatarViewIfNeeded;
-(NSDate *)searchMessageDate;
-(void)setSearchMessageGUID:(NSString *)arg1 ;
-(void)setSearchMessageDate:(NSDate *)arg1 ;
-(void)setSearchSummaryText:(NSString *)arg1 ;
-(BOOL)showingEditControl;
-(void)_calculateLayoutFrames;
-(void)superLayoutSubviews;
-(NSString *)searchMessageGUID;
-(NSString *)searchSummaryText;
-(CKAvatarView *)avatarView;
-(void)setAvatarView:(CKAvatarView *)arg1 ;
@end

