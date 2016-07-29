/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:59 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class NSMutableArray, PKPass, PKPassBucketTemplate, PKPassColorProfile, NSArray;

@interface PKPassBucketView : UIView {

	NSMutableArray* _fieldViews;
	long long _background;
	PKPass* _pass;
	PKPassBucketTemplate* _bucketTemplate;
	PKPassColorProfile* _colorProfile;
	NSArray* _bucket;

}

@property (nonatomic,retain) PKPass * pass;                                      //@synthesize pass=_pass - In the implementation block
@property (nonatomic,retain) PKPassColorProfile * colorProfile;                  //@synthesize colorProfile=_colorProfile - In the implementation block
@property (nonatomic,retain) PKPassBucketTemplate * bucketTemplate;              //@synthesize bucketTemplate=_bucketTemplate - In the implementation block
@property (nonatomic,retain) NSArray * bucket;                                   //@synthesize bucket=_bucket - In the implementation block
-(void)dealloc;
-(void)layoutSubviews;
-(id)description;
-(void)_updateSubviews;
-(PKPass *)pass;
-(void)setPass:(PKPass *)arg1 ;
-(PKPassColorProfile *)colorProfile;
-(PKPassBucketTemplate *)bucketTemplate;
-(void)presentDiff:(id)arg1 inView:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setBucketTemplate:(PKPassBucketTemplate *)arg1 ;
-(void)setColorProfile:(PKPassColorProfile *)arg1 ;
-(void)setBucket:(NSArray *)arg1 ;
-(long long)_backgroundForBucketTemplate:(id)arg1 ;
-(void)_measureAndFitEvenlySizedSubviews;
-(void)_measureAndFitVariablySizedSubviews;
-(id)_fieldViewsByWidth;
-(NSArray *)bucket;
@end
