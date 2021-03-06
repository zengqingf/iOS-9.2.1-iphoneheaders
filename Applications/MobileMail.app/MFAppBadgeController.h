/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:44:01 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <MobileMail/BBObserverDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, BBObserver, NSMutableArray, NSString;

@interface MFAppBadgeController : NSObject <BBObserverDelegate> {

	long long _oldBadgeCount;
	NSObject*<OS_dispatch_queue> _queue;
	int _waitingCalculateRequests;
	NSMutableDictionary* _subsectionInfoByID;
	BBObserver* _observer;
	NSMutableArray* _badgeCountObservers;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_mailboxUserInfoDidChange:(id)arg1 ;
-(void)requestObserverState;
-(void)_nts_calculateBadgeCount;
-(void)_updateSubsections:(id)arg1 ;
-(void)_nts_getAccountsExcludedFromUnreadCount:(out id*)arg1 includeUnreadVIPs:(out BOOL*)arg2 includeUnreadNotifiedThreads:(out BOOL*)arg3 ;
-(void)_notifyObserversBadgeCountDidChange:(long long)arg1 ;
-(void)addBadgeCountObserver:(id)arg1 ;
-(void)removeBadgeCountObserver:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)observer:(id)arg1 updateSectionInfo:(id)arg2 ;
-(void)setBadgeCount:(long long)arg1 ;
@end

