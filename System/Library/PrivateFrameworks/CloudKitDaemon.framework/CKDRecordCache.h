/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:00 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class CKSQLite, CKSQLitePool, CKDClientContext, NSObject;

@interface CKDRecordCache : NSObject {

	CKSQLite* _db;
	CKSQLitePool* _dbPool;
	CKDClientContext* _context;
	long long _scope;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) CKSQLite * db;                                   //@synthesize db=_db - In the implementation block
@property (nonatomic,retain) CKSQLitePool * dbPool;                           //@synthesize dbPool=_dbPool - In the implementation block
@property (nonatomic,retain) CKDClientContext * context;                      //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) long long scope;                                 //@synthesize scope=_scope - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
-(CKDClientContext *)context;
-(void)setScope:(long long)arg1 ;
-(long long)scope;
-(void)close;
-(void)setContext:(CKDClientContext *)arg1 ;
-(void)open;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(CKSQLite *)db;
-(CKSQLitePool *)dbPool;
-(void)setDb:(CKSQLite *)arg1 ;
-(BOOL)_cachedRecordKnownUserKeyData:(id)arg1 satisfiesRequiredKeys:(id)arg2 ;
-(id)_recordWithID:(id)arg1 requiredKeys:(id)arg2 ;
-(BOOL)_cachedRecordHasValidAssets:(id)arg1 forRequiredKeys:(id)arg2 ;
-(id)_trimRecord:(id)arg1 toRequiredKeys:(id)arg2 ;
-(void)addRecord:(id)arg1 knownUserKeys:(id)arg2 ;
-(id)initWithDatabase:(id)arg1 dbPool:(id)arg2 context:(id)arg3 scope:(long long)arg4 ;
-(void)releaseDatabase;
-(id)recordWithID:(id)arg1 requiredKeys:(id)arg2 ;
-(id)recordsWithIDs:(id)arg1 requiredKeys:(id)arg2 ;
-(id)etagForRecordID:(id)arg1 requiredKeys:(id)arg2 ;
-(void)deleteRecordWithID:(id)arg1 ;
-(void)clearAllRecords;
-(void)clearAllRecordsForZoneWithID:(id)arg1 ;
-(void)clearAssetAuthTokensForRecordWithID:(id)arg1 ;
-(void)scheduleRecordExpirationWithExpiryDate:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)setDbPool:(CKSQLitePool *)arg1 ;
@end

