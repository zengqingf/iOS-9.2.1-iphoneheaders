/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:04 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TCCancelDelegate;
#import <OfficeImport/OfficeImport-Structs.h>
@class PDPresentation, ESDRoot, ESDContainer, NSMutableArray, OITSUNoCopyDictionary, PBOfficeArtReaderState, PDSlideBase, PBOutlineBulletDictionary, ESDObject, PBSlideState, NSMutableDictionary;

@interface PBPresentationReaderState : NSObject {

	PptBinaryReader* mPptBinaryReader;
	PDPresentation* mTgtPresentation;
	ESDRoot* mDocumentRoot;
	ESDContainer* mSrcSlideListHolder;
	ChVector<int>* mCurrentSlideTextBlockStartIndexVector;
	unsigned mSrcSlideId;
	NSMutableArray* mSlideIndexes;
	OITSUNoCopyDictionary* mSlideMasterToMasterStyles;
	CFDictionaryRef mHyperlinkMap;
	PBOfficeArtReaderState* mOfficeArtState;
	NSMutableArray* mFontEntities;
	PDSlideBase* mTgtSlide;
	BOOL mHasCharacterPropertyBulletIndex;
	unsigned mBulletIndex;
	PBOutlineBulletDictionary* mPlaceholderBulletStyles;
	PBOutlineBulletDictionary* mPlaceholderMacCharStyles;
	ESDObject* mCurrentBulletStyle;
	ESDObject* mCurrentMacCharStyle;
	ChVector<PBReaderMasterStyleInfo>* mSrcDocMasterStyleInfoVector;
	ChVector<PBReaderMasterStyleInfo>* mSrcCurrentMasterStyleInfoVector;
	PBSlideState* mSlideState;
	id<TCCancelDelegate> mCancel;
	BOOL mHasSlideNumberPlaceholder;
	NSMutableDictionary* mTargetShapeToSourceTextBoxContainerHolderMap;

}

@property (assign) ESDContainer * sourceSlideListHolder; 
@property (nonatomic,retain) id<TCCancelDelegate> cancelDelegate; 
@property (assign) BOOL hasSlideNumberPlaceholder; 
-(void)dealloc;
-(BOOL)isCancelled;
-(id)officeArtState;
-(PptBinaryReader*)reader;
-(void)setCancelDelegate:(id<TCCancelDelegate>)arg1 ;
-(id<TCCancelDelegate>)cancelDelegate;
-(void)resetSlideState;
-(id)slideState;
-(id)tgtSlide;
-(id)currentMacCharStyle;
-(BOOL)hasCharacterPropertyBulletIndex;
-(void)setBulletIndex:(unsigned)arg1 ;
-(id)fontEntityAtIndex:(unsigned long long)arg1 ;
-(id)documentRoot;
-(id)sourceTextBoxContainerHolderForTargetShape:(id)arg1 ;
-(void)setSourceTextBoxContainerHolder:(id)arg1 forTargetShape:(id)arg2 ;
-(void)setHasSlideNumberPlaceholder:(BOOL)arg1 ;
-(ChVector<int>*)currentSlideTextBlockStartIndexVector;
-(ESDContainer *)sourceSlideListHolder;
-(void)setCurrentTextType:(int)arg1 placeholderIndex:(unsigned)arg2 ;
-(id)tgtPresentation;
-(id)initWithReader:(PptBinaryReader*)arg1 tgtPresentation:(id)arg2 ;
-(void)setDocumentRoot:(id)arg1 ;
-(void)addFontEntity:(id)arg1 charSet:(int)arg2 type:(int)arg3 family:(int)arg4 ;
-(PBReaderMasterStyleInfo*)docSourceMasterStyleInfoOfType:(int)arg1 ;
-(id)masterStyles:(id)arg1 ;
-(void)setCurrentSourceMasterStyleInfoVector:(ChVector<PBReaderMasterStyleInfo>*)arg1 ;
-(PBReaderMasterStyleInfo*)currentSourceMasterStyleInfoOfType:(int)arg1 ;
-(void)setSourceSlideListHolder:(ESDContainer *)arg1 ;
-(void)setSourceSlideId:(unsigned)arg1 ;
-(void)setCurrentBulletStyle:(id)arg1 macCharStyle:(id)arg2 ;
-(unsigned long long)numberOfSlideIndexes;
-(void)addSlideIndex:(unsigned long long)arg1 ;
-(unsigned long long)getSlideIndexAt:(unsigned long long)arg1 ;
-(id)slideIndexesRef;
-(unsigned long long)fontEntityCount;
-(void)setTgtSlide:(id)arg1 ;
-(void)setHasCharacterPropertyBulletIndex:(BOOL)arg1 ;
-(unsigned)bulletIndex;
-(void)setPlaceholderBulletStyles:(id)arg1 ;
-(void)setPlaceholderMacCharStyles:(id)arg1 ;
-(id)currentBulletStyle;
-(void)setMasterStyles:(id)arg1 slideMaster:(id)arg2 ;
-(BOOL)hasCurrentSourceMasterStyleInfoVector;
-(id)hyperlinkInfoWithId:(unsigned)arg1 createIfAbsent:(BOOL)arg2 ;
-(BOOL)hasSlideNumberPlaceholder;
@end
