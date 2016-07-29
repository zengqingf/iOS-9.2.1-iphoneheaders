/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:06 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/MusicQueryPlaybackContext.h>
#import <libobjc.A.dylib/MusicGeniusMixQueueFeederDataSource.h>

@class NSMutableArray, MPMediaPlaylist, MPMediaItem, NSString;

@interface MusicGeniusMixPlaybackContext : MusicQueryPlaybackContext <MusicGeniusMixQueueFeederDataSource> {

	NSMutableArray* _indexedSubQueries;
	BOOL _finite;
	MPMediaPlaylist* _mixPlaylist;
	MPMediaItem* _requiredInitialMediaItem;

}

@property (nonatomic,readonly) MPMediaPlaylist * mixPlaylist;                     //@synthesize mixPlaylist=_mixPlaylist - In the implementation block
@property (nonatomic,retain) MPMediaItem * requiredInitialMediaItem;              //@synthesize requiredInitialMediaItem=_requiredInitialMediaItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)queueFeederClass;
-(void)dealloc;
-(id)query;
-(id)initWithGeniusMixPlaylist:(id)arg1 requiredInitialMediaItem:(id)arg2 error:(id*)arg3 ;
-(MPMediaPlaylist *)mixPlaylist;
-(unsigned long long)geniusMixQueueFeederMediaItemCount:(id)arg1 ;
-(id)geniusMixQueueFeeder:(id)arg1 queryForMediaItemAtIndex:(unsigned long long)arg2 ;
-(unsigned long long)geniusMixQueueFeeder:(id)arg1 indexOfMediaItem:(id)arg2 ;
-(id)geniusMixQueueFeeder:(id)arg1 mediaItemAtIndex:(unsigned long long)arg2 ;
-(MPMediaItem *)requiredInitialMediaItem;
-(void)setRequiredInitialMediaItem:(MPMediaItem *)arg1 ;
-(id)_queryForMediaItemAtIndex:(unsigned long long)arg1 ;
-(void)_enumerateItemsBySubQueryUsingBlock:(/*^block*/id)arg1 ;
-(unsigned long long)_indexOfSubQueryWithSubQueryIndex:(unsigned long long)arg1 searchOptions:(unsigned long long)arg2 ;
-(id)_generateNewItemsQuery:(id*)arg1 index:(unsigned long long)arg2 ;
@end
