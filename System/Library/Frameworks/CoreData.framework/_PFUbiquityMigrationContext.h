/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:53 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PFUbiquityTransactionLog, PFUbiquityStoreSaveSnapshot;

@interface _PFUbiquityMigrationContext : NSObject {

	PFUbiquityTransactionLog* _transactionLog;
	PFUbiquityStoreSaveSnapshot* _sourceStoreSaveSnapshot;
	PFUbiquityStoreSaveSnapshot* _destinationStoreSaveSnapshot;

}

@property (nonatomic,retain) PFUbiquityTransactionLog * transactionLog;                               //@synthesize transactionLog=_transactionLog - In the implementation block
@property (nonatomic,retain) PFUbiquityStoreSaveSnapshot * sourceStoreSaveSnapshot;                   //@synthesize sourceStoreSaveSnapshot=_sourceStoreSaveSnapshot - In the implementation block
@property (nonatomic,retain) PFUbiquityStoreSaveSnapshot * destinationStoreSaveSnapshot;              //@synthesize destinationStoreSaveSnapshot=_destinationStoreSaveSnapshot - In the implementation block
-(PFUbiquityTransactionLog *)transactionLog;
-(void)setTransactionLog:(PFUbiquityTransactionLog *)arg1 ;
-(void)setSourceStoreSaveSnapshot:(PFUbiquityStoreSaveSnapshot *)arg1 ;
-(void)setDestinationStoreSaveSnapshot:(PFUbiquityStoreSaveSnapshot *)arg1 ;
-(PFUbiquityStoreSaveSnapshot *)destinationStoreSaveSnapshot;
-(id)sourceGlobalObjectIDFromCompressedID:(id)arg1 ;
-(PFUbiquityStoreSaveSnapshot *)sourceStoreSaveSnapshot;
-(void)dealloc;
@end

