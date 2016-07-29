/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:32 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TPPageIndexPath, TSWPStorage, TPSection;

@interface TPPageLayoutState : NSObject {

	TPPageIndexPath* _pageIndexPath;
	unsigned long long _documentPageIndex;
	TSWPStorage* _bodyStorage;
	void* _bodyLayoutState;
	unsigned long long _bodyCharIndex;
	unsigned long long _footnoteIndex;
	BOOL _doingLayout;
	BOOL _onLastSection;
	unsigned long long _lastLaidOutSectionIndex;

}

@property (nonatomic,readonly) TPPageIndexPath * pageIndexPath;                              //@synthesize pageIndexPath=_pageIndexPath - In the implementation block
@property (nonatomic,readonly) unsigned long long sectionIndex; 
@property (nonatomic,readonly) unsigned long long pageIndex; 
@property (nonatomic,readonly) unsigned long long documentPageIndex;                         //@synthesize documentPageIndex=_documentPageIndex - In the implementation block
@property (nonatomic,readonly) unsigned long long lastLaidOutDocumentPageIndex; 
@property (nonatomic,readonly) unsigned long long lastLaidOutSectionIndex;                   //@synthesize lastLaidOutSectionIndex=_lastLaidOutSectionIndex - In the implementation block
@property (assign,nonatomic) void* bodyLayoutState;                                          //@synthesize bodyLayoutState=_bodyLayoutState - In the implementation block
@property (assign,nonatomic) unsigned long long bodyCharIndex;                               //@synthesize bodyCharIndex=_bodyCharIndex - In the implementation block
@property (assign,nonatomic) unsigned long long footnoteIndex;                               //@synthesize footnoteIndex=_footnoteIndex - In the implementation block
@property (assign,nonatomic) BOOL doingLayout;                                               //@synthesize doingLayout=_doingLayout - In the implementation block
@property (nonatomic,readonly) TPSection * section; 
@property (nonatomic,readonly) NSRange sectionCharRange; 
@property (nonatomic,readonly) BOOL onLastSection; 
@property (nonatomic,readonly) BOOL isLayoutComplete; 
-(BOOL)isLayoutComplete;
-(id)initWithBodyStorage:(id)arg1 ;
-(unsigned long long)documentPageIndex;
-(BOOL)isLayoutCompleteThroughDocumentPageIndex:(unsigned long long)arg1 ;
-(BOOL)isLayoutCompleteUpToDocumentPageIndex:(unsigned long long)arg1 ;
-(BOOL)doingLayout;
-(void)setBodyCharIndex:(unsigned long long)arg1 ;
-(void)setFootnoteIndex:(unsigned long long)arg1 ;
-(void)setDocumentPageIndex:(unsigned long long)arg1 ;
-(unsigned long long)lastLaidOutDocumentPageIndex;
-(void)restartLayoutFromPageIndexPath:(id)arg1 documentPageIndex:(unsigned long long)arg2 ;
-(void*)bodyLayoutState;
-(void)setBodyLayoutState:(void*)arg1 ;
-(void)backUpPageIndex;
-(unsigned long long)bodyCharIndex;
-(void)setDoingLayout:(BOOL)arg1 ;
-(void)advancePageIndex;
-(TPPageIndexPath *)pageIndexPath;
-(unsigned long long)footnoteIndex;
-(NSRange)sectionCharRange;
-(BOOL)onLastSection;
-(void)advanceSectionIndex;
-(unsigned long long)lastLaidOutSectionIndex;
-(void)restartLayoutFromFirstPage;
-(void)dealloc;
-(id)init;
-(TPSection *)section;
-(unsigned long long)pageIndex;
-(void)setPageIndex:(unsigned long long)arg1 ;
-(void)setSectionIndex:(unsigned long long)arg1 ;
-(unsigned long long)sectionIndex;
@end
