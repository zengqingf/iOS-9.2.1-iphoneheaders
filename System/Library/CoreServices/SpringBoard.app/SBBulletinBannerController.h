/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:55 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BBObserverDelegate.h>
#import <SpringBoard/SBUIBannerSource.h>
#import <SpringBoard/SBUIBannerTargetManagerObserver.h>
#import <SpringBoard/SBVolumePressBandit.h>

@protocol SBUIBannerTarget;
@class NSMutableArray, BBObserver, NSMutableSet, NSMutableDictionary, NSString;

@interface SBBulletinBannerController : NSObject <BBObserverDelegate, SBUIBannerSource, SBUIBannerTargetManagerObserver, SBVolumePressBandit> {

	NSMutableArray* _bulletinQueue;
	BBObserver* _observer;
	NSMutableSet* _sectionIDsToPend;
	BOOL _quietModeEnabled;
	id<SBUIBannerTarget> _bannerTarget;
	NSMutableDictionary* _bulletinIdentifierToBannerContextCache;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_sharedInstanceCreateIfNecessary:(BOOL)arg1 ;
+(id)sharedInstance;
+(id)sharedInstanceIfExists;
-(void)handleVolumeIncrease;
-(void)handleVolumeDecrease;
-(void)modallyPresentBannerForBulletin:(id)arg1 action:(id)arg2 ;
-(void)_removeBulletin:(id)arg1 ;
-(void)_reloadVolumePressBanditPreference;
-(void)removeAllCachedBanners;
-(void)cacheBannerForBulletin:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeCachedBannerForBulletinID:(id)arg1 ;
-(id)newBannerViewForContext:(id)arg1 ;
-(id)_bannerContextForBulletin:(id)arg1 ;
-(void)_showTestBanner:(BOOL)arg1 ;
-(unsigned long long)_indexOfQueuedBulletinID:(id)arg1 ;
-(void)_removeNextBulletinIfNecessary;
-(void)_syncLockScreenDismissalsForSeedBulletin:(id)arg1 additionalBulletins:(id)arg2 ;
-(BOOL)_replaceBulletin:(id)arg1 ;
-(void)_queueBulletin:(id)arg1 ;
-(void)_dismissWithdrawnBannerIfNecessaryFromBulletinIDs:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(unsigned long long)arg3 playLightsAndSirens:(BOOL)arg4 withReply:(/*^block*/id)arg5 ;
-(void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(unsigned long long)arg3 ;
-(void)observer:(id)arg1 modifyBulletin:(id)arg2 ;
-(void)observer:(id)arg1 removeBulletin:(id)arg2 ;
-(void)observer:(id)arg1 updateSectionInfo:(id)arg2 ;
-(BOOL)observerShouldFetchAttachmentImageBeforeBulletinDelivery:(id)arg1 ;
-(id)observer:(id)arg1 thumbnailSizeConstraintsForAttachmentType:(long long)arg2 ;
-(id)observer:(id)arg1 composedAttachmentImageForType:(long long)arg2 thumbnailData:(id)arg3 key:(id)arg4 ;
-(void)observer:(id)arg1 noteAlertBehaviorOverridesChanged:(unsigned long long)arg2 ;
-(void)observer:(id)arg1 noteInvalidatedBulletinIDs:(id)arg2 ;
-(void)observer:(id)arg1 noteServerConnectionStateChanged:(BOOL)arg2 ;
-(void)observer:(id)arg1 noteServerReceivedResponseForBulletin:(id)arg2 ;
-(void)bannerTargetManager:(id)arg1 didAddTarget:(id)arg2 ;
-(void)bannerTargetManager:(id)arg1 didRemoveTarget:(id)arg2 ;
-(id)peekNextBannerItemForTarget:(id)arg1 ;
-(id)dequeueNextBannerItemForTarget:(id)arg1 ;
@end

