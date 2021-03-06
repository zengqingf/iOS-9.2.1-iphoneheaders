/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:43 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PUTransientImageManager.h>

@class NSMutableDictionary, NSString;

@interface CAMTransientImageManager : NSObject <PUTransientImageManager> {

	NSMutableDictionary* __pairedVideosByPairedUUID;
	NSMutableDictionary* __activeRequestsByPairedUUID;

}

@property (nonatomic,readonly) NSMutableDictionary * _pairedVideosByPairedUUID;                //@synthesize _pairedVideosByPairedUUID=__pairedVideosByPairedUUID - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _activeRequestsByPairedUUID;              //@synthesize _activeRequestsByPairedUUID=__activeRequestsByPairedUUID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)requestPairedVideoURLForUUID:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
-(id)insertPairedVideoWithConvertible:(id)arg1 ;
-(void)removePairedVideoForUUID:(id)arg1 ;
-(NSMutableDictionary *)_pairedVideosByPairedUUID;
-(NSMutableDictionary *)_activeRequestsByPairedUUID;
-(void)_handleRequestTimeout:(id)arg1 ;
-(id)existingPairedVideoForUUID:(id)arg1 ;
@end

