/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:50 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol IDSLink <NSObject>
@property (retain) NSString * deviceID; 
@property (getter=linkTypeString,readonly) NSString * linkTypeString; 
@property (readonly) unsigned long long state; 
@property (readonly) unsigned long long headerOverhead; 
@property (assign) id<IDSLinkDelegate> delegate; 
@required
-(id)copyLinkStatsDict;
-(unsigned long long)sendPacketBuffer:(/*function pointer*/void**)arg1 toDeviceID:(id)arg2;
-(id)generateLinkReport:(double)arg1 isCurrentLink:(BOOL)arg2;
-(NSString *)linkTypeString;
-(unsigned long long)headerOverhead;
-(void)setDelegate:(id)arg1;
-(id<IDSLinkDelegate>)delegate;
-(unsigned long long)state;
-(void)setDeviceID:(id)arg1;
-(NSString *)deviceID;

@end
