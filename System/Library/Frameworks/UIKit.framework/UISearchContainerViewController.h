/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:53 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class UISearchController;

@interface UISearchContainerViewController : UIViewController {

	UISearchController* _searchController;

}

@property (nonatomic,retain) UISearchController * searchController;              //@synthesize searchController=_searchController - In the implementation block
-(void)didMoveToParentViewController:(id)arg1 ;
-(BOOL)_transitionsChildViewControllers;
-(void)_prepareForContainerTransition:(id)arg1 ;
-(UISearchController *)searchController;
-(void)_presentSearchControllerIfNecessary;
-(id)initWithSearchController:(id)arg1 ;
-(void)setSearchController:(UISearchController *)arg1 ;
@end

