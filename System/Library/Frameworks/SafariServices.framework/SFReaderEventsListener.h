/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:10 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SFReaderEventsListener <NSObject>
@required
-(void)didDetermineReaderAvailability:(BOOL)arg1;
-(void)didSetReaderConfiguration:(id)arg1;
-(void)didCollectReadingListItemInfo:(id)arg1 bookmarkID:(id)arg2;
-(void)didCollectReaderContentForMail:(id)arg1;
-(void)didPrepareReaderContentForPrinting:(id)arg1;
-(void)didPrepareReaderContentForDisplay:(id)arg1;

@end

