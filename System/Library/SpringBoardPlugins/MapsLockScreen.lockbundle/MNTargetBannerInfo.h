/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:44 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/SpringBoardPlugins/MapsLockScreen.lockbundle/MapsLockScreen
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBUIBannerSource, SBUIBannerTarget;
@class NSTimer, MNBannerView, MNNavManeuverBannerItem, MNTrafficAlertBannerItem, MNBannerDismissal;

@interface MNTargetBannerInfo : NSObject {

	NSTimer* _bannerInterruptionTimer;
	id<SBUIBannerSource> _bannerInterruptionSource;
	BOOL _lastPickSkippedTrafficItem;
	id<SBUIBannerTarget> _target;
	MNBannerView* _displayedBanner;
	MNNavManeuverBannerItem* _nextManeuverBannerItem;
	MNTrafficAlertBannerItem* _nextTrafficAlertBannerItem;
	MNBannerDismissal* _lastDismissalOfManeuverBanner;
	MNBannerDismissal* _lastDismissalOfTrafficAlertBanner;

}

@property (nonatomic,readonly) id<SBUIBannerTarget> target;                                      //@synthesize target=_target - In the implementation block
@property (nonatomic,retain) MNBannerView * displayedBanner;                                     //@synthesize displayedBanner=_displayedBanner - In the implementation block
@property (nonatomic,retain) MNNavManeuverBannerItem * nextManeuverBannerItem;                   //@synthesize nextManeuverBannerItem=_nextManeuverBannerItem - In the implementation block
@property (nonatomic,retain) MNTrafficAlertBannerItem * nextTrafficAlertBannerItem;              //@synthesize nextTrafficAlertBannerItem=_nextTrafficAlertBannerItem - In the implementation block
@property (nonatomic,retain) MNBannerDismissal * lastDismissalOfManeuverBanner;                  //@synthesize lastDismissalOfManeuverBanner=_lastDismissalOfManeuverBanner - In the implementation block
@property (nonatomic,retain) MNBannerDismissal * lastDismissalOfTrafficAlertBanner;              //@synthesize lastDismissalOfTrafficAlertBanner=_lastDismissalOfTrafficAlertBanner - In the implementation block
@property (assign,nonatomic) BOOL lastPickSkippedTrafficItem;                                    //@synthesize lastPickSkippedTrafficItem=_lastPickSkippedTrafficItem - In the implementation block
-(void)setNextManeuverBannerItem:(MNNavManeuverBannerItem *)arg1 ;
-(void)clearDismissalForItem:(id)arg1 ;
-(MNTrafficAlertBannerItem *)nextTrafficAlertBannerItem;
-(void)setLastPickSkippedTrafficItem:(BOOL)arg1 ;
-(void)setDismissalReason:(int)arg1 forItem:(id)arg2 ;
-(void)bannerInterruptionTimerFired:(id)arg1 ;
-(void)enqueueBannerItem:(id)arg1 ;
-(id)peekNextBannerItem;
-(void)cancelForcedDismiss;
-(BOOL)lastPickSkippedTrafficItem;
-(MNNavManeuverBannerItem *)nextManeuverBannerItem;
-(void)scheduleForcedDismissForSource:(id)arg1 ;
-(void)setNextTrafficAlertBannerItem:(MNTrafficAlertBannerItem *)arg1 ;
-(void)setDisplayedBanner:(MNBannerView *)arg1 ;
-(MNBannerDismissal *)lastDismissalOfManeuverBanner;
-(id)dequeueNextBannerItem;
-(void)setLastDismissalOfTrafficAlertBanner:(MNBannerDismissal *)arg1 ;
-(void)setLastDismissalOfManeuverBanner:(MNBannerDismissal *)arg1 ;
-(MNBannerDismissal *)lastDismissalOfTrafficAlertBanner;
-(MNBannerView *)displayedBanner;
-(id<SBUIBannerTarget>)target;
-(id)initWithTarget:(id)arg1 ;
@end

