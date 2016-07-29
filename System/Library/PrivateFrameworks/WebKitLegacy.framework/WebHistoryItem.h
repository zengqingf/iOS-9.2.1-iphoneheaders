/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:34 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKitLegacy/WebKitLegacy-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class WebHistoryItemPrivate, NSString;

@interface WebHistoryItem : NSObject <NSCopying> {

	WebHistoryItemPrivate* _private;

}

@property (nonatomic,copy,readonly) NSString * originalURLString; 
@property (nonatomic,copy,readonly) NSString * URLString; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,readonly) double lastVisitedTimeInterval; 
@property (nonatomic,copy) NSString * alternateTitle; 
+(id)entryWithURL:(id)arg1 ;
+(void)initialize;
-(oneway void)release;
-(oneway void)_webcore_releaseOnWebThread;
-(id)dictionaryRepresentationIncludingChildren:(BOOL)arg1 ;
-(id)initWithURL:(id)arg1 title:(id)arg2 ;
-(id)_sharedLinkUniqueIdentifier;
-(BOOL)isTargetItem;
-(id)RSSFeedReferrer;
-(void)setRSSFeedReferrer:(id)arg1 ;
-(id)targetItem;
-(id)_transientPropertyForKey:(id)arg1 ;
-(void)_setTransientProperty:(id)arg1 forKey:(id)arg2 ;
-(id)_redirectURLs;
-(unsigned)_bookmarkID;
-(void)_setBookmarkID:(unsigned)arg1 ;
-(void)_setSharedLinkUniqueIdentifier:(id)arg1 ;
-(BOOL)_isInPageCache;
-(BOOL)_hasCachedPageExpired;
-(float)_scale;
-(id)target;
-(id)URL;
-(BOOL)_scaleIsInitial;
-(id)_viewportArguments;
-(BOOL)lastVisitWasFailure;
-(void)_setScrollPoint:(CGPoint)arg1 ;
-(void)_setScale:(float)arg1 isInitial:(BOOL)arg2 ;
-(void)_setViewportArguments:(id)arg1 ;
-(CGPoint)_scrollPoint;
-(id)dictionaryRepresentation;
-(id)children;
-(CGPoint)scrollPoint;
-(void)setViewState:(id)arg1 ;
-(void)_visitedWithTitle:(id)arg1 ;
-(id)initWithURLString:(id)arg1 title:(id)arg2 lastVisitedTimeInterval:(double)arg3 ;
-(id)initWithWebCoreHistoryItem:(PassRefPtr<WebCore::HistoryItem>*)arg1 ;
-(id)initWithURLString:(id)arg1 title:(id)arg2 displayTitle:(id)arg3 lastVisitedTimeInterval:(double)arg4 ;
-(void)setAlternateTitle:(NSString *)arg1 ;
-(id)initWithURL:(id)arg1 target:(id)arg2 parent:(id)arg3 title:(id)arg4 ;
-(void)dealloc;
-(id)init;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)URLString;
-(NSString *)originalURLString;
-(double)lastVisitedTimeInterval;
-(id)initFromDictionaryRepresentation:(id)arg1 ;
-(NSString *)alternateTitle;
-(void)finalize;
@end
