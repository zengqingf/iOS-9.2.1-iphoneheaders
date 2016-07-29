/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:04 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PHAsset, NSString;

@interface PHAssetInternalProperties : NSObject {

	short _visibilityState;
	PHAsset* _asset;
	double _sortToken;
	NSString* _avalancheUUID;

}

@property (nonatomic,__weak,readonly) PHAsset * asset;                //@synthesize asset=_asset - In the implementation block
@property (nonatomic,readonly) double sortToken;                      //@synthesize sortToken=_sortToken - In the implementation block
@property (nonatomic,readonly) NSString * avalancheUUID;              //@synthesize avalancheUUID=_avalancheUUID - In the implementation block
@property (nonatomic,readonly) short visibilityState;                 //@synthesize visibilityState=_visibilityState - In the implementation block
-(PHAsset *)asset;
-(NSString *)avalancheUUID;
-(double)sortToken;
-(short)visibilityState;
-(id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 ;
@end
