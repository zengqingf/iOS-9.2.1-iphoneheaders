/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:45 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notes/ICBaseSearchIndexerDataSource.h>

@interface ICModernSearchIndexerDataSource : ICBaseSearchIndexerDataSource
-(id)persistentStoreCoordinator;
-(id)dataSourceIdentifier;
-(id)searchableItemsWithIdentifiers:(id)arg1 ;
-(id)allSearchableItems;
-(id)objectForSearchableItemIdentifier:(id)arg1 context:(id)arg2 ;
-(id)newManagedObjectContext;
-(void)contextWillSave:(id)arg1 ;
@end
