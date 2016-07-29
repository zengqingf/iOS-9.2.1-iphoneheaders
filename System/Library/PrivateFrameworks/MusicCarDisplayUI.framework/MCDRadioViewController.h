/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:29 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicCarDisplayUI/MCD_OLD_TableViewController.h>
#import <libobjc.A.dylib/RURadioDataSourceDelegate.h>

@class RURadioDataSource, NSArray, NSString, MCDNoContentView, UIView, RadioRecentStationsController, NSIndexPath, UINavigationController, UIActivityIndicatorView, RadioStation;

@interface MCDRadioViewController : MCD_OLD_TableViewController <RURadioDataSourceDelegate> {

	RURadioDataSource* _dataSource;
	NSArray* _featuredStations;
	NSArray* _myStations;
	NSString* _featuredStationNamesBrief;
	MCDNoContentView* _placeholderView;
	UIView* _MCD_tableView;
	BOOL _loadingRadioStation;
	RadioRecentStationsController* _recentStationsController;
	NSIndexPath* _selectedIndexPath;
	UINavigationController* _nowPlayingNavigationController;
	UIActivityIndicatorView* _activityIndicator;
	RadioStation* _currentlyPlayingRadioStation;

}

@property (assign,nonatomic,__weak) RadioRecentStationsController * recentStationsController;              //@synthesize recentStationsController=_recentStationsController - In the implementation block
@property (nonatomic,retain) NSIndexPath * selectedIndexPath;                                              //@synthesize selectedIndexPath=_selectedIndexPath - In the implementation block
@property (nonatomic,retain) UINavigationController * nowPlayingNavigationController;                      //@synthesize nowPlayingNavigationController=_nowPlayingNavigationController - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * activityIndicator;                                  //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (assign,nonatomic) BOOL loadingRadioStation;                                                     //@synthesize loadingRadioStation=_loadingRadioStation - In the implementation block
@property (nonatomic,retain) RadioStation * currentlyPlayingRadioStation;                                  //@synthesize currentlyPlayingRadioStation=_currentlyPlayingRadioStation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(UIActivityIndicatorView *)activityIndicator;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(void)setSelectedIndexPath:(NSIndexPath *)arg1 ;
-(NSIndexPath *)selectedIndexPath;
-(void)radioDataSourceDidInvalidate:(id)arg1 ;
-(RadioRecentStationsController *)recentStationsController;
-(void)setRecentStationsController:(RadioRecentStationsController *)arg1 ;
-(void)_networkTypeDidChangeNotification:(id)arg1 ;
-(id)viewControllerForRowAtIndexPath:(id)arg1 ;
-(void)setNowPlayingNavigationController:(UINavigationController *)arg1 ;
-(void)didStartPlaying:(id)arg1 ;
-(UINavigationController *)nowPlayingNavigationController;
-(void)_updateViewForNetworkType:(long long)arg1 ;
-(void)_categorizeStations;
-(BOOL)loadingRadioStation;
-(id)_stationFromIndexPath:(id)arg1 ;
-(RadioStation *)currentlyPlayingRadioStation;
-(void)setCurrentlyPlayingRadioStation:(RadioStation *)arg1 ;
-(void)setLoadingRadioStation:(BOOL)arg1 ;
-(BOOL)_isNetworkTypeAllowed:(long long)arg1 ;
-(id)initWithPlayer:(id)arg1 serviceProvider:(id)arg2 ;
@end
