/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:36 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MKMapItemReview.h>

@protocol GEOMapItemReview;
@class NSString, NSDate, NSURL, MKMapItem;

@interface _MKMapItemReview : NSObject <MKMapItemReview> {

	MKMapItem* _mapItem;
	id<GEOMapItemReview> _review;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=_score,nonatomic,readonly) double score; 
@property (getter=_maxScore,nonatomic,readonly) double maxScore; 
@property (getter=_normalizedScore,nonatomic,readonly) double normalizedScore; 
@property (getter=_localizedSnippet,nonatomic,readonly) NSString * localizedSnippet; 
@property (getter=_date,nonatomic,readonly) NSDate * date; 
@property (getter=_reviewerName,nonatomic,readonly) NSString * reviewerName; 
@property (getter=_reviewerImageURL,nonatomic,readonly) NSURL * reviewerImageURL; 
@property (getter=_geoReview,nonatomic,readonly) id<GEOMapItemReview> geoReview; 
-(double)_score;
-(double)_maxScore;
-(id)_date;
-(double)_normalizedScore;
-(id)_localizedSnippet;
-(id)_reviewerName;
-(void)showWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithMapItem:(id)arg1 review:(id)arg2 ;
-(id)_geoReview;
-(id)_reviewerImageURL;
@end

