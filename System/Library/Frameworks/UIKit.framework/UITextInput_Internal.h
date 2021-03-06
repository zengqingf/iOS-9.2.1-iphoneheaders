/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:34 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UITextInput_Internal
@property (getter=_proxyTextInput,nonatomic,readonly) UIResponder*<UITextInput> __content; 
@property (nonatomic,readonly) UIView*<UITextInputPrivate> _textSelectingContainer; 
@optional
-(UIView*<UITextInputPrivate>)_textSelectingContainer;
-(CGRect*)_lastRectForRange:(id)arg1;
-(BOOL)_isInteractiveTextSelectionDisabled;
-(void)_setInternalGestureRecognizers;

@required
-(CGRect*)_selectionClipRect;
-(id)_proxyTextInput;
-(NSRange*)_selectedNSRange;
-(void)_expandSelectionToStartOfWordsBeforeCaretSelection:(int)arg1;
-(void)_extendCurrentSelection:(int)arg1;
-(void)_setCaretSelectionAtEndOfSelection;
-(id)_moveToEndOfWord:(BOOL)arg1 withHistory:(id)arg2;
-(id)_moveToEndOfLine:(BOOL)arg1 withHistory:(id)arg2;
-(id)_moveRight:(BOOL)arg1 withHistory:(id)arg2;
-(id)_moveToStartOfWord:(BOOL)arg1 withHistory:(id)arg2;
-(id)_moveToStartOfLine:(BOOL)arg1 withHistory:(id)arg2;
-(id)_moveLeft:(BOOL)arg1 withHistory:(id)arg2;
-(id)_moveToEndOfParagraph:(BOOL)arg1 withHistory:(id)arg2;
-(id)_moveToEndOfDocument:(BOOL)arg1 withHistory:(id)arg2;
-(id)_moveDown:(BOOL)arg1 withHistory:(id)arg2;
-(id)_moveToStartOfParagraph:(BOOL)arg1 withHistory:(id)arg2;
-(id)_moveToStartOfDocument:(BOOL)arg1 withHistory:(id)arg2;
-(id)_moveUp:(BOOL)arg1 withHistory:(id)arg2;
-(void)_deleteByWord;
-(void)_deleteToStartOfLine;
-(void)_deleteToEndOfLine;
-(void)_setMarkedText:(id)arg1 selectedRange:(NSRange)arg2;
-(void)_unmarkText;
-(void)_setGestureRecognizers;
-(unsigned)_characterBeforeCaretSelection;
-(unsigned)_characterInRelationToRangedSelection:(int)arg1;
-(void)_moveCurrentSelection:(int)arg1;
-(void)_expandSelectionToBackwardDeletionCluster;
-(void)_deleteBackwardAndNotify:(BOOL)arg1;
-(void)_deleteForwardAndNotify:(BOOL)arg1;
-(unsigned)_characterInRelationToCaretSelection:(int)arg1;
-(id)_wordContainingCaretSelection;
-(unsigned)_characterAfterCaretSelection;
-(id)_rangeOfEnclosingWord:(id)arg1;
-(id)_positionAtStartOfWords:(unsigned long long)arg1 beforePosition:(id)arg2;
-(id)_fullText;
-(id)_rangeOfText:(id)arg1 endingAtPosition:(id)arg2;
-(void)_replaceCurrentWordWithText:(id)arg1;
-(void)_selectAll;
-(BOOL)_selectionAtDocumentStart;
-(NSRange*)_nsrangeForTextRange:(id)arg1;
-(BOOL)_shouldPerformUICalloutBarButtonReplaceAction:(SEL)arg1 forText:(id)arg2 checkAutocorrection:(BOOL)arg3;
-(BOOL)_selectionAtDocumentEnd;
-(id)_positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3 withAffinityDownstream:(BOOL)arg4;
-(void)_scrollRectToVisible:(CGRect)arg1 animated:(BOOL)arg2;
-(long long)_selectionAffinity;
-(id)_positionWithinRange:(id)arg1 farthestInDirection:(long long)arg2;
-(id)_positionFromPosition:(id)arg1 pastTextUnit:(long long)arg2 inDirection:(long long)arg3;
-(id)_rangeSpanningTextUnit:(long long)arg1 andPosition:(id)arg2;
-(id)_rangeOfTextUnit:(long long)arg1 enclosingPosition:(id)arg2;
-(id)_fontForCaretSelection;
-(id)_textColorForCaretSelection;
-(id)_newPhraseBoundaryGestureRecognizer;
-(BOOL)_usesAsynchronousProtocol;
-(BOOL)_hasMarkedText;
-(id)_fullRange;
-(int)_indexForTextPosition:(id)arg1;
-(id)_clampedpositionFromPosition:(id)arg1 offset:(int)arg2;
-(void)_setSelectedTextRange:(id)arg1 withAffinityDownstream:(BOOL)arg2;
-(BOOL)_isEmptySelection;
-(void)_phraseBoundaryGesture:(id)arg1;
-(BOOL)_selectionAtWordStart;
-(BOOL)_hasMarkedTextOrRangedSelection;
-(void)_expandSelectionToStartOfWordBeforeCaretSelection;
-(id)_rangeOfLineEnclosingPosition:(id)arg1;
-(id)_rangeOfSentenceEnclosingPosition:(id)arg1;
-(id)_rangeOfParagraphEnclosingPosition:(id)arg1;
-(id)_findPleasingWordBoundaryFromPosition:(id)arg1;

@end

