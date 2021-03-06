/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:45 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ICSearchIndexable <NSObject>
@optional
-(id)generateSearchIndexStringsOperation;
-(BOOL)ignoreInSearchIndexer;
-(void)releaseMemoryForIndexing;

@required
-(id)identifier;
-(id)modificationDate;
-(id)managedObjectContext;
-(id)objectID;
-(id)objectIdentifier;
-(long long)visibilityTestingType;
-(id)searchIndexableTitleUsingContentTextIfNecessary:(id)arg1;
-(unsigned long long)searchResultsSection;
-(BOOL)searchResultCanBeDeletedFromNoteContext;
-(BOOL)isHiddenFromSearch;
-(id)searchIndexStringsOutHasAdditionalStrings:(BOOL*)arg1;
-(BOOL)shouldUpdateIndexForChangedValues:(id)arg1;
-(id)searchableItemIdentifier;
-(id)searchDomainIdentifier;
-(id)searchableItemAttributeSet;

@end

