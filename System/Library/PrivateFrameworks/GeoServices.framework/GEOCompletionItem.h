/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:20 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, GEOSearchCategory, NSData;


@protocol GEOCompletionItem <NSObject>
@property (nonatomic,readonly) NSArray * displayLines; 
@property (nonatomic,readonly) id<GEOMapItem> geoMapItem; 
@property (nonatomic,readonly) GEOSearchCategory * searchCategory; 
@property (nonatomic,readonly) NSData * entryMetadata; 
@property (nonatomic,readonly) NSData * metadata; 
@required
-(id)queryLine;
-(id)calloutTitle;
-(BOOL)getCoordinate:(SCD_Struct_GE16*)arg1;
-(void)sendFeedback;
-(id<GEOMapItem>)geoMapItem;
-(GEOSearchCategory *)searchCategory;
-(NSData *)entryMetadata;
-(NSArray *)displayLines;
-(id)highlightsForLine:(unsigned long long)arg1;
-(NSData *)metadata;

@end
