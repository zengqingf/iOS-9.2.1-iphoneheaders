/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:04 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSURL, NSObject, NSMutableDictionary;

@interface TSPDocumentResourceCache : NSObject {

	NSURL* _cacheURL;
	NSObject*<OS_dispatch_queue> _accessQueue;
	NSMutableDictionary* _entries;
	long long _maxCacheSizeInBytes;

}

@property (assign,nonatomic) long long maxCacheSizeInBytes;              //@synthesize maxCacheSizeInBytes=_maxCacheSizeInBytes - In the implementation block
+(id)defaultCacheURL;
+(id)sharedCache;
-(BOOL)cacheDocumentResourceDigestString:(id)arg1 extension:(id)arg2 sourceURL:(id)arg3 fileSize:(long long)arg4 wasDownloaded:(BOOL)arg5 ;
-(id)initWithCacheURL:(id)arg1 ;
-(void)reloadEntries;
-(id)entryForDigestString:(id)arg1 ;
-(void)shrinkCacheWithMaxCacheSizeInBytes:(long long)arg1 ;
-(void)enumerateEntriesFromCacheURLWithHandler:(/*^block*/id)arg1 ;
-(id)URLForDocumentResourceDigestString:(id)arg1 ;
-(BOOL)beginDocumentResourceAccessForDigestString:(id)arg1 ;
-(void)endDocumentResourceAccessForDigestString:(id)arg1 ;
-(void)shrinkCache;
-(long long)maxCacheSizeInBytes;
-(void)setMaxCacheSizeInBytes:(long long)arg1 ;
-(id)init;
-(void)clearCache;
@end
