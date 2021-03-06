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
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <Restaurants/SiriRestaurantsLogoButtonDelegate.h>

@class SARestaurantRestaurant, SALocalSearchReviewList, SiriRestaurantsParsedOperationHours, UISegmentedControl, NSMutableArray, SiriRestaurantsLogoButton, SiriUIContentCollectionViewCell, SiriUIContentLabel, NSString;

@interface SiriRestaurantsDetailViewController : SiriUISnippetViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, SiriRestaurantsLogoButtonDelegate> {

	SARestaurantRestaurant* _restaurant;
	SALocalSearchReviewList* _reviewList;
	SiriRestaurantsParsedOperationHours* _opHoursInfo;
	UISegmentedControl* _timesControl;
	NSMutableArray* _reviewProviderLogoButtons;
	SiriRestaurantsLogoButton* _reservationLogoButton;
	SiriUIContentCollectionViewCell* _reviewCell;
	SiriUIContentLabel* _addressLabel;
	SiriUIContentLabel* _distanceLabel;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_handleMapTapGesture:(id)arg1 ;
-(void)_configureURLCell:(id)arg1 forItem:(long long)arg2 ;
-(void)_configureReviewsCell:(id)arg1 forItem:(long long)arg2 ;
-(void)_configurePhoneCell:(id)arg1 forItem:(long long)arg2 ;
-(double)_minMapHeight;
-(id)_distanceLabel;
-(void)_enumerateCellTypesWithBlock:(/*^block*/id)arg1 ;
-(BOOL)_sectionIsValidCellType:(long long)arg1 ;
-(void)_selectURLCell;
-(void)_selectMapCell;
-(void)_updateReviewProviderButtons:(id)arg1 ;
-(void)_updateReservationProviderButton:(id)arg1 ;
-(void)_reviewButtonPressed:(id)arg1 ;
-(void)_reservationButtonPressed:(id)arg1 ;
-(void)_selectReservationWithTimesCell;
-(void)_configureDescriptionCell:(id)arg1 forItem:(long long)arg2 ;
-(void)logoButtonDidUpdateLogo:(id)arg1 ;
-(void)_updateWithRestaurant:(id)arg1 ;
-(id)initWithRestaurant:(id)arg1 ;
-(void)_configureAddressLabelWithDisplayTextIfNecessary:(id)arg1 ;
-(void)_configureOffersCell:(id)arg1 forItem:(long long)arg2 ;
-(void)_configureOpenHoursCell:(id)arg1 forItem:(long long)arg2 ;
-(void)_configureReservationWithTimesCell:(id)arg1 forItem:(long long)arg2 ;
-(void)_configureReservationCell:(id)arg1 forItem:(long long)arg2 ;
-(void)_configureAddressCell:(id)arg1 forItem:(long long)arg2 ;
-(void)_configureMapCell:(id)arg1 forItem:(long long)arg2 ;
-(void)_selectDescriptionCell;
-(void)_selectOfferCell;
-(void)_selectReviewsCellForItem:(long long)arg1 ;
-(void)_selectReservationCellForItem:(unsigned long long)arg1 ;
-(void)_selectPhoneCell;
-(void)_configureGenericReservationCell:(id)arg1 ;
-(CGSize)_sizeForCellOfType:(long long)arg1 forWidth:(double)arg2 ;
-(BOOL)_indexPath:(id)arg1 isLastCellInCollectionView:(id)arg2 ;
-(id)_addressLabel;
-(unsigned long long)_numberOfCellsForType:(long long)arg1 ;
-(id)_reuseIdentifierForCellOfType:(long long)arg1 ;
-(void)_configureCell:(id)arg1 forType:(long long)arg2 item:(long long)arg3 ;
-(BOOL)_shouldSelectCellForType:(long long)arg1 ;
-(void)_selectCellOfType:(long long)arg1 item:(long long)arg2 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(id)_collectionView;
-(void)loadView;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(double)desiredHeightForWidth:(double)arg1 ;
-(BOOL)isMemoryIntensive;
@end

