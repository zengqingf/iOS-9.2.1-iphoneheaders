/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:11 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
@class _DECAsset;

@interface _ATXBundleIdSet : NSObject {

	CFBurstTrieRef _trie;
	_DECAsset* _asset;

}
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(id)initWithAsset:(id)arg1 ;
-(BOOL)containsBundleId:(id)arg1 ;
-(CFBurstTrieRef)trie;
@end
