/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:51 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSStoreMapping.h>

@class NSString, NSManagedObjectModel, NSKnownKeysDictionary, NSMutableArray;

@interface NSSQLModel : NSStoreMapping {

	NSString* _configuration;
	NSManagedObjectModel* _mom;
	NSKnownKeysDictionary* _entitiesByName;
	NSMutableArray* _entities;
	id* _entityDescriptionToSQLMap;
	unsigned long long _brokenHashVersion;
	BOOL _retainLeopardStyleDictionaries;
	BOOL _modelHasPrecomputedKeyOrder;
	BOOL _hasVirtualToOnes;

}
-(id)configurationName;
-(id)initWithManagedObjectModel:(id)arg1 configurationName:(id)arg2 retainHashHack:(BOOL)arg3 ;
-(id)entityNamed:(id)arg1 ;
-(unsigned long long)entityIDForName:(id)arg1 ;
-(id)initWithManagedObjectModel:(id)arg1 configurationName:(id)arg2 brokenHashVersion:(unsigned long long)arg3 ;
-(id)entityForID:(unsigned long long)arg1 ;
-(BOOL)_modelHasPrecomputedKeyOrder;
-(void)_recordHasVirtualToOnes;
-(BOOL)_useLeopardStyleHashing;
-(BOOL)_useSnowLeopardStyleHashing;
-(id)_precomputedKeyOrderForEntity:(id)arg1 ;
-(void)_addIndexedEntity:(id)arg1 ;
-(BOOL)_generateModel:(id)arg1 error:(id*)arg2 ;
-(id)initWithManagedObjectModel:(id)arg1 configurationName:(id)arg2 retainHashHack:(BOOL)arg3 brokenHashVersion:(unsigned long long)arg4 ;
-(id)_entityMapping;
-(id)initWithManagedObjectModel:(id)arg1 configurationName:(id)arg2 ;
-(id)_sqlEntityWithRenamingIdentifier:(id)arg1 ;
-(BOOL)_retainHashHack;
-(void)dealloc;
-(id)managedObjectModel;
-(id)entitiesByName;
-(id)entities;
-(void)finalize;
@end
