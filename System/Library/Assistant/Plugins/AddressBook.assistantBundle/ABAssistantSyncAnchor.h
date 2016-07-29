/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:28 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Assistant/Plugins/AddressBook.assistantBundle/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface ABAssistantSyncAnchor : NSObject {

	int _sequenceNumber;
	int _recordID;

}

@property (nonatomic,readonly) int sequenceNumber; 
@property (nonatomic,readonly) int recordID; 
@property (nonatomic,readonly) NSString * stringValue; 
@property (nonatomic,readonly) BOOL shouldResetSync; 
@property (nonatomic,readonly) BOOL shouldFullSync; 
@property (nonatomic,readonly) BOOL shouldResumePreviousFullSync; 
@property (nonatomic,readonly) BOOL shouldDeleteSyncedRecords; 
+(id)anchorWithString:(id)arg1 forAddressBook:(void*)arg2 ;
+(id)stringValueForFullSyncWithRecordID:(int)arg1 ;
+(id)stringValueWithSequenceNumber:(int)arg1 recordID:(int)arg2 ;
-(BOOL)shouldDeleteSyncedRecords;
-(BOOL)shouldResumePreviousFullSync;
-(BOOL)isOlderThanAnchor:(id)arg1 ;
-(id)initWithSequenceNumber:(int)arg1 recordID:(int)arg2 ;
-(BOOL)shouldResetSync;
-(BOOL)shouldFullSync;
-(id)init;
-(id)description;
-(NSString *)stringValue;
-(int)sequenceNumber;
-(int)recordID;
-(void)resetSync;
@end
