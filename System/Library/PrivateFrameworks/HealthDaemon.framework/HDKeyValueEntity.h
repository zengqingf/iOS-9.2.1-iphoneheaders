/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:37 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDHealthEntity.h>

@interface HDKeyValueEntity : HDHealthEntity
+(id)retrieveDatabaseIdentifierFromDatabase:(id)arg1 error:(id*)arg2 ;
+(id)generateNewDatabaseIdentifier;
+(BOOL)persistDatabaseIdentifier:(id)arg1 database:(id)arg2 error:(id*)arg3 ;
+(BOOL)persistDatabaseIdentifier:(id)arg1 healthDaemon:(id)arg2 error:(id*)arg3 ;
+(id)retrieveDatabaseIdentifierFromHealthDaemon:(id)arg1 error:(id*)arg2 ;
+(BOOL)setOkemoZursObjectAnchor:(long long)arg1 database:(id)arg2 error:(id*)arg3 ;
+(id)okemoZursObjectAnchorWithHealthDaemon:(id)arg1 error:(id*)arg2 ;
+(id)databaseTable;
+(id)columnsDefinition;
+(id)propertyForSyncProvenance;
+(id)_predicateForProvenance:(id)arg1 ;
+(id)uniquedColumns;
+(id)allValuesForDomain:(id)arg1 category:(long long)arg2 healthDaemon:(id)arg3 error:(id*)arg4 ;
+(BOOL)setString:(id)arg1 forKey:(id)arg2 domain:(id)arg3 category:(long long)arg4 healthDaemon:(id)arg5 error:(id*)arg6 ;
+(long long)_deviceLocalCategory;
+(BOOL)setData:(id)arg1 forKey:(id)arg2 domain:(id)arg3 category:(long long)arg4 healthDaemon:(id)arg5 error:(id*)arg6 ;
+(id)dataForKey:(id)arg1 domain:(id)arg2 category:(long long)arg3 healthDaemon:(id)arg4 entity:(id*)arg5 error:(id*)arg6 ;
+(BOOL)_setRawKeysAndValues:(id)arg1 domain:(id)arg2 category:(long long)arg3 database:(id)arg4 error:(id*)arg5 ;
+(id)_rawValuesForKeys:(id)arg1 domain:(id)arg2 category:(long long)arg3 database:(id)arg4 error:(id*)arg5 ;
+(id)numberForKey:(id)arg1 domain:(id)arg2 category:(long long)arg3 healthDaemon:(id)arg4 entity:(id*)arg5 error:(id*)arg6 ;
+(Class)_entityClassForKeyValueCategory:(long long)arg1 ;
+(BOOL)_enumerateMergedKeyValueEntitiesInCategory:(long long)arg1 withPredicate:(id)arg2 healthDatabase:(id)arg3 error:(id*)arg4 usingBlock:(/*^block*/id)arg5 ;
+(id)dateForKey:(id)arg1 domain:(id)arg2 category:(long long)arg3 healthDaemon:(id)arg4 entity:(id*)arg5 error:(id*)arg6 ;
+(BOOL)setDate:(id)arg1 forKey:(id)arg2 domain:(id)arg3 category:(long long)arg4 healthDaemon:(id)arg5 error:(id*)arg6 ;
+(id)quantityForKey:(id)arg1 unit:(id)arg2 domain:(id)arg3 category:(long long)arg4 healthDaemon:(id)arg5 entity:(id*)arg6 error:(id*)arg7 ;
+(id)modificationDatesForKeys:(id)arg1 domain:(id)arg2 category:(long long)arg3 healthDaemon:(id)arg4 error:(id*)arg5 ;
+(BOOL)setNumber:(id)arg1 forKey:(id)arg2 domain:(id)arg3 category:(long long)arg4 healthDaemon:(id)arg5 error:(id*)arg6 ;
+(BOOL)setQuantity:(id)arg1 unit:(id)arg2 forKey:(id)arg3 domain:(id)arg4 category:(long long)arg5 healthDaemon:(id)arg6 error:(id*)arg7 ;
+(BOOL)setValuesWithDictionary:(id)arg1 domain:(id)arg2 category:(long long)arg3 healthDaemon:(id)arg4 error:(id*)arg5 ;
+(id)_rawValueForKey:(id)arg1 domain:(id)arg2 category:(long long)arg3 healthDaemon:(id)arg4 entity:(id*)arg5 error:(id*)arg6 ;
+(id)_rawValuesForKeys:(id)arg1 domain:(id)arg2 category:(long long)arg3 healthDaemon:(id)arg4 error:(id*)arg5 ;
+(id)_predicateForDomain:(id)arg1 ;
+(id)_valuesForKeys:(id)arg1 domain:(id)arg2 category:(long long)arg3 healthDaemon:(id)arg4 error:(id*)arg5 handler:(/*^block*/id)arg6 ;
+(BOOL)_setRawKeysAndValues:(id)arg1 domain:(id)arg2 category:(long long)arg3 healthDaemon:(id)arg4 error:(id*)arg5 ;
+(id)_predicateForKeys:(id)arg1 ;
+(BOOL)_readRawValuesInCategory:(long long)arg1 withPredicate:(id)arg2 withDatabase:(id)arg3 error:(id*)arg4 usingBlock:(/*^block*/id)arg5 ;
+(id)_predicateForCategory:(id)arg1 ;
+(BOOL)_insertKeysAndValues:(id)arg1 modificationDate:(id)arg2 domain:(id)arg3 category:(id)arg4 provenance:(id)arg5 healthDaemon:(id)arg6 error:(id*)arg7 ;
+(BOOL)_insertKeysAndValues:(id)arg1 modificationDate:(id)arg2 domain:(id)arg3 category:(id)arg4 provenance:(id)arg5 database:(id)arg6 error:(id*)arg7 ;
+(BOOL)_insertValues:(id)arg1 forKeys:(id)arg2 modificationDates:(id)arg3 domain:(id)arg4 category:(id)arg5 provenance:(id)arg6 healthDaemon:(id)arg7 error:(id*)arg8 ;
+(BOOL)_doInsertValues:(id)arg1 forKeys:(id)arg2 modificationDates:(id)arg3 domain:(id)arg4 category:(id)arg5 provenance:(id)arg6 database:(id)arg7 error:(id*)arg8 ;
+(id)_predicateForKey:(id)arg1 ;
+(id)_propertyValuesForValue:(id)arg1 key:(id)arg2 domain:(id)arg3 category:(id)arg4 provenance:(id)arg5 modificationDate:(id)arg6 ;
+(id)stringForKey:(id)arg1 domain:(id)arg2 category:(long long)arg3 healthDaemon:(id)arg4 entity:(id*)arg5 error:(id*)arg6 ;
+(id)valuesForKeys:(id)arg1 domain:(id)arg2 category:(long long)arg3 healthDaemon:(id)arg4 error:(id*)arg5 ;
+(BOOL)_insertCodableCategoryDomainDictionary:(id)arg1 provenance:(id)arg2 healthDaemon:(id)arg3 error:(id*)arg4 ;
+(id)_propertySettersForCodable;
+(id)_predicateForKey:(id)arg1 domain:(id)arg2 category:(id)arg3 provenance:(id)arg4 ;
+(BOOL)_validateEntityClassForCategory:(long long)arg1 ;
@end
