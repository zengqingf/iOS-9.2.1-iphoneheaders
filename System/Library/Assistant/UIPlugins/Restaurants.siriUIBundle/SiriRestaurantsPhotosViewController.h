/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:39 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Assistant/UIPlugins/Restaurants.siriUIBundle/Restaurants
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Restaurants/Restaurants-Structs.h>
#import <SiriUI/SiriUISnippetViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>

@class SARestaurantRestaurant, SALocalSearchPhotoList, SiriRestaurantsLogoButton, NSString, UICollectionView;

@interface SiriRestaurantsPhotosViewController : SiriUISnippetViewController <UICollectionViewDataSource, UICollectionViewDelegate> {

	SARestaurantRestaurant* _restaurant;
	SALocalSearchPhotoList* _photoList;
	BOOL _providerIdIsYelp;
	SiriRestaurantsLogoButton* _moreOnLogo;
	NSString* _providerName;

}

@property (nonatomic,retain) UICollectionView * view; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGSize)_moreOnCellSizeWithWidth:(double)arg1 ;
-(void)_updateWithRestaurant:(id)arg1 ;
-(void)_updateMoreOnLogo:(id)arg1 placeData:(id)arg2 ;
-(id)initWithRestaurant:(id)arg1 ;
-(void)_logoButtonPressed:(id)arg1 ;
-(double)_interphotoSpacing;
-(id)_photoLayoutForExpectedWidth;
-(void)_configurePhotoCell:(id)arg1 item:(unsigned long long)arg2 ;
-(void)_configureMoreOnCell:(id)arg1 ;
-(void)_selectPhotoAtIndex:(unsigned long long)arg1 ;
-(void)_enumerateSectionsWithBlock:(/*^block*/id)arg1 ;
-(BOOL)_sectionIsValid:(long long)arg1 ;
-(unsigned long long)_numberOfCellsForType:(long long)arg1 ;
-(id)_reuseIdentifierForCellOfType:(long long)arg1 ;
-(void)_configureCell:(id)arg1 forType:(long long)arg2 item:(long long)arg3 ;
-(BOOL)_shouldSelectCellForType:(long long)arg1 ;
-(void)_selectCellOfType:(long long)arg1 item:(long long)arg2 ;
-(void)_addPhotosButtonTapped:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(void)loadView;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(double)desiredHeightForWidth:(double)arg1 ;
-(Class)transparentFooterViewClass;
-(void)configureReusableTransparentFooterView:(id)arg1 ;
-(double)desiredHeightForTransparentFooterView;
@end

