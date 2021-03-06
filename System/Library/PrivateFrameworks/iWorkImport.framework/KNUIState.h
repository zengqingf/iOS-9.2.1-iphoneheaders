/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:29 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class TSKSelectionPath, KNMacUILayout, NSMutableDictionary, NSSet, KNSlideCollectionSelection;

@interface KNUIState : NSObject <NSCopying> {

	TSKSelectionPath* mSelectionPath;
	double mMobileCanvasViewScale;
	CGPoint mMobileCanvasOffset;
	double mDesktopCanvasViewScale;
	CGPoint mDesktopCanvasOffset;
	KNMacUILayout* mDocumentUILayout;
	BOOL mSlideViewFitsContentInWindow;
	double mLightTableZoomScale;
	BOOL mLightTableHidesSkippedSlides;
	CGPoint mDesktopMainWindowOrigin;
	CGSize mDesktopMainContentSize;
	double mDesktopNavigatorViewWidth;
	double mDesktopOutlineViewWidth;
	double mDesktopPresenterNotesViewHeight;
	NSMutableDictionary* mChartUIState;
	NSSet* mCollapsedSlideNodes;
	NSSet* mOutlineCollapsedSlideNodes;
	NSSet* mOutlineHasBodySlideNodes;
	BOOL mShowSlideGuides;
	BOOL mShowMasterGuides;
	BOOL mShowsComments;
	BOOL mShowsRuler;

}

@property (nonatomic,readonly) KNSlideCollectionSelection * slideTreeSelection; 
@property (nonatomic,retain) TSKSelectionPath * selectionPath; 
@property (assign,nonatomic) double canvasViewScale; 
@property (assign,nonatomic) CGPoint canvasOffset; 
@property (nonatomic,copy) KNMacUILayout * documentUILayout; 
@property (assign,nonatomic) BOOL slideViewFitsContentInWindow; 
@property (assign,nonatomic) double lightTableZoomScale; 
@property (assign,nonatomic) BOOL lightTableHidesSkippedSlides; 
@property (assign,nonatomic) CGPoint desktopMainWindowOrigin; 
@property (assign,nonatomic) CGSize desktopMainContentSize; 
@property (assign,nonatomic) double desktopNavigatorViewWidth; 
@property (assign,nonatomic) double desktopOutlineViewWidth; 
@property (assign,nonatomic) double desktopPresenterNotesHeight; 
@property (nonatomic,copy) NSSet * collapsedSlideNodes; 
@property (nonatomic,copy) NSSet * outlineCollapsedSlideNodes; 
@property (nonatomic,copy) NSSet * outlineHasBodySlideNodes; 
@property (assign,nonatomic) BOOL showSlideGuides; 
@property (assign,nonatomic) BOOL showMasterGuides; 
@property (assign,nonatomic) BOOL showsComments; 
@property (assign,nonatomic) BOOL showsRuler; 
-(void)saveToArchive:(UIStateArchive*)arg1 archiver:(id)arg2 context:(id)arg3 ;
-(void)loadFromArchive:(const UIStateArchive*)arg1 unarchiver:(id)arg2 context:(id)arg3 ;
-(id)UIStateForChart:(id)arg1 ;
-(void)setUIState:(id)arg1 forChart:(id)arg2 ;
-(TSKSelectionPath *)selectionPath;
-(void)setSelectionPath:(TSKSelectionPath *)arg1 ;
-(KNSlideCollectionSelection *)slideTreeSelection;
-(NSSet *)collapsedSlideNodes;
-(NSSet *)outlineCollapsedSlideNodes;
-(NSSet *)outlineHasBodySlideNodes;
-(void)setOutlineCollapsedSlideNodes:(NSSet *)arg1 ;
-(void)setOutlineHasBodySlideNodes:(NSSet *)arg1 ;
-(double)canvasViewScale;
-(CGPoint)canvasOffset;
-(KNMacUILayout *)documentUILayout;
-(BOOL)slideViewFitsContentInWindow;
-(double)lightTableZoomScale;
-(BOOL)lightTableHidesSkippedSlides;
-(CGPoint)desktopMainWindowOrigin;
-(CGSize)desktopMainContentSize;
-(double)desktopNavigatorViewWidth;
-(double)desktopOutlineViewWidth;
-(double)desktopPresenterNotesHeight;
-(BOOL)showSlideGuides;
-(BOOL)showMasterGuides;
-(BOOL)showsComments;
-(BOOL)showsRuler;
-(void)setSlideTreeSelection:(id)arg1 withDocumentRoot:(id)arg2 ;
-(void)setCanvasViewScale:(double)arg1 ;
-(void)setCanvasOffset:(CGPoint)arg1 ;
-(id)archivedUIStateInContext:(id)arg1 ;
-(void)updateOutlineStateFromSlideTree:(id)arg1 ;
-(void)setDocumentUILayout:(KNMacUILayout *)arg1 ;
-(void)setSlideViewFitsContentInWindow:(BOOL)arg1 ;
-(void)setLightTableZoomScale:(double)arg1 ;
-(void)setLightTableHidesSkippedSlides:(BOOL)arg1 ;
-(void)setDesktopMainWindowOrigin:(CGPoint)arg1 ;
-(void)setDesktopMainContentSize:(CGSize)arg1 ;
-(void)setDesktopNavigatorViewWidth:(double)arg1 ;
-(void)setDesktopOutlineViewWidth:(double)arg1 ;
-(void)setDesktopPresenterNotesHeight:(double)arg1 ;
-(void)setCollapsedSlideNodes:(NSSet *)arg1 ;
-(void)setShowMasterGuides:(BOOL)arg1 ;
-(void)setShowSlideGuides:(BOOL)arg1 ;
-(void)setShowsComments:(BOOL)arg1 ;
-(void)setShowsRuler:(BOOL)arg1 ;
-(void)dealloc;
-(id)init;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

