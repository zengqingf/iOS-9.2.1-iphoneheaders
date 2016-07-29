/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:12 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/MarkupUI.framework/MarkupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MarkupUI/MarkupUI-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIPDFPageViewDelegate.h>
#import <libobjc.A.dylib/MUPDFViewPlaceholderDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol MUPDFViewDelegate;
@class NSMutableArray, UITapGestureRecognizer, NSObject, UIPDFDocument, MUPDFViewPlaceholder, UIColor, NSString, NSArray, NSData;

@interface MUPDFView : UIView <UIPDFPageViewDelegate, MUPDFViewPlaceholderDelegate, UIGestureRecognizerDelegate> {

	NSMutableArray* _backingLayerImageViews;
	CGPDFDocumentRef _cgPDFDocument;
	BOOL _delegateRespondsToDidScroll;
	UITapGestureRecognizer* _tapGestureRecognizer;
	BOOL _rotating;
	BOOL _zooming;
	double _documentScale;
	CGPoint _contentOffsetAtScrollStart;
	NSMutableArray* _pageViews;
	BOOL _readyForSnapshot;
	BOOL _hideActivityIndicatorForUnRenderedContent;
	BOOL _hidePageViewsUntilReadyToRender;
	NSObject*<MUPDFViewDelegate> _pdfDelegate;
	UIPDFDocument* _document;
	MUPDFViewPlaceholder* _pdfPlaceHolderView;
	double _initialZoomScale;
	UIColor* _backgroundColorForUnRenderedContent;
	long long _ignoreContentOffsetChanges;
	NSString* _documentPassword;
	NSArray* _pageRects;
	NSArray* _pageMinYs;
	CGRect _documentBounds;
	CGAffineTransform _documentTransform;

}

@property (assign,nonatomic) NSObject*<MUPDFViewDelegate> pdfDelegate;                      //@synthesize pdfDelegate=_pdfDelegate - In the implementation block
@property (assign,nonatomic) CGRect documentBounds;                                         //@synthesize documentBounds=_documentBounds - In the implementation block
@property (nonatomic,readonly) unsigned long long totalPages; 
@property (nonatomic,readonly) CGPDFDocumentRef cgPDFDocument; 
@property (nonatomic,retain) UIPDFDocument * document;                                      //@synthesize document=_document - In the implementation block
@property (nonatomic,readonly) NSData * documentData; 
@property (assign,nonatomic) BOOL readyForSnapshot;                                         //@synthesize readyForSnapshot=_readyForSnapshot - In the implementation block
@property (assign,nonatomic,__weak) MUPDFViewPlaceholder * pdfPlaceHolderView;              //@synthesize pdfPlaceHolderView=_pdfPlaceHolderView - In the implementation block
@property (assign,nonatomic) double initialZoomScale;                                       //@synthesize initialZoomScale=_initialZoomScale - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColorForUnRenderedContent;                 //@synthesize backgroundColorForUnRenderedContent=_backgroundColorForUnRenderedContent - In the implementation block
@property (assign,nonatomic) BOOL hideActivityIndicatorForUnRenderedContent;                //@synthesize hideActivityIndicatorForUnRenderedContent=_hideActivityIndicatorForUnRenderedContent - In the implementation block
@property (assign,nonatomic) BOOL hidePageViewsUntilReadyToRender;                          //@synthesize hidePageViewsUntilReadyToRender=_hidePageViewsUntilReadyToRender - In the implementation block
@property (assign,nonatomic) long long ignoreContentOffsetChanges;                          //@synthesize ignoreContentOffsetChanges=_ignoreContentOffsetChanges - In the implementation block
@property (assign,nonatomic) CGAffineTransform documentTransform;                           //@synthesize documentTransform=_documentTransform - In the implementation block
@property (nonatomic,retain) NSString * documentPassword;                                   //@synthesize documentPassword=_documentPassword - In the implementation block
@property (nonatomic,readonly) double documentScale;                                        //@synthesize documentScale=_documentScale - In the implementation block
@property (nonatomic,retain) NSArray * pageRects;                                           //@synthesize pageRects=_pageRects - In the implementation block
@property (nonatomic,retain) NSArray * pageMinYs;                                           //@synthesize pageMinYs=_pageMinYs - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)_didScroll;
-(void)clearSelection;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(CGRect)documentBounds;
-(unsigned long long)totalPages;
-(NSArray *)pageRects;
-(void)didReceiveMemoryWarning:(id)arg1 ;
-(void)willRotate:(id)arg1 ;
-(void)didRotate:(id)arg1 ;
-(UIPDFDocument *)document;
-(id)_selection;
-(void)setDocument:(UIPDFDocument *)arg1 ;
-(id)uiPDFDocument;
-(void)setBackgroundColorForUnRenderedContent:(UIColor *)arg1 ;
-(void)setPdfPlaceHolderView:(MUPDFViewPlaceholder *)arg1 ;
-(MUPDFViewPlaceholder *)pdfPlaceHolderView;
-(void)didCompleteLayout;
-(void)_tapGestureRecognized:(id)arg1 ;
-(void)willZoom:(id)arg1 ;
-(void)didZoom:(id)arg1 ;
-(void)willScroll:(id)arg1 ;
-(void)setPageRects:(NSArray *)arg1 ;
-(void)setPageMinYs:(NSArray *)arg1 ;
-(void)setDocumentPassword:(NSString *)arg1 ;
-(void)_removeBackgroundImageObserverIfNeeded:(id)arg1 ;
-(id)viewportView;
-(CGRect)_viewportBoundsInUIVIewCoordsWithView:(id)arg1 ;
-(void)setReadyForSnapshot:(BOOL)arg1 ;
-(id)viewAtIndex:(long long)arg1 ;
-(id)_installViewAtIndex:(long long)arg1 inFrame:(CGRect)arg2 ;
-(CGRect)_viewCachingBoundsInUIViewCoords;
-(void)_removePageViewsNotInViewCoordsRect:(CGRect)arg1 ;
-(void)ensureCorrectPagesAreInstalled:(BOOL)arg1 ;
-(CGRect)_viewportBoundsInUIViewCoords;
-(void)_recreateUIPDFDocument;
-(NSString *)documentPassword;
-(BOOL)_checkIfDocumentNeedsUnlock;
-(void)resetZoom:(id)arg1 ;
-(id)_pageWithSelection;
-(unsigned long long)_pageNumberForRect:(CGRect)arg1 ;
-(CGPDFDocumentRef)cgPDFDocument;
-(void)zoom:(id)arg1 to:(CGRect)arg2 atPoint:(CGPoint)arg3 kind:(int)arg4 ;
-(void)pageWasRendered:(id)arg1 ;
-(void)viewWillClose;
-(void)setIgnoreContentOffsetChanges:(long long)arg1 ;
-(void)setPdfDelegate:(NSObject*<MUPDFViewDelegate>)arg1 ;
-(BOOL)_hasPageRects;
-(NSData *)documentData;
-(id)_addPageAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)firstVisiblePageNumber;
-(void)prepareForSnapshot:(BOOL)arg1 ;
-(void)snapshotComplete;
-(BOOL)_tryToUnlockDocumentWithPassword:(id)arg1 ;
-(id)imageForContactRect:(CGRect)arg1 onPageInViewRect:(CGRect)arg2 destinationRect:(CGRect)arg3 ;
-(NSObject*<MUPDFViewDelegate>)pdfDelegate;
-(double)initialZoomScale;
-(void)setInitialZoomScale:(double)arg1 ;
-(CGAffineTransform)documentTransform;
-(void)setDocumentTransform:(CGAffineTransform)arg1 ;
-(double)documentScale;
-(long long)ignoreContentOffsetChanges;
-(BOOL)hidePageViewsUntilReadyToRender;
-(void)setHidePageViewsUntilReadyToRender:(BOOL)arg1 ;
-(UIColor *)backgroundColorForUnRenderedContent;
-(BOOL)hideActivityIndicatorForUnRenderedContent;
-(void)setHideActivityIndicatorForUnRenderedContent:(BOOL)arg1 ;
-(BOOL)readyForSnapshot;
-(NSArray *)pageMinYs;
-(void)_addSubViewsInViewCoordsBounds:(CGRect)arg1 ;
-(id)initWithMUPDFViewPlaceholder:(id)arg1 ;
-(void)setDocumentBounds:(CGRect)arg1 ;
@end
