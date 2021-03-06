/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:44:02 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, UIImage;

@interface MessageCallToAction : NSObject {

	BOOL _primaryActionCompleted;
	long long _category;
	NSString* _supplementaryActionTitle;
	id _context;

}

@property (assign,nonatomic) long long category;                                                       //@synthesize category=_category - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleIdentifier; 
@property (nonatomic,retain,readonly) UIImage * notificationAppIcon; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
@property (nonatomic,copy,readonly) NSString * primaryActionTitle; 
@property (nonatomic,copy,readonly) NSString * secondaryActionTitle; 
@property (assign,getter=isPrimaryActionCompleted,nonatomic) BOOL primaryActionCompleted;              //@synthesize primaryActionCompleted=_primaryActionCompleted - In the implementation block
@property (nonatomic,copy,readonly) NSString * supplementaryActionTitle;                               //@synthesize supplementaryActionTitle=_supplementaryActionTitle - In the implementation block
@property (nonatomic,retain) id context;                                                               //@synthesize context=_context - In the implementation block
+(id)callsToActionFromSuggestions:(id)arg1 ;
-(BOOL)isPrimaryActionCompleted;
-(void)setPrimaryActionCompleted:(BOOL)arg1 ;
-(NSString *)supplementaryActionTitle;
-(NSString *)primaryActionTitle;
-(NSString *)secondaryActionTitle;
-(UIImage *)notificationAppIcon;
-(BOOL)isEqualToCallToAction:(id)arg1 ;
-(id)compactTitle;
-(id)compactSubtitle;
-(id)compactAction;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)compare:(id)arg1 ;
-(void)setCategory:(long long)arg1 ;
-(long long)category;
-(NSString *)bundleIdentifier;
-(NSString *)title;
-(id)context;
-(NSString *)subtitle;
-(void)setContext:(id)arg1 ;
@end

